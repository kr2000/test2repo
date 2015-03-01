/*++

Module Name:

    Internal.h

Abstract:

    This module contains the local type definitions for the
    driver.

Environment:

    Windows User-Mode Driver Framework 2.0

--*/

//
// Define the tracing flags.
//
// Tracing GUID - 049a0888-4a32-4f48-b25f-e32e99fb5022
//

#define WPP_CONTROL_GUIDS                                              \
    WPP_DEFINE_CONTROL_GUID(                                           \
        MyDriver1TraceGuid, (049a0888,4a32,4f48,b25f,e32e99fb5022),                  \
                                                                       \
        WPP_DEFINE_BIT(MYDRIVER_ALL_INFO)                              \
        WPP_DEFINE_BIT(TRACE_DRIVER)                                   \
        WPP_DEFINE_BIT(TRACE_DEVICE)                                   \
        WPP_DEFINE_BIT(TRACE_QUEUE)                                    \
        )                             

#define WPP_FLAG_LEVEL_LOGGER(flag, level)                             \
    WPP_LEVEL_LOGGER(flag)

#define WPP_FLAG_LEVEL_ENABLED(flag, level)                            \
    (WPP_LEVEL_ENABLED(flag) &&                                        \
     WPP_CONTROL(WPP_BIT_ ## flag).Level >= level)

#define WPP_LEVEL_FLAGS_LOGGER(lvl,flags)                              \
           WPP_LEVEL_LOGGER(flags)
               
#define WPP_LEVEL_FLAGS_ENABLED(lvl, flags)                            \
           (WPP_LEVEL_ENABLED(flags) && WPP_CONTROL(WPP_BIT_ ## flags).Level >= lvl)

//
// This comment block is scanned by the trace preprocessor to define our
// Trace function.
//
// begin_wpp config
// FUNC Trace{FLAG=MYDRIVER_ALL_INFO}(LEVEL, MSG, ...);
// FUNC TraceEvents(LEVEL, FLAGS, MSG, ...);
// end_wpp

//
//
// Driver specific #defines
//
#define MYDRIVER_TRACING_ID      L"Microsoft\\UMDF2.0\\UMDF2_0Driver5 V1.0"