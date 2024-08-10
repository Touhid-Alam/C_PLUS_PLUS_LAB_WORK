#include<iostream>
using namespace std;

class Box{

private:

float length,width,height;

public:

    Box(){
    }

    Box(float l,float w,float h){

         length = l;
         width = w;
         height = h;
    }

     void setLength(float l){
         length = l;
     }
     float getLength(){
         return length;
     }

     void setWidth(float w){
         width = w;
     }
    float getWidth(){
        return width;
    }

    void setHeight(float h){
        height = h;
    }
    float getHeight(){
         return height;
    }

     void getInfo(){

        float l,w,h;
        cout<<"What is the length,width and height of the box ? :";
        cin>>l>>w>>h;

       setLength(l);
       setWidth(w);
       setHeight(h);
     }
       void displayInfo(){

          cout<<"The length of the box: "<<length<<endl;
          cout<<"The width of the box: "<<width<<endl;
          cout<<"The height of the box: "<<height<<endl;
       }

      Box operator +(Box b){

         float result;
         result.getLength(length+b.getLength());
         result.getWidth(width+b.getWidth());
         result.getLength(height+b.getHeight());

         Box operator *(Box b){

         float result;
         result.getLength(length*b.getLength());
         result.getWidth(width*b.getWidth());
         result.getLength(height*b.getHeight());

      }
};


int main()
{

    Box box1,box2;

   box1.getInfo();
   box1.displayInfo();
   box2.getInfo();
   box2.displayInfo();

   Box box3,box4;
   box3 = box1 + box2;
   box4 = box1 * box2;
    cout<<"The sum of the two boxes : "<<endl;
   box3.displayInfo();
    cout<<"The multiplication of the two boxes: "<<endl;
   box4.displayInfo();


return 0;
}
