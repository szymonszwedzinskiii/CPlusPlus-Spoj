#include <iostream>


using namespace std;

int main()
{
	unsigned int t;
	int n;
	cin >> t;
	int wynik1 = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int* wynik = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> wynik[j];
			wynik1 = wynik1 + wynik[j];
		}
		cout << wynik1 << endl;
		wynik1 = 0;
	}
	return 0;
}