#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double stro = 0, prop = 0;
    double i = 0;
    double out = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            prop = prop + 1;
        if(str[i] >= 'a' && str[i] <= 'z')
            stro = stro + 1;
        i ++;
    }
    out = stro / prop;
    return out;
}
