#pragma once
#include <string>

class Student
{
public:
    std::string _name;
    int _age;

    static int _counter;

    Student(std::string name, int age);

    ~Student();
};