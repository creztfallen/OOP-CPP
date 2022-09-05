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

    Car c2("Ferrari", 1680);

    cout << c2.getBrand() << endl;

    return 0;
};