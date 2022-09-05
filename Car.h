#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
public:
    Car();
    Car(string brand, int year);
    ~Car();
    void setBrand(string brand);
    string getBrand();
    void setYear(int year);
    int getYear();

private:
    string brand;
    int year;
};

#endif