#include "types.h"

namespace probreg
{

Float
meanSquareNorm(const Matrix& a, const Matrix& b);

Matrix
gaussianKernel(const Matrix& a, Float beta);

}