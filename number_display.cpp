#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number, digit,i,j,int_quotient,remainder;
    cout<<"Enter a number : ";
    cin>>number;
    digit = 1 + log10(number);
    for(i=digit-1; i>=0;i--){
        for(j=i;j>=0;j--){
            int_quotient = number / pow(10,j);
            remainder = int_quotient % 10;
            cout<<remainder<<" ";
        }
        cout<<"\n";
    }
    return 0;
}