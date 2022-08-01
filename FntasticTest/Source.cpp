#include <iostream>
#include <string>
#include <set>
#include <sstream>

std::string convertString(std::string str)
{
	std::stringstream ss;
	std::multiset<char> repetitionsChar;
	for (const auto s : str)
	{
		repetitionsChar.insert(tolower(s));
	}
	for (const auto s : str)
	{
		if (repetitionsChar.count(tolower(s)) == 1)
			ss << '(';
		else
			ss << ')';
	}
	std::string result = ss.str();
	return result;
}
int main()
{
	std::cout << convertString("AsdgXfr") << std::endl;
	std::cout << convertString("lfdAafR") << std::endl;

	std::cout << convertString("din") << std::endl;
	std::cout << convertString("recede") << std::endl;
	std::cout << convertString("Success") << std::endl;
	std::cout << convertString("(( @") << std::endl;
}