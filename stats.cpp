#include "stats.h"
template <typename T>
Stats Statistics::ComputeStatistics(const std::vector<T>& p_vector) {
    //Implement statistics here
    Stats Object_stats;
    Object_stats.max = *max_element(p_vector.begin(), p_vector.end();
    Object_stats.min = *min_element(p_vector.begin(), p_vector.end());
                 
    T avrg;
    for(std::size_t i = 0; i < p_vector.size(); i++)
       avrg += p_vector.at(i);      
   
   Object_stats.average = avrg
   return Object_stats;              
}
