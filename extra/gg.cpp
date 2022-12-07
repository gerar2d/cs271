#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void body(int &num, int &guess);

int main()
{
	int num, guess;
    char again;
	srand(time(0));
	num = rand() % 1000 + 1; 
	cout<<"I have a number between 1 and 1000.\n";
	cout<<"Can you guess my number?\n";

    body(num,guess);
    cout<<"Would you like to play again (y or n)?\n";
    cin>>again;

    if (again == 'y')
        body(num,guess);
    else    
        return 0;
}

void body(int &num, int &guess)
{
   	do
	{
		cout<<"Please type the first number: ";
		cin>>guess;
		

		if (guess > num)
			cout<<"Too high. Try again.\n\n";
		else if (guess < num)
			cout<<"Too low. Try again.\n\n";
		else
			cout<<"\nExcellent! You guessed the number."<<endl;
	} while (guess != num); 
}
