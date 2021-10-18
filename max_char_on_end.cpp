#include "str_easy.h"

int itc_max_char_of_end(string str)
{
    int i1 = 0, i2 = 0, i = 0;
    bool PrIsNum = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '9' && str[i] > '0')
        {
            i1 ++;
            PrIsNum = 1;
            if(i1 > i2)
                i2 = i1;
        }
        else
        {
            PrIsNum = 0;
            i1 = 0;
        }
        i++;
    }
    return i2;
}
