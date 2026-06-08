#include "vect2.hpp"

vect2::vect2(const vect2 &other)
{
    this->x = other.x;
    this->y = other.y;
}

vect2 &vect2::operator=(const vect2 &other)
{
    if (&other != this)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return (*this);
}


//-------------------------addition-------------------------
vect2 &vect2::operator+=(const vect2 &other)
{
    this->x += other.x;
    this->y += other.y;
    return (*this);
}
vect2 vect2::operator+(const vect2 &other) const
{
    vect2 copy(this->x,this->y);
    return (copy += other);
}

vect2 &vect2::operator-=(const vect2 &other)
{
    this->x -= other.x;
    this->y -= other.y;
    return (*this);
}
vect2 vect2::operator-(const vect2 &other) const
{
    vect2 copy(this->x,this->y);
    return (copy -= other);
}

vect2 &vect2::operator*=(int s)
{
    this->x *= s;
    this->y *= s;
    return (*this);
}
vect2 vect2::operator*(int s) const
{

    vect2 copy(*this);

    copy.x *= s;
    copy.y *= s; 
    return (copy);
}
//------------------------------------------------------------------------
vect2 &vect2::operator++()
{
    vect2 v2(1,1);
    return (*this += v2);    
}

vect2 vect2::operator++(int)
{
    vect2 tmp(*this);
    vect2 v2(1,1);
    *this += v2;
    return (tmp);
}

vect2 &vect2::operator--()
{
    vect2 v2(1,1);
    return (*this -= v2);    
}

vect2 vect2::operator--(int)
{
    vect2 tmp(*this);
    vect2 v2(1,1);
    *this -= v2;
    return (tmp);
}

//-----------------------------------------------------------------------
int &vect2::operator[](int index)
{
    if (index == 0)
        return (x);
    return (y);
}

int vect2::operator[](int index)const
{
    if (index == 0)
        return (x);
    return (y);
}
bool vect2::operator==(const vect2 &other)
{
    return (this->x == other.x && this->y == other.y);
}

bool vect2::operator!=(const vect2 &other)
{
    return (this->x != other.x || this->y != other.y);
}

vect2 vect2::operator-() const
{
    vect2 copy(*this);
    copy.x = -copy.x;
    copy.y = -copy.y;
    return (copy);
}

vect2 operator*(int s,const vect2 &other)
{
    vect2 copy(other);
    copy *= s;
    return (copy);
}
//-------------------------------------comparesion-----------------------

// bool vect2::operator<(const vect2 &other)
// {
//     if (this->x != other.x)
//         return (this->x )
// }

int vect2::get_x() const
{
    return (x);
}
int vect2::get_y() const
{
    return (y);
}

std::ostream &operator<<(std::ostream &os,const vect2 &other)
{
    os << other.get_x();
    os << ",";
    os << other.get_y();
    return (os);
}