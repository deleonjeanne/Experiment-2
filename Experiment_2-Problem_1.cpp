#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char a;
	int hours;
	
	cout << "Costumer's Monthly Bill. \n";
	cout << "    " << endl;
	
	cout << "Package A: P995/month for 10 hrs access (additional P20/hr)" << endl;
	cout << "Package B: P1495/month for 20 hrs access (additional P20/hr)" << endl;
	cout << "Package C: P1995/month for unlimited access" << endl;
	cout << "    " << endl;
	
	cout << "Purchased subscription package: "; cin >> a;
	
	switch (a)
	
	{
		
		case 'a':
		case 'A':
			
			cout << " How many hours used: "; cin >> hours;
			
			if ( hours <= 10 )
					cout << "Your bill is P995 \n";
			else if ( hours > 10 )
					cout << "Your bill is P " << 995 + (20 * (hours-10));
			break;
			
		case 'b':
		case 'B':
			
			cout << " How many hours used: "; cin >> hours;
			
			if ( hours <= 20 )
					cout << " Your bill is: P1495 \n";
			else if ( hours > 20 )
					cout << " Your bill is: P" << 1495 + (10 * (hours - 20));
			break;
		case 'c':
		case 'C':
					cout << " How many hours used: "; cin >> hours;
					cout << " Your bill is: P1995 \n";
			break;
			
	}
_getch();
return 0;
}
