#include "easyfind.hpp"

int main() {

    srand(time(NULL));
    int number = rand() % 100;
    std::vector<int> vector;
    vector.reserve(30);
    for (int i = 0; i < 30; i++)
        vector.push_back(rand() % 100);
    for (int i = 0; i < 30; i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl;
	std::cout << "search: " << number << std::endl;
    std::vector<int>::iterator it = easyfind(vector, number);
	if (*it != number)
		std::cout << "match not found: " << number << std::endl;
	else
		std::cout << "match found: " << number << std::endl;
    return (0);
}