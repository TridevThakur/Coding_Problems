(1). BASIC CALCULATOR

#include<bits/stdc++.h>
using namespace std;

class calc
{
    public:
    void solve(double a,double b,char op)
    {
        switch(op)
        {
            case '+':
              
               cout<<"The sum is:"<<a+b;
               break;
               
            case '-':
             
               cout<<"The Difference is:"<<a-b;
               break;
               
            case '*':
              
               cout<<"The product is:"<<a*b;
               break;
               
            case '/':
             
               cout<<"The Quotient is:"<<a/b;
               break;
        }
    }
};
int main()
{
    calc obj;
    char op;
    double a;
    double b;

    cout<<"Enter 1st Number:";
    cin>>a;
             
    cout<<"Enter any one operator of your choice:(+,*,-,/)";
    cout<<endl;
    cin>>op;
    
    cout<<"Enter 2nd Number:";
    cin>>b;  

   
    obj.solve(a,b,op);
    return 0;
    
}