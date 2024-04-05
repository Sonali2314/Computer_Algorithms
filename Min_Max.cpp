#include<iostream>
// min max using naive method
using namespace std;
int main()
{
	int size,max,min,i;
	cout<<"Enter the number of elements : ";
	cin>>size;
	int array[size];
	cout<<"Enter the elements : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	min=array[0];
	max=array[0];
	for(i=0;i<size;i++)
	{
		if(array[i]>=max)
		{
			max=array[i];
		}
		if(array[i]<=min)
		{
			min=array[i];
		}
	}
	cout<<"Maximum element of array : "<<max<<endl;
	cout<<"Minimum element of array : "<<min<<endl;
	return 0;
	
}
