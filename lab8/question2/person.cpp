#include "Person.h"

// Default Constructor
person::person() : mWeight(0.0), mFirstName(""), mAge(0) {}

// Parameterized Constructor
person::person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

// Destructor
person::~person() {
    // Destructor implementation 
}

// Operator Overloading
float person::operator+(const person& otherPerson) {
    // Operator+ implementation
    // Example: return the sum of weights of two persons
    return mWeight + otherPerson.mWeight;
}
