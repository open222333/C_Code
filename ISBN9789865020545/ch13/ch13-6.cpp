// 指標與陣列
#include <iostream>
using namespace std;
int main()
{
    int *p, a[4] = {1, 2, 3, 4};
    p = &a[0];
    cout << "p=" << p << ",&a[0]=" << &a[0] << ",a=" << a << endl;
    cout << "p=" << *p << ",&a[0]=" << &a[0] << ",*a=" << *a << endl;
    cout << "p+1=" << p + 1 << ",&a[1]=" << &a[1] << ",a+1=" << a + 1 << endl;
    cout << "*(p+1)=" << *(p + 1) << ",&a[1]=" << &a[1] << ",*(a+1)=" << *(a + 1) << endl;
    cout << "p+2=" << p + 2 << ",&a[2]=" << &a[2] << ",a+2=" << a + 2 << endl;
    cout << "*(p+2)=" << *(p + 2) << ",&a[2]=" << &a[2] << ",*(a+2)=" << *(a + 2) << endl;
    cout << "p+3=" << p + 3 << ",&a[3]=" << &a[3] << ",a+3=" << a + 3 << endl;
    cout << "*(p+3)=" << *(p + 3) << ",&a[3]=" << &a[3] << ",*(a+3)=" << *(a + 3) << endl;
}