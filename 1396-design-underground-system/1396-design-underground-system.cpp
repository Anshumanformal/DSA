class UndergroundSystem {
public:
    
    unordered_map<int, pair<string, int>> CheckInMap;   // ID = {stationName, checkin-time}
    unordered_map<string, pair<int, int>> path;  //RouteName - {TotalTime, Count}
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        CheckInMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = CheckInMap[id];
        // remove the customer from the check-in map
        CheckInMap.erase(id);
        string pathName = checkIn.first + "_" + stationName;
        //storing the path in the path unordered map
        // subtract the checkout time from checkin time and add it to the path map
        path[pathName].first += t - checkIn.second;
        path[pathName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = path[routeName];
        return (double)route.first / route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */