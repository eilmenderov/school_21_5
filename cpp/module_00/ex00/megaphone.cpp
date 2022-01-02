#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++i])
	{
		int j = 0;
		while (argv[i][j])
			std::cout << (char)std::toupper(argv[i][j++]);
	}
	std::cout << std::endl;
	return (0);
}