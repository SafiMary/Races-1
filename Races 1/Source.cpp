#include <iostream>
#include <string>
#include <windows.h>
#include "Car.h"
#include "Bike.h"

void races(Car num1, Bike num2, std::string& road) {
	if (num1.getSpeed() > num2.getSpeed()&& road == num1.getRoad()) {
		std::cout << num1.getModel() << " приехал быстрее\n";
	}
	else if (num1.getSpeed() == num2.getSpeed() && road == num2.getRoad()) {
		std::cout << num1.getModel() << " и " <<
			num2.getModel() << " приехали одновременно\n";
	}
	else if (num1.getSpeed() < num2.getSpeed() && road == num2.getRoad()){
		std::cout << num2.getModel()  << " приехал быстрее\n";
	}

};

	
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a;
	Bike b;
	races(a, b, a.getRoad());
	a.setSpeed(180);
	races(a, b, a.getRoad());
	b.setSpeed(230);
	races(a, b, b.getRoad());

	
}