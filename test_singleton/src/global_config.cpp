#include "../include/global.config.hpp"

GlobalConfig* GlobalConfig::_s_instance = new GlobalConfig;

GlobalConfig::GlobalConfig() {

}

GlobalConfig::~GlobalConfig() {}

GlobalConfig* GlobalConfig::getInstance() {
    return _s_instance;
}

void GlobalConfig::deleteInstance() {
    if (_s_instance) {
        delete _s_instance;
        _s_instance = NULL;
    }
}

bool GlobalConfig::say_hello() {
    std::cout << "Baby, you are great!" << std::endl;
    return true;
}
