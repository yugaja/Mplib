extern void WDT_NMI(void);

int main()
{
    WDT_NMI();
    while(1);

    return 0;
}
