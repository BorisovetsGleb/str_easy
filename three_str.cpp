#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
    string out = str1;
    int nomOfFhod = itc_find_str(out, str2);
    long long len2 = itc_len(str2);
    str2 = itc_slice_str(str2, 0, len2 - 1);
    //cout <<" len2 = " <<len2 <<endl;
    //cout <<"nomOfFhod = " <<nomOfFhod <<" ";
    while (nomOfFhod != -1)
    {
        nomOfFhod = itc_find_str(out, str2);
        if(nomOfFhod != -1)
            out = itc_cmp_str(out, str3, nomOfFhod);
    }
    return out;
}
