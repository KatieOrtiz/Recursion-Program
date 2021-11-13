// Lab 2 ORTIZ, KATIE TH

#include <iostream>
using namespace std;

//This function finds the power calculation of the user-supplied base and power numbers
long long Power(int basenum, int powernum) 
{

	long long int powerresult;
	//Base case
	if (powernum == 0)
		return 1;
	if (powernum == 1)
		return basenum;

	powerresult = basenum * Power(basenum, powernum - 1); //Recursive call;

	return powerresult;
}


//This function finds the series from the user-supplied number of terms and the positive number and displays them from one to n
long long int SeriesFromOneToN(int numterms)
{
	long long int onetonresult;
	//Base case
	if (numterms == 1)
	{
		cout << "1 ";
		return 1;

	}

	onetonresult = numterms * numterms + SeriesFromOneToN(numterms - 1); //Recursive call

	//Prints the results of the series
	cout << "+ " << "(" << numterms << "*" << numterms << ")" << " ";
	return onetonresult;

}


//This function finds the series from the user-supplied number of terms and the positive number and displays them from n to one
long long int SeriesFromNToOne(int numterms)
{
	long long int ntooneresult;
	//Base case
	if (numterms == 1)
	{
		cout << "1 ";
		return 1;

	}

	//Prints before recursive call
	cout << "(" << numterms << "*" << numterms << ")" << " + ";

	ntooneresult = numterms * numterms + SeriesFromNToOne(numterms - 1); //Recursive call

	return ntooneresult;

}