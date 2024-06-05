
#define PERSON_H

#include <string>
using namespace std;

class person {
public:
    // Constructors
    person();
    person(float newWeight);

    ~person();

    float operator+(const person& otherPerson) const;

    operator int() const;

private:
    float mWeight;
    string mFirstName;
    int mAge;
};


