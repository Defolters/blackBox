#include "Data.h"
#include <utility>


Data::Data(int priority, int id)
{
	this->priority = priority;
	this->id = id;
}


Data::~Data()
{
}
void Data::set(int priority, int id)
{
	this->priority = priority;
	this->id = id;
}

std::pair<int, int> Data::get()
{
	std::pair <int, int> fpair = std::pair<int, int>(priority, id);
	return fpair;
}