#include <iostream>

struct AdData
{
    int WatchCount { 0 };
    double ClickPercentage { 0.0 };
    double EarningsPerClick { 0.0 };
};

void printAdData(AdData ad)
{
    std::cout << "Ad's view count:     " << ad.WatchCount << '\n';
    std::cout << "Percentage clicked:  " << ad.ClickPercentage << "%\n";
    std::cout << "Earnings per click:  $" << ad.EarningsPerClick << '\n';
    std::cout << "Total earnings:      $" << (ad.WatchCount * (ad.ClickPercentage * 0.01) * ad.EarningsPerClick) << '\n';
}

int main()
{
    AdData catFoodAd { 1000, 13.5, 0.25 };

    printAdData(catFoodAd);

    return 0;
}
