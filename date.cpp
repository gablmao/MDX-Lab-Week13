#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Date {

    public:
    /*
    alternative to creating constructor
    public:
        Date(int day, int month, int year) : day(day), month(month), 
        year(year){}
    */
        int day;
        int month;
        int year;
        string fullDate;
        int getDay(){
            return day;
        };

        void setDay(int day){
            this->day = day;
        };

        int getMonth(){
            return month;
        };

        void setMonth(int month){
            this->month = month;
        };

        int getYear(){
            return year;
        };

        void setYear(int year){
            this->year = year;
        };

        bool isDateInputtedBigger(Date&firstDate, Date&dateInputted){  //compares two objects
            if (firstDate.getYear() > dateInputted.getYear()){  
                return false;
            }

            if (firstDate.getYear() == dateInputted.getYear() && firstDate.getMonth() > dateInputted.getMonth()){
                return false;
            }

            if (firstDate.getYear() == dateInputted.getYear() && firstDate.getMonth() == dateInputted.getMonth() && firstDate.getDay() > dateInputted.getDay()){
                return false;
            }

            return true;
        };

        void createFullDate(){  //convert int variables to string, concatenate
            fullDate = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
        };

        string printDate(){
            return fullDate;
        };
};


int main(){

    Date setDate;
    setDate.setDay(10);
    setDate.setMonth(11);
    setDate.setYear(2001);
    setDate.createFullDate();


    Date toSetDate;
    int inputDay;
    int inputMonth;
    int inputYear;
    cout << "Enter a day (number): ";
    cin >> inputDay;
    toSetDate.setDay(inputDay);

    cout << "Enter a month (number): ";
    cin >> inputMonth;
    toSetDate.setMonth(inputMonth);

    cout << "Enter a year (number): ";
    cin >> inputYear;
    toSetDate.setYear(inputYear);

    toSetDate.createFullDate();

    cout << "Date stored already: " << setDate.printDate() << endl;
    cout << "Date you created: " << toSetDate.printDate() << endl;

    if (toSetDate.isDateInputtedBigger(setDate, toSetDate)){
        cout << "Your date is 'bigger' than the date already set.";
    } else {
        cout << "Your date is 'smaller' than the date already set.";
    };

    return 0;
}