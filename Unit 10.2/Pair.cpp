#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

int main() {
    Pair<int, double> myPair(10, 3.14);
    std::cout << "First: " << myPair.getFirst() << std::endl;
    std::cout << "Second: " << myPair.getSecond() << std::endl;

    return 0;
}


