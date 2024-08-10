#include<iostream>
using namespace std;

class Student{

private:

    int roll,phone;
    string address;

public:

    Student(){

    }

     Student(int r,int p,string a){
        roll=r;
        phone=p;
        address=a;
    }

    void setRoll(int r){
       roll = r;
    }

   int getRoll(){
      return roll;
    }

   void setPhone(int p){
       phone = p;
   }
   int getPhone(){
        return phone;
   }

   void setAddress(string a){
          address = a;
   }
  string getAddress(){
        return address;
  }


 void inputinfo(){

     int r,p;
     string a;
    cout<<"Enter Roll Number,Phone number and address : "<<endl;
    cin>>r>>p>>a;
    setRoll(r);
    setPhone(p);
    setAddress(a);

 }

 void displayinfo(){
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Address: "<<address<<endl;
    }
};

int main(){

    Student Sam;
    Sam.inputinfo();
    Sam.displayinfo();

    Student John;
    John.inputinfo();
    John.displayinfo();


return 0;
}


