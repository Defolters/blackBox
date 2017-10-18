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
    std::list<Data> conts;
public:
    //! Constructor
    blackBox();

    //! Constructor
    /*!
    Create black box with Data
    \param Data
    */
    blackBox(Data);

    //! Destructor
    ~blackBox();

    //! addData
    /*!
    \param Data
    */
    void Add(Data);

    //! get Data
    /*!
    \return Data
    */
    std::pait<int,int> Get();
    };

#endif // BLACKBOX_H
