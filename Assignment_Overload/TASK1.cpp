#include<iostream>
using namespace std;

class Box{
private:
    float length,width,height;
public:
    Box(){
       length=0;
       width=0;
       height=0;
    }
    Box(float l,float w,float h){
    length=l;
    width=w;
    height=h;
    }

    void setLength(float l){
    length=l;
    }
    float getLength(){
    return length;
    }

    void setWidth(float w){
    width=w;
    }
    float getWidth(){
    return width;
    }

    void setHeight(float h){
    height=h;
    }
    float getHeight(){
    return height;
    }

    void inputinfo(){

      float l,w,h;
      cout<<"What is the length of the box: ";
      cin>>l;
      cout<<"What is the weight of the box: ";
      cin>>w;
      cout<<"What is the height of the box: ";
      cin>>h;
      setLength(l);
      setWidth(w);
      setHeight(h);
    }

    void showinfo(){
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl;

    }
    Box operator +(Box b){

    Box sum;
    sum.setLength(length+b.getLength());
    sum.setWidth(width+b.getWidth());
    sum.setHeight(height+b.getHeight());
    return sum;
    }

    Box operator *(Box b){
    Box multi;
    multi.setLength(length*b.getLength());
    multi.setWidth(width*b.getWidth());
    multi.setHeight(height*b.getHeight());

    return multi;
    }

};


int main()
{
     Box b1,b2,b3,b4;
     cout<<"BOX-1: "<<endl;
     b1.inputinfo();
     cout<<"BOX-2: "<<endl;
     b2.inputinfo();
     cout<<"information about Box 1: "<<endl;
     b1.showinfo();
     cout<<"information about Box 2: "<<endl;
     b2.showinfo();
     cout<<"Summation of two box's into a new box: "<<endl;
     b3=b1+b2;
     b3.showinfo();
     cout<<"Multiplication of two box's into a new box: "<<endl;
     b4=b1*b2;
     b4.showinfo();
}
