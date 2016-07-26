#include <hdf5_wrapper.h>
#include <iostream>

using namespace std;

int main() {
  HDF5Wrapper h(string("../data/test.h5"), string("label"));
  vector<double> data(5, 7.77);
  h.write(data);
  data = vector<double>(5, 6.66);
  h.write(data);

  return 0;
}
