#include <iostream>
using namespace std;

int num;


int main() {
	cin >> num;
	if (num % 2 == 0) 
		cout << "Bob";
	else
		cout << "Alice";

	return 0;
}