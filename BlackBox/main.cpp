#include <iostream>
#include "blackbox.h"

int main()
{
    blackBox bb = blackBox(Data(1,0));
    bb.Add(Data(5,1));
    std::cout << bb.Get().first << " " << bb.Get().second << std::endl;
    std::cout << bb.Get().first << " " << bb.Get().second << std::endl;
    return 0;
}
