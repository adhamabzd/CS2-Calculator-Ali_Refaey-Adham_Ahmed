This project is a simple calculator created through c++ code and git/github it can do simple operations like addition, subtraction, and other things.There are also some requirements to run this calculator.


Features:
- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers
- Factorial calculation
- Greatest Common Divisor (GCD) calculation
- Least Common Multiple (LCM) calculation
- Random number generation within a range

Things used in the build process:
- Language: C++
- Build System: CMake
- Version Control: Git


Requirements for running:
Before building or using this library, ensure you have the following installed:
1. A C++ compiler (e.g., `g++`)
2. CMake (version 3.10 or higher)
3. Git for version control

Build Instructions:

Using Command Line Compilation:
1. Clone the repository:
   git clone https://github.com/adhamabzd/CS2-Calculator-Ali_Refaey-Adham_Ahmed.git
   cd CS2-Calculator-Ali_Refaey-Adham_Ahmed
2. Compile the source files using `g++`:
   g++ -o calculator calculator.cpp test.cpp 
3. Run the executable:
   ./calculator

Using CMake:
1. Clone the repository:
  git clone https://github.com/adhamabzd/CS2-Calculator-Ali_Refaey-Adham_Ahmed.git
   cd CS2-Calculator-Ali_Refaey-Adham_Ahmed
2. Create a build directory:
   mkdir build && cd build
3. Run CMake to generate Makefiles:
   cmake ..
4. Build the project using `make`:
   make
5. Run the executable:
   ./calculator



Usage Instructions:

Importing and Using the Library:
To use this library in your own project:
1. Include the header file `calculator.h` in your source code.
2. Link your project with `calculator.cpp` during compilation.

Version Control Workflow:
1. The repository uses two branches:
   - main: Contains stable code.
   - feature: Used for developing new functionality.
2. Regular commits are made with meaningful messages.
3. The feature branch is merged back into main after testing.

Merge Conflict Handling:
- Merge conflicts are resolved manually by reviewing conflicting files and ensuring correctness before merging.
