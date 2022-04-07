
#include<bits/stdc++.h>
using namespace std;


void count_number(int multi[],int arr[],int m,int n){
   
  for(int i=0;i<m;i++){
      int count=0;
      for(int j=0;j<n;j++){
          if(arr[j]%multi[i]==0)
              count+=1;
      }
      cout<<multi[i]<<":"<<count<<",";
  }
       
}
int main(){
   int multi[]={1,2,3,4,5,6,7,8,9};
   int m=sizeof(multi)/sizeof(multi[0]);
   
   int arr[]={1,2,8,9,12,46,76,82,15,20,30};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   count_number(multi,arr,m,n);
   return 0;
}