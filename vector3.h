#include <bits/stdc++.h>
using namespace std;
class Vector
{
    public:
    float a,b,c;
    
    void Vector3(){
        cout<<"Input the coodinates as x y z"<<endl;
        cin>>a>>b>>c;
        Vector3(a,b,c);
    }
    void Vector3(float x, float y, float z){
        a=x;
        b=y;
        c=z;
    }
    void PrintVector(){
        cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
    }
    void AddVector(Vector A){
        a+=A.a;
        b+=A.b;
        c+=A.c;
        PrintVector();
    }
    void Magnitude(){
        cout<<sqrt(a*a + b*b + c*c)<<endl;
    }
    void SubtractVector(Vector A){
        a-=A.a;
        b-=A.b;
        c-=A.c;
        PrintVector();
    }
    
};
