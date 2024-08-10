
#include<iostream>
using namespace std;
class Rectangle{
private:
    float length;
    float breadth;
public:

    Rectangle(){
      length=0;
      breadth=0;
    }

    Rectangle(float l,float b){
    length=l;
    breadth=b;
    }

    void setlength(float a){
    length=a;
    }
    float getlength(){
    return length;
    }
    void setbreadth(float b){
    breadth=b;
    }
    float getbreadth(){
    return breadth;
    }


    float getArea(){

    return length*breadth;

    }

    void getuserinput(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    setlength(l);
    setbreadth(b);
    }

        void display(){
    cout<<"Length:"<<length<<endl;
    cout<<"Breadth:"<<breadth<<endl;
    cout<<"Area: "<<getArea()<<endl;
    }



};
int main()
{
    Rectangle area1;
    area1.getuserinput();
    area1.display();

}
