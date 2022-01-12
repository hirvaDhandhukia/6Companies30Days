#include <iostream>
using namespace std;

string printNum(string s) {
    string x = "";
    int i=0, j=0, count=1;

    while(i<= s.length()) {
        if(s[i] == 'I' || i == s.length()) {
            while(count >=1) {
                if(count <=j) break;

                char ch = count + '0';
                x.push_back(ch);
                count --;
            }
            j = i+1;
            count = i+1;
        }
        count ++;
        i++;
    }


    return x;
}

int main() {
    string str; cin >>str;
    cout << printNum(str);

    return 0;
}