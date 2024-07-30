//task#01
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class manage_location
{
    public:
    string loc_name;
    double loc_lat;
    double loc_long;
    void add_loc(string name, double lat,double lon)
    {
        loc_name=name;
        loc_lat=lat;
        loc_long=lon;
    }

    void delete_loc()
    {
        loc_name=" ";
        loc_lat=0.0;
        loc_long=0.0;
    }
    void list_loc()
    {
        cout<<"\n Location "<<loc_name;
        cout<<"\n Latitude "<<loc_lat;
        cout<<"\n Longitude "<<loc_long;
    }
};
class weather_var
{
    public:
    double temp;
    double wind;
    void set_wea(double t,double w)
    {
        temp=t;
        wind=w;
    }
};
class wea_forcasting
{
    public:
    void get_wea_Forcast(std::string location)
    {

    }
    void parse_Wea_Data()
    {

    }
    void display_Wea_Forcast()
    {

    }
};
class historical_Wea_Sys
{
    public:
    void get_Historical_wea(std::string location)
    {

    }
    void display_Historical_Wea_Data()
    {

    }
};
class DataExporter
{
    public:
    void exportToCSV(std::vector<std::string>data)
    {
        std::ofstream file("weather_data.csv");
        for(const auto& entry:data)
        {
            file<<entry<<std::endl;
        }
        file.close();
    }
    void exportToJSON(std::vector<std::string>data)
    {

        std::ofstream file("weather_data.json");
        for(const auto& entry:data)
        {
            file<<entry<<std::endl;
        }
        file.close();
    }
};
int main()
{
    manage_location loc;
    loc.add_loc("Islamabad",33.6995,-73.0363);
    loc.list_loc();

    weather_var weather;
    weather.set_wea(55.5,70.2);

    wea_forcasting weatherSystem;
    weatherSystem.get_wea_Forcast("xyz");
    weatherSystem.parse_Wea_Data();
    weatherSystem.display_Wea_Forcast();

    historical_Wea_Sys historicalWeatherSystem;
    historicalWeatherSystem.get_Historical_wea("xyz");
    historicalWeatherSystem.display_Historical_Wea_Data();

    DataExporter exporter;
    std::vector<std::string>weatherData={"Data1","Data2","Data3"};
    exporter. exportToCSV(weatherData);
    exporter. exportToJSON(weatherData);
return 0;


}
