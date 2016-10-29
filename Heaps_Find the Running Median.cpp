#include <bits/stdc++.h>
using namespace std;

multimap<double,double> max_heap,min_heap;
multimap<double,double>::iterator it;
int signum()
    {
    if(max_heap.size()>min_heap.size()) return -1;
    else if(max_heap.size()<min_heap.size()) return 1;
    else return 0;
}

int main(){
    int n;
    double m=0;
    cin >> n;
    vector<double> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];

    int sig = signum();
        //cout<<"size "<<max_heap.size()<<" "<<min_heap.size()<<endl;
    switch(sig)
        {
        case -1:
        if(a[a_i]<m)
            {
            min_heap.insert(make_pair(-max_heap.rbegin()->first,1));
            double y = max_heap.rbegin()->first;
            it = max_heap.find(y);
            max_heap.erase(it);
            max_heap.insert({a[a_i],1});
        }else
            min_heap.insert({-a[a_i],1});
        m=(double)((double)(max_heap.rbegin()->first - min_heap.rbegin()->first)/(double)2);
        cout<<fixed<<setprecision(1)<<m<<endl;
        break;
        case 0:
        if(a[a_i]<m)
        {max_heap.insert({a[a_i],1});m=(double)max_heap.rbegin()->first;cout<<fixed<<setprecision(1)<<m<<endl;}
        else
        {min_heap.insert({-a[a_i],1});m=(double)-min_heap.rbegin()->first;cout<<fixed<<setprecision(1)<<m<<endl;}
        break;
        case 1:
           if(a[a_i]<m)
                  max_heap.insert({a[a_i],1});
           else{
              max_heap.insert(make_pair(-min_heap.rbegin()->first,1));
               double y = min_heap.rbegin()->first;
               it = min_heap.find(y);
            min_heap.erase(it);
            min_heap.insert({-a[a_i],1});
           }
        m=(double)((double)(max_heap.rbegin()->first - min_heap.rbegin()->first)/(double)2);
        cout<<fixed<<setprecision(1)<<m<<endl;
        break;

    }
    }
    return 0;
}
