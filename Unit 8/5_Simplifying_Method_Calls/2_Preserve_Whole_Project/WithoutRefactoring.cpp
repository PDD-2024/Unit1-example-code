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
    bool isTemperatureWithinRange(double minTemp, double maxTemp) const {
        // Check if temperature falls within the given range
        double currentTemp = 25.0; // Example temperature
        return (currentTemp >= minTemp && currentTemp <= maxTemp);
    }
};

int main() {
    WeatherForecast forecast;
    TemperatureRange range(20.0, 30.0);

    // Check if temperature falls within the range [20, 30]
    if (forecast.isTemperatureWithinRange(range.getMinTemp(), range.getMaxTemp())) {
        std::cout << "Temperature is within the range." << std::endl;
    } else {
        std::cout << "Temperature is outside the range." << std::endl;
    }

    return 0;
}
