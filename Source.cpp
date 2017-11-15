#pragma once
#include <string>
#include <iostream>
#include "Max.h"



int main(void)
{
	int a = 5, b = 15, c = 10;
	std::cout << max<int>(a, b, c) << std::endl;

	std::string d = "Yossef", e = "Yoss", f = "Yossefkuszer";
	std::cout << max<std::string>(d, e, f) << std::endl;

	
	return 0;
}