#include <iostream>
#include <string>
using namespace std;
int main() {
    // Define an array of strings
    string words[] = { "B123","C234","A345","C15","B177","G3003","C235","B179"};

    // Iterate through each element of the array
    for (const auto &word : words) {
        // Check if the current word starts with the letter "B"
        if (word[0] == 'B') {
            // Output the word if it starts with "B"
            cout << word<<endl;
        }
    }

    return 0;
}
