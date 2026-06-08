#include <iostream>

class vect2
{
    private:
        int x;
        int y;
    public:
        vect2():x(0),y(0){}
        vect2(int x,int y):x(x),y(y){}
        vect2(const vect2 &other);

        vect2 &operator=(const vect2 &other);
        vect2 &operator+=(const vect2 &other);
        vect2 operator+(const vect2 &other) const;
        vect2 operator-(const vect2 &other)const;
        vect2 &operator-=(const vect2 &other);
        vect2 operator*(int s)const;
        vect2 &operator*=(int s);

        vect2 operator-()const;
        vect2 &operator++();
        vect2 operator++(int);
        vect2 &operator--();
        vect2 operator--(int);

        bool operator==(const vect2 &other);
        bool operator!=(const vect2 &other);
       

        int &operator[](int);
        int operator[](int)const;

        int get_x()const;
        int get_y()const;
};

vect2 operator*(int x,const vect2 &other);
std::ostream &operator<<(std::ostream &os,const vect2 &other);
