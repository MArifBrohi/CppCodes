#include<iostream>
using namespace std;
int main()
{
		
	int guesedNumber = 5;
	int number;
	int size;
	do{
		
		cout<<"Guess the number: Enter Your Guess: ";
		cin>>number;
		size++;
		if(number == guesedNumber)
		{
			cout<<"Congrates, You Guessed the number: "<<guesedNumber<<endl;
			break;	
		}
		else if(size < 5){
			cout<<"Sorry, try again: "<<endl;
		}
		
	}while( number != guesedNumber && size!=5);
	
	
	
	return 0;
}
