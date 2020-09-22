#pragma once

#include <vector>

class Shop
{
    std::vector<int> _commands;
public:
    int _nb_command_pending;

    void add_commands(int nb_command)
    {
        int i = 0;
        while (i < nb_command)
        {
            _commands.push_back(i);
            _nb_command_pending++;
            i++;
        }
    }

    int consume_commands(int nb_command)
    {
        int nb_command_consumed = 0;
        int last_command_consumed = -1;
        while (nb_command_consumed < nb_command)
        {
            if (_commands.empty())
                continue;

            last_command_consumed = _commands[0];
            _commands.erase(_commands.begin());
            _nb_command_pending--;
            nb_command_consumed++;
        }

        return last_command_consumed;
    }
};