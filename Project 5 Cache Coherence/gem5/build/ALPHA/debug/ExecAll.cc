/*
 * DO NOT EDIT THIS FILE! Automatically generated
 */

#include "base/debug.hh"
#include "debug/ExecAsid.hh"
#include "debug/ExecCPSeq.hh"
#include "debug/ExecEffAddr.hh"
#include "debug/ExecEnable.hh"
#include "debug/ExecFaulting.hh"
#include "debug/ExecFetchSeq.hh"
#include "debug/ExecKernel.hh"
#include "debug/ExecMacro.hh"
#include "debug/ExecMicro.hh"
#include "debug/ExecOpClass.hh"
#include "debug/ExecRegDelta.hh"
#include "debug/ExecResult.hh"
#include "debug/ExecSpeculative.hh"
#include "debug/ExecSymbol.hh"
#include "debug/ExecThread.hh"
#include "debug/ExecTicks.hh"
#include "debug/ExecUser.hh"

namespace Debug {

CompoundFlag ExecAll("ExecAll", "None",
    ExecAsid,
    ExecCPSeq,
    ExecEffAddr,
    ExecEnable,
    ExecFaulting,
    ExecFetchSeq,
    ExecKernel,
    ExecMacro,
    ExecMicro,
    ExecOpClass,
    ExecRegDelta,
    ExecResult,
    ExecSpeculative,
    ExecSymbol,
    ExecThread,
    ExecTicks,
    ExecUser);

} // namespace Debug