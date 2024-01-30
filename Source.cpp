#include <iostream>
#include <string>
#include "Integer.h"
void Print() {
}

//template parameter pack 
template<typename T,typename...Params>
void Print(T &&a, Params&&... args) {
	std::cout << a << std::endl;
	//cout << var1 << endl;
	Print(std::forward<Params>(args)...);
}

int main() {

	Print(1, 3, 6, Integer{4});

	return 0;
}