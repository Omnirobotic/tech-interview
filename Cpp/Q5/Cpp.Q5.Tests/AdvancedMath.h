#pragma once

class AdvancedMath
{
    int mean(int* array, int Size)
    {
        int i = 0;
        int Mean = 0;
        while (1)
        {
            Mean = Mean + array[i];
            if(i >= Size)
                break;
        }
        return Mean / i;
    }
};