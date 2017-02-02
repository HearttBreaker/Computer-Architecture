#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_OpDesc[] = {
    120,156,205,88,109,111,219,214,21,62,151,148,100,75,182,98,
    57,114,236,186,205,22,13,69,48,173,88,163,46,93,214,110,
    11,130,165,77,247,134,194,201,168,2,73,180,98,44,77,94,
    201,148,37,82,32,169,36,42,236,47,115,176,237,195,128,253,
    136,97,31,246,63,246,191,182,243,156,75,210,178,219,20,5,
    54,68,179,197,139,203,123,47,207,61,47,207,121,185,215,167,
    252,175,202,207,47,58,68,233,71,138,40,224,159,162,9,209,
    84,209,64,145,210,138,130,54,29,87,41,249,49,5,85,122,
    73,52,176,72,91,116,198,29,155,126,111,81,180,41,223,212,
    104,98,203,136,162,69,131,116,133,6,85,122,28,109,83,69,
    215,232,184,65,201,23,164,148,138,20,61,9,214,40,88,167,
    151,76,157,59,117,33,184,78,65,67,58,117,10,54,164,211,
    160,69,139,244,6,13,152,248,26,13,154,76,234,29,38,117,
    69,72,253,11,164,2,158,217,161,160,137,229,204,203,83,172,
    172,96,165,236,113,69,168,108,21,156,181,104,208,42,250,219,
    52,216,166,96,139,244,54,141,175,210,144,197,107,149,52,218,
    164,109,26,239,208,96,135,52,255,218,116,198,26,8,182,101,
    237,53,89,123,181,92,187,43,107,247,104,176,71,154,127,187,
    102,109,141,250,221,107,172,207,240,223,252,215,101,125,82,182,
    201,205,51,157,164,97,28,185,97,52,140,67,11,243,53,52,
    208,190,143,102,45,55,195,199,48,195,63,73,108,16,88,185,
    25,78,137,9,43,240,63,177,232,84,58,167,22,45,186,116,
    162,104,92,161,192,166,19,222,166,10,6,70,138,206,44,250,
    220,198,130,83,110,43,172,184,239,82,37,51,54,24,139,226,
    12,165,53,58,173,210,73,149,250,79,78,44,12,28,215,41,
    249,7,125,121,93,136,174,11,81,139,78,184,173,208,89,133,
    78,107,244,152,23,241,208,184,14,241,213,147,19,150,148,71,
    250,221,10,115,123,176,36,46,68,9,194,36,242,166,58,107,
    114,223,157,121,137,55,117,31,206,30,232,212,239,54,138,37,
    113,122,107,230,101,71,142,124,99,67,25,211,89,38,180,226,
    72,103,27,220,25,134,81,224,78,227,96,62,209,217,58,8,
    185,195,112,162,93,87,38,127,51,157,197,73,246,73,146,196,
    137,3,125,202,224,36,246,202,47,160,77,127,18,167,186,139,
    221,100,27,7,228,51,172,30,206,132,34,24,16,62,241,113,
    192,236,37,225,44,99,51,25,138,88,13,106,93,24,72,154,
    20,182,234,69,195,180,55,31,245,142,226,169,78,223,125,191,
    55,235,205,188,232,75,253,34,236,61,136,253,249,84,71,89,
    218,211,190,190,115,231,118,111,226,29,222,233,141,244,244,78,
    239,112,30,78,130,222,253,79,31,253,250,126,111,182,200,142,
    226,168,199,163,97,148,105,86,212,164,183,172,162,91,60,127,
    21,155,61,15,71,110,40,98,186,71,122,50,211,9,184,76,
    223,4,35,170,165,54,85,77,217,170,171,154,220,171,242,99,
    171,235,214,134,58,8,33,168,15,225,1,48,187,128,212,223,
    73,140,199,182,63,182,40,185,14,192,140,249,167,96,97,134,
    77,31,115,150,204,253,14,26,50,163,99,27,48,48,131,39,
    2,50,70,27,175,188,11,187,71,36,72,169,210,184,70,6,
    65,12,60,3,169,100,129,150,151,131,140,197,196,43,148,254,
    237,34,133,168,69,108,1,118,88,30,218,229,173,254,40,160,
    236,119,193,248,129,224,35,59,10,211,248,121,36,86,64,95,
    220,168,207,58,121,180,120,120,56,214,126,150,222,224,129,167,
    241,188,227,123,81,20,103,29,47,8,58,94,150,37,225,225,
    60,211,105,39,139,59,55,211,110,29,102,223,46,32,86,210,
    91,204,10,72,193,252,12,41,243,18,132,126,198,47,109,121,
    17,253,167,58,99,120,28,197,65,202,227,32,49,210,153,3,
    38,179,43,220,220,47,182,19,28,118,107,5,106,82,61,25,
    102,13,1,160,151,166,174,108,135,113,193,26,190,126,230,77,
    230,58,195,250,52,243,50,222,21,93,179,209,10,208,246,6,
    228,45,196,133,10,221,40,142,130,5,115,27,250,111,131,145,
    55,4,115,155,4,212,93,99,196,173,113,91,163,38,35,176,
    101,249,16,172,146,227,77,176,182,11,53,144,216,95,229,65,
    132,113,119,198,161,166,107,73,172,16,9,197,33,59,232,225,
    99,7,176,118,222,66,115,29,205,119,10,37,188,94,77,52,
    47,107,226,61,236,110,137,248,190,157,11,90,58,213,193,5,
    167,218,63,119,42,14,144,125,56,135,5,23,58,119,14,27,
    170,72,238,229,158,0,183,99,48,240,244,18,254,69,65,78,
    11,130,215,10,232,58,192,227,50,40,71,75,160,116,96,27,
    65,164,179,255,42,101,222,88,181,50,71,70,153,239,99,247,
    205,28,75,77,193,80,67,249,0,130,149,171,86,212,250,128,
    59,139,61,168,117,89,161,123,156,248,30,71,77,201,96,146,
    5,37,207,155,152,98,244,108,58,21,160,110,104,211,110,158,
    153,82,132,128,89,18,191,88,116,226,97,39,163,130,135,187,
    55,211,91,55,211,159,115,144,232,220,147,176,99,194,132,9,
    4,137,158,37,236,240,117,121,49,78,236,138,67,187,121,122,
    97,197,35,203,139,189,68,221,18,179,210,44,65,168,90,129,
    174,27,165,174,193,250,79,177,117,67,20,109,211,30,63,13,
    37,252,185,177,68,78,169,56,100,150,159,143,160,114,72,173,
    9,245,158,211,55,220,139,96,16,209,249,254,5,244,188,86,
    177,156,119,192,96,225,130,53,42,177,130,199,6,227,240,138,
    63,147,84,102,138,254,68,192,5,155,63,247,35,241,88,60,
    48,111,27,203,255,64,18,148,190,38,13,90,198,31,173,60,
    108,177,187,166,31,200,82,147,21,127,75,127,89,138,104,103,
    54,41,100,48,59,175,189,150,51,88,165,244,96,1,212,183,
    202,82,149,139,174,14,83,29,121,41,150,25,167,182,75,167,
    62,15,142,101,221,196,145,234,245,98,109,221,108,234,130,191,
    95,157,35,13,233,225,45,213,182,150,240,243,67,52,239,150,
    208,81,197,216,107,99,245,198,229,120,190,148,217,92,19,67,
    127,9,126,42,34,193,86,77,242,176,249,188,116,146,106,225,
    36,183,75,39,209,18,210,95,74,149,142,214,2,14,206,44,
    197,199,31,46,105,112,242,168,144,174,210,160,6,119,146,66,
    84,229,222,166,138,32,135,224,120,33,95,136,118,14,140,222,
    74,40,24,43,163,121,177,130,160,2,67,223,157,120,211,195,
    192,187,215,199,198,216,221,47,252,207,42,68,105,45,139,2,
    223,81,175,146,70,94,223,43,68,122,182,130,128,242,35,222,
    167,20,69,220,39,136,125,137,34,159,29,233,206,84,79,15,
    249,160,118,20,206,58,195,137,55,18,171,217,185,168,15,11,
    81,51,49,251,229,156,45,85,207,65,220,241,227,136,179,192,
    220,207,226,164,19,104,62,194,232,192,224,254,162,35,75,57,
    232,37,163,84,16,119,252,28,221,21,89,216,229,67,105,200,
    101,239,103,133,90,204,129,169,140,253,82,233,26,39,226,52,
    202,199,144,108,97,194,219,79,208,252,0,205,77,90,93,138,
    232,129,1,108,8,69,214,56,2,213,149,28,21,204,138,71,
    88,157,126,213,151,255,250,109,124,217,92,98,228,30,93,195,
    74,189,134,179,49,218,58,82,196,160,81,12,110,72,187,41,
    131,205,98,240,138,180,91,50,216,42,46,79,182,101,240,42,
    13,218,184,141,192,200,14,162,196,218,127,27,37,196,175,86,
    228,81,131,255,105,112,112,110,255,31,72,226,72,177,250,77,
    129,65,45,139,217,52,129,97,172,138,202,126,89,70,185,77,
    104,95,194,164,235,39,218,203,180,177,221,155,43,145,88,98,
    143,97,227,243,210,130,133,88,229,41,231,131,82,180,51,169,
    175,22,59,75,53,183,24,84,61,230,98,136,235,242,19,145,
    222,181,76,105,126,142,214,74,169,4,160,33,210,207,221,101,
    69,152,186,27,172,120,179,153,142,130,243,154,90,102,86,0,
    4,4,182,47,232,188,176,225,2,122,135,159,175,186,39,4,
    91,146,83,76,89,45,29,114,53,70,21,24,235,194,156,114,
    23,121,30,203,29,24,211,68,239,50,112,59,63,43,205,179,
    127,25,163,97,154,206,245,167,94,134,19,220,55,204,114,113,
    37,169,164,24,200,118,47,47,141,103,5,149,87,76,129,4,
    84,39,111,114,35,113,105,209,199,114,10,3,133,87,78,130,
    134,92,45,154,119,177,163,248,93,160,39,58,211,23,80,39,
    80,204,207,211,129,230,148,29,47,248,136,39,135,36,126,159,
    184,238,170,242,217,135,188,207,83,108,136,59,64,228,179,26,
    103,180,107,242,95,175,212,149,148,16,151,110,144,13,151,80,
    139,57,16,44,82,71,66,216,86,105,88,185,236,44,146,183,
    56,52,142,182,7,222,212,220,92,201,61,140,243,61,52,111,
    23,216,16,143,52,231,69,57,134,153,195,48,59,175,28,135,
    165,156,113,110,81,126,189,173,163,57,100,16,181,103,216,214,
    72,213,15,167,230,174,78,62,46,223,36,103,47,5,68,177,
    66,162,71,97,202,58,145,207,203,165,121,136,248,240,107,209,
    185,252,217,138,204,101,106,100,115,39,112,15,66,166,240,38,
    220,147,213,183,234,170,102,225,94,214,86,13,213,84,21,181,
    217,172,219,245,90,189,106,179,73,49,210,86,13,187,222,216,
    228,181,251,108,216,134,181,223,172,171,255,0,234,124,176,79,
};

EmbeddedPython embedded_m5_internal_param_OpDesc(
    "m5/internal/param_OpDesc.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/build/ALPHA/python/m5/internal/param_OpDesc.py",
    "m5.internal.param_OpDesc",
    data_m5_internal_param_OpDesc,
    2112,
    6548);

} // anonymous namespace