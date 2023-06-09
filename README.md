# University of Saskatchewan Space Design Team: Avionics
---

# Setup
Using VSCode and STM32 Cube IDE (recommended)


## Things you need to get started
- [ ] VSCode  
- [ ] STM32 Cube IDE 
- [ ] install git bash for your platform  


## Next Steps

1. Fork the codebase  
    `https://github.com/USSTR-Avionics/Achilles.git`  
    a. Visit the link and fork the code base to your own profle by simply clicking fork  
    b. Clone your own fork to your local machine  
    c. Add the upstream repo to get latest changes  
    d. Run this command which enables you to get the latest changes from master  
    `git remote add upstream https://github.com/USSTR-Avionics/Achilles.git`  

    [troubleshooting] if you get an error saying https protocol not supported, simply erase the https:// from the pasted url and rewrite it in, there is a 
    hidden character that gets pasted (sneaky!) on Windows.  



## BUILDING
1. Open th project in the STM32 Cube IDE
2. Navigate to Core/Src and open main.cpp
3. On the top menu bar (ribbon), click project -> bulid project
4. On the icon menu bar directly under the top ribbon, click the debug icon


# Contributing

1. Make sure you have all the remote changes  
    `git pull`  
    `git fetch --all`  
    `git pull upstream master`   
    `git pull upstream dev`  
    `git fetch upstream master`  
    `git fetch upstream dev`  

2. Open up a Pull Request with an appropriate title and explanantion of code changes

> "Your git commits should tell us WHY and not WHAT, the code tells us what was changed you should
tell us why it was changed"


# Documentation

Documentation is not expected for code, as long as variables, methods, and files are resonably named and follow the naming standards laid out in READMEs
This is because we believe code is the best documentation as it never gets outdated, because if it gets outdated it doesn't compile anymore. Hence, will always remain up to date.
However, provide documentation wherever relevant

Javadoc style of comments are strongly recommended.

```
/**
 * @brief      writes an u8 to the given FRAM address
 * @param      what    The u8 to be written
 * @param      where   The address where it is to be written
 * @return     int     0 on success; 1 on failure
*/

int write_to_fram(uint8_t what, uint8_t where)
    {
    // a black box
    }

```

# Coding Style Guidelines

> NOTE: most of the linting is handled by clang-format-15

## Naming things

- ALL names follow the snake_case convention this includes everything from functions to files to classes

### Variables

- every variable must have a default value to prevent undefined behaviour!

- constants must be upper case

```
    #define A_CONST 100
    int BCONST = 12.34f
```

### Classes

All clases should be in their own folders (same name as the class name) in the lib folder.
Classes should have a header file where class functions and variables are declared and a cpp file where the
functions are implemented.

### Class and Header file names

These are broad guidelines and **NOT** rules, break them if it doesn't make sense

We classify headers and class names into 4 types

1. Package
    A set of functions that serve a common function, eg: a statistics package
    prefixed with a "package_"

2. Debug
    Functions associated with easy debugging, eg: I2C Scanner, these are only
    activated or in use when a directive or variable is enabled, prefixed with
    a "debug_"

3. Sensor
    Functions that serve as a wrapper/API for sensors, sensors include
    peripherals like memory and sensors like acceleration. tldr; anything that
    has a hardware component that the flight computer interacts with is a 
    sensor, prefixed with a "sensor_"

4. Organisational/Misc
    Some headers are just for storing default variables or macros and fall
    under this categories, need not be prefixed.

**NOTE:** Other naming scheme maybe applied if it makes sense, for example, the 
    header file containing the enum definition for the statemachine is called
    statemachine_t.h as the _t suffix denotes type by convention.

### Source files

They should be named similar to their respective header files that expose the API function calls

Should also adhere to the header file(s) naming convention

---
<p align="center"> <img src = https://i.imgur.com/jnRxNR3.png> </img> </p>
