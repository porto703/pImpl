#include <iostream>
#include "simpleclasspimpl.h"

class SimpleClassPimpl::Impl
{
public:
    Impl(int value) : m_value(value){}

    void calc_new_value()
    {
        m_value = m_value * 2;
        //return m_value;
    }

    int m_value;
};

// Constructor of the visible class
SimpleClassPimpl::SimpleClassPimpl(int value) : pimpl(new Impl(value)){}

// Destructor of the visible class
SimpleClassPimpl::~SimpleClassPimpl() = default;

// Copy Constructor and Assignment
SimpleClassPimpl::SimpleClassPimpl(const SimpleClassPimpl& old)
    : pimpl(new Impl(*old.pimpl)){}
SimpleClassPimpl& SimpleClassPimpl::operator=(const SimpleClassPimpl& old)
{
    *pimpl = *old.pimpl;
    return *this;
}

// Move Constructor and Assignment
SimpleClassPimpl::SimpleClassPimpl(SimpleClassPimpl&&) = default;
SimpleClassPimpl& SimpleClassPimpl::operator=(SimpleClassPimpl &&) = default;

void SimpleClassPimpl::print_new_value()
{
    pimpl->calc_new_value();
    std::cout << "New values is: " << pimpl->m_value << std::endl;
}
