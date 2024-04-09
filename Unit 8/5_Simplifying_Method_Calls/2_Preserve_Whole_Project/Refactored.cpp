#include <iostream>

class TemperatureRange {
private:
    double minTemp;
    double maxTemp;

public:
    TemperatureRange(double min, double max) : minTemp(min), maxTemp(max) {}

    double getMinTemp() const {
        return minTemp;
    }

    double getMaxTemp() const {
        return maxTemp;
    }
};

class WeatherForecast {
public:
    bool isTemperatureWithinRange(const TemperatureRange& range) const {
        // Check if temperature falls within the given range
        double currentTemp = 25.0; // Example temperature
        return range.getMinTemp() <= currentTemp && currentTemp <= range.getMaxTemp();
    }
};

int main() {
    WeatherForecast forecast;
    TemperatureRange range(20.0, 30.0);

    if (forecast.isTemperatureWithinRange(range)) {
        std::cout << "Temperature is within the range." << std::endl;
    } else {
        std::cout << "Temperature is outside the range." << std::endl;
    }

    return 0;
}
