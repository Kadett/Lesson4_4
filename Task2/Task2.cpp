#include "Task2.h"

void initVectorRandom(std::vector<int> &v, uint32_t max_number, size_t size) {
    srand(time(0));
    v.clear();
    v.reserve(size);
    for (int i = 0; i < size; ++i) {
        v.push_back(rand() % max_number);
    }
}

int countUniqueNumbers(std::vector<int> &vector){
    std::set<int> s;
    for(auto &i : vector){
        s.insert(i);
    }
    return s.size();
}