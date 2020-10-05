/**
 * Copyright 2020 <Rajeshwar N S>
 * */

/**
 * @file: main.cpp
 * @brief: Contains the main
 * */

#include <iostream>
#include <AnalogSensor.hpp>

/**
 * @brief: main function
 * @param: None
 * @return: 0
 * */

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;

  // Initialize the boolean to avoid valgrind error
  bool terminator = true;
  if (terminator) {
    std::cout << "DONE" << std::endl;
  }
  return 0;
}
