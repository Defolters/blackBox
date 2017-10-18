#pragma once
class BlackBox
{
public:
    BlackBox();
    ~BlackBox();
    void Add(Data);
    Data Get();
private:
    std::vector<Data> dataOfBlackBox
};

