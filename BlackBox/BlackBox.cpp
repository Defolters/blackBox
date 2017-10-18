#include "blackbox.h"

blackBox::blackBox()
{}

blackBox::~blackBox()
{
}

blackBox::blackBox(Data data_)
{
    conts.push_back(data_);
}

std::pair<int,int> blackBox::Get()
{
    if (conts.size() == 0)
        return ;
    else
        return ((conts.end()--)->get());
}

void blackBox::Add(Data data_)
{
    auto pos = conts.begin();
    while (1)
    {
        if (data_.get().first > pos->get().first || pos == conts.end())
            break;
        pos++;
    }
    conts.insert(pos,data_);
}
