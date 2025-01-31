#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class _Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(size_t i = 0; i < n; i+= k*2){
            reverse( (s.begin()+i), (s.begin() + min((int)i+k,n))); 
        }
        return s;
    }
};

int main(){
    _Solution solution;
    auto res = solution.reverseStr("abcdefg", 2);
    cout << res << endl;

}