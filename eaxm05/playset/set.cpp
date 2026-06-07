#include "set.hpp"

void set::insert(int value)
{
    _bag->insert(value);
}

void set::insert(int *arr,int value)
{
    _bag->insert(arr,value);
}

void set::print()
{
    _bag->print();
}

void set::clear()
{
    _bag->clear();
}

searchable_bag set::get_bag() const
{
    return ()
}