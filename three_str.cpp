#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
    int nomOfFhod = 0;
    string out = str1;
    long long len2 = itc_len(str2);
    while (nomOfFhod != -1)
    {
        nomOfFhod = itc_find_str(out, str2);
        if(nomOfFhod != -1)
            out = itc_cmp_str(out, str3, nomOfFhod + 1);
    }
    return out;
}
