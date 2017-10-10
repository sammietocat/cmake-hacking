# CMake Hacking [2017-10-08]  

![](https://img.shields.io/badge/license-MIT%20License-blue.svg)
![](https://img.shields.io/badge/platfotm-linux-brightgreen.svg) 

## Foreword   
This project serves as personal notes subject to `CMake`, a cross-platform tool easing the process of building, testing and packaging softwares.  

## Progress   
### Draft  
+ [x] Chapter 01. Why CMake  
+ [x] Chapter 02. Say Hello  
+ [x] Chapter 03. Add a Header File  
+ [x] Chapter 04. Tag the Version  

### Working  

## Build the book from the TEX file  
For those attempting to make the book to suit their flavor, they can update the content of the `cmake-hacking.tex` file, and then build up the customized version of the book as follows   
1. Build the intermediate output from LATEX  
```bash
latex cmake-hacking.tex
```
2. Generate the necessary file for the index entry in the book (Of course, if the index is removed after customization, this step can be skipped)  
```bash
makeindex cmake-hacking.idx
```
This should generate a `cmake-hacking.ind` in the current working directory   
3. LATEX again   
```bash
latex cmake-hacking.tex
```
Now, the book is ready for use. Enjoy yourself :)  

## Contributions and LICENSE  
Comments and suggestions for improvements are always wanted. This document will be improved as our understanding extends. More details are found at [CONTRIBUTING](CONTRIBUTING.md) and [LICENSE](LICENSE)

