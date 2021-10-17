#include "str_easy.h"

string itc_reverse_str(string str)
{
    long long len = itc_len(str) - 1;
    long long i = 0;
    string out;
    while(i <= len)
    {
        //cout <<str[len - i] <<" " <<len - i <<" ";
        out = out + str[len - i];
        i ++;
    }
    //cout <<" ";
    return out;
}
