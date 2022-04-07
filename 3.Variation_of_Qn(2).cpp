
#include<bits/stdc++.h>
using namespace std;


void odd_sequence(int x)
{
  if(x%2!=0){
      
    int sum=0;
    
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
  else{
      odd_sequence(x-1);
  }
        
    
}
int main(){
    int x;
    cin>>x;
    odd_sequence(x);
    return 0;
}