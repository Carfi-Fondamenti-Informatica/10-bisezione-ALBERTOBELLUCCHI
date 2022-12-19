#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float F(float y){
    return pow(y,2)*cos(y)+1;
}

bool condizione(float a, float b){
    if(F(a)*F(b)<0) return true;
    else return false;
}

int main() {
    float a,b,x,err=69;
    float Fa=1,Fb=1;

    while(!condizione(a,b)){
        cout<<"inserire estremi"<<endl;//add endl
        cin>>a>>b;
    }

    while(err>=1e-6){
        x=(a+b)/2;
        if(F(x)==0)cout<<setprecision(4)<<x<<endl;
        else {
            if (condizione(a, b))b = x;//<0
            else a = x;
            err = abs(b - a) / 2;
        }
    }
    cout<<setprecision(4)<<x<<endl;
    //cout<<setprecision(4)<<F(x)<<endl;
    return 0;
}
