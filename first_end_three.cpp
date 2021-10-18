#include "str_easy.h"

void itc_first_end_three(string str)
{
    long long len = itc_len(str);
    //cout <<str;
    long long i = 0;
    //std::cout <<len;
    if(len <= 5)
    {
        while(i < len)
        {
            std::cout <<str[0];
            i ++;
        }
    }
    if(len > 5)
    {
        std::cout <<str[0] <<str[1] <<str[2] <<str[len - 3] <<str[len - 2] <<str[len - 1];
    }
}
