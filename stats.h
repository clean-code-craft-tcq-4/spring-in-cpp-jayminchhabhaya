#include <vector>
#include <iostream>
#include <algorithm>
class Stats
{
public:
    double average{};
    double max{};
    double min{};
};
class EmailAlert
{
public:
    string emailSent;
};
class LEDAlert
{
public:
    string ledGlows;
};
class IAlerter
{
public:
    EmailAlert emailAlert;
    LEDAlert ledAlert;
};
class StatsAlerter
{
public:
 float m_maxThreshold{};   
 StatsAlerter(const float maxThreshold,std::vector<IAlerter*> p_alerters)
 {
  m_maxThreshold = maxThreshold
 }

 void checkAndAlert(std::vector<float> p_fltVector)
 {
   if(m_maxThreshold > *max_element(p_fltVector.begin(), p_fltVector.end())
   {
   
   }
 }
};
namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& p_vector);
}
