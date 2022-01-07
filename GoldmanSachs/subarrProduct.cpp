// Count the subarrays having product less than k
// subarray means a contiguous part ofan array.

// i'm using kadane's algo but using currentProduct variable instead of currentSum
#include <bits/stdc++.h>
using namespace std;

int kadane(int n, int arr[], int key) {
    int currProd = 1;
    int count = 0;
    for(int i=0; i<n; i++) {
        if (arr[i] < key)
            count++;

        currProd *= arr[i];
        if(currProd < key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, key; cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << kadane(n,arr,key);

}