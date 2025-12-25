#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << s << "\nAI: ";
        s = " " + s + " ";
        for (auto& i : s)
        {
            i |= (isupper(i) && i != 'I') * ' ';
            i = (i == '?') ? '!' : i;
        }
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == ' ' && (s[i + 1] == ' ' || ispunct(s[i + 1])))
                s.erase(i--, 1);
        }
        auto turn = [&](string from, string to) {
            for (int i = 1; i + from.size() <= s.size() - 1;)
            {
                if (s.compare(i, from.size(), from) == 0)
                {
                    int r = i + from.size();
                    bool left = s[i - 1] == ' ' || ispunct(s[i - 1]);
                    bool right = s[r] == ' ' || ispunct(s[r]);
                    if (left && right)
                    {
                        s.replace(i, from.size(), to);
                        i += to.size();
                        continue;
                    }
                }
                ++i;
            }
        };
        turn("I", "\n\n");
        turn("me", "\n\n");
        turn("can you", "I can");
        turn("could you", "I could");
        turn("\n\n", "you");
        s = s.substr(1, s.size() - 2);
        cout << s << '\n';
    }
}