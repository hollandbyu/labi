#pragma once
class Vector
{
    int size;
    int *arr;
    
public:
    
    int Add_size();
    int Massive();
    int Sum();
    int Element();
    void Plus();
    void Minus();
    Vector(void);
    Vector(int size);
    Vector(const Vector&);
    ~Vector();
 
};