#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int sus(int x, int y, int r);
int main()
{
    cout << "Darbu veidoja - Raivo Bukovskis" << endl;
    int a, b, n;

    cout <<"Ievadiet ludzu 2 skaitlus robezas no 1 - 10: ";
    cin >> a;
    cin >> b;
    cout <<"Ludzu ievadiet skaitli robezas no 2 - 10: ";
    cin >> n;
    sus(a, b, n);



    return 0;
}
int sus(int x, int y, int r)
{
    srand((unsigned)time(NULL));

    double mas[x][y];
    int SumR, SumK, SumM;
    int p;
    p = r;

    for (int i = 0; i < x; i++)
{

	for (int j = 0; j < y; j++)
	{
   mas[x][y] = rand() % p;
   cout << mas[x][y] << " ";

	}
	cout << endl;

   for (int i = 0; i < x; i++)
{

	for (int j = 0; j < y; j++)
	{
   SumR = SumR + mas[i][j];

}
 cout << SumR << endl;
}
	cout << endl;

}
 return y;
}
