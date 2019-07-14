#include "veb_tree.h"

#include <cassert>
#include <iostream>

int main() {
    veb_tree<unsigned int> a(0);

    for(unsigned int i=1; i<=1<<16; ++i) {
        a.the_tree.insert(i);
        std::cout << a.the_tree.predicate(i+1).value() << std::endl;
        assert(a.the_tree.predicate(i+1).value() == i);
    }
}
