#include <debug.h>

void Debug::log(const char* c)
{
	if (DEBUG_OUTPUT)
		printf("%s\n", c);
}

void Debug::log(std::stringstream& ss)
{
	if (DEBUG_OUTPUT)
		printf("%s\n", ss.str().c_str());
}

void Debug::log(std::string& s)
{
	if (DEBUG_OUTPUT)
		std::cout << s << std::endl;
}


