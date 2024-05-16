#include<string>
using namespace std;

class person{
    public:
    person();
    person(float newWeight);

    ~person();

    float operator+(const person& otherPerson);

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};