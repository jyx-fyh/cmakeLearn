//
// Created by jyx on 5/10/23.
//

#ifndef CMAKE_WORK_H
#define CMAKE_WORK_H
#ifdef _WIN32_
#define EXPORT_SYMBOL __declspec(dllexport)
#else
#define EXPORT_SYMBOL
#endif
/************************************************/
EXPORT_SYMBOL
void work();
#endif //CMAKE_WORK_H
