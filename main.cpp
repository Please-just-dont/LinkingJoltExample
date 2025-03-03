

#include <exception>
#include <iostream>

int main()
{

	std::set_terminate([]() {

		std::cout << "=========Terminate handler called!!!==============\n";
		std::exit(0);

		});


	std::cout << "About to call std::terminate()\n";
	std::terminate();

	return 0;
}