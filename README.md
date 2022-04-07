# Coding_Problems

Ques No.1.BASIC CALCULATOR

(1). BASIC CALCULATOR

//predefined Header files to access various predefined functions.

#include<bits/stdc++.h>
using namespace std;

class calc
{
// solve function to perform addition,subbtraction,multiplication and division inside class

    public:
    void solve(double a,double b,char op)
    {
    // switch statement to choose which operation does user wants to perform.
    
        switch(op)
        {
        // Adds two numbers
            case '+':
              
               cout<<"The sum is:"<<a+b;
               break;
               
          //Subtract two numbers
          
            case '-':
             
               cout<<"The Difference is:"<<a-b;
               break;
          // Multiply two numbers.
          
            case '*':
              
               cout<<"The product is:"<<a*b;
               break;
               
          // Divide two numbers.     
            case '/':
             
               cout<<"The Quotient is:"<<a/b;
               break;
        }
    }
};
int main()
{
// Class member functioncan onlybe accessed using object so i have created object of class "calc" ie obj.

    calc obj;
    char op;
    
// Data type of two inputs.

    double a;
    double b;
// User input i.e 1st number to perform on which operation to be performed.

    cout<<"Enter 1st Number:";
    cin>>a;
// Type of operand that user wants.

    cout<<"Enter any one operator of your choice:(+,*,-,/)";
    cout<<endl;
    cin>>op;
    
 // User input i.e 1st number to perform on which operation to be performed.
 
    cout<<"Enter 2nd Number:";
    cin>>b;  

 //calling of solve function of class "calc".
 
    obj.solve(a,b,op);
 
 //Return statement
 
    return 0;
    
}



Ques No-2: Print odd Sequence
//predefined Header files to access various predefined functions

#include<bits/stdc++.h>
using namespace std;


void odd_sequence(int x){
 // While loop to find the sequence 
 
 //Initialization of sum variable
 
    int sum=0;
    while(x--)
    {
       sum=sum+1;
     // If x==0 then to avoid comma(,) at last.  
       if(x==0){
        cout<<sum;
        break;
       }
 // Printing ofsum value
 
     cout<<sum<<",";
     sum=sum+1;
    }
}
int main(){

// User input

    int x;
    cin>>x;
    
// Calling of function odd_sequence.

    odd_sequence(x);
    return 0;
}



ques No.3.print sequence

#include<bits/stdc++.h>
using namespace std;


void odd_sequence(int x)
{
// if the number is odd the this statement wiil be executed.
  if(x%2!=0){
      
    int sum=0;
 // while loop for looping number of times to perform operation
 
    while(x--)
    {
       sum=sum+1;
       
       if(x==0){
        cout<<sum;
        break;
       }
 
     cout<<sum<<",";
     sum=sum+1;
    }
    
  }
  // Else statement for recursion.
  else{
      odd_sequence(x-1);
  }
        
    
}
int main(){

//User input by creating variable i.e x.
    int x;
    cin>>x;
    
// calling of odd_function

    odd_sequence(x);
    return 0;
}

Ques No.4 To print count of multiple of{1,2,3,4,5,6,7,8,9}.

//Header files

#include<bits/stdc++.h>
using namespace std;

// Function to perform desired operation with parameters

void count_number(int multi[],int arr[],int m,int n){

 // Nested loop:
 // Outer loop iterates each element of multi[]
 //Inner loop iterates each element of arr where multiples of multi[]
 
  for(int i=0;i<m;i++){
      int count=0;
      for(int j=0;j<n;j++){
      
      // If each element of arr[] leaves remainder 0 when divided by multi[] the counter increase by 1;
      
          if(arr[j]%multi[i]==0)
              count+=1;
      }
      
      // printing of count of numbers
      
      cout<<multi[i]<<":"<<count<<",";
  }
       
}
int main(){

// Input arr[];
// Input multi[];
// with their sizes m and n

   int multi[]={1,2,3,4,5,6,7,8,9};
   int m=sizeof(multi)/sizeof(multi[0]);
   
   int arr[]={1,2,8,9,12,46,76,82,15,20,30};
   int n=sizeof(arr)/sizeof(arr[0]);
   
 // calling of count_number function  
   count_number(multi,arr,m,n);
   
 // return statement
   return 0;
}


