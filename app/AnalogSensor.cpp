/**
 * Copyright 2020 <Rajeshwar N S>
 * */

/**
 * @file: AnalogSensor.cpp
 * @brief: Contains the method implementation of Read
 * */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

// parametrized constructor

AnalogSensor::AnalogSensor(unsigned int samples)
    :
    mSamples(samples) {
}

// Destructor

AnalogSensor::~AnalogSensor() {
}

// Read function
int AnalogSensor::Read() {
  // std::vector<int> *readings = new std::vector<int>(mSamples, 10);
  // use of smaprt pointers to avoid memory leak

  std::unique_ptr<std::vector<int>> readings =
      std::make_unique<std::vector<int>>(mSamples, 10);

  double result = std::accumulate(readings->begin(), readings->end(), 0.0)
      / readings->size();
  return result;
}

