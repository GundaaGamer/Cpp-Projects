#include <iostream>
using namespace std;

int main()
{
	int temp,size;
	cout<<"Enter the size of array:";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
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
            int min_idx=i;
            for(int j=i+1;j<size;j++)
			{
                if(arr[j]<arr[min_idx])
                    min_idx =j;
			}
            temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
    }
	cout<<"Array Sorted succesfull."<<endl;
	cout<<"{";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<",";
	}
	cout<<"}"<<endl<<"Array Printed.";
	return 0;
}