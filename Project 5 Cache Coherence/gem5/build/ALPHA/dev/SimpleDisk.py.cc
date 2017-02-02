#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleDisk[] = {
    120,156,181,81,77,79,131,64,16,157,165,20,219,198,168,127,
    192,164,71,98,98,55,169,225,102,26,99,122,209,131,54,173,
    23,185,16,10,211,74,101,129,116,183,70,188,214,255,173,51,
    75,63,252,3,46,240,242,102,119,120,243,102,54,129,221,106,
    209,119,215,7,208,35,34,41,189,2,114,0,37,32,20,32,
    56,118,32,119,224,101,199,90,196,90,128,2,22,2,82,23,
    190,1,182,0,175,161,11,105,27,102,190,71,18,217,15,45,
    95,16,51,93,130,89,166,158,231,43,76,76,179,197,112,101,
    122,205,65,149,227,56,211,239,201,95,43,247,108,101,72,4,
    129,29,80,217,208,1,108,193,202,101,103,91,178,213,182,161,
    7,120,2,171,14,155,218,58,16,118,97,58,243,249,255,169,
    67,160,185,0,75,247,31,84,188,68,125,198,245,106,109,80,
    245,39,101,86,24,92,251,156,97,58,4,81,84,196,10,163,
    200,154,138,34,85,166,155,156,67,151,19,234,10,77,155,200,
    36,94,199,202,246,195,170,86,212,38,164,20,25,239,160,110,
    41,229,98,97,12,155,137,139,218,110,105,123,234,115,143,71,
    208,143,4,178,88,104,185,89,202,183,82,161,190,190,145,149,
    172,226,226,11,63,51,57,46,147,141,34,33,45,49,193,32,
    24,202,60,158,7,114,137,42,144,122,157,200,20,63,228,113,
    132,131,170,182,141,247,89,151,43,122,194,19,231,226,201,103,
    243,230,148,64,5,131,195,85,76,97,127,59,180,91,113,107,
    218,142,130,163,117,249,217,72,253,175,91,91,239,182,25,246,
    232,114,239,250,66,244,232,249,5,35,168,146,223,
};

EmbeddedPython embedded_m5_objects_SimpleDisk(
    "m5/objects/SimpleDisk.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/dev/SimpleDisk.py",
    "m5.objects.SimpleDisk",
    data_m5_objects_SimpleDisk,
    365,
    667);

} // anonymous namespace