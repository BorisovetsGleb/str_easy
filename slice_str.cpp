#include "str_easy.h"

string itc_slice_str(string str, int start, int endd)
{
    long long len = itc_len(str);
    int end2 = start;
    start = endd;
    string out = "";
    int i = start - 1;
    if(start > end2)
        return str;
    while (i <= (end2 - 1))
    {
        if(i < len)
        {
            out = out + str[i];
            i ++;
        }
        else
            break;
    }
    return out;
}
