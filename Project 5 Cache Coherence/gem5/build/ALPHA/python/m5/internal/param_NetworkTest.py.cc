#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkTest[] = {
    120,156,205,89,109,115,219,198,17,222,3,72,202,164,68,75,
    178,222,45,197,102,226,170,97,220,196,116,157,184,233,139,199,
    83,183,233,235,52,138,11,101,70,54,219,41,10,1,71,17,
    20,9,112,128,163,101,122,164,126,168,60,109,191,245,71,116,
    242,161,255,163,255,171,221,221,195,129,144,37,217,238,180,19,
    70,34,110,142,139,189,189,219,221,103,247,246,142,62,100,127,
    101,124,126,220,0,72,255,36,0,2,252,8,232,3,12,4,
    180,5,8,41,32,88,130,195,50,36,159,64,80,134,151,0,
    109,11,164,5,167,216,177,225,119,22,68,115,60,166,2,125,
    155,41,2,198,53,144,37,104,151,97,47,90,132,146,172,192,
    97,13,146,63,130,16,34,18,240,36,152,129,224,10,188,68,
    233,216,169,178,192,43,16,212,184,83,133,96,150,59,53,24,
    47,128,156,133,54,10,159,129,118,29,69,221,70,81,87,89,
    212,191,72,84,128,111,150,33,168,19,59,174,229,41,113,150,
    136,147,231,184,202,82,230,205,202,22,160,189,96,250,139,208,
    94,52,253,107,208,190,102,250,75,208,94,50,253,101,104,47,
    155,254,10,180,87,76,127,21,218,171,16,204,131,92,129,222,
    26,116,208,52,11,249,252,235,32,109,232,109,64,123,3,36,
    126,214,225,20,173,23,44,50,239,117,230,189,150,243,110,50,
    239,22,180,183,64,226,103,83,243,86,96,183,185,130,190,8,
    255,141,127,77,244,5,168,57,108,158,201,36,13,227,200,13,
    163,78,28,90,244,190,66,13,121,206,167,102,38,115,225,79,
    201,133,255,4,246,95,96,101,46,60,1,20,44,104,253,125,
    11,78,184,115,98,193,184,9,199,2,122,37,8,108,56,198,
    105,202,180,128,3,1,167,22,252,222,38,134,19,108,75,104,
    244,27,80,82,218,127,61,54,186,150,52,3,39,101,56,46,
    195,238,147,99,139,8,135,85,72,190,130,23,91,44,244,10,
    11,181,224,24,219,18,156,150,224,164,2,123,200,132,164,94,
    149,212,23,79,142,81,83,164,236,54,75,184,218,157,130,186,
    164,74,16,38,145,55,144,234,26,246,221,161,151,120,3,119,
    71,170,163,56,57,252,82,166,170,89,51,124,113,122,103,232,
    169,174,195,3,109,178,200,96,168,88,96,28,73,53,139,157,
    78,24,5,238,32,14,70,125,169,174,144,52,183,19,246,165,
    235,242,203,95,13,134,113,162,126,150,36,113,226,144,81,153,
    216,143,189,124,4,153,212,239,199,169,108,210,108,60,141,67,
    226,21,113,119,134,44,145,22,192,139,165,193,129,76,253,36,
    28,42,244,149,150,72,220,36,173,73,94,226,38,237,98,211,
    138,58,105,107,116,208,234,198,3,153,126,244,113,107,216,26,
    122,209,11,249,60,108,125,22,251,163,129,140,84,218,146,190,
    188,127,255,94,171,239,237,223,111,29,200,193,253,214,254,40,
    236,7,173,71,191,121,252,203,71,173,225,88,117,227,168,133,
    212,48,82,18,173,213,111,157,179,211,29,100,34,11,166,71,
    225,129,27,178,174,110,87,246,135,50,161,165,166,215,105,53,
    98,65,204,137,138,176,69,83,212,177,87,198,199,22,91,214,
    172,216,9,73,91,159,44,64,80,179,13,184,254,1,236,70,
    68,193,161,5,201,22,65,167,135,31,65,190,70,0,237,210,
    59,139,223,253,150,204,164,169,61,155,0,161,137,199,12,55,
    196,29,114,62,32,4,68,192,152,41,67,175,2,26,75,8,
    65,13,174,100,76,45,178,147,24,11,133,151,32,253,251,89,
    9,209,2,160,27,48,236,145,180,138,83,253,153,225,185,219,
    164,133,239,48,72,84,55,76,227,163,136,93,65,125,14,168,
    93,180,201,227,241,23,251,61,233,171,244,38,18,158,198,163,
    134,239,69,81,172,26,94,16,52,60,165,146,112,127,164,100,
    218,80,113,99,59,109,86,201,247,139,6,103,185,188,241,208,
    224,138,48,128,184,210,95,130,208,87,248,101,137,191,176,253,
    83,169,16,35,221,56,72,145,78,34,14,164,114,104,145,234,
    42,54,143,204,116,12,198,102,197,64,39,149,253,142,170,49,
    10,189,52,117,121,58,162,51,224,104,244,51,175,63,146,138,
    248,83,229,41,156,149,186,122,162,105,65,110,157,148,54,58,
    147,29,221,40,142,130,49,46,57,244,111,209,106,214,25,120,
    115,64,208,91,65,216,205,96,91,129,58,194,112,193,242,73,
    187,82,6,58,6,220,42,217,2,24,4,34,203,41,8,190,
    83,204,60,77,139,83,7,171,201,161,217,160,30,13,118,8,
    219,206,38,53,91,212,188,99,44,49,5,115,212,95,53,199,
    93,90,130,197,54,240,237,76,219,60,188,118,206,132,215,198,
    36,188,48,105,238,82,152,88,20,76,147,48,177,201,30,201,
    195,44,38,40,0,17,22,248,186,16,9,108,37,103,129,180,
    175,24,16,59,132,204,34,60,15,10,240,116,200,65,140,77,
    103,227,50,139,222,252,70,88,244,64,91,244,99,90,194,92,
    134,170,58,163,169,38,124,130,132,149,217,151,109,251,25,118,
    198,107,100,219,162,85,215,112,71,220,139,234,188,181,241,246,
    200,197,131,78,49,218,216,186,83,34,252,117,108,88,205,182,
    172,148,50,194,48,137,159,143,27,113,167,161,192,172,225,193,
    118,122,103,59,253,17,230,140,198,67,206,66,58,107,232,188,
    144,200,97,130,241,95,229,47,58,166,93,142,111,55,219,114,
    208,250,180,253,179,211,216,230,156,194,82,149,80,230,154,150,
    193,107,185,193,105,253,63,160,249,107,108,109,27,214,240,169,
    9,94,164,27,115,54,229,122,132,223,226,243,19,178,59,169,
    46,129,42,73,103,87,171,192,218,145,158,206,251,103,112,244,
    245,235,230,220,166,85,154,136,172,64,142,26,122,108,90,61,
    5,201,95,129,139,55,1,127,1,66,8,2,33,11,43,14,
    96,122,200,209,75,196,254,7,224,68,117,193,254,104,233,240,
    180,178,84,134,209,155,126,202,172,122,187,252,53,252,173,144,
    229,78,109,16,180,181,217,89,121,86,220,218,74,121,64,51,
    180,222,106,251,42,157,141,124,242,87,215,75,137,77,199,184,
    157,199,248,36,97,230,85,21,38,174,41,160,238,138,158,217,
    165,69,254,98,130,57,218,55,54,197,146,85,64,210,135,212,
    124,148,131,72,24,218,215,187,222,155,175,38,250,194,190,231,
    234,228,250,115,90,84,137,213,152,175,112,193,88,144,145,7,
    78,217,4,206,189,60,112,36,39,252,151,92,215,83,107,17,
    44,78,45,129,135,45,44,125,232,156,83,2,89,134,118,133,
    66,140,171,86,145,69,160,48,217,143,178,230,153,221,132,237,
    180,163,45,152,35,67,59,157,154,231,211,202,54,228,247,7,
    125,111,176,31,120,15,159,208,236,180,4,223,196,164,101,244,
    89,40,234,67,241,36,46,83,137,191,222,53,122,61,155,86,
    166,249,46,78,150,235,195,113,21,196,62,167,151,47,187,178,
    49,144,131,125,60,228,117,195,97,163,211,247,14,216,127,118,
    166,239,23,70,95,197,0,120,117,111,231,18,105,39,110,248,
    113,132,27,197,200,87,113,210,8,36,158,124,100,160,99,225,
    108,132,115,1,233,37,7,41,215,138,135,71,212,157,166,175,
    93,60,213,134,88,45,63,53,182,209,135,173,124,123,224,2,
    89,7,22,110,183,120,122,81,99,157,252,190,71,205,7,212,
    108,195,148,119,145,22,78,182,71,179,146,73,43,152,159,170,
    66,45,158,13,239,199,52,46,61,31,228,159,136,183,8,114,
    125,151,146,133,122,133,56,229,12,29,179,169,173,210,86,210,
    174,25,226,44,183,115,76,172,27,226,85,110,231,153,184,96,
    136,139,220,94,99,226,146,33,46,115,187,194,196,85,67,92,
    227,118,157,137,27,134,120,157,219,77,38,110,25,226,59,220,
    222,96,226,77,67,108,112,251,46,19,223,51,196,91,220,126,
    139,137,219,134,248,109,110,223,103,98,211,220,53,125,192,196,
    219,208,254,14,93,192,16,229,67,74,115,51,255,107,154,227,
    156,48,205,108,224,254,95,179,155,115,239,155,162,142,195,5,
    249,235,50,155,40,234,90,215,153,173,39,204,17,166,168,40,
    223,162,172,95,20,74,174,159,72,79,73,237,202,235,211,211,
    157,211,168,94,139,151,59,212,40,152,31,236,62,205,149,60,
    229,26,114,188,92,56,97,176,127,197,30,22,124,120,10,57,
    102,59,184,150,62,136,76,16,92,202,205,65,169,49,146,71,
    238,57,147,232,163,6,173,199,27,14,101,20,76,142,17,252,
    102,90,224,160,68,61,128,73,5,135,103,134,101,124,206,7,
    47,169,88,208,152,61,91,206,195,117,138,62,102,124,39,198,
    187,77,170,53,39,27,148,67,190,213,91,82,190,27,57,63,
    204,189,213,184,16,188,157,240,185,12,220,225,161,74,233,20,
    251,102,38,172,41,249,28,54,33,169,247,46,28,179,223,143,
    253,67,55,238,116,168,118,38,209,111,193,70,194,233,236,90,
    36,94,50,46,26,13,176,152,29,196,73,40,211,215,136,63,
    195,102,196,23,137,92,46,159,31,55,76,164,31,242,85,55,
    201,126,19,15,9,214,199,240,140,162,182,46,28,145,142,83,
    37,7,44,242,181,12,36,143,239,210,248,171,122,247,66,94,
    214,96,236,166,225,11,201,18,223,204,69,98,169,216,47,208,
    46,27,229,61,119,135,158,127,40,51,88,188,153,43,151,61,
    161,93,226,18,149,120,157,14,30,69,232,18,241,53,158,59,
    195,102,60,87,36,94,130,213,52,28,184,254,216,239,203,215,
    1,186,192,100,0,61,33,169,27,23,142,9,163,158,155,96,
    114,101,177,111,96,33,161,84,83,26,130,186,123,49,130,232,
    42,28,15,199,202,197,154,57,146,62,221,215,99,119,20,233,
    136,249,175,7,209,180,148,157,46,103,225,28,200,251,88,32,
    251,18,87,122,78,190,162,4,146,221,198,5,72,77,226,177,
    235,234,139,21,252,222,119,221,169,22,184,223,199,201,232,106,
    35,37,208,80,129,91,193,18,119,229,194,255,106,169,42,248,
    180,241,202,15,85,122,233,116,179,160,47,21,198,169,67,20,
    103,62,207,148,252,115,138,41,241,121,195,164,224,222,241,6,
    250,90,156,239,119,29,10,9,231,150,73,182,28,174,250,226,
    137,175,114,244,213,26,110,142,124,185,198,39,31,231,14,100,
    191,162,105,205,118,117,112,211,180,146,50,210,231,28,149,159,
    199,129,228,141,245,209,62,218,222,243,149,38,187,207,36,157,
    167,212,114,62,252,236,123,190,132,79,188,8,97,51,159,179,
    224,43,253,203,66,129,182,27,26,26,173,48,231,224,147,195,
    171,245,13,131,32,145,7,33,46,52,97,25,57,127,182,207,
    147,59,46,137,133,226,216,105,66,70,159,227,245,173,230,67,
    210,153,239,95,233,206,191,58,95,21,21,139,126,104,178,69,
    77,212,69,73,204,213,171,118,181,82,45,219,8,43,162,44,
    137,154,93,173,205,137,226,255,6,194,170,102,109,172,84,197,
    127,0,179,2,103,118,
};

EmbeddedPython embedded_m5_internal_param_NetworkTest(
    "m5/internal/param_NetworkTest.py",
    "/nfs/ug/homes-3/p/panzexi/Documents/ece552/lab5/gem5/build/ALPHA/python/m5/internal/param_NetworkTest.py",
    "m5.internal.param_NetworkTest",
    data_m5_internal_param_NetworkTest,
    2438,
    7861);

} // anonymous namespace