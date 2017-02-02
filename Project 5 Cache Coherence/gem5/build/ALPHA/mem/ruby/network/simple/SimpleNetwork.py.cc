#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleNetwork[] = {
    120,156,197,145,205,110,212,48,16,199,199,201,238,182,187,8,
    169,234,133,67,37,20,110,43,36,106,68,201,9,132,80,85,
    33,113,169,208,150,11,123,137,156,120,178,117,137,157,40,118,
    40,219,107,251,176,188,5,204,56,187,124,60,1,78,50,26,
    79,236,153,223,204,191,130,221,74,233,123,159,1,248,215,228,
    104,122,5,52,0,159,217,75,160,17,96,19,88,39,32,116,
    10,152,64,45,64,79,224,1,224,30,224,203,58,5,61,133,
    171,229,140,46,154,159,180,150,130,188,192,230,249,232,62,34,
    179,26,202,237,37,134,219,182,255,26,30,211,254,202,216,174,
    193,93,164,250,155,226,156,41,46,200,65,128,181,96,22,42,
    140,41,220,76,24,138,104,238,9,101,186,143,164,76,194,145,
    89,140,28,0,30,50,14,71,230,176,26,169,86,9,163,113,
    126,127,198,221,97,173,134,38,100,229,80,215,216,103,222,220,
    225,155,236,101,102,156,54,149,10,232,201,171,141,51,1,119,
    39,140,219,152,31,68,230,79,232,114,169,156,190,53,58,92,
    103,74,223,12,62,88,116,33,171,85,21,218,222,63,97,104,
    167,202,6,233,167,234,130,249,134,89,223,14,129,18,44,23,
    60,136,67,50,69,225,148,197,162,8,139,184,177,173,30,26,
    222,78,248,192,182,195,48,37,231,147,234,149,13,60,141,143,
    46,196,249,141,40,5,195,134,227,88,71,119,173,113,161,248,
    13,20,51,156,183,109,19,51,124,80,141,199,112,68,222,30,
    165,216,163,240,32,254,24,175,200,72,87,123,57,108,228,117,
    107,209,191,56,147,157,236,148,187,195,239,70,94,180,213,192,
    61,122,137,21,230,249,43,217,168,50,151,27,180,185,244,125,
    37,45,90,217,147,180,210,141,74,74,31,117,149,255,200,123,
    218,109,163,4,207,184,28,183,61,19,51,49,167,231,88,92,
    46,99,223,115,50,54,63,237,184,109,31,14,104,183,187,186,
    18,123,253,254,11,118,84,236,237,168,209,187,167,92,150,113,
    23,226,40,249,5,34,149,205,190,
};

EmbeddedPython embedded_m5_objects_SimpleNetwork(
    "m5/objects/SimpleNetwork.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/mem/ruby/network/simple/SimpleNetwork.py",
    "m5.objects.SimpleNetwork",
    data_m5_objects_SimpleNetwork,
    457,
    825);

} // anonymous namespace