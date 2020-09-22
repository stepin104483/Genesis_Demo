#ifndef DISTANCE_DEMO_H_INCLUDED
#define DISTANCE_DEMO_H_INCLUDED
class Dist
{
private:
    double feet;
    double inch;
public:
    Dist();
    Dist (int,int);
    int get_feet()
    {
        return feet;
    }
    int get_inch()
    {
        return inch;
    }
    Dist operator + (const Dist & i)
    {
        int F_feet = feet + i.feet;
        int F_inch = inch +i.inch;
        return Dist(F_feet,F_inch);
    }
    Dist operator - (const Dist & j)
    {
        int F_feet = feet - j.feet;
        int F_inch = inch - j.inch;
        return Dist(F_feet,F_inch);
    }

};


#endif // DISTANCE_DEMO_H_INCLUDED
