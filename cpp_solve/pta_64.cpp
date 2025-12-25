#include <bits/stdc++.h>
using namespace std;
void turn(string& s, string from, string to) {
    for (int i = 1; i + from.size() <= s.size() - 1; ++i) {
        if (s.compare(i, from.size(), from) == 0) {
            bool left = s[i - 1] == ' ' || ispunct(s[i - 1]);
            bool right = s[i + from.size()] == ' ' || ispunct(s[i + from.size()]);
            if (left && right) {
                s.replace(i, from.size(), to);
                i += to.size() - 1;
            }
        }
    }
}
int main() {
    string s, t;
    getline(cin, t);
    while (getline(cin, s)) {
        cout << s << "\nAI: ";
        s = " " + s + " ";
        for (int i = 0; i < s.size() - 1; ++i) {
            s[i] |= (isupper(s[i]) && s[i] != 'I') * ' ';
            s[i] = (s[i] == '?') ? '!' : s[i];
            if (s[i] == ' ' && (s[i + 1] == ' ' || ispunct(s[i + 1])))
                s.erase(i--, 1);
        }
        turn(s, "I", "\n\n");
        turn(s, "me", "\n\n");
        turn(s, "can you", "I can");
        turn(s, "could you", "I could");
        turn(s, "\n\n", "you");
        auto f = [](char c) { return c != ' '; };
        s.erase(s.begin(), find_if(s.begin(), s.end(), f));
        s.erase(find_if(s.rbegin(), s.rend(), f).base(), s.end());
        cout << s << '\n';
    }
}