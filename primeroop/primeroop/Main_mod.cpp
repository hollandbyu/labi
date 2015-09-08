#include "stdafx.h"
#include <iostream>
#include "MyVector.h"
#include <ctime>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{   
    setlocale(LC_CTYPE, "RUSSIAN");
    Vector a;
    a.Add_size();
    a.Massive();
    a.Sum();
    a.Element();
    Vector b = Vector(a);
    a.Plus();
    b.Minus();
	system("pause");
    return 0;
}