#include "Car.h"

#include <string>
using namespace std;
#include <iostream>

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

Car::Car()
{
    this->brand = "Peugeot";
}

Car::Car(string brand, int year)
{
    this->brand = brand;
    this->year = year;
}

Car::~Car()
{
    cout << "Car was destroyed." << endl;
}