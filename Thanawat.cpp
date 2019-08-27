#include<iostream>
#include<time.h>
using namespace std;
int checknum();
int main()
{
	cout << "###Welcome to guessing number game###\nSecret number has been chosen\n";
	checknum();
}
int checknum()
{	int ran,check,l=0;
	srand(time(NULL));
	ran = rand() % 9 + 1;
	do {
		cout << "Guess the number (1 to 10): ";
		cin >> check;
		l++;
		if (check > ran)
			cout << "The secret number is higher\n";
		else if (check < ran)
			cout << "The secret number is lower\n";
		
		else cout << "Congratulations!\nThe Secrect number is " << ran << "\nYou made " << l << " guess";
	} while (check != ran);
	return(0);
}