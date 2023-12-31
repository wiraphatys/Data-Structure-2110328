#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (a > b) std::swap(a,b);
  if (a >= begin() && b+m-1 < end(); && a+m-1 < b && m > 0) {
    while (m--) std::swap(*(a++),*(b++));
    return true;
  } else return false;
}

#endif
