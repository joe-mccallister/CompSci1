//see readme.md for explanation

//add ability for cout and cin processing
#include <iostream>
//namespace std to forego entry of std:: before declarations
using namespace std;

//main function of program
int main() {
	//variable declaration
	int num1;
	int num2;
	int num3;
	int average;

	//variable assignment
	num1 = 115;
	num2 = 29;
	num3 = -15;
	average = (num1 + num2 + num3) / 3;

	//outputting variable results
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << average << endl;

	//pause the window to allow review and interactivity
	system("Pause");
	//final line of program
	return 0;
}
