#include <iostream>
class Person
{
protected:
    std::string name;
    int idnum;
    int age;
    struct Appointment
    {
        int hours;
        int minutes;
    };
public:
    Person();
    void set_name(std::string n);
    std::string get_name();
    void set_idnum(int id);
    int get_idnum();
    void set_age(int a);
    int get_age();
    virtual void print()=0;
};


