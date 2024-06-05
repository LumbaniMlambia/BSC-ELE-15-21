#include "person.h"

person::person() : mWeight(0.0), mFirstName(""), mAge(0) {}

person::person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

// Destructor
person::~person() {
}

float person::operator+(const person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

person::operator int() const {
    return mAge;
}
