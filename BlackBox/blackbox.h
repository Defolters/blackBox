#ifndef BLACKBOX_H
#define BLACKBOX_H
#include <list>
class blackBox
{
private:
    blackBox();
    blackBox(Data);
    std::list<Data> conts;
public:
    void Add(Data);
    Data Get();
};

#endif // BLACKBOX_H
