#include "mechanic.h"
#include "person.h"
    Mechanic()
    {
        counter=0;
    }
Mechanic(std::string fname,int mid)
    {
        set_name(fname);
        set_idnum(mid);
    }
    bool isAvailable(Appointment appoint)
    {
        for(int i=0;i<10;i++)
        {
            if((app[i].hours==appoint.hours ) && (app[i].minutes==appoint.minutes))
            {
                return false;
            }
        }
        counter++;
        return true;
    }
    void set_struct(int h, int m)
    {
        app->hours=h;
        app->minutes=m;
    }
    Appointment get_appointment()
    {
        return app[10];
    }
    void Mechanic::print()
    {
        get_name();
        get_idnum();
        cout<<"The mechanic's name is: "<<name<<endl;
        cout<<"Their id is: "<<idnum<<endl;
    }
};
