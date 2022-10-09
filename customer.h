#include <iostream>
#include "person.h"
class Customer:public Person
{
private:
    int MechanicID;
    Appointment appoint;
public:
    Customer();
    Customer(std::string n, int cid);
    void set_Mechanicid(int mid);
    int get_Mechanicid();
    void set_struct(int h, int m);
    Appointment get_appointment();
    bool operator ==(Customer &c2);
    bool operator >(Customer &c2);
    bool operator <(Customer &c2);
    void print();
};

