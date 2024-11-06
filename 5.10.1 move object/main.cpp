#include <iostream>
#include <vector>


template<class T>
void move_vectors(T& obj1, T& obj2)
{
	T obj3 = std::move(obj1);
	obj1 = std::move(obj2);
	obj2 = std::move(obj3);
}




int main() {
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two = {"111"};

	std::cout << one[0] << std::endl;
	std::cout << two[0] << std::endl;
	move_vectors(one, two);
	std::cout << one[0] << std::endl;
	std::cout << two[0] << std::endl;
	return 0;
}