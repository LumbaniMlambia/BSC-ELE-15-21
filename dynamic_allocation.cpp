#include <iostream>
using namespace std;

int main() {
    int num;
    string strings;

    int* number = nullptr;
    string* characters = nullptr;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a string: ";
    cin.ignore(); // To clear the newline character from the input buffer
    getline(cin, strings);

    number = new int(num);
    characters = new string(strings);

    cout << "The value of a dynamically allocated integer is " << *number << endl;
    cout << "The value of a dynamically allocated string is " << *characters << endl;

    delete number;
    delete characters;

    return 0;
}
