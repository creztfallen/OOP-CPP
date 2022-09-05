#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

#include "Car.h"

int main(int argc, char **argv)
{

    Car c1;
    c1.setBrand("Dodge");
    c1.setYear(2022);

    Car c2;
    c2.setBrand("Ferrari");
    c2.setYear(1650);

    cout << c1.getBrand() << endl;
    cout << c2.getYear() << endl;

    return 0;
};