/* Harjoitus 5
*/
#include <iostream>
using namespace std;
void main(void)
{
	int luku1;
	int luku2;
		cout << "Syota luvut\n";
	cin >> luku1; // ensimmäisen luvun syöttö
	cin >> luku2; // toisen luvun syöttö
	if (luku1 == luku2) // tarkistaa jos luvut ovat samat
		cout << "BINGO\n";
	else // muulloin = luvut ovat erisuuret
		cout << "BONGO\n";
}