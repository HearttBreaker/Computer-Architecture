#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemObject[] = {
    120,156,181,80,177,74,196,64,16,157,77,226,161,98,97,97,
    43,90,6,193,27,80,210,137,136,216,88,120,66,98,99,154,
    144,108,230,206,72,54,9,217,13,120,182,250,223,58,179,158,
    231,23,56,236,62,230,193,227,189,153,209,176,169,144,255,205,
    41,128,61,227,166,230,167,160,5,48,10,114,5,170,14,128,
    20,44,21,212,33,124,2,124,0,60,231,1,212,17,100,241,
    14,203,155,47,174,88,113,231,246,24,178,198,60,86,175,164,
    157,103,15,180,97,250,55,74,132,183,18,117,196,13,129,36,
    112,32,27,82,8,121,4,105,230,173,82,1,111,239,118,25,
    138,162,43,13,21,133,219,247,196,244,245,212,10,141,68,176,
    30,200,55,79,227,68,94,93,86,214,141,165,118,177,228,253,
    129,189,103,192,110,105,113,90,225,75,111,200,158,95,226,128,
    67,217,189,211,91,131,119,189,158,12,117,206,34,105,74,146,
    11,108,203,42,193,21,153,4,237,168,209,144,193,237,54,243,
    97,237,39,60,17,91,201,158,169,153,90,196,114,70,119,192,
    96,146,249,246,14,41,108,247,249,207,121,252,230,87,63,151,
    185,62,22,251,128,225,48,248,6,6,246,105,238,
};

EmbeddedPython embedded_m5_objects_MemObject(
    "m5/objects/MemObject.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/mem/MemObject.py",
    "m5.objects.MemObject",
    data_m5_objects_MemObject,
    269,
    484);

} // anonymous namespace