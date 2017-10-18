#include "blackbox.h"

blackBox::blackBox()
{}

blackBox::blackBox(Data data_)
{
    conts.push_back(data_);
}

Data blackBox::Get()
{
    if (conts.size() == 0)
        return ;
    else
        return (conts[conts.size()-1]);
}

void blackBox::Add(Data data_)
{
    auto pos = conts.begin();
    while (1)
    {
        if (data_.priority > pos->priority)
            break;
        pos++;
    }
    conts.insert(pos,data_);
}
