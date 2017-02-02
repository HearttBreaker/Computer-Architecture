#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Root[] = {
    120,156,181,84,75,143,219,54,16,30,202,111,39,155,117,246,
    210,158,90,1,61,212,232,35,218,180,240,33,64,81,180,73,
    90,160,40,224,22,114,46,245,69,224,74,35,75,27,138,18,
    196,81,221,13,122,219,254,239,118,134,178,220,215,53,17,196,
    1,57,28,14,191,239,227,144,41,156,190,17,183,111,66,0,
    247,138,59,25,255,10,12,64,165,96,175,64,201,56,0,19,
    64,53,130,253,168,31,143,192,140,225,149,244,198,96,38,80,
    77,97,63,229,153,9,160,130,92,65,54,133,63,0,238,1,
    126,217,207,32,155,193,110,61,231,196,229,159,252,173,21,247,
    104,193,102,87,86,63,221,220,98,74,189,75,34,110,186,210,
    100,223,217,95,123,143,152,79,250,238,132,77,174,73,27,26,
    115,47,174,107,74,255,137,253,185,96,127,195,29,4,129,156,
    45,5,40,163,99,16,251,49,224,68,8,9,32,37,48,153,
    140,248,103,194,98,63,7,92,192,237,82,120,200,236,131,211,
    16,31,2,147,185,15,96,127,225,61,143,132,18,19,17,207,
    229,224,153,67,182,240,158,21,196,187,245,3,222,62,21,176,
    193,169,253,40,160,174,5,61,192,173,130,246,61,160,64,128,
    220,247,154,238,152,202,237,4,126,247,176,56,36,81,167,192,
    221,90,86,111,93,196,246,91,34,172,26,10,169,14,181,49,
    117,170,9,195,170,51,84,54,6,195,210,58,210,54,69,23,
    214,121,40,154,60,89,79,69,29,145,136,46,216,36,84,96,
    50,68,197,34,148,151,111,91,91,140,69,58,154,73,80,98,
    241,152,36,126,83,146,152,212,56,146,60,175,143,186,61,184,
    181,4,122,227,94,178,137,108,238,162,238,16,21,117,133,238,
    243,47,163,38,106,180,125,131,191,149,209,203,58,237,42,180,
    228,34,76,113,179,249,34,50,250,102,19,29,176,218,68,174,
    77,35,87,86,145,199,216,220,197,178,237,199,146,113,41,121,
    213,66,45,213,120,126,165,188,122,67,123,33,234,205,206,234,
    237,124,29,108,61,74,79,48,150,146,240,206,120,62,32,124,
    187,48,73,78,244,128,244,195,73,192,141,36,151,253,33,248,
    63,82,129,148,157,207,206,203,220,114,154,30,150,26,148,119,
    104,242,119,129,84,114,55,154,138,103,103,136,202,139,228,62,
    146,107,151,135,84,148,46,228,95,135,121,103,76,232,238,28,
    151,85,200,25,58,163,169,172,173,251,144,227,142,5,114,189,
    180,33,149,21,114,136,77,75,123,144,69,104,245,141,193,204,
    223,193,167,215,215,149,115,76,24,138,250,200,101,71,104,165,
    54,37,58,60,150,84,132,45,106,227,51,12,225,157,115,159,
    246,201,109,104,144,215,82,161,109,15,168,234,210,162,223,141,
    7,6,115,250,44,116,77,105,183,235,199,195,123,192,181,169,
    43,76,18,90,250,65,85,103,157,225,97,60,29,10,192,151,
    146,63,168,212,104,231,120,219,162,206,98,137,142,47,6,209,
    233,174,233,209,252,172,91,93,121,215,243,186,54,126,149,200,
    145,244,114,248,144,239,181,113,72,43,89,197,184,18,225,149,
    244,252,253,244,11,190,130,175,255,51,221,96,91,214,25,189,
    255,47,167,240,224,219,215,162,43,106,147,253,125,228,111,249,
    34,9,23,57,98,119,197,102,26,76,131,197,163,203,241,98,
    52,13,46,71,87,234,42,216,250,103,151,30,178,169,54,79,
    206,239,109,127,247,151,189,55,195,188,180,232,226,243,179,204,
    190,70,132,114,254,117,224,81,71,165,241,143,135,223,238,93,
    113,241,231,253,85,127,194,95,127,32,153,197,177,82,43,126,
    28,86,193,95,98,20,125,92,
};

EmbeddedPython embedded_m5_objects_Root(
    "m5/objects/Root.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/sim/Root.py",
    "m5.objects.Root",
    data_m5_objects_Root,
    808,
    1706);

} // anonymous namespace