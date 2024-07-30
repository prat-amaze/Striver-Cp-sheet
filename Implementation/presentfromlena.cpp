#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> result;
    int width = 2 * n + 1;

    // Build the top half including the middle line
    for (int i = 0; i <= n; ++i) {
        string line;
        int spaces = (n - i) * 2;
        line.append(spaces, ' ');

        for (int j = 0; j <= i; ++j) {
            if (j > 0) {
                line += " ";
            }
            line += to_string(j);
        }
        for (int j = i - 1; j >= 0; --j) {
            line += " " + to_string(j);
        }

        result.push_back(line);
    }

    // Print the top half
    for (const auto &line : result) {
        cout << line << endl;
    }

    // Print the bottom half
    for (int i = n - 1; i >= 0; --i) {
        cout << result[i] << endl;
    }

    return 0;
}
