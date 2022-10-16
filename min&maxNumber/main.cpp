#include<iostream>
using namespace std;
int main() {
	int num;

	cout<<"How many numbers do you have: ";
	cin>>num;
	int max, min;
	int arr[num]; 
	if(num>0) {
			for(int i =0; i<num; i++) {
				
				cout<<"Enter your Numbers:"<<endl;
				cin>>arr[i];
				cout<<"---------------------------"<<endl;
				
			}
			for(int j =0; j<num; j++) {
				cout<<arr[j]<<" ";
				
			}
			    max = arr[0];
    		for (int k = 0; k < num; k++)
    		{
        		if (max < arr[k])
            	max = arr[k];
    		}
    		cout<<"\nmaximum number: "<<max<<endl;
    		
    		min = arr[0];
    		for (int l = 0; l < num; l++)
    		{
        		if (min > arr[l])
            	min = arr[l];
    		}
    		cout<<"\nminimum number: "<<min<<endl;
		
	}else if(num<0){
		cout<<"opps, you enterd invalid number: "<<endl;
	}else if(num==0) {
		cout<<"Opps, you don't have any number for me to process:"<<endl;
	}
	return 0;
}
