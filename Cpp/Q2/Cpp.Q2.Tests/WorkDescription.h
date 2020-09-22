#pragma once

#include <string>
#include <utility>

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
    WorkDescription(const std::string& prefix, EWorkDescriptionType type, std::string intellectual_extra_info = "") :
        _prefix(prefix), _intellectual_extra_info(intellectual_extra_info), _type(type)
    {
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

};