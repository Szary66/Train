#include "File.h"

File::File(std::string path): path(path){}

void File::save(const Trains & trains)const {
	std::ofstream of(path.c_str());

	if(of.good()){
		for(Info_Train train: trains){
			of << train.number << " " << train.km << " " << train.delay<<"\n";
		}
	}
	of.close();
}

File::Trains File::load(){
	Trains trains;
	std::ifstream inf(path.c_str());

	while(inf.good()){
		Info_Train train;
		inf >> train.number;
		inf >> train.km;
		inf >> train.delay;
	}


	return trains;
}

void File::setPath(std::string path){
	this->path = path;
}

const std::string &File::getPath() const{
	return path;
}
