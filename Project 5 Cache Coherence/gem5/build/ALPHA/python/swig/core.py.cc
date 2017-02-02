#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_core[] = {
    120,156,189,88,109,115,219,198,17,222,3,72,74,164,68,75,
    178,172,55,75,182,232,56,106,217,76,99,166,73,212,180,141,
    199,83,89,114,84,119,18,218,129,156,177,195,190,176,16,238,
    72,130,2,1,4,56,218,166,71,250,82,101,218,126,232,76,
    126,68,167,31,250,63,250,191,218,221,61,130,162,52,205,76,
    91,142,41,10,55,139,197,97,111,95,158,221,61,156,7,195,
    191,60,94,191,172,0,164,57,11,64,226,191,128,0,160,39,
    160,33,64,40,1,114,19,78,242,144,124,12,50,15,223,2,
    52,44,80,22,156,35,97,195,111,44,8,231,249,157,2,4,
    54,115,4,12,74,160,114,208,200,195,243,112,9,114,170,0,
    39,37,72,254,0,66,136,80,192,11,57,3,114,22,190,69,
    233,72,20,89,224,44,200,18,19,69,144,115,76,148,96,176,
    8,106,14,26,40,124,6,26,101,20,245,30,138,186,198,162,
    254,73,162,36,62,217,2,89,166,233,168,203,215,52,51,71,
    51,121,141,107,44,101,1,228,2,19,40,203,134,238,34,17,
    114,145,57,75,204,89,34,66,46,49,231,58,115,174,19,33,
    175,51,103,153,57,203,68,200,101,230,220,96,206,13,34,228,
    13,230,172,48,103,133,8,185,194,156,85,230,172,18,33,87,
    153,179,198,156,53,34,228,26,115,214,153,179,78,132,92,103,
    206,6,115,54,136,144,27,204,185,201,156,155,68,200,155,204,
    217,100,206,102,70,108,65,99,11,212,22,116,111,65,227,22,
    19,183,161,113,155,137,109,104,108,51,81,129,70,133,137,59,
    208,184,195,196,59,208,120,135,137,187,208,184,203,196,187,208,
    120,151,137,29,104,236,80,32,143,170,183,16,17,254,191,240,
    175,42,144,210,243,56,188,84,73,234,71,97,211,15,91,145,
    111,209,243,2,13,132,31,143,134,153,33,144,246,9,72,255,
    0,70,145,180,134,64,58,3,16,116,15,16,88,112,198,196,
    153,5,131,42,156,10,232,230,64,218,112,138,203,228,225,92,
    64,91,192,185,5,191,181,105,194,25,142,57,12,253,109,200,
    105,131,162,46,135,222,72,154,129,179,60,156,230,225,232,197,
    169,69,140,147,34,36,127,135,55,91,44,116,150,133,90,112,
    138,99,14,206,115,112,86,128,231,56,9,89,221,34,1,70,
    188,56,69,75,145,115,84,205,161,182,245,49,115,201,20,233,
    39,161,219,83,154,76,106,122,81,162,170,165,236,81,148,222,
    139,93,221,113,120,174,77,78,232,197,154,101,68,161,210,115,
    72,180,252,80,54,123,145,236,7,74,207,146,128,102,203,15,
    84,179,201,15,31,247,226,40,209,143,146,36,74,28,242,35,
    51,131,200,29,189,65,75,122,65,148,170,42,173,198,203,56,
    36,94,211,236,86,204,18,73,1,214,143,94,150,42,245,18,
    63,214,24,30,35,145,102,147,180,42,5,134,135,244,25,14,
    181,176,149,214,250,237,90,39,234,169,244,253,143,106,113,45,
    118,195,55,234,181,95,59,136,188,126,79,133,58,173,41,79,
    237,238,126,88,11,220,227,221,90,91,245,118,107,199,125,63,
    144,181,189,207,159,254,106,175,22,15,116,39,10,107,233,43,
    191,93,35,159,220,67,198,117,146,142,140,166,207,118,53,59,
    42,136,85,66,106,165,55,105,101,177,40,230,69,65,216,162,
    42,202,72,229,241,178,197,150,53,39,234,62,89,230,145,181,
    132,36,59,195,206,223,128,163,132,65,62,177,32,217,34,100,
    116,241,95,80,40,17,31,71,244,204,226,103,95,146,75,12,
    183,107,83,188,13,243,148,209,132,176,194,153,247,41,192,33,
    48,36,242,208,45,128,129,10,34,204,96,39,25,208,136,211,
    73,140,133,194,115,144,126,119,89,66,184,8,232,114,172,45,
    200,90,197,165,254,200,232,59,170,146,226,117,6,132,238,248,
    105,244,42,100,183,19,205,249,114,132,62,121,58,120,114,220,
    85,158,78,183,145,241,117,212,175,120,110,24,70,186,226,74,
    89,113,181,78,252,227,190,86,105,69,71,149,157,180,90,164,
    56,47,101,152,26,201,27,196,25,134,40,222,136,33,115,35,
    125,79,227,205,50,223,176,255,83,165,17,15,157,72,166,200,
    39,17,109,165,29,82,82,95,195,97,47,91,142,129,87,45,
    100,48,73,85,208,210,37,70,156,155,166,77,94,142,248,35,
    240,191,116,131,190,210,52,63,213,174,198,85,137,52,11,77,
    3,94,235,100,96,102,31,249,172,25,70,161,28,160,122,190,
    119,151,86,94,103,144,205,3,193,108,5,33,54,131,99,1,
    202,8,185,69,203,35,75,114,67,128,49,184,86,201,110,224,
    128,139,97,121,64,160,157,99,17,169,90,92,5,216,36,78,
    185,10,81,244,178,67,56,118,54,105,216,162,225,86,102,245,
    91,54,189,124,213,244,15,104,57,139,237,245,236,161,101,163,
    180,169,95,74,155,141,139,180,193,90,119,68,240,183,40,73,
    46,224,111,147,237,201,131,33,214,41,177,48,220,248,120,12,
    225,236,17,103,145,44,45,100,224,116,8,113,227,176,107,143,
    193,206,161,96,48,230,156,141,239,243,222,246,212,189,215,54,
    222,251,136,150,155,31,162,165,204,40,41,9,143,66,109,13,
    125,201,126,60,64,98,176,70,126,28,247,224,26,54,173,231,
    97,153,187,15,119,48,222,101,152,50,97,28,107,136,28,225,
    170,101,195,234,176,171,164,148,213,113,18,189,30,84,162,86,
    69,67,166,195,253,157,244,222,78,250,41,230,125,229,1,87,
    18,147,249,38,183,19,21,39,152,195,69,190,49,121,217,228,
    28,109,14,91,4,122,122,133,60,104,101,254,229,50,148,234,
    132,170,207,52,156,91,26,57,151,116,253,57,173,85,98,207,
    218,176,134,87,73,176,66,205,136,171,31,111,15,248,41,94,
    15,201,199,100,166,2,218,94,58,71,70,93,182,132,108,114,
    126,120,9,31,111,215,14,231,61,210,40,203,170,2,140,208,
    64,151,77,154,18,208,255,140,93,87,16,32,254,4,20,121,
    12,240,48,53,56,9,233,162,0,46,211,244,223,3,23,150,
    255,208,187,44,147,98,214,176,244,96,6,166,159,240,84,211,
    202,126,13,127,25,171,74,231,54,8,106,59,246,112,103,52,
    222,118,114,163,164,100,200,252,87,173,37,119,57,123,41,54,
    29,55,165,105,38,79,237,81,158,94,20,184,209,238,6,139,
    207,91,70,211,172,89,165,73,10,29,94,96,137,106,250,166,
    88,182,198,16,242,99,26,222,31,129,67,100,188,183,167,219,
    246,213,34,60,214,127,154,166,240,125,70,10,228,88,229,133,
    130,151,1,157,244,61,36,76,80,33,210,6,4,0,127,165,
    16,210,227,186,49,136,183,107,100,110,18,245,190,240,189,36,
    122,186,111,60,79,242,220,164,61,141,108,118,106,40,248,75,
    184,232,45,255,135,9,52,35,140,146,158,27,140,91,225,124,
    48,165,60,254,9,10,254,106,50,11,168,42,251,169,115,57,
    12,83,51,224,67,202,226,201,13,64,140,62,233,235,184,175,
    15,252,100,186,6,80,119,253,221,21,3,50,35,184,175,150,
    70,6,156,127,31,128,100,244,232,181,175,247,3,229,134,253,
    120,106,61,224,99,202,180,9,52,167,146,42,253,212,61,14,
    212,94,16,124,142,219,127,21,226,183,242,212,244,223,5,110,
    166,147,64,167,196,208,81,210,113,67,25,245,166,11,156,159,
    130,57,69,152,64,253,37,131,252,253,32,242,78,62,75,212,
    55,125,21,122,131,233,90,241,9,10,238,77,0,34,106,201,
    94,63,121,230,123,39,83,3,206,207,80,240,55,147,121,222,
    212,156,196,119,3,255,13,161,127,186,78,167,125,103,127,50,
    3,104,6,126,31,236,119,148,119,18,71,126,168,167,107,193,
    47,80,240,96,50,11,232,252,165,31,142,130,112,24,68,199,
    110,144,78,215,140,79,81,240,217,133,25,188,159,188,114,70,
    104,212,248,1,100,155,202,65,234,16,199,89,24,25,194,199,
    90,73,20,171,68,15,248,200,194,108,187,70,44,250,28,170,
    187,61,115,128,193,95,231,206,29,26,232,20,192,249,17,73,
    160,197,204,39,7,111,236,205,7,84,168,94,241,39,20,239,
    116,157,123,52,208,126,135,183,12,220,118,185,117,113,23,224,
    82,202,5,137,243,153,19,132,65,198,113,98,43,121,95,230,
    189,116,19,206,216,47,220,215,148,177,140,162,225,182,1,55,
    16,15,125,157,61,221,147,50,209,100,226,227,240,37,134,71,
    62,235,36,202,149,143,15,248,141,33,239,105,148,104,228,208,
    137,153,23,245,98,63,80,7,174,86,92,147,91,129,219,110,
    30,60,122,248,213,161,57,86,164,219,186,185,95,200,238,159,
    57,123,251,143,235,135,205,39,245,105,21,14,142,212,125,243,
    37,250,128,124,156,134,56,208,249,75,113,161,40,10,22,29,
    240,217,162,36,202,34,39,230,203,69,187,88,40,230,109,81,
    96,206,178,40,217,197,185,162,245,63,254,196,213,223,191,1,
    146,194,56,254,
};

EmbeddedPython embedded_m5_internal_core(
    "m5/internal/core.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/build/ALPHA/python/swig/core.py",
    "m5.internal.core",
    data_m5_internal_core,
    1988,
    6332);

} // anonymous namespace