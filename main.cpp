#include <iostream>
using namespace std;

int a[10], b[10], n;

void init(){
    cout << "Nhap n: ";
    cin >> n;
}

void output(int n){
    
    for(int i = 0; i < n; i++)
        cout << a[i] << " + ";
    cout << a[n];
    cout << endl;
}



void Try(int i, int k = n-1, int cursum = 0)
{
    for(int v = k; v > 0; v--){
        if(cursum + v <= n){
            a[i] = v;
            cursum += v;
            if (cursum == n) {
                cout << n <<" = ";
                output(i);
            }
            else
                Try(i+1, v, cursum);
            cursum -= v;
        }
    }
}

int main()
{
    init();
    cout << "Co so cach phan tich sau: \n";
    Try(0);
}
