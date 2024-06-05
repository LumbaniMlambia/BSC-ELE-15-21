<<<<<<< HEAD
#include "person.h"

person::person() : mWeight(0.0), mFirstName(""), mAge(0) {}

=======
#include "Person.h"

// Default Constructor
person::person() : mWeight(0.0), mFirstName(""), mAge(0) {}

// Parameterized Constructor
>>>>>>> 3ace4f7ad8a0c09034c96da9264d733c09dd48df
person::person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

// Destructor
person::~person() {
<<<<<<< HEAD
}

float person::operator+(const person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

person::operator int() const {
=======
    // Destructor implementation 
}

// Operator Overloading
float person::operator+(const person& otherPerson) {
    // Operator+ implementation
    // Example: return the sum of weights of two persons
    return mWeight + otherPerson.mWeight;
}

person::operator int(){
>>>>>>> 3ace4f7ad8a0c09034c96da9264d733c09dd48df
    return mAge;
}
