#include "bigint.hpp"


bigint &bigint::operator+=(const bigint &other)
{
    std::string result;
    int i = _big.size() - 1;
    int j = other._big.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int x = i >= 0 ? _big[i] - '0' : 0;
        int y = j >= 0 ? other._big[j] - '0' : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
        i--;
        j--;
    }
    std::reverse(result.begin(),result.end());
    _big = result; 
    return (*this);
}

bigint bigint::operator+(const bigint &other)const
{
    bigint result(*this);
    result += other;
    return (result);
}

bigint &bigint::operator++()
{
    bigint n(1);
    *this += n;
    return (*this);
}

bigint bigint::operator++(int)
{
    bigint tmp(*this);
    bigint n(1);
    *this += n;
    return (tmp);
}
//--------------------shifting---------------------

bigint &bigint::operator<<=(unsigned int n)
{
    if (_big != "0")
        _big.append(n,'0');
    return (*this);
}

bigint bigint::operator<<(unsigned int n)
{
    bigint result(*this);
    result <<= n;
    return (result);
}

bigint &bigint::operator>>=(const bigint &other)
{
    const unsigned int size = _big.size();
    const unsigned int  n = std::atol(other._big.c_str());
    size >= n ? _big.erase(size - n):_big="0";
    return (*this);
}
//---------------comparesion------------------

bool bigint::operator<(const bigint &other)const
{
    if (_big.size() != other._big.size())
        return (_big.size() < other._big.size());
    return (_big < other._big);
}

bool bigint::operator>(const bigint &other) const
{
    return (other < *this);
}

bool bigint::operator<=(const bigint &other) const
{
    return !(*this > other);
}
bool bigint::operator>=(const bigint &other) const
{
    return !(*this < other);
}
bool bigint::operator==(const bigint &other) const
{
    return (_big == other._big);
}

bool bigint::operator!=(const bigint &other) const
{
    return (_big != other._big);
}

bigint::bigint():_big("0")
{}

bigint::bigint(unsigned int nbr):_big(std::to_string(nbr))
{}

bigint::bigint(const bigint &other):_big(other._big)
{}

const std::string bigint::get_big() const
{
    return (_big);
}

std::ostream &operator<<(std::ostream &os,const bigint &other)
{
    os << other.get_big();
    return (os);
}