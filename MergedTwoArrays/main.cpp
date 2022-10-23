#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int arr1;
    cout<<"Enter size of arr1: ";
    cin>>arr1;
    int arrOne[arr1];
    cout<<"Enter arr1 elements: "<<endl;
    for(int i =0; i<arr1; i++)
    {
        cin>>arrOne[i];
    }
    int arr2;
    cout<<"Enter size of arr2: ";
    cin>>arr2;
    int arrTwo[arr2];
    cout<<"Enter arr2 elements: "<<endl;
    for(int j =0; j<arr2; j++)
    {
        cin>>arrTwo[j];
    }
    int size  = arr1+arr2;
    int newArr[size];
    for(int i = 0; i<arr1; i++)
    {
        newArr[i]=  arrOne[i];
    }
    for(int j = 0; j<arr2; j++)
    {
        newArr[arr1+j]=  arrTwo[j];
    }
    cout<<"Final output of merged two arrays: "<<endl;
    for(int k = 0 ; k<size; k++)
    {
    	cout<<newArr[k]<<" ";
	}
    return 0;
}
