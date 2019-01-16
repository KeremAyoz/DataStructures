/**
 * Title: Quick Median Data Structure
 * Author: Kerem Ayöz
 **/


#include <iostream>
#include "MaxHeap.h"
#include "MinHeap.h"
#include "QuickMedian.h"
using namespace std;

int main() {

    //Quick Median
    QuickMedian k;
    k.insert(10);
    k.insert(40);
    k.insert(30);
    k.insert(50);
    k.insert(70);
    k.insert(60);
    k.insert(20);
    k.insert(90);
    k.insert(100);
    k.insert(110);
    k.insert(0);
    k.insert(25);
    k.insert(123);
    k.insert(11);
    k.insert(200);
    cout << "Median is : " << k.getMedian() << endl << endl;

    return 0;
}

