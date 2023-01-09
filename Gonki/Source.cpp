#include"Auto.h""


void race(Auto a, Moto m, std::string transport) {
	
	if (transport == "CAR") {
		float midleSpeed_a = 0.8 * a.getMaxSpeed();
		float midleSpeed_m = 0.6 * m.getMaxSpeed();
		if (midleSpeed_a - midleSpeed_m > 0)
			std::cout << "Выиграл автомобиль";
		else
			std::cout << "Выиграл мотоцикл";
	}
	if (transport == "BIKE") {
		float midleSpeed_a = 0.6 * a.getMaxSpeed();
		float midleSpeed_m = 0.8 * m.getMaxSpeed();
		if (midleSpeed_m - midleSpeed_a > 0)
			std::cout << "Выиграл мотоцикл";
		else
			std::cout << "Выиграл автомобиль";
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	std::string car = "CAR";
	std::string bike = "BIKE";

	Auto a;
	a.setAcceleration(7.2);
	a.setMaxSpeed(280);
	Moto b;
	b.setAcceleration(4.5);
	b.setMaxSpeed(240);
	race(a, b, bike);
	
	return 0;
}