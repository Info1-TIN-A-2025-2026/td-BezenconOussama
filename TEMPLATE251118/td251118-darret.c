#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int main(int argc, const char *argv[])
{
    double speed_kmh = 10, reactime = 2;
    double reactd = reaction_distance(speed_kmh, reactime);
    printf("dfghjkhgfdfghjk%lf",reactd);
}
double kmh_to_ms(double v_kmh)
{
    assert(v_kmh >= 0);
    return v_kmh / 3.6;
}
double reaction_distance(double speed, double reaction_time)
{
    assert(speed >= 0);        
    assert(reaction_time >= 0);
    return speed * reaction_time;
}
double break_distance(double speed, double decceleration)
{
    assert(speed >= 0);
    assert(decceleration >= 0);
    return (speed * speed) / (2 * decceleration);
}
double total_stop_distance(double speed, double decceleration,double reaction_time)
{
    return break_distance(speed, decceleration) + reaction_distance(speed, reaction_time);
}