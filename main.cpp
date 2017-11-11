#include<iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int m; 
    int p;
    int k;
    cin >> m >> p;
    int a[m][p];
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            cin >> a[i][j];
    i = j = 0;
    cin >> n;
    for (k = 0; k < n; k++)
        while (true) {
            swap(a[0][0], a[i][j]);
            if (i == 0 && j == p - 1) {
                i++;
                continue;
            }
            else if (i == 0) {
                j++;
                continue;
            }
            if (i == m - 1 && j == p - 1) {
                j--;
                continue;
            }
            else if (j == p - 1) {
                i++;
                continue;
            }
            if (i == m - 1 && j == 0) {
                i--;
                continue;
            }
            else if (i == m - 1) {
                j--;
                continue;
            }
            if (i == 1 && j == 0) {
                i = j = 0;
                break;
            }
            else if (j == 0) {
                i--;
                continue;
            }
        }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
