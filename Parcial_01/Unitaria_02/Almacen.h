#include <vector>

template<class T>
class Almacen {
public:
  Almacen(int c)
  {
    std::vector<T> data(c);
    capacity = c;
  }
  Almacen()
  {
    std::vector<T> data(10);
    capacity = 10;
  }
  int getCapacity()
  {
    return capacity;
  }
  void addFront(T value)
  {
    data.insert(data.begin(),value);
    capacity++;
  }
  void addBack(T value)
  {
    data.push_back(value);
    capacity++;
  }
  bool empty()
  {
    if (data.size()<=0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
private:
  int capacity = 0;

};
