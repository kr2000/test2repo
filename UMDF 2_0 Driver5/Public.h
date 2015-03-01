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

DEFINE_GUID (GUID_DEVINTERFACE_UMDF2_0Driver5,
    0x721c9b3b,0xb579,0x4237,0x83,0xf4,0x90,0xc6,0xd7,0x8c,0x61,0xfa);
// {721c9b3b-b579-4237-83f4-90c6d78c61fa}
