#include "str_easy.h"

string itc_even_place(string str)
{
    string out;
    long long i = 0;
    while (str[i] != '\0')
    {
        if(i % 2 == 0)
            out = out + str[i];
        i ++;
    }
    return out;
}
