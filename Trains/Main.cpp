#include <iostream>
#include <vector>
#include "File.h"
#include "Train.h"
#define SUCCESS 0

Info_Train createTrain(){
	Info_Train info_train;
	system("cls");
	
	std::cout << "Daj number pociagu: ";
	std::cin >> info_train.number;

	std::cout << "Daj planowany czas przejazdu w godzinach: ";
	std::cin >> info_train.plannedTravelTime;

	std::cout << "Daj dlugosc trasy w km: ";
	std::cin >> info_train.km;

	return info_train;
}

int menu(){
	std::cout << "0 - Wyjdz\n1 - Dodaj pociag\n2 - Znajdz opoznione pociagi\n3 - Oblicz sume opoznien wszystkich pociagow\n";
	int wybor;
	std::cin >> wybor;
	return wybor;
}

auto main(void)->int{
	typedef std::vector<Info_Train> Trains;
	Trains trains;
	File file("wynik.txt");
	int choose  = 0;
	
	do{
		system("cls");
		choose = menu();

		switch(choose){
		case 0: break;
		case 1: trains.push_back(createTrain()); break;
		case 2: Train::findExceedDelayedTrain(trains); break;
		case 3: Train::DelayedTrains(trains); break;
		default:
		break;
		}
	} while(choose);

	file.save(trains);
	
	return SUCCESS;
}