#include <iostream>
#include "simpleclass.h"
#include "simpleclasspimpl.h"

using namespace std;

int main()
{
//    SimpleClass instace1(5);
//    instace1.print_new_value();
//    instace1.print_new_value();
//    instace1.print_new_value();

    SimpleClassPimpl instance2(3);
    SimpleClassPimpl instance3(4);
    instance2.print_new_value();
    //instance2 = std::move(instance3);
    //instance2 = instance3;
    instance2.print_new_value();

    return 0;
}
