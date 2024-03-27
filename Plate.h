/*****************************************************************************
*   Number Plate Recognition using SVM and Neural Networks
******************************************************************************
*   by Ronnie Leon Ochieng, 26th March 2024
******************************************************************************/

#ifndef Plate_h
#define Plate_h

#include <string.h>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/calib3d.hpp>

using namespace std;
using namespace cv;

class Plate{
    public:
        Plate();
        Plate(Mat img, Rect pos);
        string str();
        Rect position;
        Mat plateImg;
        vector<char> chars;
        vector<Rect> charsPos;        
};

#endif
