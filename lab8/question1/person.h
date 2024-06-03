#include<string>
using namespace std;

class person{
    operator int();
    public:
    person();
    person(float newWeight);
    int John;
    string Jane;
    ~person();

    float operator+(const person& otherPerson);

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};