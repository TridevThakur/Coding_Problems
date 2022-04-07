2.Print odd sequence

#include<bits/stdc++.h>
using namespace std;


void odd_sequence(int x){
  
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
int main(){
    int x;
    cin>>x;
    odd_sequence(x);
    return 0;
}
