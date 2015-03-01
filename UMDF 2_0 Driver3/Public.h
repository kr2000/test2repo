/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    driver and application

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_UMDF2_0Driver3,
    0x401ed7e3,0x9684,0x4e29,0x8b,0x69,0x6a,0x9c,0xaf,0x9f,0x5d,0x36);
// {401ed7e3-9684-4e29-8b69-6a9caf9f5d36}
