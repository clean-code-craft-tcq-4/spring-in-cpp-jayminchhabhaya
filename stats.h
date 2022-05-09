#include <vector>
template <typename T>
class Stats
{
public:
    T average{};
    T max{};
    T min{};
    ~stats(){}
};
template <typename T>
namespace Statistics {
    Stats ComputeStatistics(const std::vector<T>& p_vector);
}
