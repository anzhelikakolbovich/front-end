#include <iostream>
#include <regex>
using namespace std;

int main() {
    regex r("[a-z]+([A-Z][a-z]*)*");

    string s;
    do {
        cout << "Enter a word in camelCase: ";
        getline(cin, s);

        if (!regex_match(s, r)) {
            cout << "This word is Not written in camelCase." << endl;
        }
    } while (!regex_match(s, r));

    return 0;
}
