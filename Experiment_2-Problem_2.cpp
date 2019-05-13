#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int gallonsused, balance;
	
		cout << "Water Bill" << endl;
		cout << "  " << endl;
		
		cout << "Gallons Used: "; cin >> gallonsused;
		cout << "Unpaid Balance (P20 for late charge): P"; cin >> balance;
		cout << "Consumption Charge: P" << 1.10 * gallonsused << endl;
		cout << "Water Demand Charge: P35" << endl;
		cout << "  " << endl;
		
	if (balance > 0)
		cout << "Water Bill: P" << 35 +20 + (1.10 * gallonsused) + balance;
	else
		cout << "Water Bill: P" << 35 + balance + (1.10 * gallonsused);
		
_getch();
return 0;
}
