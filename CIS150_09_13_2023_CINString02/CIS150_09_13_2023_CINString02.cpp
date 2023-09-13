//=====================================================
//Author: Jack Grimes
//Date: 09-13-23
//Desc: cin string
//=====================================================
#include <iostream>

using namespace std;
int main()
{
	string firstName;
	string lastName;

	cout << "Enter your first name!" << endl;
	cin >> firstName;
	cout << "Enter your last name!" << endl;
	cin >> lastName;
	cout << lastName << ", " << firstName;
}
