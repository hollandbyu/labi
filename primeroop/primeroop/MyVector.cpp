#include "StdAfx.h"
#include "MyVector.h"
#include <iostream>
#include <ctime>
#include <locale>
using namespace std;
 
 
int Vector::Add_size() // ������ ������
{   
    cout<<"������� ������: ";
    cin>>size;
    return size;
}
int Vector::Massive()
{   
    this->size=size;
    arr = new int [size];
    srand(time(0));
        cout<<"������: ";
    for (int i = 0; i < size; i++)
{
arr[i] = rand()%100;
cout << arr[i]<<" ";
    }
    cout<<endl;
    return arr[size];
}
int Vector::Sum() //����� ���������
{   
    int sum=0;
    for(int i = 0;i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<"�����= "<<sum<<endl;
    return sum;
}
int Vector::Element() // ����� ��-���������
{   
    int i;
    char a;
    cout<<"������� ����� ��-�, ������� ����� �������: ";
    cin>>i;
    cout<<"��� ��-�: "<<arr[i-1]<<endl;
    cout<<"����������? (y/n): ";
    cin>>a;
    while (a=='y') 
    {
    cout<<"������� ����� ��-�, ������� ����� �������: ";
    cin>>i;
    cout<<"��� ��-�: "<<arr[i-1]<<endl;
    cout<<"����������? (y/n): ";
    cin>>a;
    }
    if (a=='n') return 0;
    return arr[i-1];
}
void Vector::Plus() //�������� �� ��������
{
    int scalar;
    cout<<"������� ������ ��� �����: ";
    cin>>scalar;
    for (int i=0;i<size;i++)
    {
        arr[i]=scalar+arr[i];
        cout<<arr[i]<<" ";
    }
    
}
void Vector::Minus()//��������� �� ��������
{
    int scalar;
    cout<<"\n������� ������ ��� ��������: ";
    cin>>scalar;
    for (int i=0;i<size;i++)
    {
        arr[i]=arr[i]-scalar;
        cout<<arr[i]<<" ";
    }
    
}
Vector::Vector(void)
{
    cout<<"����� ������������ ������������"<<endl;
}
Vector::Vector(int size)
{
    arr =*new int *[size];
}
 
Vector::Vector(const Vector &rVec)
{
size = rVec.size;
arr = new int[size];
for(int i = 0; i<size;i++)
{
arr[i] = rVec.arr[i];
}
}
 
Vector::~Vector(void)
{   
    cout<<"����� �����������"<<endl;
}