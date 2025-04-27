#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "************************************|\n";
	cout << "Welcome to the number guessing game!|\n";
	cout << "************************************|\n";
	cout << "******devolped by saif Moamer ******|\n";
	cout << "************************************|";
	cout << "\n____________________________________|\n";
	char playAgain;
	do
	{
		int Num;
		int genNum;
		int tryTime =0;
		int dif;
		int x;
		srand(time(0));
		genNum = rand() % 100 + 1;
		cout<<"    Choose the difficulty level # \n";
		cout<<"       1-Easy   ( 10)Attempts \n";
		cout<<"       2-medium ( 7 )Attempts \n";
		cout<<"       3-Hard   ( 4 )Attempts \n";
		cout << "************************************\n" <<endl;
		cin>>dif;

		if(dif==1)
		{
			x=10;
		}
		else if(dif==2)
		{
			x=7;
		}
		else if(dif==3)
		{
			x=4;
		}
		else
		{
			cout << "Invalid choice! Exiting game...\n";
			return 0;
		}


		do {

			cout << "A number was generated between 1 and 100.\nTry to guess it: ";
			cin >> Num;
		
			cout << "************************************\n";
			tryTime++;

			if (Num > genNum) {
				cout << "The number you entered is bigger than the generated number.\n";
			} else if (Num < genNum) {
				cout << "The number you entered is smaller than the generated number.\n";
			} else {
				cout << "************************************\n";
				cout << "Congratulations!! You guessed the correct number.\n";
				
			}

		} while (Num != genNum&&tryTime<x);
		if(tryTime>=x)
		{
			cout << "*********************************************************************\n";
			cout << "*********************************************************************\n";
			cout <<"Number of attempts executed $$\n";
			cout <<"The number is : "<<genNum;
			
		}
		cout << "\nDo you want to play again? (y/n): ";
		cin >> playAgain;
		cout << "************************************\n" << endl;
 
	} while(playAgain == 'y' || playAgain == 'Y');
	cout << "Thank you for playing! Goodbye!" << endl;
	cin.ignore();
	cin.get();
	

	return 0;
}
