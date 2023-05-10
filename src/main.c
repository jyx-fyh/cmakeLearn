#include <stdio.h>
#include "student.h"
#include "myMath.h"
#include "play.h"
int main() {
    student stu1 = {.name="Jack", .age=18};
    student stu2 = {.name="Mike", .age=20};
    printf("The oldest was %hd years old.\n", max(get_age(&stu1), get_age(&stu2)));
    sing();
    dance();
    return 0;
}
