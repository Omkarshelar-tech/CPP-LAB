#include <iostream>
#include <string>
using namespace std;

int main() {

string str = "Hi";

     // Concatenation
     string greeting = str + ", Nature!";
     cout << "Concatenation: " << greeting << endl;

    // Substring
    string part = greeting.substr(4, 6); // Extracts "Nature"
    cout << "Substring: " << part << endl;

    // Find
    size_t pos = greeting.find("Nature");
    cout << "Find: 'Nature' found at position " << pos << endl;

    // Replace
    string replaced = greeting;
    replaced.replace(pos, 7, "C++");
    cout << "Replace: " << replaced << endl;
 
    // Insert
    string inserted = greeting;
    inserted.insert(4, " beautiful ");
    cout << "Insert: " << inserted << endl;

    // Erase
    string erased = greeting;
    erased.erase(4, 7); // Removes " beautiful"
    cout << "Erase: " << erased << endl;

    // To uppercase
    string uppercase = greeting;
    for (char &c : uppercase) c = toupper(c);
    cout << "To Uppercase: " << uppercase << endl;

    // To lowercase
    string lowercase = greeting;
    for (char &c : lowercase) c = tolower(c);
    cout << "To Lowercase: " << lowercase << endl;

return 0;


}