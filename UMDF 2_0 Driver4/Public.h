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

DEFINE_GUID (GUID_DEVINTERFACE_UMDF2_0Driver4,
    0xaa828cee,0xdc6c,0x4876,0x99,0x59,0xb4,0xaf,0xab,0xba,0x96,0x93);
// {aa828cee-dc6c-4876-9959-b4afabba9693}
