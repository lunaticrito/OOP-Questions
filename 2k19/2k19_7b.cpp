#include <bits/stdc++.h>
using namespace std;
class Point{
    protected:
    int x,y;
    public:
    Point(int x,int y):x(x),y(y){}
};
class  Pt3d:public Point{
    int z;
    public:
    Pt3d(int x,int y, int z):Point(x,y),z(z){}
    friend float dist(Pt3d &a, Pt3d &b);
};
float dist(Pt3d &a, Pt3d &b){
        float x1= a.x-b.x;
        float y1= a.y-b.y;
        float z1= a.z-b.z;
        return (sqrt(x1*x1+y1*y1+z1*z1));
}
int main(){
    Pt3d p1(1,2,3);
    Pt3d p2(4,5,6);
    cout<<dist(p1,p2)<<endl;
}