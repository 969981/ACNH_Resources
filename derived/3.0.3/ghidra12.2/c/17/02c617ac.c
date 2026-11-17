
undefined8 FUN_02c617ac(undefined8 *param_1)

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
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'E' && (pcVar3[4] == 'v')))) &&
      ((pcVar3[5] == 'e' && ((pcVar3[6] == 'n' && (pcVar3[7] == 't')))))) && (pcVar3[8] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_0565ef28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ef28), iVar1 != 0)) {
        DAT_0565ef08 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565ef10 = "FlagNum";
        DAT_0565ef20 = &DAT_0407ebb1;
        DAT_0565ef18 = DAT_0565ef08;
        __cxa_guard_release(&DAT_0565ef28);
      }
      if (((DAT_0565ef40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ef40), iVar1 != 0)) {
        DAT_0565ef30 = 0x100000002;
        DAT_0565ef38 = &DAT_0565ef08;
        __cxa_guard_release(&DAT_0565ef40);
      }
      if (((DAT_0565ef68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ef68), iVar1 != 0)) {
        DAT_0565ef48 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565ef50 = "@T_EventName_00";
        DAT_0565ef60 = "@T_AreaName_00";
        DAT_0565ef58 = DAT_0565ef48;
        __cxa_guard_release(&DAT_0565ef68);
      }
      if (((DAT_0565ef80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ef80), iVar1 != 0)) {
        DAT_0565ef70 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565ef78 = "W_FlagBaseNoFlag_00";
        __cxa_guard_release(&DAT_0565ef80);
      }
      local_48 = *param_1;
      local_38 = &DAT_04ab2858;
      puStack_30 = &DAT_0565ef30;
      local_28 = 0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04ab2868;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

