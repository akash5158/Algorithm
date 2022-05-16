#include<iostream>
using namespace std;
int bs(int arr[],int num,int d);
int main(){
	int arr[10]={4,7,15,28,36,41,55,67,75,80};
	int a,num=10,x;
	cout<<"enter a number to be search\n";
	cin>>a;
	x=bs(arr,num,a);
	if(x==-1)
	 cout<<"number not present ";
	else
	 cout<<"index of the number you entered  is :"<<x;	
}
int bs(int arr[],int num,int y){
	int l=0,r=num-1,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(arr[mid]==y)
			return(mid);
		else if(y<arr[mid])
		   r=mid-1;
		else
		   l=mid+1;
		}
		return(-1);
}
