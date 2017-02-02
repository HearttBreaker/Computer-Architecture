#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleMemory[] = {
    120,156,205,88,235,115,219,198,17,223,3,64,72,164,68,139,
    122,218,74,220,152,109,198,83,54,211,152,137,83,55,47,143,
    166,110,147,190,166,81,92,176,173,29,38,19,20,2,142,36,
    40,16,224,0,71,219,204,72,95,42,79,219,15,157,233,31,
    209,233,135,252,31,253,191,154,221,61,0,132,44,57,113,167,
    157,50,18,121,115,60,44,246,246,241,219,199,157,15,249,95,
    13,191,63,105,3,100,125,1,16,224,71,64,4,48,17,128,
    191,133,20,16,108,195,113,13,210,31,65,80,131,167,0,125,
    3,164,1,103,56,49,225,83,3,226,117,126,199,134,200,228,
    21,1,243,6,72,11,250,53,120,16,111,130,37,109,56,110,
    64,250,71,16,66,196,2,30,6,43,16,172,194,83,228,142,
    147,58,51,92,133,160,193,147,58,4,107,60,105,192,188,5,
    114,13,250,200,124,5,250,77,100,245,26,178,186,194,172,254,
    69,172,2,124,178,3,65,147,200,81,150,79,136,210,34,74,
    222,227,10,115,217,40,36,107,65,191,85,204,55,161,191,89,
    204,183,160,191,85,204,183,161,191,13,193,6,200,22,140,119,
    96,128,106,183,74,222,187,32,77,24,239,65,127,15,36,126,
    118,225,12,45,19,108,50,237,85,166,221,42,105,175,49,237,
    62,244,247,65,226,231,154,166,181,161,215,217,69,59,135,255,
    198,191,14,218,25,212,58,14,143,100,154,133,73,236,134,241,
    32,9,13,122,110,211,64,94,241,105,88,201,221,243,51,114,
    207,151,192,190,9,140,220,61,167,128,140,5,201,31,25,112,
    202,147,83,3,230,29,56,17,48,182,32,48,225,4,183,169,
    145,0,67,1,103,6,124,102,18,193,41,142,22,26,244,21,
    176,148,246,205,152,13,170,57,173,192,105,13,78,106,208,123,
    120,98,208,194,113,29,210,127,194,23,215,153,233,42,51,53,
    224,4,71,11,206,44,56,181,225,1,18,225,210,184,78,234,
    139,135,39,168,41,174,244,58,22,74,123,88,81,151,84,9,
    194,52,246,38,82,109,227,220,157,122,169,55,113,123,225,100,
    26,201,143,228,36,73,231,157,70,65,152,100,183,166,158,26,
    57,252,166,73,38,153,76,21,115,76,98,169,214,112,50,8,
    227,192,157,36,193,44,146,106,149,216,185,131,48,146,174,203,
    15,127,53,153,38,169,250,48,77,147,212,33,171,242,98,148,
    120,229,27,100,83,63,74,50,217,161,221,120,27,135,216,43,
    162,30,76,153,35,9,192,210,210,203,129,204,252,52,156,42,
    116,150,230,72,212,196,173,67,110,226,33,35,183,117,227,65,
    214,157,13,187,163,100,34,179,215,223,234,78,187,83,47,254,
    66,62,9,187,31,36,254,108,34,99,149,117,165,47,239,220,
    185,221,141,188,163,59,221,161,156,220,233,30,205,194,40,232,
    222,251,205,253,95,222,235,78,231,106,148,196,93,92,13,99,
    37,209,92,81,247,162,161,110,33,213,22,109,249,56,28,186,
    33,43,235,142,100,52,149,41,201,154,189,68,226,136,150,88,
    23,182,48,69,71,52,113,86,195,175,41,174,27,107,226,48,
    36,117,125,50,1,129,205,44,224,245,15,96,71,34,14,142,
    13,72,175,19,120,198,248,17,228,109,132,80,143,158,25,252,
    236,183,100,39,189,58,54,9,18,122,241,132,1,135,200,67,
    202,187,132,129,24,24,53,53,24,219,160,209,132,32,212,240,
    74,231,52,34,57,177,49,144,185,5,217,223,207,115,136,91,
    128,126,192,160,198,165,61,220,234,79,12,208,94,135,4,63,
    100,148,168,81,152,37,143,99,246,5,205,57,164,122,104,147,
    251,243,143,143,198,210,87,217,13,92,248,36,153,181,125,47,
    142,19,213,246,130,160,237,41,149,134,71,51,37,179,182,74,
    218,55,179,78,157,156,191,89,0,173,228,55,159,22,192,34,
    16,32,176,244,143,32,244,21,254,96,4,187,108,255,76,42,
    4,201,40,9,50,92,39,22,67,169,28,18,82,93,193,225,
    94,177,29,163,177,99,23,216,201,100,52,80,13,134,161,151,
    101,46,111,71,235,140,56,122,251,145,23,205,164,34,250,76,
    121,10,119,165,169,222,104,105,152,187,70,90,23,74,147,33,
    221,56,137,131,57,202,28,250,175,146,56,215,24,121,235,64,
    216,219,69,220,173,224,104,67,19,113,216,50,124,82,207,202,
    81,199,136,219,35,99,0,163,64,228,105,5,209,119,134,201,
    167,99,112,246,96,61,57,56,219,52,163,151,29,2,183,243,
    50,13,215,105,248,78,97,138,101,216,163,249,172,61,222,32,
    25,12,54,130,111,230,234,150,1,118,120,46,192,246,23,1,
    134,137,179,71,129,98,80,56,45,2,197,36,131,164,7,121,
    84,80,8,34,48,240,113,37,22,216,76,78,139,212,183,11,
    24,59,132,205,42,64,135,21,128,58,228,33,70,167,179,255,
    60,147,222,248,118,152,116,168,77,250,22,201,176,158,227,170,
    201,120,106,8,159,64,97,228,6,102,227,126,128,147,249,85,
    50,110,213,172,87,177,44,62,136,155,92,223,184,70,114,119,
    160,179,140,182,182,158,88,132,192,129,9,123,121,221,202,40,
    41,76,211,228,201,188,157,12,218,10,10,25,238,222,204,110,
    221,204,222,199,180,209,62,224,68,164,19,135,78,13,169,156,
    166,152,2,234,252,67,135,181,203,33,238,230,101,7,205,79,
    61,0,123,141,141,206,89,44,83,41,37,175,165,89,188,81,
    90,156,20,120,151,4,104,176,185,77,184,138,223,134,96,41,
    221,132,51,42,119,37,252,20,191,63,37,195,147,238,18,168,
    87,116,122,90,7,86,143,20,117,190,127,14,73,75,80,206,
    121,141,196,44,130,210,134,18,55,244,53,73,124,138,147,191,
    0,247,112,2,254,12,132,17,132,66,30,89,28,195,244,37,
    87,111,19,249,231,192,201,234,146,34,105,232,8,53,242,116,
    134,1,156,189,205,164,186,102,254,26,254,90,201,116,103,38,
    8,170,111,102,222,165,85,235,155,85,198,52,131,235,133,106,
    152,117,62,248,201,97,35,47,35,50,29,230,102,25,230,139,
    164,89,246,86,152,187,150,129,187,85,189,181,75,82,254,98,
    129,58,42,30,47,139,109,163,130,165,31,210,240,122,9,35,
    81,172,253,159,5,190,241,108,182,175,84,63,87,103,216,159,
    147,84,22,235,177,97,235,118,164,194,164,12,158,90,17,60,
    183,203,224,145,156,246,159,114,135,79,163,65,200,56,51,4,
    30,169,176,5,162,211,140,5,178,6,125,155,194,140,219,87,
    145,71,161,40,82,32,165,206,115,53,133,45,117,168,109,88,
    130,67,251,157,134,39,75,75,57,228,250,187,145,55,57,10,
    188,131,223,211,246,36,131,95,196,165,81,40,212,170,42,68,
    49,37,158,167,19,255,124,163,80,236,209,210,210,205,155,184,
    91,169,16,7,87,144,248,156,99,126,55,146,237,137,156,28,
    225,129,111,20,78,219,131,200,27,178,7,205,92,225,143,11,
    133,21,67,224,217,26,207,189,210,97,210,246,147,24,235,197,
    204,87,73,218,14,36,30,130,100,160,227,225,124,152,115,43,
    233,165,195,140,187,198,227,199,52,93,170,183,93,60,226,134,
    216,56,255,161,48,142,62,120,149,85,130,123,101,29,92,88,
    118,241,32,163,230,58,5,254,152,134,31,208,112,19,150,93,
    76,186,228,71,218,150,140,106,99,150,170,11,62,134,85,233,
    238,211,155,217,197,72,255,219,139,68,186,190,54,201,227,221,
    38,74,185,66,167,110,26,235,84,82,250,141,98,113,141,199,
    117,94,108,22,139,87,120,220,224,197,86,113,93,179,201,139,
    91,124,189,97,243,202,14,229,144,149,255,54,135,112,188,45,
    53,210,62,251,159,166,14,231,246,183,70,31,135,155,222,175,
    75,27,162,170,108,83,167,141,177,40,206,9,85,77,249,182,
    98,255,82,148,186,126,42,61,37,181,55,95,90,162,246,156,
    165,180,48,159,151,62,45,84,44,207,79,111,151,106,158,113,
    159,54,223,169,244,241,236,98,241,0,155,42,236,245,79,216,
    18,174,161,219,253,5,138,173,210,32,148,78,99,249,216,189,
    104,20,221,209,147,64,222,116,42,227,96,209,173,243,147,165,
    1,132,18,225,17,44,218,36,108,205,119,240,123,49,132,73,
    201,138,206,236,220,90,25,180,203,116,51,131,124,88,56,152,
    239,67,23,21,192,33,247,234,156,95,166,123,231,189,210,97,
    175,92,142,224,8,33,19,251,115,58,44,126,19,9,54,109,
    220,24,231,191,213,247,190,158,252,145,151,50,215,23,32,35,
    206,107,11,206,180,166,222,188,252,53,190,170,227,1,43,121,
    140,7,42,186,253,245,147,89,172,120,179,255,252,45,218,155,
    124,250,124,18,70,14,103,128,64,70,82,201,75,48,175,200,
    236,249,109,65,32,177,193,72,230,120,116,229,99,31,254,142,
    92,119,185,117,247,29,220,237,83,218,150,138,45,213,93,27,
    43,239,46,255,215,173,186,224,182,231,153,219,115,45,43,183,
    66,124,196,153,103,14,39,214,141,18,80,124,197,91,180,26,
    156,90,232,224,126,232,77,244,77,29,223,56,57,223,165,225,
    213,2,147,156,21,244,57,152,15,150,250,168,143,105,132,15,
    251,220,130,57,183,104,125,135,120,179,42,247,142,208,154,158,
    175,180,50,124,177,151,122,49,186,122,163,36,193,71,250,182,
    178,178,134,22,200,215,248,14,241,28,19,110,67,46,100,116,
    118,94,42,135,97,134,166,100,1,206,191,149,39,55,50,37,
    31,100,46,65,89,149,195,82,29,174,207,7,250,206,228,128,
    108,156,29,224,64,119,138,245,141,186,176,13,186,201,54,69,
    67,52,133,37,214,155,117,179,110,215,107,38,130,130,86,182,
    69,195,172,55,214,133,254,223,71,120,52,140,253,102,93,124,
    5,204,47,60,111,
};

EmbeddedPython embedded_m5_internal_param_SimpleMemory(
    "m5/internal/param_SimpleMemory.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/build/ALPHA/python/m5/internal/param_SimpleMemory.py",
    "m5.internal.param_SimpleMemory",
    data_m5_internal_param_SimpleMemory,
    2165,
    6894);

} // anonymous namespace