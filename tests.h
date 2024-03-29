#pragma once
#ifndef TESTS_H_
#define TESTS_H_

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core.hpp"
#include "opencv2/calib3d.hpp"
#include <opencv2/videoio.hpp>

#include <dlib/opencv.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>

#include <cmath>
#include <cstring>

#include <gtest\gtest.h>
#include "../QtCursor/calculationFunctions.h"
#include "../QtCursor/errorHandling.h"
#include "../QtCursor/directoryAccessFunctions.h"
#include "../QtCursor/fileHandlerFunctions.h"

#endif