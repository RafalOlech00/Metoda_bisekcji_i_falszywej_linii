#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float Funkcja(float x)
{
	//return cos(x * x * x - 2 * x);  //funkcja z instrukcji
	//return x * x - 8 * x + 5;
	return  (-0.5) * x * x * x + 3 * x * x - 5;
}


int main()
{
	float eps = 0.00001f;  // epsilon
	float a, b;  // przedział
	float x0, x1;
	float a_f, b_f;

	// przedział dla którego wyznaczane jest miejsce zerowe funkcji
	a_f = a = 5.00f; 
	b_f = b = 7.00f;
	cout << fixed; // fixed usuwa notację wykładniczą 
	cout << setprecision(5); //dokładność do 5 miejsc po przecinku

	//cout << "f(x) = cos(x^3 - 2x)" << endl << endl;
	//cout << "f(x) = x^2 - 8x + 5" << endl << endl;
	cout << "f(x) = 5*x^2 + x - 2)" << endl << endl;

	cout << "Metoda bisekcji:" << endl;
	x0 = (a + b) / 2; // wyliczenie x0
	

	int counter = 1; // liczba iteracji

	cout << "	 a		  b		f(a)		f(b)		x0		f(x0)	  f(a)*f(x0)" << endl<<endl;

	while (abs(Funkcja(x0)) >= eps && counter < 11)
	{
		cout << counter << "	" << a << "		" << b << "		" << Funkcja(a) << "	" << Funkcja(b) << "    	" << x0 << "		" << Funkcja(x0) << "    " << Funkcja(a) * Funkcja(x0) << endl << endl;

		if (Funkcja(a) * Funkcja(x0) < 0)
		{
			b = x0;
		}
		else
		{
			a = x0;
		}

		x0 = (a + b) / 2;
		counter++;
	}



	cout <<endl<<endl<< "Metoda falszywej linii" << endl;
	cout << "	 a		  b		f(a)		f(b)		x1		f(x1)	  f(a)*f(x1)" << endl<<endl;

	x1 = a_f - (Funkcja(a_f) * (b_f - a_f)) / (Funkcja(b_f) - Funkcja(a_f));
	counter = 1;
	while (abs(Funkcja(x1)) >= eps && counter < 11)
	{

		if (Funkcja(a_f) * Funkcja(x1) < 0)
		{
			b_f = x1;
		}
		else
		{
			a_f = x1;
		}
		cout << counter << "	" << a_f << "       " << b_f << "		" << Funkcja(a_f) << "	" << Funkcja(b_f) << "  	" << x1 << "         " << Funkcja(x1) << "    " << Funkcja(a_f) * Funkcja(x1) << endl << endl;

		x1 = a_f - (Funkcja(a_f) * (b_f - a_f)) / (Funkcja(b_f) - Funkcja(a_f));
		counter++;
	}
}