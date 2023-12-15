#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    CP::stack<T> temp;
    for (int i = 0; i < b+1; ++i) {
        temp.push(top());
        pop();
    }
    while (!temp.empty()) {
        if (b) push(temp.top());
        push(temp.top());
        temp.pop();
    }
}

#endif