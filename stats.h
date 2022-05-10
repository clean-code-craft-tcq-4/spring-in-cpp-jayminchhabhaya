#include <vector>
#include <iostream>
#include <algorithm>
class Stats
{
public:
	float average;
	float max;
	float min;
	Stats()
	{
	   average =  NAN ;
	   max =  NAN ;
	   min = NAN ;
	}
	
};
class IAlerter
{
public:
	virtual void setAlert() = 0;
};
class EmailAlert : public IAlerter
{
public:
	bool emailSent{false};
	void setAlert()
	{
		emailSent = true;
	}
};
class LEDAlert : public IAlerter
{
public:
	bool ledGlows{ false };
	void setAlert()
	{
		ledGlows = true;
	}
};
class StatsAlerter
{
public:
	float m_maxThreshold{};
	std::vector<IAlerter*> m_alerters;
	StatsAlerter(const float maxThreshold,const std::vector<IAlerter*>& p_alerters)
	{
		m_maxThreshold = maxThreshold;
		m_alerters = p_alerters;
	}

	void checkAndAlert(std::vector<float> p_fltVector)
	{
		for (auto &Object_alrt : m_alerters)
		{
			for (auto value : p_fltVector)
			{
				if (m_maxThreshold < value)
				{
					Object_alrt->setAlert();
				}
			}
		}
	}
};
namespace Statistics {
	Stats ComputeStatistics(const std::vector<float>& p_vector);
}
