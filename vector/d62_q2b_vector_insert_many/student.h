#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  newCap = 2 * (mSize + data.size());
  T *arr = new T[newCap]();
  // it = idx in new arr
  int it = 0, idx = 0, d = 0;
  sort(data.begin(), data.end());
  for (; it < mSize+data.size(); ++it) {
    if (d != int(data.size()) && data[d].first == it - d) {
      arr[it] = data[d].second;
      ++d;
      continue;
    }
    arr[it] = mData[idx];
    ++idx;
  }
  delete [] mData;
  mData = arr;
  mSize += data.size();
  mCap = newCap;
}

#endif
