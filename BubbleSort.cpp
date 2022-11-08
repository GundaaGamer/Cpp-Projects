#include <iostream>
using namespace std;

int main()
{
	int temp,size;
	cout<<"Enter the size of array:";
	cin>>size;
	int arr[size];
	for (int i=0;i<size;i++)
	{
		 if(i==0)
		{
			cout << "Enter the "<<i+1<<"st element"<<endl;
			cin >> arr[i];
		}
		 else if(i==1)
		{
			cout << "Enter the "<<i+1<<"nd element"<<endl;
			cin >> arr[i];
		}
		 else if(i==2)
		{
			cout << "Enter the "<<i+1<<"rd element"<<endl;
			cin >> arr[i];
		}
		else
		{
       	 	cout << "Enter the "<<i+1<<"th element"<<endl;
			cin >> arr[i];
		}
	}
	cout<<"Array Sucessfully Filled."<<endl;
	for(int i=0;i<size-1;i++)
	{ 
	 for(int j=0;j<size-i-1;j++)
	 {
       if(arr[j]>arr[j+1])
	    {
          temp=arr[j];
		  arr[j]=arr[j+1];
		  arr[j+1]=temp;
		}
	 }
	}
	cout<<"Array Sorted succesfull."<<endl;
	cout<<"{";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<",";
	}
	cout<<"}"<<endl<<"Array Printed";
}