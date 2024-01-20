#include <iostream>
using namespace std;

void divide(int num1,int num2);

int main() {
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    divide(num1,num2);
    return 0;
}

void divide(int num1,int num2){
    int result;
    result= num1/num2;
    cout<<"The division result is : "<<result;
}
