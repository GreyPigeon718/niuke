
//#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//    cnt++;
//    if (n == 0)
//        return 1;
//    else if (n == 1)
//        return 2;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int  main()
//{
//    fib(8);
//    printf("%d", cnt);
//}
//class A {
//public:
//	A(char* s)
//	{
//		cout << s << endl;
//	}
//	~A() {}
//};
//class B :virtual public A
//{
//public:
//	B(char* s1, char* s2) :A(s1) {
//		cout << s2 << endl;
//	}
//};
//class C :virtual public A
//{
//public:
//	C(char* s1, char* s2) :A(s1) {
//		cout << s2 << endl;
//	}
//};
//class D :public B, public C
//{
//public:
//	D(char* s1, char* s2, char* s3, char* s4) :B(s1, s2), C(s1, s3), A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//int main() {
//	D* p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,3,5,7,9 };
//	int* p = (int*)(&a + 1);
//	printf("%d, %d", *(a + 1), * (p - 1));
//}
//计算糖果
//#include <iostream>
//using namespace std;
//int main()
//{
//    int arr[4] = {0};
//    int A, B, C;
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> arr[i];
//    }
//    A = (arr[0] + arr[2]) / 2;
//    B = (arr[1] + arr[3]) / 2;
//    C = (arr[3] - arr[1]) / 2;
//    if (arr[0] == ((A - B)) && (arr[1] == (B - C)) && (arr[2] == (A + B)) && (arr[3] == (B + C)))
//        cout << A << ' ' << B << ' ' << C << endl;
//    else
//        cout << "No" << endl;
//    return 0;
//}
//进制转换
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    string s = "0123456789ABCDEF";
    vector<char> v;
    int m, n;
    bool flag = true;
    cin >> m >> n;
    if (m < 0)
    {
        m = -m;
        flag = false;
    }
    do {
        int a = m % n;
        v.push_back(s[a]);
        m /= n;
    } while (m > 0);
    reverse(v.begin(), v.end());
    if (flag == false)
    {
        cout << '-';
    }
    for (const auto& e : v)
    {
        cout << e;
    }
    return 0;

}
