#include<iostream>
using namespace std;

int main(){
    int num,input_copy;
    int rem, reverse = 0;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    input_copy = num;
    while(num !=0){
        rem = num%10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if(reverse == input_copy){
        printf("The number is palendrome");
    }
    else{
        printf("The number is not palendrome.");
    }
    return 0;
}