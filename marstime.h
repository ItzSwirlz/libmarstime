#include <stdlib.h>
#include "time.h"

// Broken down calendar time type
struct marstm {
  int marstm_sec; // seconds
  int marstm_min; // minutes
  int marstm_hour; // hour
  int marstm_msol; // day of month
  int marstm_mon; // month of year
  int marstm_year; // years since 1900
  int marstm_wsol; // day in the week
  int marstm_ysol; // day in year
};

typedef int marstime_t; // To store *mars* time since unix epoch

marstime_t marstime(time_t);
double diffearthmarstime(time_t, marstime_t);
double diffmarstime(marstime_t, marstime_t);
double diffmarsearthtime(marstime_t, time_t);
