#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int img;
public:
    Complex(){}

Complex(int r,int i){
real=r;
img=i;
}

void setReal(int r){
real=r;
}
int getReal(){
return real;
}

void setImg(int i){
img=i;
}
int getImg(){
return img;
}

void showinfo(){
    if(img<0){
        cout<<real<<img<<"i"<<endl;
    }
    else if(img>0){
         cout<<real<<"+"<<img<<"i"<<endl;
    }
    else{
         cout<<real<<endl;
    }
}

Complex operator +(Complex c){
    Complex result;
    result.setReal(real+c.getReal());
    result.setImg(img+c.getImg());
    return result;
}

Complex operator -(Complex c){
Complex result;
result.setReal(real-c.getReal());
result.setImg(img-c.getImg());
return result;

}

Complex operator *(Complex c){
Complex result;
result.setReal(real*c.getReal()-img*c.getImg());
result.setImg(real*c.getImg()+img*c.getReal());
return result;
}

Complex operator +(int x){
int f;
f=x;
Complex result;
result.setReal(real+f);
result.setImg(img);
return result;
}

Complex operator -(int x){
Complex result;
result.setReal(real-x);
result.setImg(img);
return result;
}

Complex operator *(int x){
Complex result;
result.setReal(real*x);
result.setImg(img*x);
return result;
}

};


int main()
{
    Complex c1(6,-2),c2(-2,6);
    Complex c3,c4,c5,c6,c7,c8;
    c1.showinfo();
    c2.showinfo();
    c3=c1+c2;
    c3.showinfo();
    c4=c1*c2;
    c4.showinfo();
    c5=c1-c2;
    c5.showinfo();
    c6=c5+10;
    c6.showinfo();
    c7=c6-4;
    c7.showinfo();
    c8=c7*3;
    c8.showinfo();

    return 0;
}
