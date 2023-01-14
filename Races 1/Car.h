#pragma once
#include <string>

class Car  {
public:
	Car();
	~Car();
	size_t getSpeed();
	void setSpeed(size_t speed);
	std::string& getModel();
	void setModel(std::string model);
	std::string& getRoad();
	void setRoad(std::string road);
private:
	size_t _speed;
	std::string _model;
	std::string _road;

};
