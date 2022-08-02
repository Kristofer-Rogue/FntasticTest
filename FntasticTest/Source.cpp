#include <iostream>
#include <set>
#include <sstream>

/// <summary>
/// Конвертирует исходную строку, в новую строку, где каждый символ заменяется на символ  “(”, если символ встречается только один раз или на “) “, если символ встречается более одного раза.
/// </summary>
/// <param name="str">Исходная строка</param>
/// <returns>Строка из скобок</returns>
std::string convertString(std::string str)
{
	std::stringstream ss;
	std::multiset<char> repetitionsChar;
	for (auto &s : str)
	{
		s = tolower(s);
		repetitionsChar.insert(s);
	}
	for (const auto &s : str)
	{
		repetitionsChar.count(s) == 1 ? ss << '(' : ss << ')';
	}
	return ss.str();
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