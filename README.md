# CodingExerciseDec2024
Coding Exercise December 2024

Depencies:
cmake (for logs and tests), vcpkg (for installing c++ pakages), vcpkg will install spdlog and gtest

Compile Threading examples with:
```
g++ -std=c++11 -pthread filename.cpp -o outputfilename
```

Be sure to change CMAKE_TOOLCHAIN_FILE in CMakePrsets.json and VCPKG_ROOT in CMakeUserPResets.json to where your directories may be located.

- The Main Goals/Concepts Demonstrated in this Repository:

	- OOD: specifically the key concepts of Inheritance, Abstraction, Polymorphism, Encapsulation. Demonstrated with simple examples.
	    
	- Templates: What are they and why are they important. Demonstrated using simple examples.
	    
	- Collections: Use of common collection classes like vector, list, map, set etc. The differences between each, advantages, disadvantages, when to use each etc. With code examples.
	    
	- Threading: Why do we need this? Demonstrated via a simple 2-thread example app. Issues with threading, demonstrating shared resource locking and access etc.
	    
	- Exception Handling and error logging: What is it and how to implement? Demonstrated by example, preferably with nested exception handling etc. Another example with a logging framework.
	    
	- Testing: The various types of tests and when to apply each, advantages and disadvantages of each etc. Demonstrating by adding tests to some of the previous examples.