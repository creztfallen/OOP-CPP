#include "Car.h"

#include <string>
using namespace std;

void Car::setBrand(string brand)
{
    this->brand = brand;
};

void Car::setYear(int year)
{
    if (year > 1990)
    {
        this->year = year;
    }
    else
    {
        this->year = 1990;
    }
};

string Car::getBrand()
{
    return this->brand;
};

int Car::getYear()
{
    return this->year;
}