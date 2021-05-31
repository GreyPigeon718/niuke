
//#include<iostream>
//#include<string>
//using namespace std;
//class A {
//public:
//	A(int aa, int bb)
//	{
//		 a = aa - 1;
//		 b = a * bb;
//	}
//	int a, b;
//	
//};
//int main()
//{
//	A a(4,5);
//	cout << a.a << ' ' << a.b;
//}
//class A
//{
//    friend long fun(A s)
//    {
//        if (s.x < 3) {
//            return 1;
//        }
//        return s.x + fun(A(s.x - 1));
//    }
//public:
//    A(long a)
//    {
//        x = a--;
//    }
//private:
//    long x;
//};
//int main()
//{
//    int sum = 0;
//    for (int i = 0; i < 5; i++) {
//        sum += fun(A(i));
//    }
//    cout << sum;
//}
//#include <iostream>
//using namespace std;
//class parent
//{
//    int i;
//protected:
//    int x;
//public:
//    parent() { x = 0; i = 0; }
//    void change() { x++; i++; }
//    void display();
//};
//class son :public parent
//{
//public:
//    void modify();
//};
//void parent::display() { cout << "x=" << x << endl; }
//void son::modify() { x++; }
//int main()
//{
//    son A; parent B;
//    A.display();
//    A.change();
//    A.modify();
//    A.display();
//    B.change();
//    B.display();
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int p[][4] = { {1},{3,2},{4,5,6},{0} };
//	cout << p[1][3];
//}
//素数
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//bool prime_1(int x)
//{
//	for (int i = 2; i < x; ++i)
//	{
//		if (x % i == 0)
//		{
//			return false;
//		}
//	}
//	if (x % 10 == 1)
//		return true;
//	return false;
//}
//int main()
//{
//	int n;
//	int i, j;
//	cin >> n;
//	for (i = 2; i < n; i++)
//	{
//		if (prime_1(i))
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	if (i == n || i == n - 1)
//		printf("-1");
//	for (int j = i + 1; j < n; j++)
//	{
//		if (prime_1(j))
//		{
//			printf(" %d", j);
//		}
//	}
//	return 0;
//}

//判断回文数
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//void palindrome(int x)
//{
//	int z = x;
//	int y,ret = 0;
//	while (x % 10)
//	{
//		y = x % 10;
//		x /= 10;
//		ret = ret * 10 + y;
//	}
//	if (ret == z)
//		cout << "Yes" << endl;
//	else
//		cout << "No" << endl;
//	
//}
//int main()
//{
//	 int x;
//	cin >> x;
//	x = abs(x);
//	palindrome(x);
//	return 0;
//}
//斐波那契额数列
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a = 0;
//	int b = 1;
//	while (n >= b)
//	{
//		int tmp = a;
//		a = b ;
//		b = tmp + a;
//	}
//	int sum = (n - a) < (b - n) ? (n - a) : (b - n);
//	cout << sum;
//	return 0;
//}
//合法括号序列
class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
        int sum = 0;
        if (n % 2 == 1)
            return false;
        for (int i = 0; i < n; ++i)
        {
            if (A[i] == '(')
                sum++;
            else if (A[i] == ')')
                sum--;
            else
                return false;
        }
        if (sum == 0)
            return true;
        return false;
    }
};