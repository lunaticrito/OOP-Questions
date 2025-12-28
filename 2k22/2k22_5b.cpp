#include<bits/stdc++.h>
using namespace std;
class TimeMS;
class TimeHM{
    int hr,min;
    public:
    TimeHM(int h=0,int m=0):hr(h),min(m){}
    void input(){
        cin>>hr>>min;
    }
    void display(){
        cout<<hr<<"h "<<min<<"m"<<endl;
    }
    friend TimeHM add(TimeHM &t1,TimeMS &t2);
};
class TimeMS{
    int min,sec;
    public:
    TimeMS(int m=0,int s=0):min(m),sec(s){}
    void input(){
        cin>>min>>sec;
    }
    void display(){
        cout<<min<<"m "<<sec<<"s"<<endl;
    }
    friend TimeHM add(TimeHM &t1,TimeMS &t2);
};
//time conversion & add
TimeHM add(TimeHM &hm,TimeMS &ms){ 
    int totalMin=hm.hr*60+hm.min+ms.min+ms.sec/60;
    int finalHr=totalMin/60;
    int finalMin=totalMin%60;
    return TimeHM(finalHr,finalMin);
}
int main(){
    TimeHM t1;
    TimeMS t2;
    t1.input();
    t2.input();
    t1.display();
    t2.display();
    TimeHM result=add(t1,t2);
    result.display();
}
