/*
    check whether a number is prime or not.
*/
#include<iostream>

using namespace std;

int main(){
    int num,counter = 0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    for(int i = 1;i<num;i++){
        if(num%2!=0 && num%(num-i)!=0){
            counter++;
            break;
        }
    }
    if(counter > 0||num ==2){
        cout << "It is prime"<<endl;
    }
    else{
        cout <<"It is not prime"<<endl;
    }
}