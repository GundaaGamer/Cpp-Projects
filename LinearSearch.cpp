#include <iostream>
using namespace std;
int main()
{ 
  int n,num,count=0;
  cout <<"Enter the size of array:";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
	if(i==0)
	{
		cout << "Enter the "<<i+1<<"st element"<<endl;
		cin >> arr[i];
	}
	else if (i==1)
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
  cout<<"Array Sucessfully Filled Now Enter The Search Element:";
  cin >> num;
  for(int j=0;j<n;j++)
  {
	if(arr[j]==num)
	{
	  if(j==0)
	{
		cout << "Element found at "<<j+1<<"st positon";
		count=1;			
	}
	else if (j==1)
	{
		cout << "Element found at "<<j+1<<"nd positon";
		count=1;		
	}
	else if(j==2)
	{
		cout << "Element found at "<<j+1<<"rd positon";
		count=1;
	}
	else
	{
        cout << "Element found at "<<j+1<<"th positon";
		count=1;
	}	
	}
  }
  	if(count==0)
	{
		cout<<"Sorry Element Not Found :(";
	}
  return 0;
}