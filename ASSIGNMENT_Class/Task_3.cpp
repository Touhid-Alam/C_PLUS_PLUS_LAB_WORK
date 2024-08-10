#include<iostream>
using namespace std;

class Box{

private:

    float length,width,height;

public:
    //empty construction
    Box(){
     length = 0 ;
     width = 0;
     height = 0;
    }
    //parameterized construction
    Box(float l, float w,float h){
      length = l;
      width = w;
      height =h;
    }
    //destructor
    ~Box(){
    }

   //setter and getter method
   void setLength(float l){
       length =l;
   }
   float getLength(){
      return length;
   }

   void setWidth(float w){
       width =w;
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

   //method
   float getVolume(){
      return length*width*height;
   }

   void inputdetails(){

       int l,w,h;
        cout<<"What is the length of the box: ";
     cin>>l;
     cout<<"What is the width of the box: ";
     cin>>w;
     cout<<"What is the height of the box: ";
     cin>>h;

     setLength(l);
     setWidth(w);
     setHeight(h);
   }

   void displaydetails(){

         cout<<"The length of the box is: "<<length<<endl;
         cout<<"The width of the box is: "<<width<<endl;
         cout<<"The height of the box is: "<<height<<endl;
         cout<<"The volume of the box is: "<<getVolume()<<endl;

   }


};

int main(){

    Box b1;

    b1.inputdetails();
    b1.displaydetails();
return 0;
}
