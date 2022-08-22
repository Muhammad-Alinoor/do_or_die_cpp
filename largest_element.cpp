#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the array size = ";
    cin>>size;
    int number[size];
    int i;
    cout<<"Enter elements in the array [";
    for(i=0;i<size;i++){
        cin>>number[i];
    }
    cout<<"]";
    int max = number[0];
    for(i = 0; i<size;i++){
        if(max<number[i]){
            max = number[i];
        }
    }
    cout<<"The largest number is "<<max<<endl;
    return 0;
}