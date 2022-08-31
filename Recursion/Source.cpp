// Personal project template
#include <iostream>
using namespace std;
//factorial help in Recursion
long long factorial(int num) {
	if (num <= 1)
		return 1;
	return factorial(num - 1) * num;

}
// number fibonacci help in Recursion
int fibonacci(int num) {
	if (num == 0||num == 1)
		return num;
	return fibonacci(num - 2) + fibonacci(num - 1);
}



int main() {
	int n;
	//factorial in Recursion
	/*cout << "Enter Number: ";
	cin >> n;
	cout << n << "!= " << factorial(n) << "\n\n";*/

	//Task 1. fibonacci
	cout << "Task 1.\nEnter fibonacci Number: ";
	cin >> n;
	cout << n << ": " << fibonacci(n) << "\n";
	cout << "First 13 fibonacci Number:\n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
		cout << "\b\b.\n";


	return 0;
}