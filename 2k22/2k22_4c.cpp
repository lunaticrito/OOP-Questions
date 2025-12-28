#include<bits/stdc++.h>
using namespace std;
class Polygon{
    public:
    virtual float area()=0;
    virtual string name()=0;
    virtual ~Polygon(){}
    
};
class Rectangle:public Polygon{
    float height,width;
    public:
    Rectangle(float h,float w):height(h),width(w){}
    float area(){
        return height*width; 
    }
    string name(){
        return "Rectangle";
    }
};

class Triangle:public Polygon{
    float height,width;
    public:
    Triangle(float h,float w):height(h),width(w){}
    float area(){
        return 0.5*height*width; 
    }
    string name(){
        return "Triangle";
    }
};
class Square:public Polygon{
    float side;
    public:
    Square(float s):side(s){}
    float area(){
        return side*side; 
    }
    string name(){
        return "Square";
    }
};
//using Polygon*
void showDetails(Polygon *p){
    cout<<p->name()<<" "<<p->area()<<endl;
}
//using RTTI instead of name
void usingRTTI(Polygon *p){
    if(dynamic_cast<Rectangle*>(p)){
        cout<<"Rectangle ";
    }
    else if(dynamic_cast<Triangle*>(p)){
        cout<<"Triangle ";
    }
    else if(dynamic_cast<Square*>(p)){
        cout<<"Square ";
    }
    cout<<p->area()<<endl;
}

int main(){
    Rectangle r(4, 5);
    Triangle t(4, 5);
    Square s(5);
    Polygon* shapes[]={&r,&t,&s};
    for(Polygon *p:shapes){
        showDetails(p);
    }
    for(Polygon *p:shapes){
        usingRTTI(p);
    }


    return 0;
}