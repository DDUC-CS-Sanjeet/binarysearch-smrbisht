#include<iostream>
#include<algorithm>
using namespace std;
bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	int mid;
	if(startIndex<=lastIndex)
	{
		mid=(startIndex+lastIndex)/2;
		if(array[mid]==element)
		{
			return true;	
		}
		else if(array[mid]<element)
		{
			binarySearchReacursive(array,mid+1,lastIndex,element);		
		}
		else
		binarySearchReacursive(array,startIndex,mid-1,element);
	}

}
bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
int mid=(startIndex+lastIndex)/2;
while(startIndex<=lastIndex)
{
	if(array[mid]==element)
	{
		return true;
		break;
	}
	else
	if(array[mid<element])
	{
		startIndex=mid+1;
	}
	else
	{
		lastIndex=mid-1;
	}
	mid=(startIndex+lastIndex)/2;
}
}
int main()
{
int size,element;
cout<<" ENTER SIZE OF ARRAY : ";
cin>>size;
int array[size];
cout<<" ENTER VALUES IN ARRAY : ";
for(int i=0;i<size;i++)
{
	cin>>array[i];
}
cout<<" ENTER A NUMBER WHICH YOU WANT TO SEARCH  : ";
cin>>element;
sort(array,array+size);
bool result_r=binarySearchReacursive(array,0,size-1,element);
cout<<"\n FINDING ELEMENT USING REACURSIVE APPROACH ";
if(result_r==0)
cout<<" \n NUMBER NOT FOUND ";
else
cout<<"\n NUMBER FOUND ";
cout<<"\n FINDING ELEMENT WITHOUT USING REACURSIVE APPROACH ";
bool result=binarySearchIterative(array,0,size-1,element);
if(result==0)
cout<<" \n NUMBER NOT FOUND ";
else
cout<<"\n NUMBER FOUND ";
  return 0;

}
