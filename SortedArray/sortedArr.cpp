#include<iostream>
using namespace std;
int main()
{
    int arr;
    cout<<"Enter size: ";
    cin>>arr;
  //dynamically allocation 
    int *ptr = new int[arr];
    cout<<"Enter arrays: ";
    for(int i = 0; i<arr; i++)
    {
        cin>>ptr[i];
    }
    int temp = 0;
    cout<<"Output: ";  
    for(int j =0; j<arr; j++)
    {
        for(int k = j ; k<arr-1; k++)
        {
      
            if(ptr[j]>ptr[k+1])
            {
                temp = ptr[j];
                ptr[j] = ptr[k+1];
                ptr[k+1] = temp;
            }
        }
        
        
             cout<<ptr[j]<<" ";
        
        
    }
  return 0;
  
}
