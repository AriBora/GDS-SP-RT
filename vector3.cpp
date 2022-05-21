#include <bits/stdc++.h>
#include "vector3.h"
using namespace std;

float Dot(Vector A, Vector B){
    cout<<A.a*B.a + A.b*B.b +A.c*B.c<<endl;
}
void Cross(Vector A,Vector B){
    float m,n,p;
    m=(A.b*B.c)-(A.c*B.b);
    n=(A.c*B.a)-(A.a*B.c);
    p=(A.a*B.b)-(A.b*B.a);
    Vector C;
    C.Vector3(m,n,p);
    C.PrintVector();
    C.Magnitude();
}
int main(){
    Vector v1,v2;
    v1.Vector3();
    v2.Vector3();
    v1.PrintVector();
    v2.PrintVector();
    v1.AddVector(v2);
    v1.SubtractVector(v2);
    v1.Magnitude();
    v2.Magnitude();
    Dot(v1,v2);
    Cross(v1,v2);
}
