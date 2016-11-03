#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    int numberOfSwaps = 0;

    for (int i = 0; i < n; i++) {

    for (int j = 0; j < n - 1 -i; j++) {

        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }

    }

    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
        cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;



  return 0;
}
