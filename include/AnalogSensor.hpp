/**
 * Copyright 2020 <Rajeshwar N S>
 * */

/**
 * @file: AnalogSensor.hpp
 * @brief: AnalogSensor Class which contains the samples and read function
 * */

#pragma once

#include <iostream>

class AnalogSensor {
 public:
  /**
   * @brief Parametrized constructor which takes samples
   *
   * @param none
   * @return none
   */
  explicit AnalogSensor(unsigned int samples);

  /**
   * @brief Destructor of AnalogSensor Class
   * @param none
   * @param return
   */

  ~AnalogSensor();

  /**
   * @brief Function which reads the sensor values
   *
   * @return
   */

  int Read();

 private:
  unsigned int mSamples;
};
