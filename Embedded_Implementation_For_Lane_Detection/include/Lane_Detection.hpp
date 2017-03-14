#include<iostream>
#include"opencv2/opencv.hpp"
#include"opencv2/highgui.hpp"
#include"opencv2/gpu/gpu.hpp"
#include<cuda_runtime_api.h>
#include<cuda.h>
#include<vector>
#include<math.h>

using namespace cv;
using namespace std;
/*Function Definitions*/

void convertrgb2Gray(const gpu::GpuMat& src, gpu::GpuMat& dst);

void filterImage(const gpu::GpuMat& src, gpu::GpuMat& dst, float width_kernel_x, float width_kernel_y, float sigmax, float sigmay);

void getQuantile(const gpu::GpuMat& src, gpu::GpuMat& dst, float qtile);

float getPoints(Mat& input_image, float quantile);

void thresholdlower(const gpu::GpuMat& src, gpu::GpuMat& dst, double threshold);
