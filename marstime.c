#include "marstime.h"

double diffearthmarstime(time_t time1, marstime_t time0) {
    return time1 - time0;
}

double diffmarstime(marstime_t time1, marstime_t time0) {
    return time1 - time0;
}

double diffmarsearthtime(marstime_t time1, time_t time0) {
    return time1 - time0;
}

// TODO: Check for conversion updates. As of Sep 2021, 1.027491252
marstime_t marstime(time_t timer) {
        return timer * 1.027491252; 
}
