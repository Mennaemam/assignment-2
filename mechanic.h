#include <iostream>
#include "person.h"
class Mechanic:public Person
{
private:
    int counter;
    Appointment* app= new Appointment [10];
public:
    Mechanic();
    Mechanic(std::string fname,int mid);
    bool isAvailable(Appointment appoint);
    void set_struct(int h, int m);
    Person::Appointment get_appointment();
    void print();
};
