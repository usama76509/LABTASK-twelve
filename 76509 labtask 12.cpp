#include <iostream>
using namespace std;
int main() {
    int seats[3][5] = {
    {0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0}
};
    int row, col;
    cout << "Seating (0 = Available, 1 = Reserved)\n";
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
    cout << seats[i][j] << " ";
}
    cout << endl;
}
    cout << "\nEnter row (0-2): ";
    cin >> row;
    cout << "Enter column (0-4): ";
    cin >> col;
    if (seats[row][col] == 0) {
    seats[row][col] = 1;
    cout << "Seat reserved successfully!\n";
} else {
    cout << "Seat already reserved!\n";
}
    cout << "\nUpdated Seating:\n";
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
    cout << seats[i][j] << " ";
}
	cout << endl;
}
    return 0;
}

