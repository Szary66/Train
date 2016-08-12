#include "Train.h"

Train::Trains Train::findExceedDelayedTrain(const Trains& trains){
	Trains delayTrain;
	for(Info_Train train:trains){
		if(chceckExceedDelay(train))
			delayTrain.push_back(train);
	}
	return delayTrain;
}

bool Train::chceckExceedDelay(const Info_Train & train){
	float realTime = (float)train.km / train.speed;
	if(realTime > train.plannedTravelTime*1.1) // 1.1 is 10% reserve of time 
		true;
	return false;
}

//float Train::DelayedTrains(const Trains & trains){
//	static int size = trains.size() - 1;
//	if(size > 0){
//		--size;
//		return trains[size].delay + DelayedTrains(trains);
//	}
//
//	return trains[size].delay;
//}

float Train::DelayedTrains(const Trains & trains){
	float sum = 0;
	for(auto train : trains){
		sum += train.delay;
	}
	return sum;
}

