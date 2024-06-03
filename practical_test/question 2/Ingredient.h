#include<string>
using namespace std;

class Ingredient{
    double amount;
     string none;
    string flour;
    string egg;
    string sugar;
    string salt;
    string bakingPowder;
    string milk;

void setamount(double quantity);
double getamount();

void setflour(string flou);
string getflour();

void setegg(string eg);
string getegg();

void setsuger(string sug);
string getsuger();

void setsalt(string sal);
string getsalt();

void setbakingPowder(string powder);
string getbakingPowder();

void setmilk(string mil);
string getmilk();

string operator==(Ingredient& newVar);

Ingredient();

Ingredient( double amount,string none,string flour,string egg,string sugar,string salt,string bakingPowder,string milk);

public:
string IngredientName();

};