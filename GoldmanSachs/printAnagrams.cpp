// Given an array of strings, return all groups of strings that are anagrams.
// anagram matlab string elements ko sort krenge to same word ban jaiega
// eg. on, no
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //creating a map for groups and sort each element of arr
        map<string, vector<string> > m;
        for(int i=0; i<string_list.size(); i++) {
            string str = string_list[i];
            sort(str.begin(), str.end());

            // pushing sorted strings
            m[str].push_back(string_list[i]);
        }
        

        vector<vector<string> > ans;
        for(auto x:m) {
            ans.push_back(x.second);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends