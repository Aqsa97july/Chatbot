#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

void trim(string &str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == string::npos) {  // string is all spaces
        str = "";
        return;
    }
    size_t last = str.find_last_not_of(" \t\n\r");
    str = str.substr(first, last - first + 1);
}

void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return tolower(c); });}

int main() {
    string input;

    while (true) {
        getline(cin, input);

        trim(input);          
        toLowerCase(input);   

        if (input == "hi") {
            cout << "Hello! How can I help you today?" << endl;
        } else if (input == "farewell") {
            cout << "Goodbye! Have a great day!" << endl;
        } else if (input == "get_weather") {
            cout << "I can't check the weather yet, but you can use a weather app." << endl;
        } else if (input == "thanks") {
            cout << "You're welcome!" << endl;
        } else if (input == "unknown") {
            cout << "Sorry, I didn't understand that." << endl;
        } else if (input == "by") {
            cout << "Have a nice day!" << endl;
            break;  // exit the loop
        } else {
            cout << "Please enter a valid command." << endl;
        }
    }
    return 0; }

