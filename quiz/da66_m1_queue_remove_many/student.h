#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  T *arr = new T[mCap]();
  sort(pos.begin(), pos.end());
  size_t i = 0, idx = 0;
  for (int idx = 0; idx < mSize; ++idx) {
    if (i < pos.size() && pos[i] == idx)
    {
      ++i;
      continue;
    }
    arr[idx - i] = mData[(mFront + idx) % mCap];
  }
  delete[] mData;
  mData = arr;
  mSize = mSize - pos.size();
  mFront = 0;
}

#endif
