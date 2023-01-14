#include "Bike.h"
#include <string>


Bike::Bike() : _speed(70), _model("Harley"), _road("RED") {}
Bike::~Bike() {}
size_t Bike::getSpeed() {
	return _speed;
}
void Bike::setSpeed(size_t speed) {
	_speed = speed;
}
std::string& Bike::getModel() {
	return _model;
}
void Bike::setModel(std::string model) {
	_model = model;
}
std::string& Bike::getRoad() {
	return _road;
}
void Bike::setRoad(std::string road) {
	_road = road;
}
