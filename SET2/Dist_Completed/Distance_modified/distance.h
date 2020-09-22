#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED

class Distance{
    int m_feets;
    int m_inches;
public:
    Distance();
    Distance(int ,int);
    int feets();
    int inches();
    Distance& operator+(const Distance&);
    Distance& operator-(const Distance&);
    Distance& operator+(int);
    Distance& operator-(int);
    Distance& operator++();
    Distance& operator++(int);
    bool operator==(const Distance&);
    bool operator<(const Distance&);
    bool operator>(const Distance&);
    void display();
};

#endif // DISTANCE_H_INCLUDED
