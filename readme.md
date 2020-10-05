[![Build Status](https://travis-ci.org/rajesh1996/valgrind_exercise.svg?branch=valgrind_exercise)](https://travis-ci.org/rajesh1996/valgrind_exercise)
[![Coverage Status](https://coveralls.io/repos/github/rajesh1996/valgrind_exercise/badge.svg?branch=valgrind_exercise)](https://coveralls.io/github/rajesh1996/valgrind_exercise?branch=valgrind_exercise)
---
# Valgrind Exercise

Fix Memory leak errors related to Cpp-boilerblate using valgrind tool.

## Standard install via command-line
```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
## Running Valgrind
```
- sudo apt install valgrind
- sudo apt install kcachegrind

- cd <path to repository>
- valgrind --leak-check=full ./build/app/shell-app 
```
