#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter length of array"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter "<<x<<" value";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=1;i<x;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return(0);
}
