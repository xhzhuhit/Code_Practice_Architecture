#ifndef GLOBAL_CONFIG_HPP
#define GLOBAL_CONFIG_HPP
#include <iostream>
#include <string>
#include <vector>

class GlobalConfig {
public:
    static GlobalConfig* getInstance();
    static void deleteInstance();
    bool say_hello();
private:
    GlobalConfig();
    ~GlobalConfig();
    
    GlobalConfig(const GlobalConfig &config);
    const GlobalConfig &operator=(const GlobalConfig &config);

private:
    static GlobalConfig* _s_instance;

};

#endif
