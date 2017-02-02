#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_multidict[] = {
    120,156,205,88,91,115,219,68,20,62,187,242,253,158,123,221,
    150,54,45,20,204,48,212,67,74,6,134,94,232,148,148,48,
    180,147,73,149,14,41,25,90,141,34,109,28,39,182,236,72,
    114,73,152,228,133,116,134,39,126,7,15,252,11,126,25,231,
    28,93,44,59,105,31,96,234,54,142,215,159,214,242,238,126,
    223,119,246,232,72,22,132,127,41,124,223,95,4,240,254,22,
    0,54,64,75,192,22,3,37,96,71,128,45,224,21,192,41,
    192,207,91,18,148,6,182,132,125,9,238,95,66,73,234,221,
    74,1,2,149,130,83,252,89,154,113,154,113,134,113,134,113,
    22,108,141,206,177,83,112,199,78,51,202,32,202,50,202,33,
    202,51,42,32,42,50,42,33,42,211,72,244,11,250,200,192,
    93,187,194,29,120,122,48,210,93,60,218,203,129,93,165,137,
    78,37,8,187,6,171,248,213,94,158,214,181,250,131,61,133,
    135,233,248,48,152,180,30,128,92,4,10,17,40,49,224,9,
    67,144,139,64,33,2,124,206,97,157,150,177,87,160,81,87,
    158,23,97,11,87,92,196,241,15,154,98,147,190,40,129,61,
    13,246,12,175,40,60,206,128,61,27,31,231,248,120,46,56,
    78,1,143,204,77,25,219,114,168,30,174,126,30,236,5,176,
    47,128,93,135,86,138,132,100,41,178,248,149,131,238,92,132,
    141,198,37,52,206,207,99,211,29,116,252,182,221,182,124,43,
    242,84,226,251,1,121,250,15,2,133,46,9,104,179,167,175,
    208,13,25,122,186,197,102,190,98,15,209,31,2,204,159,0,
    78,151,102,144,165,229,18,192,117,103,25,228,73,26,2,5,
    64,223,8,20,73,35,2,200,181,200,160,76,98,17,168,0,
    250,72,160,10,232,31,129,26,57,70,96,138,84,65,207,104,
    73,51,128,110,81,231,44,169,71,96,142,52,36,48,15,250,
    70,99,14,105,88,68,74,11,201,61,34,114,55,72,0,128,
    99,9,127,98,11,96,8,56,22,12,36,209,37,160,17,233,
    141,6,70,54,172,53,40,210,125,106,72,43,63,141,160,211,
    179,204,142,159,65,212,55,93,229,248,126,150,190,85,29,229,
    43,187,161,69,167,123,170,179,163,243,17,157,185,255,171,233,
    182,188,6,201,204,141,247,20,155,166,179,227,53,7,173,230,
    110,175,171,188,207,111,53,251,205,190,233,252,166,14,219,205,
    149,158,53,232,226,208,94,83,89,106,121,121,169,217,49,183,
    151,155,45,213,93,110,122,174,213,236,31,249,187,61,167,137,
    71,3,191,221,105,198,86,222,196,47,114,56,176,97,180,157,
    182,111,24,139,52,19,77,15,162,42,242,194,34,70,34,20,
    228,59,18,99,62,16,195,103,1,246,120,111,98,32,225,127,
    196,158,9,80,227,249,174,78,93,172,64,219,87,93,143,207,
    208,211,17,163,183,76,43,203,180,112,21,134,65,14,122,146,
    89,197,140,100,196,104,42,180,23,233,136,144,78,57,34,67,
    39,49,9,157,54,192,100,215,31,216,226,170,62,18,104,36,
    8,200,112,241,177,37,215,33,88,61,19,56,102,51,250,215,
    66,123,226,158,164,61,58,253,156,245,217,53,61,99,95,29,
    113,212,5,100,211,145,125,216,61,9,150,37,102,105,245,28,
    223,108,59,158,97,124,54,198,148,150,146,142,152,174,35,56,
    170,132,100,145,215,221,77,231,54,164,48,22,247,11,224,62,
    2,113,130,201,238,56,138,204,253,12,184,223,18,23,58,76,
    209,233,119,14,30,115,224,74,248,93,130,35,224,89,98,211,
    166,99,93,72,247,71,234,232,161,235,246,92,61,222,156,79,
    221,129,210,9,4,10,242,233,101,224,141,128,169,111,18,74,
    21,89,41,204,26,180,151,12,227,38,77,86,98,161,52,81,
    193,221,90,21,53,105,105,161,100,113,112,124,52,22,28,126,
    112,17,67,13,168,87,99,89,198,114,23,211,228,24,232,247,
    250,188,123,191,55,59,158,98,117,198,217,19,122,105,118,6,
    19,84,192,83,126,160,192,87,52,89,138,21,152,57,39,88,
    182,41,88,170,195,96,169,111,108,58,143,227,104,121,30,70,
    75,176,75,88,7,244,25,165,41,185,79,194,244,190,151,230,
    24,122,18,98,30,226,117,225,147,137,194,71,175,142,40,216,
    82,190,62,75,61,218,89,241,244,169,9,101,146,64,183,86,
    164,219,237,100,228,80,220,220,16,69,121,54,211,95,28,201,
    139,34,194,146,240,194,153,108,223,81,78,192,95,155,120,162,
    12,18,61,46,192,48,86,96,52,209,211,98,200,11,139,8,
    253,129,224,176,49,220,13,92,89,45,192,47,18,78,4,96,
    48,28,179,183,59,18,126,18,7,53,216,12,200,186,167,112,
    248,24,226,48,225,223,124,61,250,27,30,111,63,11,238,74,
    116,152,74,28,70,35,174,0,254,111,58,0,231,37,29,190,
    188,12,147,141,163,14,253,243,146,141,62,55,25,73,117,170,
    249,86,135,97,114,89,84,101,30,219,43,195,171,79,124,249,
    44,0,132,180,113,179,68,196,120,137,114,100,237,147,88,54,
    173,118,125,44,4,162,197,114,8,44,82,8,212,67,203,194,
    202,250,132,243,34,58,84,134,205,132,55,28,194,151,70,120,
    176,55,180,135,38,17,213,249,96,46,151,43,167,141,145,84,
    23,209,138,183,234,7,148,105,32,73,171,20,210,122,33,1,
    121,189,129,147,126,121,66,222,16,159,205,115,182,167,22,121,
    243,49,121,115,53,73,98,106,100,159,189,193,161,119,179,75,
    184,82,32,139,176,84,242,182,134,14,213,71,115,15,59,244,
    225,25,135,166,71,200,189,206,167,119,196,140,214,77,172,94,
    252,119,195,228,123,104,88,33,52,140,43,22,207,252,63,150,
    201,247,205,50,170,64,2,94,42,97,90,196,40,174,138,62,
    65,112,84,34,86,97,73,52,139,37,17,112,73,116,29,75,
    34,141,75,195,141,103,227,174,81,85,19,20,135,195,218,47,
    184,137,221,49,113,21,147,42,101,244,5,28,120,151,102,200,
    49,63,77,148,176,126,137,171,222,152,229,195,113,150,75,49,
    203,251,32,132,8,138,154,61,222,122,88,190,36,42,226,224,
    70,97,92,131,116,164,1,95,149,245,25,106,184,172,59,167,
    38,214,175,79,48,154,177,24,14,45,112,32,81,213,149,68,
    25,47,20,229,115,46,21,223,144,105,244,228,7,201,98,40,
    99,61,228,179,72,88,216,162,10,238,50,61,171,89,61,102,
    109,240,28,65,53,15,158,118,80,9,55,50,141,179,230,85,
    32,241,52,104,209,30,116,251,188,143,22,241,47,120,250,193,
    27,205,195,27,58,223,116,44,165,67,36,213,248,141,38,23,
    59,61,123,34,119,15,52,161,65,107,125,9,97,217,2,34,
    45,50,98,26,213,226,178,38,149,212,233,69,176,251,79,56,
    42,112,91,28,62,96,161,180,72,168,117,46,122,180,232,70,
    115,133,50,2,221,70,104,97,84,213,177,74,22,14,255,2,
    99,10,7,56,168,98,73,137,194,31,147,176,227,161,69,119,
    105,67,149,120,47,155,253,190,114,236,64,176,209,141,167,95,
    163,230,198,132,162,44,23,201,134,215,131,19,154,169,194,202,
    101,88,185,170,88,192,40,91,107,208,182,12,31,88,56,102,
    87,25,6,71,128,97,116,123,246,160,131,135,58,229,10,157,
    250,116,186,25,209,105,12,125,154,26,122,158,164,95,160,230,
    98,148,65,185,140,211,169,166,9,202,226,43,212,92,165,102,
    49,98,207,129,179,214,115,20,39,4,157,82,181,78,151,35,
    189,49,162,202,91,78,70,52,58,173,139,159,210,101,68,41,
    157,215,248,149,207,167,240,173,241,59,53,124,151,50,249,92,
    62,27,202,212,53,219,120,191,194,57,212,87,158,255,133,97,
    242,147,4,51,209,179,205,61,219,137,30,139,123,172,68,143,
    205,61,118,162,71,113,46,142,59,150,12,51,129,131,1,118,
    248,9,31,159,126,47,134,75,247,248,187,22,223,205,237,244,
    122,252,185,109,186,44,245,118,199,220,109,19,221,54,157,211,
    166,32,109,115,42,104,84,162,201,12,195,236,116,144,17,141,
    215,219,222,83,150,31,4,244,167,16,62,38,224,249,98,180,
    20,163,91,49,250,50,48,114,104,58,71,59,59,92,159,160,
    175,236,208,157,32,116,239,81,24,122,63,98,147,151,243,173,
    146,200,99,178,192,151,44,136,240,133,40,139,159,89,89,147,
    85,190,75,226,151,204,7,72,206,224,187,38,107,162,134,169,
    6,147,141,44,202,121,249,47,68,62,246,27,
};

EmbeddedPython embedded_m5_util_multidict(
    "m5/util/multidict.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/python/m5/util/multidict.py",
    "m5.util.multidict",
    data_m5_util_multidict,
    1884,
    6419);

} // anonymous namespace