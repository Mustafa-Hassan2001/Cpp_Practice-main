#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int size)
{
	int temp;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
}
void display(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void input(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
}
int main()
{
	int size;
	cout<<"Enter Size of Array : ";
	cin>>size;
	int a[size];
	input(a,size);
	display(a,size);
	sort(a,size);
	display(a,size);
	
}
