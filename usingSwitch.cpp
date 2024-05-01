#include <iostream>
#include <random>
using namespace std;
int main() {
    // Generate a random integer between 0 and 11
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 11);
    int daysUntilExpiration = dis(gen);

    // Output message based on the value of daysUntilExpiration
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << std::endl;
            cout << "Renew now and save 10%!" << std::endl;
            break;
        
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        default:
            cout << "You have an active subscription." << std::endl;
            break;
    }

    return 0;
}
