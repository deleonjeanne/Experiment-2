#include <iostream>
# include <conio.h>

using namespace std;

int main()


{
	int x, N;
	
	while (x>0)
	{
		cout << "Enter a number: ";
		cin >> x;
		
		if (x>0)
		{
			N = (x*(x+1))/2;
			cout << "The sum of all whole numbers from 1 to " << x << " is " << N << "." << endl;
			continue;
		}
		else
		{
			cout << "Thank you!" << endl;
		}
	}
_getch();
return 0;
}
