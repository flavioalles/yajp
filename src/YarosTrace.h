#ifndef YAROS_TRACE_H
#define YAROS_TRACE_H
#include <PajeUnity.h>

class YarosTrace : public PajeUnity {
public:
    YarosTrace(const std::string tracefile);
    ~YarosTrace();
    std::vector<std::string*>& getTopology();
    std::vector<PajeContainer*>& getContainersOfDepth(int depth);
    std::vector<PajeContainer*>& getContainersOfName(std::string name);
    // Disallowing of compiler generated functions
    YarosTrace() = delete;
    YarosTrace(const YarosTrace&) = delete;
    YarosTrace& operator=(const YarosTrace&) = delete;
};
#endif
