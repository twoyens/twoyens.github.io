#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1]={0}, b[n+1]={0}, tong=0;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        tong+=a[i];
        b[i]=tong%360;
    }
    sort (b, b+n+1);
    int ln=0;
    for (int i=0; i<n; i++){      
        ln=max(ln, abs(b[i+1]-b[i]));
    }
    for (int i=0; i<=n; i++){
        cout << b[i] << endl;
    }
    ln=max(ln, abs(360-b[n]));
    cout << ln;
}