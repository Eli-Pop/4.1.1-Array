#include <iostream>
using namespace std;

int main()
{
	int sample[10]; // this reserves 10 integer elements
	int t;

	// load the array
	for (t = 0; t < 10; ++t) sample[t] = t;
	//notice how sample is indexed.

	//display the array
	for (t = 0; t < 10; ++t)
	{
		cout << "This is sample [" << t << "]: " << sample[t] << "\n";
	}

	system("pause");
	return 0;
}