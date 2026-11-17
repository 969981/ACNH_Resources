
undefined8 FUN_02f04e54(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if (((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
      ((pcVar3[3] == 'E' && (pcVar3[4] == 'f')))) &&
     ((((pcVar3[5] == 'f' && ((pcVar3[6] == 'e' && (pcVar3[7] == 'c')))) && (pcVar3[8] == 't')) &&
      ((((pcVar3[9] == 'C' && (pcVar3[10] == 'l')) && (pcVar3[0xb] == 'o')) &&
       (((pcVar3[0xc] == 't' && (pcVar3[0xd] == 'h')) && (pcVar3[0xe] == '_')))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b8478 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8478), iVar1 != 0)) {
        DAT_056b8438 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8440 = "Share";
        DAT_056b8450 = &DAT_0407ebb1;
        DAT_056b8470 = &DAT_0407ebb1;
        DAT_056b8460 = "MyDesignOnOff";
        DAT_056b8448 = DAT_056b8438;
        DAT_056b8458 = DAT_056b8438;
        DAT_056b8468 = DAT_056b8438;
        __cxa_guard_release(&DAT_056b8478);
      }
      if (((DAT_056b8490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8490), iVar1 != 0)) {
        DAT_056b8480 = 0x200000002;
        DAT_056b8488 = &DAT_056b8438;
        __cxa_guard_release(&DAT_056b8490);
      }
      if (((DAT_056b84a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b84a8), iVar1 != 0)) {
        DAT_056b8498 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b84a0 = "@T_Key_00";
        __cxa_guard_release(&DAT_056b84a8);
      }
      if (((DAT_056b84c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b84c0), iVar1 != 0)) {
        DAT_056b84b0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b84b8 = "P_MyDesign_00";
        __cxa_guard_release(&DAT_056b84c0);
      }
      local_28 = 1;
      local_38 = &DAT_04ae03f0;
      puStack_30 = &DAT_056b8480;
      local_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04ae0400;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

