#include <iostream>

using namespace std;

void isNumberIsPalindrome(int number)
{
	int n, digit, reverse = 0;
	n = number;
	while( number != 0 ) {
		digit = number % 10;
		reverse = ( reverse *10 ) + digit;
		number = number / 10;
	}
	if( n == reverse )
		cout << "The Number is palindrome";
	else
		cout << "The Number is not palindrome";
}
int main()
{
	int number1;
	cout << "Enter the number which you want to check" << endl;
	cin >> number1;
	isNumberIsPalindrome(number1);
	return 0;
}
