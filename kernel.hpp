/*
 * kernel.hpp
 *
 *  Created on: 02.02.2010
 *      Author: gmueller
 */

#ifndef KERNEL_HPP_
#define KERNEL_HPP_

#include <cmath>

float kernel1d(float r) {
	if (r < 1.0)
		return 1.0 - 1.5 * pow(r, 2) + 0.75 * pow(r, 3);
	else if (r < 2.0)
		return 0.25 * pow((2.0 - r), 3);
	else
		return 0.0;

}
//
//float kernel3d(const float *point, float h = 1.0) {
//	float r = sqrt()
//	u /= h;
//
//	float volume = M_PI / h / h / h;
//	Vector3 result = Vector3(kernel1d(u.x), kernel1d(u.y), kernel1d(u.z));
//	result /= volume;
//
//	return result;
//}

#endif /* KERNEL_HPP_ */