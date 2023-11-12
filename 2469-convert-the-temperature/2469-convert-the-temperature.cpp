class Solution {
public:
    vector<double> convertTemperature(double celsius) {
  vector<double> convertedTemperatures;
        double kelvin = celsius + 273.15;
        double fahrenheit = (celsius * 1.80) + 32.00;

        convertedTemperatures.push_back(kelvin);
        convertedTemperatures.push_back(fahrenheit);

        return convertedTemperatures;
}};