#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int i)
{
    long long len = itc_len(str1);
    long long len2 = itc_len(str2);
    string out;
    i = i - 1;
    int b = 0;
    int c = 0;
    //cout <<"len1 = " <<len <<" len2 = " <<len2 <<endl;
    while (str1[b] != '\0')
    {
        //cout <<b <<" " <<c;
        if(b >= i && c < len2)
        {
            out = out + str2[c];
            c ++;
            //cout <<" Use 2: " <<c;
        }
        else
        {
            if(b < i || b >= len2)
                out = out + str1[b];
        }
        b ++;
        //cout <<"  ";
    }
    return out;
}
