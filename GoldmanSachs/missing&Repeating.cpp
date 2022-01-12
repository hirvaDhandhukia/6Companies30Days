#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int size)
{
    // repeating
    for (int i=0; i<size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }

    //missing
    for (int i=0; i<size; i++) {
        if (arr[i] > 0)
            cout << (i+1);
    }
}

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++ ) {
        cin >> arr[i];
    }
    printTwoElements(arr, n);

    return 0;
}
