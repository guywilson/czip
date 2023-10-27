#include "version.h"

#define __BDATE__      "2023-10-27 22:40:33"
#define __BVERSION__   "0.1.001"

const char * getVersion(void) {
    return __BVERSION__;
}

const char * getBuildDate(void) {
    return __BDATE__;
}
