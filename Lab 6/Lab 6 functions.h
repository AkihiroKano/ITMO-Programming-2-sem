#ifndef BASICS_OF_PROGRAMMING_CPP_6_LABA_H
#define BASICS_OF_PROGRAMMING_CPP_6_LABA_H

template<typename Iterator, typename Predicate>
bool any_of(Iterator begin, Iterator end, Predicate predicate) {
    for (Iterator i = {begin}; i != end; ++i) {
        if (predicate(*i)) return true;
    }
    return false;
}

template<typename Iterator, typename Predicate>
bool one_of(Iterator begin, Iterator end, Predicate predicate) {
    int counter = 0;
    for (Iterator i{begin}; i != end; ++i) {
        if (predicate(*i)) ++counter;
        if (counter > 1) return false;
    }
    if (counter == 1) return true;
    else return false;
}

template<typename Iterator, typename Object>
Iterator find_not(Iterator begin, Iterator end, Object object) {
    for (Iterator i{begin}; i != end; ++i) {
        if (*i != object) return i;
    }
    return end;
}

#endif //BASICS_OF_PROGRAMMING_CPP_6_LABA_H