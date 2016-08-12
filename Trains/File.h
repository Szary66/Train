#pragma once
#include <fstream>
#include <vector>
#include "Info_Train.h"

struct File{
	File(std::string path);
	typedef std::vector<Info_Train> Trains;
	void save(const Trains& trains)const;
	Trains load();

	void setPath(std::string path);
	const std::string& getPath()const;
private:
	std::string path;
};

