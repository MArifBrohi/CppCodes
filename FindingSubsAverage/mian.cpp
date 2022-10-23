#include<iostream>
using namespace std;
int main()
{
	int sub , std, marks, sum = 0;
	int average = 0;
	
	cout<<"Enter number of students: "<<endl;
	cin>>std;
	cout<<"Enyer number of subjects: "<<endl;
	cin>>sub;
	for(int i =1; i<=std; i++)
	{	
		cout<<"student "<<i<<endl;
		for(int j= 1; j<=sub; j++)
		{
			cout<<"Enter sub "<<j<<" marks: ";
			cin>>marks;
			
			sum = sum+marks;
		}
		
		average = sum/sub;
		cout<<"Average of subs marks: "<<average<<endl;
		
		sum = 0;
	}
	
	
	return 0;
}
