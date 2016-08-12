#pragma once
#include <cstdint>

class Info_Train{
public:
	const static int speed = 70;
	uint16_t number;
	uint16_t km;
	//By haurs
	float plannedTravelTime;
	float delay = 0;
};