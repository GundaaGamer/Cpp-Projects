#include <iostream>
using namespace std;

int main()
{
	 int n,mid,first,last,key,result=0;
	 cout << "Enter the size of array:";
	 cin >> n;
	 int arr[n];
	 first=0;
	 last=n;
	 cout<<"---------------------------------------------\nENTER ELEMENT ONLY IN ASCENDING ORDER\n---------------------------------------------"<<endl;
	 for (int i=0;i<n;i++)
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
	 	cout<<"Array Sucessfully Filled Now Enter The Search Element:";
		cin>>key;
	  while (first <= last) 
	  {
        mid = first + (last - first) / 2;

        if (arr[mid] == key)
		{
		   cout << "Element fount at Index:"<<mid<<"\nAnd Position:"<<mid+1;
		   result=1;
		   break;
        }
        else if (arr[mid] < key)
		{
            first = mid + 1;
        }    
        else
		{
            last = mid - 1;
		}
	  }
	  if (result!=1)
	  {
		cout<<"Sorry Element Not Found :(";
	  }
}