// find if the given 2 rectangles overlap or not
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // rects parallel to coordinate axis (maybe X or Y)
        // rect1 ki Left if rect2 ki Right se zyda hogi x-axis pr then they won't overlap
        // also if rect1's Right smaller hogi X-axis pr as compared to rect2's Left on x-axis
        // same condns for y-axis
        if(L1[0]>R2[0] || R1[0]<L2[0] || L1[1]<R2[1] || R1[1]>L2[1]) {
            // no overlapping
            return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        // 4 arrays to take inputs of coordinates of rects
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends