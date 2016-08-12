#pragma once
#include <vector>
#include <algorithm>
#include "Info_Train.h"
class Train{
public:
	typedef std::vector<Info_Train> Trains;
	static Trains findExceedDelayedTrain(const Trains& trains);
	static bool chceckExceedDelay(const Info_Train& train);
	static float DelayedTrains(const Trains& trains);
};
