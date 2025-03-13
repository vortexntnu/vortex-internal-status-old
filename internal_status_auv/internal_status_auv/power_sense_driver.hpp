
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>

class PowerSenseDriver {
   public:
    PowerSenseDriver(short i2c_bus, uint8_t i2c_address, uint8_t resolution);
    
};
