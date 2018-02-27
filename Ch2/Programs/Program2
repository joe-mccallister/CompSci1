//Chapter2 Program 2 - see readme.md for info
#include <iostream>
using namespace std;

int main() {
//variable initialization
	int cap;
	float mpg;
	
	//prompt user for fuel capacity in whole number form and accept input
	cout << "Please enter fuel capacity, in whole rounded gallons, and hit enter. " << endl;
	cin >> cap;

	//prompt user for fuel efficiency in decimal and accept input
	cout << "Please enter fuel efficiency (miles per gallon), in decimal form, and press enter. " << endl;
	cin >> mpg;

	//final math and prompt
	cout << "This vehicle can travel ";
	//static cast to ensure that int is used to pop the decimals off, resulting in the lower integer
	cout << static_cast<int>(cap*mpg);
	cout << " miles without refueling." << endl;

	//pause to keep window open
	system("pause");
	//end program
	return 0;
}
