#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double stro, prop;
    double i = 0;
    double out;
    while (str[i] != '\0')
    {
        if(str[i] > 65 && str[i] < 90)
            prop ++;
        if(str[i] > 97 && str[i] < 122)
            stro ++;
        i ++;
    }
    out = prop / stro;
    return out * 100;
}
