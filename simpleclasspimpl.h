#ifndef SIMPLECLASSPIMPL_H
#define SIMPLECLASSPIMPL_H

#include <memory>

class SimpleClassPimpl
{
public:
    SimpleClassPimpl(int value = 0);

    ~SimpleClassPimpl();

    // Copy Constructor and Assignment
    SimpleClassPimpl(const SimpleClassPimpl&);
    SimpleClassPimpl& operator=(const SimpleClassPimpl&);

    // Move Constructor and Assignment
    SimpleClassPimpl(SimpleClassPimpl&&);
    SimpleClassPimpl& operator=(SimpleClassPimpl&&);

    void print_new_value();

private:
    class Impl;
    std::unique_ptr<Impl> pimpl;
};

#endif // SIMPLECLASSPIMPL_H
