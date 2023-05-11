#include <stdio.h>
#include "student.h"
#include "play.h"
#include "work.h"
#include "config.h"

#ifdef USE_MYMATH
#include "myMath.h"
#else
#include "3rdMath.h"
#endif

int main() {
    student stu1 = {.name="Jack", .age=18};
    student stu2 = {.name="Mike", .age=20};
    printf("VERSION %d.%d\n",cmake_VERSION_MAJOR, cmake_VERSION_MINOR);
#ifdef USE_MYMATH
    printf("use myMath.h\n");
#else
    printf("use 3rdMath.h\n");
#endif
    printf("The older age is %d.\n", max(get_age(&stu1), get_age(&stu2)));
    sing();
    dance();
    work();
    return 0;
}
