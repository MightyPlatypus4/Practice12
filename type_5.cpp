#include <iostream>
#include <cmath>
#include <cstdlib>
#include "type_5.h"

type5::type5(double b1, double c1) {
	B = b1;
	C = c1;
}
void type5::Get_answer_podbor() {
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double temp = abs(0 - B * (i)-C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	std::cout << "����������, ���� �� ������: " << x << std::endl;
}
