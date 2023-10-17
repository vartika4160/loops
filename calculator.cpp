#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter the operator +,-,*,/"<<endl;
    cin>>op;
    cout<<"enter the value for a and b"<<endl;
    cin>>a>>b;
switch(op){
    case '+':
    cout<<"sum of the two numbers :"<<a+b;
    break;
     case '-':
    cout<<"subtraction of the two numbers :"<<a-b;
    break;
     case '*':
    cout<<"multiplication of the two numbers :"<<a*b;
    break;
     case '/':
    cout<<"division of the two numbers :"<<a/b;
    break;
    default:
    cout<<"input does not feature in this criteria";
}
   
}
