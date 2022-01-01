# Car Rental System

Inspiration from [this repo](https://github.com/thegreat1411vrishank/how-to-make-a-car-rental-system-using-c--)

## Installing GTest & GMock

Followed the 2nd answer [here](https://stackoverflow.com/questions/15852631/how-to-install-gtest-on-mac-os-x-with-homebrew)

When using GTest always add:
```cpp
#include <gtest/gtest.h>
```
## TODOs

1. A lot of this won't work as it was meant for windows (importing windows.h & conio.h) - need to work out what functionality is needed from them & how to adapt it to a unix OS

2. Check in main.cpp for any comments starting with `////`

3. Once they are taken care of, try to split this file up into multiple files, as it's way too long

4. Add unit tests

5. Dockerise
