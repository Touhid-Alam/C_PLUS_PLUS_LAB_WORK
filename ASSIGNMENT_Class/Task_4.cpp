#include<iostream>
using namespace std;
class Employee{
private:
    string name;
    int year;
    float salary;
    string address;
public:
    Employee(string n,int y,string add){
    name=n;
    year=y;
    address=add;
    }
    void setName(string n){
    name=n;
    }
    void setYear(int y){
    year=y;
    }
    void setAddress(string add){
    address=add;
    }

    ~Employee(){
    }

void display(){
cout<<name<<"\t"<<year <<"\t\t"<<address<<endl;
}

void displaytitle(){
cout<<"Name\t"<<"Year of joining\t"<<"Address"<<endl;
}
};
int main()
{
   Employee emp1("Robert",1994,"64C- WallsStreat");
   emp1.displaytitle();
   emp1.display();
   Employee emp2("Sam",2000,"68D- WallsStreat");
   emp2.display();
   Employee emp3("John",1999,"26B- WallsStreat");
   emp3.display();
}
