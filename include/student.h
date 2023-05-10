//
// Created by jyx on 5/9/23.
//

#ifndef CMAKE_STUDENT_H
#define CMAKE_STUDENT_H

typedef struct{
    short age;
    char* name;
}student;
char* get_name(student* stu);
short get_age(student* stu);
#endif //CMAKE_STUDENT_H
