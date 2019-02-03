//
// Created by Tobias Schrödter on 15.10.18.
//

#ifndef _WAITINGAREA_H
#define _WAITINGAREA_H

#include "Goal.h"
#include "Line.h"

#include <vector>
#include <map>
#include <stdio.h>

class WaitingArea : public Goal{

protected:

    /**
     * Number of Pedestrians who can be in the waiting area at the same time
     */
    int maxNumPed = -1;

    /**
     * Number of Pedestrians who can be in the waiting area at the same time
     */
    int minNumPed = -1;

    double waitingTime = -1;

protected:

    /**
     * Defines whether pedestrians can enter the waiting area
     */
    bool open;

    /**
     * Map of possible next goals/waiting areas (id) with corresponding probability
     */
    std::map<int, double> nextGoals;

public:

    int getMaxNumPed() const;

    void setMaxNumPed(int maxNumPed);

    int getMinNumPed() const;

    void setMinNumPed(int minNumPed);

    bool isOpen() const;

    void setOpen(bool open);

    const std::map<int, double>& getNextGoals() const;

    bool setNextGoals(const std::map<int, double>& nextGoals);

    std::string toString();

    double getWaitingTime() const;

    void setWaitingTime(double waitingTime);

    std::vector<Line> getAllLines();

    int GetNextGoal();

private:
    void updateProbabilities();
    bool checkProbabilities();

};

//std::ostream& operator<<(std::ostream &strm, const WaitingArea &wa) {
//     std::string out;
//     char buffer [50];
//
//
//     out.append("WaitingArea[\n");
//     sprintf(buffer, "\tid=%d\n", wa.getId());
//     out.append(buffer);
//     out.append("]");
//     return strm << out;
//}
#endif //_WAITINGAREA_H