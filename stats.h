#include <vector>
class Stats
{
public:
    double average{};
    double max{};
    double min{};
    ~Stats(){}
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& p_vector);
}
