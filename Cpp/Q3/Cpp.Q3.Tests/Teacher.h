#pragma once
#include <vector>
#include "Student.h"

class Teacher
{
    std::vector< Student*> _students;

public:
    void add_student(Student* student)
    {
        _students.push_back(student);
    }

    std::string get_job_description()
    {
        if (_students.empty())
            return "Nothing";

        std::string job_desc = "Teaching to: \r\n";
        for (size_t i = 0; i < _students.size(); i++)
        {
            auto student = _students[i];

            job_desc += student->_name;

            if (i < _students.size() - 1)
                job_desc += ", ";
        }

        return job_desc;
    }
};
