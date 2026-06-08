#pragma once

#include "bag.hpp"
#include "searchable_bag.hpp"
#include <cstring>

class set
{
    public:
        set(searchable_bag &bag):_bag(&bag){}
        void insert(int value);
        void insert(int *arr,int value);
        void print();
        void clear();
        const searchable_bag &get_bag() const;
        bool has(int value)const;
    private:
        searchable_bag *_bag;
        
};