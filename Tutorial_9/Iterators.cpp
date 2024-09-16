#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterator declaration
    std::vector<int>::iterator it;
    // Constant iterator: read-only
    std::vector<int>::const_iterator cit;
    // Using reverse iterator to traverse the vector in reverse order
    std::vector<int>::reverse_iterator rit;

    // Looping through the vector using an iterator
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";  // Dereference the iterator to access the element
    }
    
    // Inserting element using iterators
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        if (it == numbers.begin()) {
            it = numbers.insert(it, 5);
            // inserting 5 at the beginning of v [ 5 , 1 , 2 , 3 , 4 , 5]
        }
    }

    // Deleting a element using iterators
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        if (it == numbers.begin() + 1) {
            it = numbers.erase(it);
            // i now points to the element after the
            // deleted element 
            // [ 5 , 2 , 3 , 4 , 5]
        }
    }


    return 0;
}