#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Cake {
    static const int num_elements = 5;
    static string ingredientArray[num_elements];

    string addIngredient() {
        for (int i = 0; i < num_elements; ++i) {
            cout << "Enter ingredient for slot " << i + 1 << ": ";
            cin >> ingredientArray[i];
        }
        return "Ingredients added.";
    }

    string SaveIngredientsToFile() {
        ofstream outFile("ingredients.txt");
        if (!outFile) {
            return "Error opening file!";
        }
        for (int i = 0; i < num_elements; ++i) {
            outFile << ingredientArray[i] << endl;
        }
        outFile.close();
        return "Ingredients saved to file.";
    }

    string ShowAllIngredients() {
        for (int i = 0; i < num_elements; ++i) {
            cout << "Ingredient " << i + 1 << ": " << ingredientArray[i] << endl;
        }
        return "Ingredients displayed.";
    }

    string SelectIngredientType() {
        int choice;
        cout << "Select ingredient type (1-" << num_elements << "): ";
        cin >> choice;
        if (choice < 1 || choice > num_elements) {
            return "Invalid choice!";
        }
        return ingredientArray[choice - 1];
    }

public:
    void Bake() {
        cout << addIngredient() << endl;
        cout << SaveIngredientsToFile() << endl;
        cout << ShowAllIngredients() << endl;
        cout << "Selected ingredient: " << SelectIngredientType() << endl;
    }

    Cake() {
        // Constructor can initialize more things if needed
        cout << "Cake object created." << endl;
    }
};

// Initialize the static member
string Cake::ingredientArray[num_elements];

int main() {
    Cake myCake;
    myCake.Bake();
    return 0;
}
