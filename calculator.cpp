#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    int temp;
    if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    char op;
    cout<<"Enter the operation you want to perform:"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        case '%':cout<<a%b<<endl;
        break;
    }
    return 0;
    cout<<"Completed"<<endl;

}
