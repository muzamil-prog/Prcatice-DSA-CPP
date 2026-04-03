#include <iostream>
#include <vector>
#include <string>
using namespace std;

class compress {
public:
    int press(vector<char>& ch) {
        int n = ch.size();
        int idx = 0; // write pointer

        for (int i = 0; i < n; ) {
            char current = ch[i];
            int count = 0;

            // count occurrences
            while (i < n && ch[i] == current) {
                i++;
                count++;
            }

            // write character
            ch[idx++] = current;

            // write count if > 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    ch[idx++] = c;
                }
            }
        }

        return idx;
    }
};

int main() {
    vector<char> ch = {'a','a','a','b','b','c','c','c'};

    compress obj;
    int len = obj.press(ch);

    // print result
    for (int i = 0; i < len; i++) {
        cout << ch[i] << " ";
    }
    cout << endl;

    cout << "Length: " << len << endl;

    return 0;
}