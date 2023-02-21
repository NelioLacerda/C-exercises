#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H
#include <iostream>

class TicketSystem{
private:
    int numOfTickets, numOfFriends;
public:
    TicketSystem() = default;
    TicketSystem(const int numOfTickets, const int numOfFriends);
    ~TicketSystem();

    void clacDistribution(int distributionRequired[]){
        while (numOfTickets >= numOfFriends)
        {
            int distribution[30] {};
            for (size_t i = 0; i < numOfFriends; i++)
            {
                if (distributionRequired[i] > distribution[i])
                {
                    distribution[i]++;
                    numOfTickets--;
                }
            }
        }
        
    }
};

#endif