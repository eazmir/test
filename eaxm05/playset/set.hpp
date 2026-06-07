#include "bag.hpp"
#include "searchable_bag.hpp"
class set
{
    public:
        void insert(int value);
        void insert(int *arr,int value);
        void print();
        void clear();
        searchable_bag get_bag() const;
        // bool has(int value);
    private:
        searchable_bag *_bag;
        
};