#include<iostream>
#include<cmath>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{

	double a = double();
	double b = double();
	double c = double();
	double exp = double();
	double exp1 = double();
	double exp2 = double();
	double solut1 = 0;
	double solut2 = 0;
	double sqrt = 0;



	cout << "Enter value of A: ";
	cin >> a;
	cout << endl;
	cout << "Enter value of B: ";
	cin >> b;
	cout << endl;
	cout << "Enter value of C: ";
	cin >> c;
	cout << setw(1) << a << " " << b << " " << c << endl;
	cout << a << "x^2 + " << b << "x + " << c << ' = 0' << endl;


	if (a = 0) 
	{
		solut1 = -c / b;
		if (b = 0)
			cout << "Unable to determine root(s)." << endl;
	}
		 

	else
	{
		sqrt = b * b - 4 * a*c;
		if (sqrt < 0)
		{
			sqrt = -sqrt;
			exp = -b / (2 * a);
			exp2 = std::sqrt(sqrt) / (2 * a);
			cout << "x= " << exp << " + " << exp2 << "i" << endl;
			cout << "x= " << exp << " - " << exp2 << "i" << endl;

		}
		exp = -b / (2 * a);
		exp2 = std::sqrt(sqrt) / (2 * a);
		solut1 = exp + exp2;
		solut2 = exp - exp2;

		cout << setw(3) << "x= " << solut1 << endl;
		cout << setw(3) << "x= " << solut2 << endl;

	}


	return 0;
}