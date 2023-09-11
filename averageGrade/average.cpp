#include <iostream>
using namespace std; //for std::cout and std::endl;

int main() {
	double grade1;
	double grade2;
	double sumOfGrades;
	double averageOfGrades;

	grade1 = 85.5;
	grade2 = 97.0;
	sumOfGrades = grade1 + grade2;
	averageOfGrades = sumOfGrades / 2.0;

	cout << "The average grade is " << averageOfGrades << endl;

	return0;
}