using namespace std;
int main()
{
    const int i = 42;
    auto j = i;                 // j是int
    const auto &k = i;          // k是const int
    auto *p = &i;               // p是const int *
    const auto j2 = i, &k2 = i; // j2是const int, k2是const int&

    return 0;
}