#include <iostream>
#include <time.h>
using namespace std;
void checkNum(int sn , int gn  )
{
	if (gn  < sn )
		cout << "The secret number is lower" <<endl;
	else if (gn  > sn)
		cout << "The secret number is higher" <<endl;
	else
		cout << "Congratulations!!" <<endl;

}
int main()
{
	srand(time(0));
	int sn = 1+rand()%9;
	cout << "###Welcome to guessing number game###" <<endl ;
	cout << "Secret number has been chosen" <<endl;

	int guess = 0;
	while(true){
		int gn;
		cout << "Guess the number (1 to 10) : ";
		cin >> gn;
		guess++;

		checkNum(sn, gn);

        if (gn == sn) {
            cout << "The secret number is " << sn << endl;
            cout << "You made " << guess << " guesses" << endl;
            break;
        }	
	}
	
	return(0);
}