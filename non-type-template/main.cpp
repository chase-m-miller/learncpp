template <int N>
constexpr int factorial()
{
    static_assert(N >= 0 && "Error: N must be greater than or equal to zero in factorial<N>()");

    int result { 1 };
    for (int i { N }; i > 0; --i)
    {
        result *= i;
    }

    return result;
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}
