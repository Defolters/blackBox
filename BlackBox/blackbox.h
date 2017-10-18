#ifndef BLACKBOX_H
#define BLACKBOX_H
#include "Data.h"
#include <list>

//!  A class that implements black box. 
/*!
This class has some getter and setter to control box.
*/
class blackBox
{
private:
    //! Constructor
    blackBox();
    //! Destructor
    ~blackBox();
    blackBox(Data);
    std::list<Data> conts;
public:
    void Add(Data);
    Data Get();
};

#endif // BLACKBOX_H
