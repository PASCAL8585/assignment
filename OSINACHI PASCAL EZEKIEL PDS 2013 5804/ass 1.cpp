#include <iostream>
using namespace std;

  int number1$;
  int number2$;
  
int main ()
{
	int number1;
    cout <<"Enter Number: ";
	cin >>number1;
	int number2 = number1;
	
	if (number1 % 2 == 0)
	cout << number1 << "it is an even number";
	
    else
	cout << number1 << " is an odd number";
	return 0;
}
