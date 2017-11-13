//
//  main.cpp
//  OpenCVTutorial
//
//  Created by sasawat sankosik on 11/12/17.
//  Copyright © 2017 ssankosik. All rights reserved.
//

#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio/videoio.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;
using namespace std;

int main() {
  VideoCapture cap(0);
  while (true) {
    Mat webcam;
    cap.read(webcam);
    imshow("web cam", webcam);
    cout << "cam" << endl;
  }
}
