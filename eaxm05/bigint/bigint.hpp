#include <iostream>
#include <algorithm>

class bigint
{
    private:
        std::string _big; 
    public:
        bigint();
        bigint(unsigned int big);
        bigint(const bigint &);
        bigint  &operator+=(const bigint &);
        // bigint &operator=(const bigint &);
        bigint  &operator++();
        bigint  operator++(int);
        bigint  operator+(const bigint &)const;

        bigint  operator<<(unsigned int n);
        bigint  &operator<<=(unsigned int n);
        bigint  &operator>>=(const bigint &other);
        
        bool    operator>(const bigint &) const;
        bool    operator<(const bigint &) const;
        bool    operator<=(const bigint &)const;
        bool    operator>=(const bigint &)const;
        bool    operator==(const bigint &)const;
        bool    operator!=(const bigint &)const;

        const std::string get_big()const;

};
std::ostream &operator<<(std::ostream &os,const bigint &other);