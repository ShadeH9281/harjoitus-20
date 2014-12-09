//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream> 
using namespace std;
int main()
{
	int nopeus[5] = { 0, 0, 0, 0, 0 };
	int *osoitin;
	int ind, enter;
	osoitin = &nopeus[0];
	cout << "Nopeusmittari\nLaita nopeudet!" << endl;
	cout << "(alkutila)nopeus = 0" << endl;
	for (ind = 0; nopeus[ind] >= 0;)

	{

		cin >> nopeus[ind];
		

		if (nopeus[ind] < 0){
			cout << endl;

			break;
		}




		cout << ((osoitin[0] + osoitin[1] + osoitin[2] + osoitin[3] + osoitin[4]) / 5) << endl;

		ind++;

		if (ind == 5) {
			ind = 0;

		}
	}



}