#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl;
using std::string; using std::vector;
void bubbleSort(std::vector<int>& intVec) {
    size_t size = intVec.size();
    bool swap = false;

    for (size_t i = 0; i < size - 1; swap = false, ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
           
            if (intVec[j] > intVec[j + 1]) {
                int tmp = intVec[j];

                intVec[j] = intVec[j + 1];
                intVec[j + 1] = tmp;

                swap = true;
            }
        }
        if (!swap) { break; }
    }
}
