#include "str_easy.h"

int itc_count_char_in_str(char a, string str)
{
    int i = 0;
    long long i2 = 0;
    while (str[i2] != '\0')
    {
        if(str[i2] == a)
            i ++;
        i2 ++;
    }
    return i;
}
