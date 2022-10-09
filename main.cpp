#include <iostream>
#include "person.h"
#include "customer.h"
#include "mechanic.h"
#include "queue.h"

using namespace std;



int main()
{
    Queue <Customer> qc;
    Queue <Mechanic> qm;
    Queue <Mechanic> temp=qm;
    int h;int mins;
    int csize = 0;
    cout<<"how many customers requesting a mechanic"<<endl;
    Customer *c= new Customer [csize];
    string firstname;int customerid;
    Mechanic m1=Mechanic("ahmed",30);
    Mechanic m2=Mechanic("sara",31);
    Mechanic m3=Mechanic("selim",32);
    qm.push(m1);
    qm.push(m2);
    qm.push(m3);
    for(int i=0;i<csize;i++)
    {
        cout<<"Enter customer name and id: "<<'\n';
        cin>>firstname;
        cin>>customerid;
        c[i].set_name(firstname);
        c[i].set_idnum(customerid);
        qc.push(c[i]);
        cout<<"Enter your prefered time"<<endl;
        cin>>h;
        cin>>mins;
        c[i].set_struct(h,mins);
    }
    for(int i=0;i<csize;i++)
    {
        if(c[i]>c[i+1])
        {
            qc.push(c[i+1]);
        }
        if(c[i]<c[i+1])
        {
            qc.push(c[i]);
        }
        if((c[i]==c[i+1]))
        {
            qc.push(c[i]);
            qc.push(c[i+1]);
        }
            }
            while(!qc.IsEmpty())
            {
                Customer current= qc.frontt();
                qc.pop();
                for(int i=0;i<3;i++)
                {
                    if(temp.frontt().isAvailable(qc.frontt().get_appointment()))
                    {
                        cout<<current.get_name()<<"is compatable with mechanic"<<temp.frontt().get_name()<<"at : " <<temp.frontt().get_appointment().hours<<temp.frontt().get_appointment().minutes<<endl;
                        temp.frontt().set_struct(current.get_appointment.hours,current.get_appointment.minutes);
                        temp.pop();
                        qm.push(qm.frontt());
        
                    }
                }
            }
        

    
}
