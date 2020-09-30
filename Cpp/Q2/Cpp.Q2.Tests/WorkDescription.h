#pragma once

#include <string>
#include <utility>

//This enum should only be used in WorkDescription.
//In the future, this enum could be increased to include NoEffort.
enum EWorkDescriptionType
{
    LowEffort,
    HardOnBack,
    Intellectual
};

class WorkDescription
{
private:
    std::string _prefix;
    std::string _intellectual_extra_info;
    EWorkDescriptionType _type;

public:
    //intellectual_extra_info parameter is only valid for intellectual and has no meaning for any other types.
    WorkDescription(const std::string& prefix, const EWorkDescriptionType& type, std::string intellectual_extra_info = "") :
        _prefix(prefix), _intellectual_extra_info(intellectual_extra_info), _type(type)
    {
    }

    //Do some logic regardless of the type of work description.
    int add(int a, int b)
    {
        return a + b;
    }

    std::string get_description()
    {
        std::string description;
        if(_type== LowEffort)
        {
            description = _prefix + "Low Effort";
        }
        else
        {
            if(_type == HardOnBack)
            {
                description = _prefix + "Hard On Back";
            }
            else
            {
                if(_type == Intellectual)
                {
                    description = _prefix + "Intellectual " + _intellectual_extra_info;
                }
            }
        }

        return description;
    }

    //Do some processing but only for intellectual.
    int do_intellectual_only_calculation()
    {
        if (_type == Intellectual)
        {
            //Imagine a 400 lines of code to get this value.
            return 42;
        }

        throw std::exception("This function is only valid for intellectual instance.");
    }

    //Do some processing but only for LowEffort.
    int do_low_effort_only_calculation()
    {
        if (_type == LowEffort)
        {
            //Imagine a 400 lines of code to get this value.
            return 963;
        }

        throw std::exception("This function is only valid for low effort instance.");
    }

};