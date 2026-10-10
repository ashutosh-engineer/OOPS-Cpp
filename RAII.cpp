// RAII -Stands for Resource acquisition is initlization
// Resource acquisition is intilization is a c++ idom where resource acquisition and release get tied with the 
// object lifecycle;

// Acquire the resource at the creation of object means in constructors and release the resource in destructors;
// Automatic management of resources i sthe Biggest advantage of it;

// Without RAII resources need the explicit claenup;
// Resources such as mutex , files , sockets all that;

// With RAII

#include <bits/stdc++.h>

#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#define open _open
#define close _close
#ifndef O_RDWR
#define O_RDWR 0x02
#endif
#else
#include <fcntl.h>
#include <unistd.h>
#endif

using namespace std;

class Logger {
private:
    int log_fd_;

public:
    explicit Logger(const string& path) {
        log_fd_ = open(path.c_str(), O_RDWR);
    }

    ~Logger() {
        if (log_fd_ >= 0) {
            close(log_fd_);
        }
    }
};

int main() {
    return 0;
}