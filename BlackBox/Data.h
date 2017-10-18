#ifndef DATA_H
#define DATA_H
#include <utility>

//!  A class that implements Data. 
/*!
This class has some getter and setter to control data.
*/
class Data
{
public:
    //! Constructor
    /*!
    Create black box with Data
    \param priority
    \param id
    */
    Data(int priority, int id);

    //! Destructor
    ~Data();

    //! addData
    /*!
    Set priority and id into Data
    \param Data
    \param id
    */
	void set(int priority, int id);

    //! get
    /*!
    get pair of data
    \return pair<int,int>
    */
	std::pair<int,int> get();
private:
    int priority; /*!< priority of id. */
    int id; /*!< id of user. */
};
#endif
