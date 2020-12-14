include <iostream>
using namespace std;

#define UNUSED_VAR __attribute__((unused))
int test( UNUSED_VAR int a, int b)
{
    return b+1;
}

int main()
{
    int a = 5;
    int b = 10;

    cout << "\nAfter swapping." << test(a,b) << endl;

    return 0;
}
