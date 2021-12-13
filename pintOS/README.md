# pintOS
This repository is a fork of the Pintos project hosted at [pintos-os.org](http://pintos-os.org) by Ben Pfaff ([@blp](https://github.com/blp)).  

Pintos is an **educational operating system framework** for the 80x86 architecture.  
The project was built for students of Stanford University's cs140.  

Pintos supports kernel threads, loading and running user programs, and a file system.  
Out of the box, it implements all of these in a very simple way.  

The Pintos projects aim to teach about the fundamental implementation behind these operating system concepts by providing a template for students to strengthen the operating system's support in these three areas.  
There is also a project that adds a virtual memory implementation.  

This repo is being used by students instructed by Ivo Georgiev ([@ivogeorg](https://github.com/ivogeorg)) at MSU Denver for a course in Operating Systems (CS 3600).   

For more reading, see the 
[Stanford](http://web.stanford.edu/class/cs140/projects/pintos/pintos_1.html) 
and 
[Virginia Tech](http://courses.cs.vt.edu/~cs3204/spring2009/pintos/doc/pintos.pdf) 
course documentation.

## dependencies
A recent version of **gcc** and **gdb** is necessary to build the project.  
Pintos can run under a variety of vm's, but this repo is configured to use **qemu** as the 80x86 emulator.  

This code base has been tested to be functional on Ubuntu and Linux Mint.  
However, it should be fit for other Linux distributions, as well as OSX (with either gnu tools or modifications for clang).  

## installation
Repo-specific installation:  
- clone:

    ```bash
    git clone <this_repo>
    ```
    
- using the appropriate value for `PINTOS_ROOT`,  
  add the following to your `~/.bashrc`:
    
    ```bash
    export PINTOS_ROOT=/your/path/to/pintOS    # ie: /home/stealthybox/repos/pintOS
    export PATH=$PINTOS_ROOT/src/utils:$PATH   # adds the pintos binaries to your PATH
    ```
    
- load the env

    ```bash
    source ~/.bashrc  # or restart your terminal
    ```
    
- build the pintos utils

    ```bash
    cd $PINTOS_ROOT/src/utils; make
    ```  
    
- build the threads project

    ```bash
    cd $PINTOS_ROOT/src/threads; make
    ```  

## testing
- run a single test:
    
    ```bash
    pintos run alarm-single   # where 'alarm-single' is the test name
    ```
    
- run the thread test suite:
  
    ```bash
    cd $PINTOS_ROOT/src/threads; make check VERBOSE=1
    ```
    
- clean up:
  
    ```bash
    cd $PINTOS_ROOT/src/threads; make clean   # so you can `make check` new code
    ```
    
