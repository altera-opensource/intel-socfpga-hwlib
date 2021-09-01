# Intel SoC FPGA HWLIB
## How to use
## Steps
1) git clone the repository
2) move to tools folder
3) run install_linaro.sh

Note: 
For Windows user, please install MSYS2 Shell and git for windows manually.(http://www.msys2.org)
To install required package in MSYS2 shell, run $pacman -S --needed make gcc git
Please install doxygen/1.8.2 before generating the documentation. (https://www.doxygen.nl/download.html)

## Software Examples
- The software examples is located at examples and arranged according to it's family of the FPGA, CVAV, A10, S10
- To build the example simple run make all then the linaro compiler will help to build and link the software example
- There are several switches that user can specify in the makefile

| SEMIHOSTED | MEMORY   | Pre-requisite to load Uboot SPL     |   Expected output           |
|------------|----------|-------------------------------------|-----------------------------|
| 0          | ocr      | Yes, to setup UART                  |  Print at UART              |
| 0          | ddr      | Yes, to calibrate RAM               |  Print at UART              |
| 1          | ocr      | No, no UART nor RAM needed          |  Print at ARMDS app Console |
| 1          | ddr      | Yes, to calibrarte RAM              |  Print at ARMDS app Console |

- Example of the make command
- $ make SEMIHOSTED=1 MEMORY=ocr

You can get more information in the README file inside each of the example.

## Rocket Board
- Refer to Rocket Board webpage on how to use and Debug the Baremetal Software using ARM DS IDE
- https://rocketboards.org/foswiki/Documentation/HWLib
- There are examples for the baremetal application inside the examples folder. Each of the example has it's own readme file.

## API Documentation
Run setup.sh will help to install linaro and also generate doxygen documentation on the HWLibs API,
if you already run install_linaro.sh previously, to generate doxygen documentation, just run generate_doxygen.sh (This might take up to more than 1 hour)

By running setup.sh
   - This will help to
     - Install linaro, newlib, cygwin (install_linaro.sh)
     - generate doxygen documentation (generate_doxygen.sh)

## Supported Feature
| No | Features                  | Cyclone V / Arria V | Arria10 | Stratix 10 |
|----|---------------------------|---------------------|---------|------------|
| 1  | CAN                       |   Cyclone V Only    |    -    |      -     |
| 2  | Cache                     |         YES         |   YES   |     YES    |
| 3  | CCU                       |          -          |    -    |      -     |
| 4  | Clock Manager             |         YES         |   YES   |     YES    |
| 5  | DMA-330                   |         YES         |   YES   |     YES    |
| 6  | Ethernet                  |          -          |   YES   |     YES    |
| 7  | FPGA bridges (LWH2F, H2F) |         YES         |   YES   |      -     |
| 8  | FPGA Bridges (F2S)        |         YES         |   YES   |      -     |
| 9  | FPGA Config               |         YES         |   YES   |      -     |
| 10 | GPIO                      |         YES         |   YES   |     YES    |
| 11 | HPS Cold Reset            |         YES         |   YES   |      -     |
| 12 | HPS Warm Reset(SW)        |          -          |   YES   |      -     |
| 13 | I2C                       |         YES         |   YES   |     YES    |
| 14 | Mailbox                   |          -          |    -    |      -     |
| 15 | NAND                      |         YES         |   YES   |      -     |
| 16 | OCRAM ECC                 |         YES         |   YES   |      -     |
| 17 | PR                        |          -          |    -    |      -     |
| 18 | QSPI                      |         YES         |   YES   |      -     |
| 19 | Reset Manager             |         YES         |   YES   |     YES    |
| 20 | RSU                       |          -          |    -    |      -     |
| 21 | SDMMC                     |         YES         |   YES   |     YES    |
| 22 | SDRAM                     |         YES         |   YES   |     YES    |
| 23 | SDRAM ECC                 |         YES         |   YES   |      -     |
| 24 | SMMU                      |          -          |    -    |      -     |
| 25 | SPI                       |         YES         |   YES   |     YES    |
| 26 | DW Timer                  |         YES         |   YES   |     YES    |
| 27 | UART                      |         YES         |   YES   |     YES    |
| 28 | USB                       |          -          |    -    |      -     |
| 29 | Watchdog                  |         YES         |   YES   |     YES    |

