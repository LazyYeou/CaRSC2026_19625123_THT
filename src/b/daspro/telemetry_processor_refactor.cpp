#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

struct TelemetryData
{
    float altitude;
    float speed;
    float battery;
};

class ITelemetry
{
public:
    virtual ~ITelemetry() = default;
    virtual void process(const std::vector<TelemetryData> &data) = 0
};