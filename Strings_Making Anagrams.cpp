#include <bits/stdc++.h>
using namespace std;

int h1[26],h2[26],ans;
int number_needed(string a, string b) {
    for(int i=0;i<a.length();i++)
       {
       h1[a[i]-'a']++;
   }
    for(int i=0;i<b.length();i++)
       {
       h2[b[i]-'a']++;
   }
    for(int i=0;i<26;i++)
        ans+=abs(h1[i]-h2[i]);
    return ans;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
