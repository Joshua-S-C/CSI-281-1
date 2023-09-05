//
//  CityTemperatureData.cpp
//
//  Implementation of CityTemperatureData
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#include "CityTemperatureData.h"
#include <cassert>

using namespace std;

namespace csi281 {
    // Fill in all instance variables for CityTemperatureData.
    CityTemperatureData::CityTemperatureData(const string name, CityYear data[], int numYears) : _name(name), _data(data), _count(numYears) {
    }
    
    // Release any memory connected to CityTemperatureData.
    CityTemperatureData::~CityTemperatureData() {
    }
    
    // Look up a CityYear instance held by CityTemperatureData by its year.
    // Find the right CityYear in the array and return it
    const CityYear CityTemperatureData::operator[](const int year) const {

        // TEMP
        CityYear temp = { 2022,1,3,72.3f,87.1f,54.4f };
        if (temp.year == 29) // the comparison is the problem, are they both not ints. one is a pointer somehow, or bothj idont fucking know
            return temp;

        
        // Its not working becuz year is an int. no
        int i;
        for (i = 0; i < count(); i++) {
            if (_data[i].year == year) {
                return _data[i];
            }
        }
        
/*
        //CityYear datas[5];
        CityYear temp1 = { 2022,12,3,72.3f,87.1f,54.4f };
        CityYear temp2 = { 1970,2,3,72.3f,87.1f,54.4f };
        CityYear temp3 = { 2022,12,3,72.3f,87.1f,54.4f };
        CityYear temp4 = { 2022,12,3,72.3f,87.1f,54.4f };
        CityYear temp5 = { 1970,1,3,72.3f,87.1f,54.4f };
        CityYear* datas = new CityYear[5]();
        //CityYear* datas = new CityYear[5]{ temp1,temp2,temp3,temp4,temp5 };
        datas[0] = temp1;
        datas[1] = temp2;
        datas[2] = temp3;
        datas[3] = temp4;
        datas[4] = temp5;

        // Maybe something to do with dealing with equals between pointers and ints
        // Yea data has to be a dynamic array, change the other function (ini csv) form earlier
        for (int i = 0; i < 4; i++) {
            if (datas[i].year == year) {
                return datas[i];
            }
        }

*/

    }
    
    // Get the average (mean) temperature of all time for this city
    // by averaging every CityYear.
    float CityTemperatureData::getAllTimeAverage() const {
        return 0;

        // YOUR CODE HERE

        /*float total = 0;
        for (int i = 0; i < _count; i++) {
            total += _data[i].averageTemperature;
        }
        return total / _count;*/
    }
    
    // Sum all of the days below 32 for all years.
    int CityTemperatureData::getTotalDaysBelow32() const {
        return 0;

        // YOUR CODE HERE

        /*int years = 0;
        for (int i = 0; i < _count; i++) {
            if (_data[i].averageTemperature < 32) {
                years++;
            }
        }
        return years;*/
    }
    
    // Sum all of the days above 90 for all years.
    int CityTemperatureData::getTotalDaysAbove90() const {
        return 0;

        // YOUR CODE HERE

        /*int years = 0;
        for (int i = 0; i < _count; i++) {
            if (_data[i].averageTemperature > 90) {
                years++;
            }
        }
        return years;*/
    }
}
