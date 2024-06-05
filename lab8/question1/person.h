<<<<<<< HEAD

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


=======
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
>>>>>>> 3ace4f7ad8a0c09034c96da9264d733c09dd48df
