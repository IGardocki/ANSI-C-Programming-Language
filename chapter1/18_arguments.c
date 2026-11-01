/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n)
{
    int p = 1;

    for (; n > 0; --n) {
        p *= base;
    }

    return p;
}
