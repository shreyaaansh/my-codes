#include<iostream>
using namespace std;
void max_in_arr(int arr[],int n)
{
	int i;
	int max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"Max element is : "<<max<<endl;
}
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array\n";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	max_in_arr(arr,n);
	
}
