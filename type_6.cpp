#include <iostream>
#include <cmath>
#include <cstdlib>
#include "type_6.h"

type6::type6(double a1, double b1, double c1) {
	A = a1;
	B = b1;
	C = c1;
}
void type6::Get_answer_podbor() {
	double D = B * B - 4 * A * C;
	if (D < 0) {
		std::cout << "Уравнение не имеет действительных корней" << std::endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-B * i - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		std::cout << "Приближённо, один из корней: " << x << std::endl;
	}
}
