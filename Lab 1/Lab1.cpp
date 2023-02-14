
// Name: Junayad Bin Forhad
// ID: 160158218

#include "pidUtil.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Run it with: g++ -o Lab1 Lab1.cpp libPidUtil.a
// This makes Lab1 a process, so you print out Q4

int main()
{

    vector<int> Pids;
    string Name;
    int Pid;

    // Q1&2: Get all names,Get all pids

    GetAllPids(Pids);
    cout << "Pidlist" << endl;

    for (int i = 0; i < Pids.size(); i++)
    {
        GetNameByPid(Pids[i], Name);
        cout << Pids[i] << " " << Name << endl;
    }
    cout << endl;

    // Q3: Set Pid to 1

    GetNameByPid(1, Name);
    cout << "Returning process name for process id 1: " << Name << endl
         << endl;

    // Q4: Get Pid of Lab1

    GetPidByName("Lab1", Pid);
    cout << "Lab1 pid: " << Pid << endl;

    // Q5: Get Pid of Lab11 -> Err_msg

    cout << endl;
    ErrStatus Puka = GetPidByName("Lab11", Pid);
    cout << GetErrorMsg(Puka) << endl;

    return 0;
}
