/**
 *   @file: gas_consumption.cc
 * @author: Coriden cain
 *   @date: 5/23/24
 *  @brief: homework 2
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    double milesInTown, milesOnHighway;
    const double avgMileageTown = 22.5;
    const double avgMileageHighway = 29.5;

    
    cout << "Enter the number of miles driven in town: ";
    cin >> milesInTown;

    cout << "Enter the number of miles driven on the highway: ";
    cin >> milesOnHighway;

    
    if (milesInTown < 0 || milesOnHighway < 0) {
        cout << "Error: Miles cannot be negative. Quitting program." << endl;
        return 1; 
    }

    
    double gasConsumptionTown = milesInTown / avgMileageTown;
    double gasConsumptionHighway = milesOnHighway / avgMileageHighway;
    double totalMilesDriven = milesInTown + milesOnHighway;
    double totalGasConsumption = gasConsumptionTown + gasConsumptionHighway;
    double avgMilesPerGallon = totalMilesDriven / totalGasConsumption;

    
    cout << "\nGas Consumption Report:" << endl;
    cout << "Miles driven in town: " << milesInTown << endl;
    cout << "Gas consumption for town driving: " << gasConsumptionTown << " gallons" << endl;
    cout << "Miles driven on the highway: " << milesOnHighway << endl;
    cout << "Gas consumption for highway driving: " << gasConsumptionHighway << " gallons" << endl;
    cout << "Total miles driven: " << totalMilesDriven << endl;
    cout << "Total gas consumption: " << totalGasConsumption << " gallons" << endl;
    cout << "Average miles per gallon for the whole trip: " << avgMilesPerGallon << endl;

    return 0; 
}