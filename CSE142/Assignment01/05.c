#include <stdio.h>

int main() {
    int temp, humidity, wind, rain;
    scanf("%d%d%d%d", &temp, &humidity, &wind, &rain);

    int warnings = 0;
    char* result;

    if (temp >= 35 && humidity >= 60) {
            result = "EXTREME HEAT ALERT";
            warnings++;
    }
    if (temp <= 0 && wind >= 20) {
        result = "BLIZZARD WARNING";
        warnings++;
    }
    if (rain>100) {
        result = "FLOOD RISK";
        warnings++;
    }

    if (warnings ==0) {
        if (temp>=25 && rain <= 5) {
            result = "SUNNY DAY";
        } else if ((temp >=10 && temp <=24)&& (rain>=10 && rain <=50)){
            result = "PLEASANT WEATHER";
        } else {
            result = "NORMAL";
        }
    } else if (warnings > 1) {
        result = "MULTIPLE ALERTS";
    }

    printf("%s\n", result);
    return 0;
}
