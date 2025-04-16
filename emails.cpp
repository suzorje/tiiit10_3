#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string text = "Contact us at support@example.com or sales@company.org. "
                 "For personal inquiries, email john.doe123@gmail.com";

    // Regular expression pattern for matching email addresses
    regex email_pattern(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b)");

    // Iterator for searching through the text
    sregex_iterator it(text.begin(), text.end(), email_pattern);
    sregex_iterator end;

    cout << "Found email addresses:" << endl;
    while (it != end) {
        smatch match = *it;
        cout << match.str() << endl;
        ++it;
    }

    return 0;
}