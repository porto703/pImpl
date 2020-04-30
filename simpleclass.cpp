#include <iostream>
#include "simpleclass.h"

SimpleClass::SimpleClass(int value) : m_value(value)
{

}

void SimpleClass::print_new_value()
{
    calc_new_value();
    std::cout << "New values is: " << m_value << std::endl;
}

/*  If a private function is modified then all dependent modules
 *  (e.g. main.cpp) need to be recompiled as well.
*/
void SimpleClass::calc_new_value()
//int SimpleClass::calc_new_value()
{
    m_value = m_value * 2;
   // return m_value;
}
