#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int i)
{
    long long len = itc_len(str1);
    long long len2 = itc_len(str2);
    if(i < 0)
        return "-1";
    string out = "";
    int b = 0;
    int c = 0;
    while (str1[b] != '\0')
    {
        if(b >= i && c < len2)
        {
            out = out + str2[c];
            c ++;
        }
        else
        {
            if(b < i || b >= len2)
                out = out + str1[b];
            b ++;
        }
        //b ++;
    }
    return out;
}
