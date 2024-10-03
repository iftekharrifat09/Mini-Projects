#include<bits/stdc++.h>
using namespace std;

int get_first_day_of_year(int year) {
    int day = ( year * 365 + ( (year - 1) / 4 ) - ( (year - 1) / 100 ) + ( (year - 1) / 400 ) ) % 7;
    return day;
}

int main() {
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int day_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int total_days, weekDay = 0, spaceCounter = 0;
    int year;

    cout << "Enter the year you want: ";
    cin >> year;

    cout << "\n\n********************* Welcome to " << year << " ***************************\n\n";

    // Checking leap year:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        day_in_month[1] = 29;
    }

    // Get the first day of the year:
    weekDay = get_first_day_of_year(year);

    for (int i = 0; i < 12; i++) {
        cout << "\n\n\n---------------------------" << month[i] << " " << year << "------------------------------\n\n\n";
        cout << "     Sun     Mon     Tue     Wed     Thu     Fri     Sat\n\n";

        for (spaceCounter = 1; spaceCounter <= weekDay; spaceCounter++) {
            cout << "        ";
        }

        total_days = day_in_month[i];

        for (int j = 1; j <= total_days; j++) {
            cout.width(8);
            cout << j;

            weekDay++;

            if (weekDay > 6) {
                weekDay = 0;
                cout << "\n\n";
            }
        }
    }
    return 0;
}
