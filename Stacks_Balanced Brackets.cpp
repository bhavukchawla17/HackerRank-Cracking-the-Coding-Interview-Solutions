#include <bits/stdc++.h>
using namespace std;

bool is_balanced(string exp) {
  stack<char> st;
    while(!st.empty()) st.pop();
    for(int i=0;i<exp.length();i++)
        {
        if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
            st.push(exp[i]);
        else
            {
            if(!st.empty() && ( (exp[i]=='}' && st.top()=='{') || (exp[i]==']' && st.top()=='[') || (exp[i]==')' && st.top()=='(') ) )
                st.pop();
            else
                return false;
        }
    }
    if(st.empty()) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
