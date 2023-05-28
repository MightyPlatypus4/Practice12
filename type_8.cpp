#include <iostream>
#include <cmath>
#include "type_8.h"

type8::type8(double a1, double b1) {
	A = a1;
	B = b1;
}
void type8::Get_answer_podbor() {
	double min = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		if (i != 0) {
			double temp = abs(0 - A * i * i - B * (i));
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
	}
	std::cout << "Приближённо, один из корней: " << x << std::endl;
}
