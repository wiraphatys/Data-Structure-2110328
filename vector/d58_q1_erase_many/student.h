#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  T *arr = new T[mCap]();
  int i = 0; p = 0;
  for (; i < mSize; ++i) {
    if (pos[p] == i && p != pos.size()) {
      ++p;
      continue;
    }
    arr[i-p] = mData[i];
  }
  delete [] mData;
  mData = arr;
  mSize -= pos.size();
}

#endif
