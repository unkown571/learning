#include <iostream>
#include <string>
#include <unistd.h>
int main()
{
	const std::string passage = "hhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldelloworld好吧就这样吧";
	for (std::string::const_iterator i = passage.begin(); 
			i != passage.end();
			++i)
	{
		std::cout << *i << std::flush;
		usleep(80000);
	}
	std::cout << std::endl;
	std::cout << sizeof(bool) << std::endl;
}
