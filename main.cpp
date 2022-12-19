#include <iostream>
#include <cmath>
using namespace std;

float F(float x){
    return x*x*cos(x)+1;

}

int main() {
    float a,b,x,err;
    float Fa=1,Fb=1;

    while(Fa*Fb>=0){
        cout<<"inserire estremi"<<endl;//add endl
        cin>>a>>b;
        Fa=F(a);
        Fb=F(b);
    }

    x=(a+b)/2;//nel foglio era a=...
    while(F(x)!=0){
    if(F(a)*F(b)<0)b=x;
    else a=x;
    err=abs(b-a)/2;
    if(err<1*pow(10, -6)) break;
    x=(a+b)/2;
    }
    cout<<x<<endl<<F(x);

    return 0;
}
