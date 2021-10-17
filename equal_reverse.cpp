#include "str_easy.h"

bool itc_equal_reverse(string str)
{
    string str2 = itc_reverse_str(str);
    if(str2 == str)
        return 1;
    return 0;
}
