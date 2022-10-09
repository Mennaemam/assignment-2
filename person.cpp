#include "person.h"
    Person::Person()
    {
        name=" ";
        idnum=0;
        age=0;
    }
    void Person::set_name(std::string n)
    {
        name=n;
    }
    
    std::string Person::get_name()
    {
        return name;
    }
    void Person::set_idnum(int id)
    {
        idnum=id;
    }
    int Person::get_idnum()
    {
        return idnum;
    }
    void Person::set_age(int a)
    {
        age=a;
    }
    int Person::get_age()
    {
        return age;
    }


