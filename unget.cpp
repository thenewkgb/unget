// demo
// understanding unget()
// taken from chap_7 principles & practice

#include <iostream>

int main(int argc, char *argv[])
{
	char ch {};
	double d {};
	
	std::cin >> ch;
	std::cin.unget();
	std::cin >> d;
	std::cout << ++d;
}
