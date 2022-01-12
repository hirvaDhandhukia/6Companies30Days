// method 1: sort the array, then print 1st 10 of them
// method 2: searching
#include <bits/stdc++.h>
using namespace std;

void find5Max(int arr[], int n) {
    int large[5];     
    int max = arr[0];
    for(int  i=1; i<n; i++){
        if(max<arr[i])
        {
            max = arr[i];
            large[i] = max;
        }
    }
    for (int j=0; j<5; j++)
    {
        cout<< large[j] << " ";
    }
    cout << max;
    // Time complexity being: O(n) * [O(1) + O(1)] = O(n)
}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    find5Max(arr,n);
    return 0;
}