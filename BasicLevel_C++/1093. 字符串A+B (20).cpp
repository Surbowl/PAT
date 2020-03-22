#include <iostream>
using namespace std;
int main() {
    string s1, s2, s;
    bool hash[127] = {false};
    getline(cin, s1);
    getline(cin, s2);
    s = s1 + s2;
    for (int i = 0; i < s.size(); i++) {
        if (! hash[s[i]]) cout << s[i];
        hash[s[i]] = true;
    }
    return 0;
}
