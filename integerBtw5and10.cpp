#include <iostream>
#include <limits> // Include the <limits> header for std::numeric_limits

using namespace std;
int main() {
    int input;

    while (true) 
    {
        cout << "Enter an integer between 5 and 10: ";
        
        if (!(cin >> input)) 
        {
            // If input is not an integer
            cout << "sorry, you entered an Invalid number. Please try again." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

         else if (input >= 5 && input <= 10) 
        {
            // If input is between 5 and 10
            cout << "Your input value("<<input<<" has been accepted";
            break;
        }
        
         else 
         {
            // If input is less than 5 or greater than 10
            cout << "you entered "<<input<<" please enter a number between 5 and 10" <<endl;
        }
    }

    return 0;
}
