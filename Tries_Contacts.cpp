#include <bits/stdc++.h>
using namespace std;

struct node{
    struct node* a[26];
    int b[26];
    bool isleaf;
};

struct node* newnode()
{
struct node* new_n = (struct node*)malloc(sizeof(struct node));
    if(new_n)
        {
        new_n->isleaf=false;
        for(int i=0;i<26;i++)
            new_n->a[i]=NULL;
    }
    return new_n;
}


void insert(string contact,node* root)
{
    for(int i=0;i<contact.length();i++)
        {
        int ind = contact[i]-'a';
        if(!root->a[ind])
            root->a[ind]=newnode();
        root=root->a[ind];
        root->b[ind]++;
    }
    root->isleaf=true;
}

int find(string contact,node* root)
{
    int cnt=0;
    for(int i=0;i<contact.length();i++)
        {
        int ind = contact[i]-'a';
        if(!root->a[ind])
            return 0;
        else
        root=root->a[ind];
    }
    for(int i=0;i<26;i++)
         cnt+=root->b[i];
    //if(root->isleaf) cnt++;
        return cnt;
}

int main(){
    int n;
    cin >> n;
    node* root = newnode();
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op=="add")
            insert(contact,root);
        else
            cout<<find(contact,root)<<endl;
    }
    return 0;
}
