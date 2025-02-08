


#include "Integer.h"
#include <stdexcept>

Integer::Integer() : value(0) {}
Integer::Integer(int val) : value(val) {}

int Integer::getValue() const { return value; }
void Integer::setValue(int val) { value = val; }

Integer Integer::operator+(const Integer& other) const {
    return Integer(value + other.value);
}

Integer Integer::operator-(const Integer& other) const {
    return Integer(value - other.value);
}

Integer Integer::operator*(const Integer& other) const {
    return Integer(value * other.value);
}

Integer Integer::operator/(const Integer& other) const {
    if (other.value == 0) {
        throw std::runtime_error("runtime_error");
    }
    return Integer(value / other.value);
}