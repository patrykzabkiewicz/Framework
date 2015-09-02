#ifndef THREADS_H
#define THREADS_H

#define NUM_THREADS 4

#include <vector>
#include <thread>
#include <queue>


using namespace std;


struct ThreadPool
{
    int threadsRunning;
    int takenJobs;
    vector<thread> threadQueue;

    template<typename Tbar>
    void startJob(void * (*foo)(Tbar), Tbar bar)
    {
        threadQueue.push_back(thread(foo,bar));
    }


    void init();
    void cleanup();
};


extern ThreadPool Threads;


#endif // THREADS_H
