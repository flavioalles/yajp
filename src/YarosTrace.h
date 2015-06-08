#ifndef YAROS_TRACE_H
#define YAROS_TRACE_H
#include <PajeUnity.h>

class YarosTrace : public PajeUnity {
public:
    YarosTrace(const std::string tracefile);
    ~YarosTrace();
    // Disallowing of compiler generated functions
    YarosTrace() = delete;
    YarosTrace(const YarosTrace&) = delete;
    YarosTrace& operator=(const YarosTrace&) = delete;
};
#endif
