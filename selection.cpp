#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number of elements";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
     for(int i=0;i<x-1;i++){
         for(int j=i+1;j<x;j++){
             if(arr[j]<arr[i]){
             int z=arr[j];
             arr[j]=arr[i];
             arr[i]=z;
             }
         }
     }
     for(int i=0;i<x;i++){
         cout<<arr[i]<<" ";
     }
  return(0);
}
