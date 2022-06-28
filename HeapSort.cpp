#include<iostream>
#define MAX 11
int arr[MAX];
using namespace std;
void heapsort(int n,int i)
{
	int left,right,largest=i;
	left=2*i+1;
	right=left+1;
	int b;
	if(left<n&&arr[left]>arr[largest])
	{
	largest=left;
	}
	if(right<n&&arr[right]>arr[largest])
	{
	largest=right;
	}
	if(largest!=i)
	{
		b=arr[i];
		arr[i]=arr[largest];
		arr[largest]=b;
		heapsort(n,largest);
	}
}
void build_heap(int n)
{
	int i,temp;
	for(i=n/2-1;i>=0;i--)
	heapsort(n,i);
}
void heap_sort(int n)
{
	build_heap(n);
	for(int i=n-1;i>0;i--) 
	{
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapsort(i,0);
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Entered numbers are:\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	heap_sort(n);
cout<<"\nSorted array is:\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
