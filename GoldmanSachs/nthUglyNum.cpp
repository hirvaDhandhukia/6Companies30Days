// program to find nth Ugly Number
// Ugly numbers are numbers whose only prime factors are 2, 3 or 5.

#include <bits/stdc++.h>
// #include <climits>
using namespace std;

int nthUglyNum(int n) {
    if(n<=0) {
        return -1;
    }
    if(n == 1) {
        return 1;
    }

    int p2=0, p3=0, p5=0;
    // int N=1e6+2;
    int arr[n];
    arr[0] = 1; // because we initialized 1 in the list
    for(int i=1; i<n; i++) {
        arr[i] = min(arr[p2]*2, min(arr[p3]*3, arr[p5]*5));
        
        if(arr[i] == arr[p2]*2)
            p2++;
        if(arr[i] == arr[p3]*3)
            p3++;
        if(arr[i] == arr[p5]*5)
            p5++;
    }
    return arr[n-1];
}

int main() {
    int n; cin>>n;

    cout << nthUglyNum(n) << endl;

    return 0;
}