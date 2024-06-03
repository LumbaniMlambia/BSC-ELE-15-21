#include<string>
using namespace std;

class Cake{

    static string* ingredientArray[5];
    int num_elements=sizeof(ingredientArray);

string array_initialize();

private:
string addIngredient();

string SaveIngredientsToFile();

string ShowAllIngredients();

string SelectIngredientType();

public:
void Bake();

Cake();
    
};