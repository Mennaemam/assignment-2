#include "customer.h"
#include "person.h"
void Customer()
{
   int MechanicID=0;

}
void Customer(std::string n, int cid)
{
    set_name(n);
    set_idnum(cid);

}
void set_Mechanicid(int mid)
{
    MechanicID=mid;
}
int get_Mechanicid()
{
    return MechanicID;
}
void set_struct(int h, int m)
{
    appoint.hours=h;
    appoint.minutes=m;
}
Appointment get_appointment()
{
    return appoint;
}
bool operator ==(Customer &c2)
{
   get_appointment();
  if (this->get_appointment().hours==c2.get_appointment().hours)
   {
       return true;
   }
   else
   {
       return false;
   }
}
bool operator >(Customer &c2)
{
    if(this->get_appointment().hours>c2.get_appointment().hours)
    {
        return true;
    }
    else
    {
        if(this->get_appointment().hours==c2.get_appointment().hours && this->get_appointment().minutes>c2.get_appointment().minutes)
        {
            return true;
        }
        
        else
        {
            return false;
            
        }
    }
}
bool operator <(Customer &c2)
{
    if(this->get_appointment().hours<c2.get_appointment().hours)
    {
        return true;
    }
    else
    {
        if(this->get_appointment().hours==c2.get_appointment().hours && this->get_appointment().minutes<c2.get_appointment().minutes)
        {
            return true;
        }
        
        else
        {
            return false;
            
        }
    }
}
void print()
{
    get_name();
    get_idnum();
    cout<<"The customer's registered name is: "<<name<<endl;
    cout<<"Their id is: "<<idnum<<endl;
};
};
