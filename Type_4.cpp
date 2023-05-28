#include <iostream>
#include <cmath>
#include <cstdlib>
#include "type_4.h"

type4::type4(double a1, double c1) {
	A = a1;
	C = c1;
}
void type4::Get_answer_podbor() {
	if ((((-1) * C) / A) < 0) {
		std::cout << "Корней метедом подбора нет" << std::endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		std::cout << "Приближённо, один из корней: " << x << std::endl;
	}
}
