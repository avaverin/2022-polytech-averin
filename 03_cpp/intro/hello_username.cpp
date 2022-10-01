#include <iostream>

int main()
{
	std::cout << "Enter your name: ";
	std::string username;
	std::cin >> username;
	std::cout << "\nHello, " << username << "!" << std::endl;
	return 0;
}