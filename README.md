# Potential Undefined Behavior when Modifying std::vector through Raw Pointers

This repository demonstrates a potential issue when using raw pointers with `std::vector`. Modifying vector elements through a raw pointer obtained from `&vec[0]` can lead to undefined behavior if the vector's internal memory is reallocated.

## Description
The `bug.cpp` file contains code that iterates through a `std::vector` and modifies its elements using a raw pointer. This approach can be problematic if the vector's internal memory is reallocated during the process, invalidating the raw pointer and causing undefined behavior.

The `bugSolution.cpp` file demonstrates a safer way to modify vector elements by using iterators, which are unaffected by vector reallocations.

## How to Run
1.  Clone the repository.
2. Compile and run the `bug.cpp` and `bugSolution.cpp` files using a C++ compiler (such as g++).

## Conclusion
This example highlights the importance of using safe memory management techniques in C++. Using iterators is generally safer and more reliable when modifying the contents of `std::vector`s.