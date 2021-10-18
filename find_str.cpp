#include "str_easy.h"

int itc_find_str(string str1, string str2)
{
    long long len2 = itc_len(str2);
    int i = 0;
    int out = -1;
    int i2 = 0;
    bool isFind = 0;
    while (str1[i2] != '\0')
    {
        if(str1[i2] == str2[i])
        {
           //cout <<"str1 == str2  ";
            if(len2 == 1)
            {
                isFind = 1;
                out = i2;
            }
            if(i <= len2)
            {
                if(i == 0)
                    out = i2;
                    //cout <<"out = " <<out <<" ";
                i ++;
            }
            if(i == len2 - 1)
            {
                isFind = 1;
            }

        }
        else
        {
            if(isFind == 0)
            {
                i = 0;
                out = -1;
                //cout <<"OUT = " <<out;
            }
        }
        i2 ++;
    }
    if(i < len2 - 1)
        return -1;
    return out;
}
