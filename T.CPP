#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <unordered_map>
#include <queue>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include <iostream>
#include <string>
#include <climits>

using namespace std;

long long evaluate_expression(string expression) {
    // Evaluates the given arithmetic expression
    long long result = 0;
    char op = '+';
    long long num = 1; // Initialize num to 1 for multiplication

    for (char c : expression) {
        if (isdigit(c)) {
            num = num * (c - '0');
        } else {
            if (op == '+') {
                result += num;
            } else {
                result *= num;
            }
            op = c;
            num = 1; // Reset num for the next number
        }
    }

    if (op == '+') {
        result += num;
    } else {
        result *= num;
    }

    return result;
}

long long insert_symbols(int n, string s) {
    if (n == 2) {
        // If the length is 2, simply return the original number
        return stoll(s);
    }

    long long min_result = LLONG_MAX;

    // Try all possible combinations of inserting symbols
    for (int i = 1; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Insert addition symbol
            string expression = s.substr(0, i) + "+" + s.substr(i, j - i) + "+" + s.substr(j);
            long long result = evaluate_expression(expression);
            min_result = min(min_result, result);

            // Insert multiplication symbol
            expression = s.substr(0, i) + "×" + s.substr(i, j - i) + "×" + s.substr(j);
            result = evaluate_expression(expression);
            min_result = min(min_result, result);
        }
    }

    return min_result;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; // Length of the string
        string s;
        cin >> s; // String consisting of digits
        cout << insert_symbols(n, s) << endl;
    }

    return 0;
}
