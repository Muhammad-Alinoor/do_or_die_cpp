#include<iostream>
#include<string>
using namespace std;

string welcome_message(string message){
    return message;
}
void print_welcome_message(string message){
    cout << "Hey, "<<welcome_message(message)<<" Programmers.";
}

int main(){
    string message;
    cout<<"Enter your welcome message...."<<endl;
    getline(cin,message);
    cout<<"__________________________________________________"<<endl;
    print_welcome_message(message);
    return 0;
}