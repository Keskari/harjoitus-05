/* Harjoitus 5
*/
#include <iostream>
using namespace std;
void main(void)
{
	int luku1;
	int luku2;
		cout << "Syota luvut\n";
	cin >> luku1; // ensimm�isen luvun sy�tt�
	cin >> luku2; // toisen luvun sy�tt�
	if (luku1 == luku2) // tarkistaa jos luvut ovat samat
		cout << "BINGO\n";
	else // muulloin = luvut ovat erisuuret
		cout << "BONGO\n";
}