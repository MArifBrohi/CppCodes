#include<iostream>
using namespace std;
int main()
{
	int actualNum =  8;
	
	int guess;
	
	do{
		cout<<"Enter Guess Number: ";
		cin>>guess;
		
		if(guess>actualNum) {
			cout<<"Guess Number is Greater than actual Number: "<<endl;
		}
		else if(guess<actualNum) {
			cout<<"Guess Number is Less than actual Number: "<<endl;
		}
		else if(guess == actualNum) {
			cout<<"You guessed it bro: "<<endl;
			break;
		}
	}while(guess!=actualNum);
	
	return 0;
}
