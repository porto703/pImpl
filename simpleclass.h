#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H


class SimpleClass
{
public:
    SimpleClass(int value = 0);

    void print_new_value();

private:
    void calc_new_value();

    int m_value;
};

#endif // SIMPLECLASS_H
