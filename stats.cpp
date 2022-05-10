#include "stats.h"
#include <iostream>
#include <algorithm>
using namespace std;
Stats Statistics::ComputeStatistics(const std::vector<float>& p_vector) {
	//Implement statistics here
	Stats Object_stats;
	if (p_vector.size() > 0)
	{
		Object_stats.max = *max_element(p_vector.begin(), p_vector.end());
		Object_stats.min = *min_element(p_vector.begin(), p_vector.end());

		float avrg;
		for (size_t i = 0; i < p_vector.size(); i++)
			avrg += p_vector.at(i);

		Object_stats.average = avrg / p_vector.size();
	}
	return Object_stats;
}
