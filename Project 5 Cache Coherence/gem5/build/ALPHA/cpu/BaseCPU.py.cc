#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BaseCPU[] = {
    120,156,181,88,91,111,220,198,21,62,228,174,86,90,89,210,
    234,126,139,29,51,78,28,175,21,91,27,219,145,237,220,236,
    232,22,219,141,162,26,148,156,164,11,4,4,69,142,36,74,
    188,108,56,92,203,106,157,190,36,15,253,11,125,43,82,160,
    125,110,95,138,62,244,161,40,208,75,218,31,81,4,109,209,
    127,145,158,115,134,228,114,87,74,145,0,177,101,141,102,190,
    153,115,102,230,204,185,210,129,244,95,9,127,223,49,0,228,
    223,53,0,23,255,107,224,3,52,85,95,7,95,131,64,135,
    166,14,26,141,75,224,151,96,59,237,149,85,175,12,126,31,
    4,21,104,86,212,154,62,240,251,33,232,135,102,191,26,87,
    192,31,128,96,0,154,3,106,220,15,126,21,130,42,52,171,
    160,137,1,248,12,55,27,4,161,131,59,0,115,110,21,14,
    117,136,127,203,155,15,130,127,6,130,33,104,14,65,48,12,
    205,97,69,126,6,252,17,8,70,160,57,2,90,248,117,78,
    56,196,132,255,102,194,97,240,107,16,212,160,89,83,36,35,
    224,143,66,48,10,205,81,36,249,71,78,82,99,146,89,94,
    50,10,254,24,4,99,208,28,83,36,99,224,143,67,48,14,
    205,113,36,249,121,78,50,206,36,239,241,146,9,240,39,32,
    152,128,230,132,34,153,4,127,18,130,73,104,78,34,201,110,
    78,50,197,36,63,229,37,211,224,79,65,48,5,205,41,69,
    50,3,254,52,4,211,208,156,70,146,27,57,201,44,147,252,
    134,151,204,129,63,3,193,12,52,103,20,201,60,248,179,16,
    204,66,115,22,73,112,252,28,136,42,236,106,224,158,133,207,
    129,132,249,163,230,28,189,225,86,253,28,62,172,247,53,254,
    219,172,227,203,66,50,128,205,78,219,243,221,245,240,177,66,
    168,89,80,221,51,216,172,70,251,34,22,97,178,210,150,10,
    28,196,230,65,40,147,237,216,118,68,172,176,42,54,235,79,
    68,47,244,190,8,126,184,115,32,156,132,137,182,151,205,123,
    235,219,214,131,173,229,164,15,135,182,223,218,183,235,122,118,
    136,101,26,174,109,175,116,6,15,182,87,20,171,90,142,132,
    137,136,227,118,43,145,204,65,182,236,216,233,92,99,139,134,
    219,27,5,34,70,10,68,164,213,79,110,223,84,11,42,216,
    124,116,251,102,78,48,164,198,27,145,99,251,203,45,207,73,
    202,8,4,94,43,189,118,63,221,7,71,249,250,145,20,232,
    225,111,199,65,135,255,114,28,228,235,135,213,184,231,14,173,
    232,40,147,24,221,225,33,13,187,238,192,72,129,136,206,177,
    98,75,177,250,240,145,83,180,214,21,178,214,15,240,204,2,
    77,71,35,141,71,243,20,37,104,150,65,244,193,65,5,68,
    63,28,12,144,18,124,166,147,149,17,56,72,182,140,70,75,
    200,25,70,134,200,114,209,88,9,25,102,100,4,68,141,204,
    149,144,81,70,198,200,90,81,37,9,25,103,100,2,196,36,
    160,149,18,50,149,81,149,200,86,9,153,46,32,103,24,153,
    97,100,22,208,62,209,44,9,153,43,172,25,97,100,30,196,
    115,112,112,22,246,80,157,107,140,156,3,241,60,217,228,28,
    218,33,153,194,130,70,52,231,65,156,39,13,71,43,164,69,
    6,116,129,19,12,190,192,224,5,62,229,36,35,47,66,248,
    59,45,99,167,140,241,152,217,189,4,226,226,9,118,8,190,
    124,130,221,165,110,118,251,57,187,105,102,247,87,102,87,7,
    81,63,193,46,7,139,236,46,119,179,155,203,217,205,48,187,
    25,157,22,45,128,88,56,193,46,7,139,236,94,233,102,247,
    101,46,59,229,70,118,153,221,21,16,87,78,176,203,193,34,
    187,171,221,236,126,146,179,155,99,118,127,209,59,207,55,207,
    139,22,153,172,1,162,113,98,131,28,44,110,240,106,247,6,
    243,236,195,212,30,211,247,238,139,107,112,112,157,84,243,51,
    13,88,174,55,88,7,207,242,242,215,160,131,156,99,100,169,
    128,60,207,200,205,2,114,158,145,91,5,93,54,24,185,93,
    208,247,23,24,121,157,145,55,192,189,0,238,139,140,188,89,
    208,220,151,24,121,139,145,183,65,220,1,247,34,35,119,65,
    188,3,238,203,116,214,230,50,247,47,113,127,5,220,58,184,
    151,97,15,215,172,230,2,188,9,135,21,136,191,44,137,85,
    112,23,192,125,133,166,111,225,60,186,113,84,253,230,26,183,
    235,208,173,92,149,178,88,3,247,10,184,87,213,242,53,16,
    235,224,46,194,158,134,131,117,162,117,27,228,249,155,239,130,
    251,42,119,238,129,123,141,59,247,193,189,5,238,117,248,28,
    79,244,3,238,227,255,27,240,57,30,234,189,108,248,26,15,
    55,192,93,98,146,247,193,220,170,223,70,31,99,206,147,215,
    37,71,38,143,101,34,2,35,98,239,206,241,68,146,63,68,
    167,100,120,46,70,11,111,215,19,177,71,78,76,158,197,38,
    108,7,59,34,54,162,93,227,254,135,70,178,31,11,219,53,
    156,8,157,218,147,68,202,41,10,30,161,189,227,11,99,183,
    29,34,187,40,52,18,138,36,30,249,54,73,17,107,245,216,
    193,217,36,50,100,98,199,73,207,50,73,97,202,217,23,206,
    33,110,129,39,144,23,113,44,20,67,134,91,145,23,38,70,
    75,138,182,27,25,30,134,174,184,205,228,178,184,18,57,39,
    158,76,60,71,158,182,146,93,251,171,72,49,77,126,153,118,
    197,107,8,3,119,12,133,79,180,206,161,124,174,195,236,147,
    182,39,36,174,233,218,108,148,220,125,28,225,129,165,144,116,
    153,184,29,154,20,37,76,186,128,36,247,191,102,39,182,129,
    238,95,214,210,32,155,18,51,54,201,88,26,8,140,85,20,
    95,28,249,190,136,77,10,9,38,137,223,28,163,134,214,153,
    51,196,146,14,251,0,183,218,247,164,97,27,143,66,122,21,
    151,120,221,229,155,175,69,225,165,196,56,12,163,35,227,104,
    223,78,104,130,142,213,150,248,16,81,108,96,160,54,46,74,
    121,139,110,44,226,192,11,237,68,224,66,17,26,182,239,167,
    175,40,141,125,251,177,48,176,139,146,118,213,78,116,105,124,
    221,118,152,200,107,167,208,134,199,153,6,40,42,121,130,234,
    59,239,232,71,172,79,223,113,199,2,213,2,101,69,36,218,
    199,182,79,34,104,197,164,49,81,59,225,87,198,71,219,139,
    241,213,140,0,27,123,79,200,171,184,220,21,187,168,110,177,
    216,67,165,137,109,126,164,35,47,217,55,82,203,168,147,4,
    165,29,180,124,47,220,187,156,80,154,115,45,81,154,234,71,
    206,161,33,91,66,184,133,49,102,55,168,21,227,61,207,206,
    154,22,179,230,20,225,135,81,156,200,106,166,47,52,226,84,
    205,115,232,118,86,43,27,187,157,49,43,148,151,236,44,30,
    217,62,42,237,98,142,185,61,216,72,38,9,206,54,22,91,
    94,196,122,87,128,176,107,73,31,223,128,13,183,103,34,176,
    241,246,177,67,134,175,167,137,201,42,37,38,255,162,103,225,
    50,98,14,83,14,114,97,231,41,211,196,40,240,20,192,210,
    33,252,99,62,93,226,233,59,128,38,215,153,254,34,159,46,
    243,180,7,9,231,41,148,152,128,246,169,6,79,181,108,233,
    81,190,180,159,151,254,12,48,209,234,112,250,40,159,30,224,
    233,95,83,166,214,153,126,61,159,86,69,199,159,41,243,235,
    76,207,83,82,147,174,192,184,132,57,219,65,149,179,26,141,
    19,241,173,58,101,145,155,29,171,238,216,38,167,119,40,78,
    203,118,221,248,65,154,184,25,189,22,123,243,20,179,60,205,
    230,79,218,41,59,219,58,229,217,38,113,54,135,179,92,189,
    243,66,38,207,146,50,153,19,212,144,123,48,231,104,93,41,
    117,233,148,242,138,39,94,162,210,114,26,73,225,239,50,27,
    203,207,18,227,58,241,231,70,222,195,166,17,238,202,70,123,
    175,177,31,161,121,92,189,209,104,53,90,118,248,99,228,210,
    88,139,156,118,128,193,64,54,132,35,150,150,174,55,124,123,
    103,169,177,39,130,165,134,140,157,134,211,106,55,210,76,118,
    177,117,156,208,65,28,52,208,68,228,23,238,220,247,87,180,
    155,65,123,106,163,90,45,255,29,42,142,244,146,54,168,57,
    153,218,149,179,156,248,37,74,250,207,209,3,30,160,108,63,
    30,135,79,117,122,190,167,58,76,227,139,149,31,125,50,8,
    31,242,211,17,229,166,156,72,47,189,120,81,26,111,27,59,
    109,185,200,202,222,201,225,45,182,42,87,153,85,157,182,50,
    95,204,100,136,203,185,126,106,61,35,25,145,127,192,184,25,
    98,208,93,229,83,176,39,248,61,109,83,78,133,115,82,0,
    107,223,66,0,233,188,150,207,235,133,249,133,84,64,37,22,
    208,228,9,1,41,163,255,70,201,177,46,145,175,176,48,108,
    43,217,241,132,146,96,50,221,53,163,120,245,10,215,188,68,
    77,61,147,233,247,47,216,201,142,96,31,165,71,97,209,254,
    33,139,204,36,90,250,113,74,169,120,245,204,181,81,48,80,
    178,69,31,68,126,0,5,135,73,15,14,80,142,33,164,114,
    69,48,247,17,164,33,155,44,22,243,50,53,87,232,74,29,
    69,34,107,75,165,65,250,68,30,37,23,15,2,207,72,2,
    181,142,4,150,125,159,47,255,167,206,229,135,181,138,86,213,
    28,170,88,179,95,190,252,127,0,50,215,11,116,71,234,176,
    51,62,80,253,18,129,105,191,76,90,135,138,181,167,134,125,
    228,120,209,219,243,87,26,76,129,191,130,167,37,136,127,9,
    79,203,220,150,120,81,63,13,169,51,64,136,98,132,30,23,
    43,87,235,12,77,165,200,80,134,160,190,30,112,84,64,231,
    79,153,177,142,219,132,83,57,62,64,85,106,134,19,225,48,
    213,241,135,37,222,61,93,51,72,254,60,91,243,201,87,156,
    76,211,171,13,179,246,215,242,56,187,24,136,192,146,152,237,
    170,56,218,141,169,8,48,146,57,119,73,206,13,195,175,165,
    66,173,213,195,128,102,221,111,156,253,182,161,155,2,72,154,
    6,47,246,174,47,206,245,208,177,34,202,244,211,136,204,62,
    97,208,6,252,9,67,93,150,187,234,142,28,200,80,121,212,
    61,41,59,55,159,167,230,229,44,244,36,163,167,92,150,193,
    222,59,178,207,196,149,204,93,77,112,208,225,12,166,164,8,
    248,131,71,122,116,158,220,124,180,177,81,239,203,173,69,231,
    51,242,31,215,81,12,143,212,95,247,232,89,133,42,146,38,
    134,241,135,177,247,24,195,213,22,230,120,201,198,53,118,200,
    242,111,180,215,5,182,153,42,254,12,225,15,5,167,33,30,
    141,227,207,160,54,162,79,149,107,20,170,232,214,149,162,53,
    125,92,116,37,100,77,168,251,152,187,148,65,43,230,74,180,
    130,173,227,64,249,148,212,84,216,78,14,208,36,250,210,57,
    171,66,6,183,167,165,134,84,136,113,244,22,254,245,110,53,
    171,211,179,154,119,169,97,135,77,98,79,162,141,235,43,109,
    201,94,138,129,148,200,188,158,105,135,114,215,252,246,245,74,
    238,173,223,164,230,45,72,131,34,18,153,111,19,114,231,217,
    249,239,57,245,34,219,71,209,134,120,44,124,126,139,251,88,
    130,218,177,179,127,252,79,218,109,136,223,100,154,83,6,122,
    9,206,81,179,95,150,62,41,87,193,63,243,65,181,236,78,
    207,232,220,195,234,220,171,74,191,87,91,237,255,210,14,58,
    159,245,84,195,220,172,111,66,154,76,90,86,104,7,194,178,
    84,122,102,5,145,219,246,105,72,247,72,142,91,130,59,219,
    113,91,89,172,189,67,117,138,147,240,87,199,135,118,108,7,
    252,128,91,92,174,112,23,65,60,183,250,136,25,30,51,164,
    138,25,134,48,41,99,136,44,223,115,153,229,163,80,122,123,
    161,112,249,0,88,226,111,171,2,141,247,93,137,34,159,183,
    122,215,246,165,224,143,165,89,213,110,113,85,163,78,231,57,
    135,28,123,187,231,44,46,243,249,107,131,249,6,53,175,211,
    149,40,191,112,35,171,83,210,91,84,51,202,12,239,20,240,
    41,78,10,187,129,246,25,58,199,220,199,50,110,215,243,5,
    159,22,215,167,53,58,87,74,31,96,212,139,98,37,21,90,
    250,80,149,233,124,203,163,40,62,164,82,81,165,213,164,70,
    38,127,11,89,130,52,203,54,141,236,69,248,35,53,86,209,
    38,219,18,21,104,42,229,38,103,170,242,110,74,224,84,242,
    77,9,17,103,224,124,158,180,54,39,218,89,72,179,114,243,
    5,106,46,100,182,183,74,149,42,250,192,41,54,187,39,234,
    146,22,22,198,86,90,24,179,32,11,51,225,113,58,147,147,
    208,53,78,39,73,103,58,36,99,74,96,92,247,90,89,105,
    204,249,39,23,190,86,177,240,229,119,94,165,50,150,123,78,
    222,227,162,214,36,237,97,5,64,74,187,237,39,234,141,99,
    214,166,180,75,34,120,159,93,9,37,30,189,65,133,170,115,
    243,21,106,232,171,69,39,103,82,225,32,10,133,217,200,125,
    23,37,187,230,122,151,193,126,239,86,203,138,185,65,76,127,
    129,77,5,83,163,138,62,69,206,93,231,95,189,202,206,190,
    154,142,70,181,41,252,169,112,24,232,238,77,157,64,84,111,
    60,235,115,69,51,156,241,43,254,232,29,254,20,98,134,112,
    151,9,157,78,194,89,170,94,157,168,150,171,149,161,74,109,
    166,54,80,159,207,116,137,197,28,44,45,226,59,120,161,144,
    42,88,87,21,214,34,221,87,10,79,163,56,122,114,204,102,
    79,238,159,51,85,206,79,73,224,38,199,222,128,26,155,154,
    30,93,31,202,205,226,255,106,125,65,205,231,159,237,107,241,
    157,222,82,222,241,14,169,13,23,217,36,177,65,109,80,31,
    205,36,134,189,105,109,130,71,223,216,234,255,3,115,110,102,
    168,
};

EmbeddedPython embedded_m5_objects_BaseCPU(
    "m5/objects/BaseCPU.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/cpu/BaseCPU.py",
    "m5.objects.BaseCPU",
    data_m5_objects_BaseCPU,
    3057,
    7456);

} // anonymous namespace