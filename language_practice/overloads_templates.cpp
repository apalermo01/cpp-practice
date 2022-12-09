// two different functions can have the same name with different parameters
// cannot be overloaded by return type, at least one of the parameters must
// have a different type
// #include <iostream>
// using namespace std;

// int operate(int a, int b){
//     return (a*b);
// }

// double operate(double a, double b){
//     return (a/b);
// }

// int main(){
//     int x=5, y=2;
//     double n=5.0, m=2.0;

//     cout << operate (x,y) << endl;
//     cout << operate (n,m) << endl;
//     return 0;
// }

// Function templates
// Since we can overload the same function for a lot of different types,
// it would make sense for all of them to have the same body (e.g. sum
// function that can take an arbitrary type)
// we can define a single function with a generic type, called a function template
// template <class SomeType>
// SomeType sum (SomeType a, SomeType b){
//     return a+b;
// }

// can also use class instead of typename (these are synonyms)
// haven't been able to find a good working example with this, may 
// want to revisit later
// template <class SomeType>
// SomeType prod(SomeType a, SomeType b){
//     return (a*b);
// }

// int main(){
//     int x = sum<int>(10, 20);
//     cout << "sum result: " << x << endl;

//     float y = prod<float>(2.3, 3.3);
//     cout << "prod result: " << y << endl;
// }

// another example with templates
// template <class T>
// T sum(T a, T b){
//     T result;
//     result = a + b;
//     return result;
// }

// int main(){
//     int i=5, j=6, k;
//     double f=2.0, g=0.5, h;

//     k = sum<int>(i, j);
//     h = sum<double>(f, g);
//     cout << k << endl;
//     cout << h << endl;
//     return 0;
// }


// it's possible to non-templated types
// the following example works "becuase numerical literals are 
// always of a specified type"

// template <class T, class U>
// bool are_equal(T a, U b){
//     return (a==b);
// }

// int main(){
//     if (are_equal(10, 10.0))
//         cout << "x and y are equal \n";
//     else
//         cout << "x and y are not equal \n";
//     return 0;
// }


// non-type template arguments
// template params can also include expressions of a particular type
// can be used as a regular function parameter, but there's a big difference:
// template parameters are evaluated at compile-time, generating a different
// instantiation of the function (so each time you call it with different types
// it's almost as if the compiler will write the overloaded function for you)

// In this example, the compiler will generate two versions of fixed_multiply - 
// one that always multiplys by 2 and one that always multiplys by 3
// template <class T, int N>
// T fixed_multiply(T val){
//     return val * N;
// }

// int main(){
//     cout << fixed_multiply<int, 2>(10) << endl;
//     cout << fixed_multiply<int, 3>(10) << endl;

//     // QUESTION: how would we set this up? 
//     // T mult_2 = &fixed_multiply<int, 2>; 
// }
