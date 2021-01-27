/* Header Files */
#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) 
{
    /* Local Variable */
    struct Stats s;
    int temp = 0;
    float sum_average = 0;
    
    /* Local Variable Initalization */
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    /* Check the NULL values in number set */
    if((NULL == numberset) && (NO_NUMBER == setlength))
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
        /* Initial Value to Min & Max */
        s.min = numberset[0];
        s.max = numberset[0];
        
        /* Loop to Sum the number set & find the Min & Max */
        for(temp = 0; temp < setlength; temp++)
        {
            /* Sum the Number Set */
            sum_average += numberset[i];
            /* Find Minimum Number */
            if(s.min > numberset[i])
            {
                s.min = numberset[i];
            }
            /* Find Maximum Number */
            if(s.max < numberset[i])
            {
                s.max = numberset[i];
            }
            /* Find Average */
            s.average = sum_average / setlength;
        }
    }
    /* return the Average, Min & Max */
    return s;
}
