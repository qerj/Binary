#include <iostream>
#include <bitset>

int main()
{
	unsigned constexpr int booleans = 3;

	std::bitset<booleans> bits;

	bits.set(0, true);
	bits.set(1, false);
	bits.set(2, false);

	if (bits.test(0))
	{
		std::cout << "Bit zero is true\n";
	}
  
	int p2;
	std::cin >> p2;

	if (p2 == 1) {
		bits.set(0, false);
	}

	std::cout << bits.test(0) << std::endl;

	//std::cout << bits.size() << std::endl;
	//std::cout << sizeof(bits) << std::endl;

	return 0;
}
