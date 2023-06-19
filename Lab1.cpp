/* 
 * Author: Kritika Singh
 * Created on May 19, 2022, 1:12 p.m.
 * Version: 1.0
 * Description: 
 * The user will input low and high temperature 
 * The program will read the low and high temperatures of each day. 
 * It will then calculate and display the average temperature of each day.
 * Then, it will calculate and display the overall average, 
 *      the day that had the lowest temperature and the day that had the highest temperature. 
 */ 

#include <iostream>
using namespace std;

int main() 
{
    const double MAXIMUM = 20;
    const double MINIMUM = -20;
    double average = 0;
    double temp1 = 0;
    double temp2 = 0;
    double total = 0;
    double MaxTempDays = -99;
    double MinTempDays = 99;
    double TotalAverage = 0;
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Please enter low and high temperature for day " << i + 1 << " separated by a space:" << endl;
        cin >> temp1 >> temp2;
        
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Wrong input. It must be a numeric value, try again:" << endl;
            cin >> temp1 >> temp2;
        }
        
        while(MINIMUM > temp1 || temp1 > MAXIMUM)
        {
            cout << "Wrong input. It must be in the range, try again:" << endl;
            cin >> temp1 >> temp2;
        }
        
        while(MINIMUM > temp2 || temp2 > MAXIMUM)
        {
            cout << "Wrong input. It must be in the range, try again:" << endl;
            cin >> temp1 >> temp2;
        }
        
        if(temp1 < MinTempDays)
        {
            MinTempDays = temp1;
        }
            
        if(temp2 > MaxTempDays)
        {
            MaxTempDays = temp2;
        }
        
        cout << "Low: " << MinTempDays << " High: " <<MaxTempDays << endl;
        total = temp1+temp2;
        average = total/2;
        cout << "Average temperature of the day is " << average << "." << endl;  
        TotalAverage += average;
    }
   
    average = TotalAverage / 5;
    
    cout << "The average of the temperature entered for 5 days is " << average << "." << endl;
    cout << "The lowest temperature of all the days is " << MinTempDays << "." << endl;
    cout << "The highest temperature of all the days is " << MaxTempDays << "." << endl;
            
    return 0;
}