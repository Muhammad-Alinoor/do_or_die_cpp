#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int a,b,c,discriminant;
    float x1,x2;

    // input the value of co-efficient and constant of quadratic equation
    cout<<"Enter the coefficient of x² : ";
    cin>>a;

    cout<<"Enter the co-efficient of x : ";
    cin>>b;

    cout<<"Enter the constant : ";
    cin>>c;
    cout<<endl;


    // find the discriminant

    discriminant = pow(b,2) -4*a*c;
   
    
    // compare
    if(discriminant>0){
        x1 = (-b + sqrt(discriminant))/2*a;
        x2 = (-b - sqrt(discriminant))/2*a;

        cout<<"X\u2081 : "<<x1<<"\n"<<"X\u2082 : "<<x2<<endl;
    }
    else if(discriminant==0){
        x1 = (-b)/2*a;
        x2 = (-b)/2*a;

        cout<<"X\u2081 : "<<x1<<"\n"<<"X\u2082 : "<<x2<<endl;
    }
    else{
        
        x1 = (-b + sqrt(4*a*c-pow(b,2)))/2*a;
        x2 = (-b - sqrt(4*a*c-pow(b,2)))/2*a;

        cout<<"X\u2081 : "<<x1<<"i"<<endl;
        cout<<"X\u2082 : "<<x2<<"i"<<endl;    
    }
    return 0;
}