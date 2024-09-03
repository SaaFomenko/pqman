#!/bin/bash

g++ main.cpp ../pqman.cpp -o test -lgtest -pthread && ./test
