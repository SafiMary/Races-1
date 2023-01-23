#include "Car.h"
#include <string>

Car::Car() : _speed(50), _model("Hunday"), _road("Black") {}
Car::~Car() {}
size_t Car::getSpeed() {
	return _speed;
}
void Car::setSpeed(size_t speed) {
	_speed = speed;
}
std::string& Car::getModel() {
	return _model;
}
void Car::setModel(std::string model) {
	_model = model;
}
std::string& Car::getRoad() {
	return _road;
}
void Car::setRoad(std::string road) {
	_road = road;
}   