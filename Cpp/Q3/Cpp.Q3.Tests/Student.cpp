#include "pch.h"

#include "Student.h"

int Student::_counter = 0;

Student::Student(std::string name, int age)
{
    _name = name;
    _age = age;

    _counter++;
}

Student::~Student()
{
    _counter--;
}