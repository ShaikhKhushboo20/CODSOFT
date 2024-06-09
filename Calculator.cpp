#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char ch;
    cout<<"Enter values for Arithematic Operation"<<endl;
    cin>>n1>>n2;
    cout<<"Enter character for Operation"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"Sum="<<(n1+n2);
        break;
        case '-':
        cout<<"Difference="<<(n1-n2);
        break;
        case '*':
        cout<<"Product="<<(n1*n2);
        break;
        case '/':
        cout<<"Quotient="<<(n1/n2);
        break;
        default:
        cout<<"Wrong Input"; 

    }
    return 0;
}