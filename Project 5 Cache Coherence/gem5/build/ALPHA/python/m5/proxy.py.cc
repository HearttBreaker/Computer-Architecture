#include "sim/init.hh"

namespace {

const uint8_t data_m5_proxy[] = {
    120,156,205,89,91,111,27,199,21,62,187,75,82,90,137,186,
    216,138,105,59,113,99,230,98,155,189,216,4,226,42,177,3,
    35,137,107,57,117,208,86,80,86,110,21,171,53,22,20,119,
    40,81,38,151,212,238,208,150,92,9,40,236,62,247,177,125,
    44,80,32,15,125,111,129,190,180,64,144,162,64,31,218,135,
    60,245,15,244,119,180,231,59,51,187,36,173,24,72,11,208,
    173,229,93,205,206,204,206,229,59,223,57,231,155,85,147,236,
    191,34,95,31,84,137,210,191,114,33,226,255,14,117,136,54,
    185,224,146,114,168,229,80,228,209,207,137,158,18,221,219,116,
    41,42,144,114,165,182,152,215,122,20,149,178,218,169,188,182,
    64,209,116,86,235,231,181,69,138,102,240,176,89,162,104,54,
    155,160,156,55,79,145,154,162,104,142,212,52,69,243,164,124,
    174,117,55,103,178,74,95,42,167,165,114,150,162,5,138,22,
    105,219,165,205,114,182,240,57,218,156,67,97,189,118,130,119,
    211,254,23,255,91,213,62,23,191,211,72,213,90,210,219,63,
    104,102,251,118,81,139,125,111,113,65,241,130,28,12,130,149,
    185,24,1,5,15,24,160,80,176,24,240,234,85,81,150,94,
    144,199,41,139,194,230,52,16,64,193,39,53,35,203,118,80,
    54,104,240,82,131,245,218,52,79,211,244,248,230,217,201,111,
    97,242,243,92,56,116,232,144,40,228,130,43,5,89,8,10,
    30,10,235,53,135,251,172,214,10,124,215,101,190,133,169,106,
    36,205,29,254,213,105,233,153,145,138,65,95,163,211,106,47,
    86,122,22,245,221,65,71,183,251,157,182,74,106,152,84,90,
    229,173,89,41,12,71,241,135,207,131,126,13,232,200,45,253,
    30,223,234,113,43,173,15,182,235,59,189,174,74,47,95,173,
    247,235,253,70,252,88,237,183,235,43,189,230,160,171,98,157,
    214,85,83,45,47,191,85,239,52,182,150,235,219,170,187,92,
    79,147,102,189,127,160,119,122,113,157,159,250,0,254,10,63,
    3,131,48,108,199,109,29,134,151,48,65,9,211,56,62,255,
    52,29,11,75,33,131,102,141,4,133,93,162,228,156,20,28,
    42,115,137,109,115,228,80,252,186,109,43,39,215,108,35,23,
    216,92,104,43,193,92,92,96,96,217,80,167,209,236,130,94,
    167,215,107,96,251,170,0,177,142,141,99,254,181,70,194,155,
    208,115,152,183,23,183,6,169,138,132,41,26,43,186,34,200,
    5,40,6,110,134,97,191,161,119,106,120,10,48,156,244,75,
    39,136,218,148,160,150,234,36,12,191,133,241,203,2,218,18,
    131,198,151,91,114,114,86,121,25,116,55,12,171,118,197,41,
    152,138,76,51,94,37,163,195,149,149,39,46,197,188,106,151,
    180,7,228,158,186,180,91,16,14,186,40,59,66,57,79,96,
    114,132,92,95,7,113,27,113,220,211,213,84,233,106,67,235,
    164,189,53,208,170,122,233,66,122,169,218,139,171,178,208,106,
    111,107,87,53,181,0,44,172,76,117,35,209,233,163,182,222,
    209,243,252,120,51,123,237,118,146,244,18,141,110,233,160,175,
    146,0,155,49,116,101,46,106,140,30,134,6,244,98,134,55,
    42,229,141,135,141,206,64,77,14,233,224,37,30,111,25,3,
    79,11,196,11,142,231,204,57,77,215,50,179,152,193,139,53,
    107,65,152,33,50,64,182,60,128,151,190,137,5,51,230,6,
    99,16,175,8,31,126,224,82,242,126,230,231,69,138,23,80,
    40,112,27,87,93,119,185,230,16,160,99,142,213,180,10,74,
    10,162,67,247,229,98,170,171,91,170,218,142,181,218,102,119,
    158,202,80,110,167,237,152,145,142,155,74,3,51,110,23,196,
    58,189,120,91,16,107,117,122,140,30,252,251,238,65,223,96,
    31,160,67,128,222,35,28,198,173,167,119,120,232,73,243,152,
    119,21,134,55,134,60,62,227,148,25,232,178,183,48,4,58,
    143,142,175,230,33,192,130,184,4,196,214,13,144,92,251,82,
    22,28,101,35,95,182,47,56,120,162,82,70,114,130,27,243,
    109,176,109,238,168,230,131,59,195,184,182,224,20,204,166,138,
    163,236,249,167,113,206,35,23,28,58,242,178,232,117,153,76,
    156,130,27,58,244,19,142,100,5,180,90,26,121,148,196,180,
    191,76,135,30,165,187,232,195,62,123,36,157,153,141,107,182,
    211,177,151,247,174,211,6,218,248,165,95,195,198,145,1,174,
    132,96,136,194,20,237,78,75,160,144,26,230,112,22,28,124,
    58,44,128,96,204,233,228,31,40,31,26,252,255,2,87,229,
    56,98,249,93,160,221,178,157,147,39,180,171,152,67,253,83,
    39,139,34,105,29,27,111,196,151,116,149,13,209,235,60,84,
    54,96,152,240,209,170,106,38,166,121,104,37,189,174,148,210,
    69,188,115,208,236,128,241,213,65,44,47,212,230,51,162,126,
    216,232,164,74,98,178,144,189,213,142,35,19,156,133,97,125,
    137,231,193,73,112,96,46,227,64,216,143,84,218,20,75,245,
    49,33,194,105,112,26,93,36,254,128,138,193,32,214,237,174,
    141,79,24,201,206,27,32,71,75,92,27,70,164,45,150,19,
    226,112,28,245,164,34,226,164,27,188,154,49,108,50,209,233,
    34,143,247,3,12,124,81,216,85,114,74,174,239,156,113,125,
    201,159,37,230,218,57,78,6,30,255,92,112,217,161,248,231,
    164,123,60,118,221,49,236,179,254,180,40,145,231,96,30,191,
    184,246,236,17,49,97,222,160,2,199,181,7,51,148,220,34,
    199,113,208,155,31,153,129,43,244,132,104,111,133,98,135,62,
    25,70,172,54,229,46,39,97,251,149,252,177,150,25,140,13,
    164,246,39,172,43,182,149,150,105,182,49,193,162,32,84,102,
    76,60,103,158,99,120,217,153,241,142,135,151,57,26,17,95,
    35,82,75,178,253,27,199,3,164,112,104,130,219,0,193,153,
    87,96,112,163,27,98,178,71,168,113,101,51,53,112,212,42,
    168,184,209,85,97,104,196,95,216,237,69,131,14,63,6,104,
    11,22,112,67,30,11,190,54,236,159,72,208,21,34,11,139,
    130,111,102,164,231,220,161,219,205,174,226,181,68,193,229,49,
    254,78,134,196,24,20,75,72,177,198,146,227,23,125,223,159,
    242,103,152,202,69,255,101,127,182,92,20,31,133,90,24,151,
    235,176,137,200,117,228,231,175,46,215,173,80,47,65,129,195,
    132,77,56,43,174,92,43,33,60,105,81,113,86,12,185,35,
    98,232,208,179,66,124,219,40,242,194,40,77,36,36,44,225,
    246,22,110,211,25,77,66,209,43,98,28,182,77,187,197,9,
    60,21,249,46,76,10,16,142,2,196,151,224,212,100,161,198,
    130,126,74,121,54,58,11,149,237,210,51,82,177,69,227,82,
    145,5,128,17,53,22,13,207,134,6,46,175,107,201,3,145,
    64,195,177,1,9,197,179,169,128,131,44,103,19,188,227,216,
    188,196,153,101,215,151,55,29,198,145,223,22,8,86,131,197,
    204,185,210,215,105,68,22,114,114,104,41,14,220,77,5,73,
    185,213,27,196,145,201,19,53,0,25,156,24,195,218,234,197,
    237,76,47,74,184,222,105,164,120,146,192,47,49,185,217,179,
    161,33,82,170,143,135,224,219,100,211,65,163,223,87,113,52,
    148,153,98,10,233,27,171,71,114,38,154,160,93,192,224,159,
    97,96,248,59,113,172,62,11,1,84,88,112,22,191,196,62,
    247,104,68,107,66,98,190,2,227,228,18,211,104,120,107,146,
    183,69,125,230,38,41,34,175,143,153,36,203,247,227,38,73,
    97,141,181,17,17,207,182,216,27,180,57,91,103,122,179,42,
    145,213,88,13,73,238,35,60,86,123,44,223,57,122,176,185,
    158,177,24,60,216,36,215,51,100,19,66,240,54,110,146,147,
    223,193,237,26,110,48,71,112,29,56,15,245,62,74,15,212,
    65,240,238,68,125,99,72,160,182,86,221,48,252,69,110,14,
    152,194,94,214,28,89,196,16,115,124,193,133,131,138,181,136,
    81,110,140,60,195,187,17,207,35,89,70,178,133,22,99,251,
    201,254,121,152,195,168,163,228,142,224,95,180,224,115,255,189,
    111,208,198,254,161,149,99,43,247,247,32,215,152,198,28,112,
    152,134,48,230,99,153,196,69,141,153,33,174,101,29,124,233,
    240,75,219,122,22,109,101,80,34,253,13,52,219,19,135,198,
    166,254,252,216,212,159,210,198,222,58,109,112,53,227,128,181,
    218,163,135,152,150,241,200,143,27,44,146,218,241,118,181,151,
    228,7,15,73,66,240,54,235,123,193,85,202,242,126,53,107,
    106,167,70,55,93,204,109,124,58,179,44,84,23,56,97,142,
    132,105,170,18,240,199,72,46,96,124,55,225,243,221,48,84,
    214,178,247,248,224,39,167,209,238,4,221,242,53,30,239,87,
    25,195,137,133,67,133,175,89,230,193,18,51,97,193,57,201,
    215,156,11,94,156,54,31,43,188,81,94,116,41,59,169,28,
    49,252,247,45,53,86,238,7,162,243,197,251,180,24,50,185,
    78,70,80,113,77,229,29,238,188,183,148,181,23,164,253,158,
    180,187,163,237,236,210,233,18,252,249,137,60,110,224,12,100,
    93,23,139,184,114,33,77,241,244,227,11,209,253,175,98,67,
    73,64,87,199,140,19,188,159,123,235,7,227,254,136,157,246,
    131,91,19,245,70,145,233,191,165,92,183,249,2,248,9,92,
    238,162,35,135,221,224,10,110,200,213,70,230,32,134,6,56,
    69,138,217,100,128,73,43,23,36,158,199,24,24,9,73,148,
    203,60,107,151,147,146,53,110,198,7,207,145,43,47,211,243,
    229,74,96,28,239,184,48,69,162,51,73,217,240,104,215,53,
    7,42,163,59,228,91,30,102,197,193,39,108,196,7,18,152,
    141,66,197,217,102,168,90,197,129,38,236,50,191,167,92,162,
    138,91,100,151,108,68,142,70,78,22,96,196,149,121,189,102,
    69,78,182,202,9,19,235,15,195,5,154,208,50,164,210,11,
    227,206,109,30,239,119,100,1,97,238,120,134,53,157,206,255,
    140,53,157,142,176,38,248,46,141,30,115,94,4,97,254,244,
    159,18,166,211,121,177,132,249,236,255,128,48,31,241,120,127,
    28,37,204,241,239,227,153,50,36,43,216,119,69,119,32,133,
    156,67,46,89,183,109,69,40,94,219,240,67,218,127,13,149,
    43,247,43,200,83,144,19,70,244,95,147,55,246,174,201,231,
    34,102,73,70,154,161,146,195,46,69,58,203,225,52,149,195,
    227,109,124,48,140,149,190,25,69,73,112,147,172,236,238,180,
    83,45,193,72,15,250,29,21,188,71,86,27,140,124,19,192,
    224,15,39,136,30,230,252,51,229,146,238,140,83,112,78,201,
    87,128,89,71,22,46,94,247,97,163,169,123,201,127,233,124,
    199,254,144,83,161,231,252,33,103,236,19,101,126,246,27,57,
    122,12,235,38,7,8,252,254,239,25,157,40,59,8,142,209,
    169,111,54,128,79,61,204,148,243,150,90,187,142,253,178,136,
    243,159,17,38,104,254,145,173,229,83,32,196,201,45,136,27,
    22,39,177,80,224,217,215,116,113,172,10,148,243,104,93,160,
    49,71,66,124,147,10,176,229,20,71,133,53,38,88,172,175,
    176,219,87,219,105,85,254,236,48,232,247,89,32,170,200,72,
    151,219,99,168,137,96,17,127,145,12,61,18,203,38,124,188,
    134,4,249,98,72,178,50,235,196,50,35,203,122,209,125,54,
    108,228,146,101,210,97,227,99,30,239,111,35,97,163,48,130,
    147,156,163,225,208,242,33,85,142,97,226,208,230,204,39,14,
    110,62,100,220,206,1,21,223,253,56,115,96,113,241,225,48,
    246,123,62,219,41,12,131,239,79,126,115,146,188,110,152,175,
    93,239,189,73,246,19,82,217,173,220,173,188,91,241,43,83,
    190,95,89,60,229,156,242,202,222,191,1,141,124,64,29,
};

EmbeddedPython embedded_m5_proxy(
    "m5/proxy.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/src/python/m5/proxy.py",
    "m5.proxy",
    data_m5_proxy,
    2607,
    7900);

} // anonymous namespace