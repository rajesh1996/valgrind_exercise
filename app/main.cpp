#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    // Initialize the boolean to avoid valgrind error
    bool terminator = true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
