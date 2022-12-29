#include <iostream>

//#define WINTER
#define SPRING
//#define SUMMER
//#define AUTUMN

int main() {
#ifdef WINTER
	std::cout << "WINTER" << std::endl;
#endif
#ifdef SPRING
	std::cout << "SPRING" << std::endl;
#endif
#ifdef SUMMER
	std::cout << "SUMMER" << std::endl;
#endif
#ifdef AUTUMN
	std::cout << "AUTUMN" << std::endl;
#endif
	return 0;
}
