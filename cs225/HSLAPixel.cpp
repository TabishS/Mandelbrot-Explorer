/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author CS 225: Data Structures
 * @version 2018r1-lab1
 */

#include "HSLAPixel.h"
#include <cmath>
#include <iostream>
using namespace std;

cs225::HSLAPixel::HSLAPixel() {
    h = 0.0;
    s = 1.0;
    l = 1.0;
    a = 1.0;
}

cs225::HSLAPixel::HSLAPixel(double hue, double saturation, double luminance) {
    h = fmod(hue,360);
    s = saturation;
    l = luminance;
    a = 1.0;
}

cs225::HSLAPixel::HSLAPixel(double hue, double saturation, double luminance, double alpha) {
    h = fmod(hue,360);
    s = saturation;
    l = luminance;
    a = alpha;
}