#include <iostream>

using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    x++; y++;
    int area_1, area_2;
    
    if(x > a/2)
    {
        area_1 = (x - 1)*b;
    }
    else
    {
        area_1 = (a - x)*b;
    }
    
    if(y > b/2)
    {
        area_2 = a*(y - 1);
    }
    else
    {
        area_2 = a*(b - y);
    }
    
    int answer = max(area_1, area_2);
    
    cout << answer << "\n";
}

int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    
    while(no_of_test_cases--)
        solve();
    
    return 0;
}
