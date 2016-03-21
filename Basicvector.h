#ifndef Basic_Vector_H
#define Basic_Vector_H

#include <string>
class BasicVector{
public:
  BasicVector(int capc = 10);
  T& operator[](int i)
    { return a[i];}
    
private:
T* a;
int capacity;
};

#endif
