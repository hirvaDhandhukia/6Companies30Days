// run length encoding
// str = aaaabbbcc
// output = a4b3c2

#include <bits/stdc++.h>
using namespace std;

void encode(string str) {
    for(int i=0; i<str.length(); i++) {
        int count =1;
        // str.length() -1 islie kia because hamko str[i+1] sath verify krna hai
        // if till last digit i ko rakh lete to str[i+1] wali comparition mai error ati
        while(str[i] == str[i+1] && i<str.length()-1) {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}

int main() {
    string str;
    cin >> str;

    encode(str);
    
    return 0;
}