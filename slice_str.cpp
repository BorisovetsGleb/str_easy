#include "str_easy.h"

string itc_slice_str(string str, int start, int endd)
{
    long long len = itc_len(str);
    //int end2 = start;
    //start = endd;
    string out = "";
    int i = start - 0;
    if(start > endd)
        return str;
    while (i <= (endd))
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
