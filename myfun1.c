#include <math.h>
#include "myfun1.h"

double distance(integer x1, integer y1, integer x2, integer y2) {
    integer x = x1-x2, y=y1-y2;
    return sqrt(pow(x, 2.0) + pow(y,2.0));

}

double area (integer r) {
    return M_PI*r*r;
}