#pragma once
#include <utility>
class Data
{
public:
    Data(int priority, int id);
    ~Data();
	void set(int priority, int id);
	std::pair<int,int> get();
private:
    int priority;
    int id;
};

