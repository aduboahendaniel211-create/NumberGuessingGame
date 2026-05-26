#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    srand(time(0));
	int GuessedNum=0;
	int UnknownNum=rand()%20+1;
	int attempt=0;
	string name;
	int MaxAttempt=5;
	cout<<"Hi,Welcome to the guessing game! What's your name?"<<endl;
		cin>>name;
		cout<<name<<" "<<"I've chosen a number from 1 to 20. Ready to guess?"<<endl;
		cout<<name<<" "<<"You have just"<<" "<<MaxAttempt<<" "<<" attempts to guess it right!"<<endl;
	
	do{
		cout<<name<<" "<<"Enter your guessed number from 1 to 20."<<endl;
		cin>>GuessedNum;
		attempt++;
			if(GuessedNum>UnknownNum){
			cout<<"Your guessed number is above my chosen number. Try again! "<<endl;
		}
		else if(GuessedNum<UnknownNum){
			cout<<"Your guessed number is below my chosen number. Try again!"<<endl;
		}
		else{
			cout<<"Wow! Congratulations!"<<name <<" "<<"You've guessed it right."<<endl;
			cout<<"You won at attempt number:"<<" "<<attempt<<endl;
		}
	}
		while(GuessedNum!=UnknownNum&&attempt<MaxAttempt);
		if(GuessedNum!=UnknownNum){
			cout<<"Oops! Sorry"<<" "<<name<<" "<<" You've exhausted your maximum attept limit."<<endl;
			cout<<"The number I chose was"<<" "<<UnknownNum<<endl;
		}
		
	return 0;
}