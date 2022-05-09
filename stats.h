#include <vector>
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
};
class LEDAlert
{
public:
};
class StatsAlerter
{
public:
 StatsAlerter(const float maxThreshold,std::vector<IAlerter*> p_alerters){}

 void checkAndAlert(std::vector<float> p_fltVector){}
};
class IAlerter
{
public:
    EmailAlert emailAlert;
    LEDAlert ledAlert;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& p_vector);
}
