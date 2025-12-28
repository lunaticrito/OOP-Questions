#include <bits/stdc++.h>
using namespace std;
class Polar
{
    float r, theta;
public:
    Polar(float x, float y)
    {
        r = sqrt(x * x + y * y);
        theta = atan2(y,x);
        cout << "(" << r << "," << theta << ")" << endl;
    }
};
class Rectangle
{
    float x, y;

public:
    Rectangle(float r, float theta)
    {
        x = r * cos(theta);
        y = r * sin(theta);
        cout << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Rectangle a(2,3.14/3);
    Polar p(3, 4);
    return 0;
}
