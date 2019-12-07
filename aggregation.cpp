#include <iostream>  
using namespace std;  
class Address {  
    public:  
   string addressLine, city, state;    
     Address(string addressLine, string city, string state)    
    {    
        this->addressLine = addressLine;    
        this->city = city;    
        this->state = state;    
    }    
};  
class Employee    
    {    
        private:  
        Address* address;  //Employee HAS-A Address   
        public:  
        int id;    
        string name;    
        Employee(int id, string name, Address* address)    
       {    
           this->id = id;    
           this->name = name;    
           this->address = address;    
       }    
     void display()    
       {    
           cout<<id <<" "<<name<< " "<<     
             address->addressLine<< " "<< address->city<< " "<<address->state<<endl;    
       }    
   };   
int main(void) {  
    Address a1= Address("C-146, Sec-15","Noida","UP");    
    Employee e1 = Employee(101,"Nakul",&a1);    
            e1.display();   
   return 0;  
}
#include <conio.h>
#include<iostream>
using namespace std;


class Chair
{
};
class room
{
	int chairno;
	 Chair* chair[20];

public:
	room()
	{
		for(int i=0;i<=20;i++)
			chair[i]=NULL;
	}

	void Addchair(Chair* ch,int chairno)
	{
		if(chairno>=0 && chairno<=20)
		{
			chair[chairno]=ch;
		}
	}
	Chair* getchair()
	{
		if(chairno>=0 && chairno<=20)
			return chair[chairno];
		else
			return NULL;
	}
};
int main()
{
	Chair ch[20];
	room r1;
	cout<<"Room details are ";
	for(int i=0;i<=20;i++)
	{  
		r1.Addchair(&ch[i],i);
		cout<<"chair"<<i<<"/t"<<r1.getchair();
		getche();
       return 0;
	}
} 
