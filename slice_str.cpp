#include "str_easy.h"

string itc_slice_str(string str, int start, int endd)
{
    long long len = itc_len(str);
    int i = start - 1;
    string out;
    if(start > endd)
        return "-1";
    while (i <= endd)
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
