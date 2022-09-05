#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Car
{
public:
    string brand;
    int year;

private:
    string color;
};

int main(int argc, char **argv)
{

    Car c1;
    c1.brand = "Dodge";
    c1.year = 2022;

    Car c2;
    c2.brand = "Ferrari";
    c2.year = 2019;

    cout << c1.brand << endl;
    cout << c2.brand << endl;

    return 0;
};