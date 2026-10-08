#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S, Si;
	int k, i;
	S = 0;
	k = 1;
	while (k <= 20)

	{
		Si = 0;
		i = k;
		while (i <= 40 - k)

		{
			Si += i * i;
			i++;

		}
		S += (1 + sqrt(Si)) / (k * k);
		k++;

	}
	cout << S << endl;
	S = 0;
	k = 1;
	do
	{
		Si = 0;
		i = k;
		do
		{
			Si += i * i;
			i++;
		} while (i <= 40 - k);
		S += (1 + sqrt(Si)) / (k * k);
		k++;
	} while (k <= 20);
	cout << S << endl;
	S = 0;
	for (k = 1; k <= 20; k++)

	{
		Si = 0;
		for (i = k; i <= 40 - k; i++)

		{
			Si += i * i;

		}
		S += (1 + sqrt(Si)) / (k * k);

	}
	cout << S << endl;
	S = 0;
	for (k = 20; k >= 1; k--)

	{
		Si = 0;
		for (i = 40 - k; i >= k; i--)

		{
			Si += i * i;
		}
		S += (1 + sqrt(Si)) / (k * k);
	}
	cout << S << endl;
	return 0;
}
