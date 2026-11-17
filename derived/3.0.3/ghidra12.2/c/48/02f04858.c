
undefined8 FUN_02f04858(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if (((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
        ((pcVar3[3] == 'M' && (pcVar3[4] == 'e')))) &&
       ((pcVar3[5] == 'a' && ((pcVar3[6] == 'l' && (pcVar3[7] == 'E')))))) && (pcVar3[8] == 'f')) &&
     (pcVar3[9] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc5288 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5288);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc5280), (uVar2 & 1) != 0)) {
      if (((DAT_056b82c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b82c0), iVar1 != 0)) {
        DAT_056b8240 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8248 = "CountUp";
        DAT_056b8258 = &DAT_0407ebb1;
        DAT_056b8278 = &DAT_0407ebb1;
        DAT_056b8268 = "CountDown";
        DAT_056b8288 = "CountStop";
        DAT_056b8298 = &DAT_0407ebb1;
        DAT_056b82a8 = "CountUpInv";
        DAT_056b82b8 = &DAT_0407ebb1;
        DAT_056b8250 = DAT_056b8240;
        DAT_056b8260 = DAT_056b8240;
        DAT_056b8270 = DAT_056b8240;
        DAT_056b8280 = DAT_056b8240;
        DAT_056b8290 = DAT_056b8240;
        DAT_056b82a0 = DAT_056b8240;
        DAT_056b82b0 = DAT_056b8240;
        __cxa_guard_release(&DAT_056b82c0);
      }
      if (((DAT_056b82d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b82d8), iVar1 != 0)) {
        DAT_056b82c8 = 0x400000002;
        DAT_056b82d0 = &DAT_056b8240;
        __cxa_guard_release(&DAT_056b82d8);
      }
      if (((DAT_056b8300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8300), iVar1 != 0)) {
        DAT_056b82e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b82e8 = "@T_Slash_00";
        DAT_056b82f8 = "@T_NumTotal_00";
        DAT_056b82f0 = DAT_056b82e0;
        __cxa_guard_release(&DAT_056b8300);
      }
      local_28 = 0;
      local_40 = 0;
      local_38 = &DAT_04ae03c0;
      puStack_30 = &DAT_056b82c8;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

