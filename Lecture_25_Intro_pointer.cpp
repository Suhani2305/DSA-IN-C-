// #include<iostream>
// using namespace std;
//
// int main () {
//
//     int num  = 5 ;
//
//     cout <<"Num:"<< num << endl;
//
//     // address of Operator - &
//
//     cout <<" address of num is " << &num << endl;
//
//     int *ptr = &num;
//
//     cout << "Address is : " << ptr << endl;
//     cout << "value is : " << *ptr << endl;
//
//     double d = 4.3;
//     double *p2 = &d;
//
//     cout << "Address is : " << p2 << endl;
//     cout << "value is : " << *p2 << endl;
//
//     cout << " size of integer is " << sizeof(num) << endl;
//     cout << " size of pointer is " << sizeof(ptr) << endl;
//     cout << " size of pointer is " << sizeof(p2) << endl;
//
//
//
//     return 0;
// }


// #include<iostream>
// using namespace std;
//
// int main () {
//
//     // pointer to int is created, and pointing to some garbage address
//     // int *p = 0;
//     //
//     // cout << *p << endl;
//
//
//     // int i = 5;
//     //
//     // int *q = &i;
//     // cout << q << endl;
//     // cout << *q << endl;
//     //
//     // int *p = 0;
//     // p = &i;
//     //
//     // cout << p << endl;
//     // cout << *p << endl;
//
//     int num = 5;
//     int a = num;
//     cout << "a before " << num << endl;
//     a++;
//     cout << "a after " << num << endl;
//
//
//     int *p  = &num;
//     cout << "before " << num << endl;
//     (*p)++;
//     cout << "after " << num << endl;
//
//     //copying a pointer
//     int *q = p;
//     cout << p <<" - " << q << endl;
//     cout << *p <<" - " << *q << endl;
//
//     //important concept
//     int i = 3;
//     int *t = &i;
//     //cout <<  (*t)++ << endl;
//     *t = *t +1;
//     cout << *t << endl;
//     cout << " before t " << t << endl;
//     t = t + 1;
//     cout << " after t " << t << endl;
//
//
//     return 0;
// }