#include <bits/stdc++.h>
using namespace std;
map<string,int> m1,m2;
bool ransom_note(vector<string> magazine, vector<string> ransom) {
    for(int i=0;i<magazine.size();i++)
        {
        m1[magazine[i]]++;
    }
    for(int i=0;i<ransom.size();i++)
        {
        m2[ransom[i]]++;
    }
    map<string,int>::iterator it;
    for(it=m2.begin();it!=m2.end();it++)
        {
        if(it->second<=m1[it->first])
            continue;
        else
            return 0;
    }
    return 1;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
