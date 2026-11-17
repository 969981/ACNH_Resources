
undefined8 FUN_03014e44(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'C' && (pcVar3[4] == 'a')))) &&
      ((pcVar3[5] == 'n' && ((pcVar3[6] == 'v' && (pcVar3[7] == 'a')))))) &&
     ((pcVar3[8] == 's' &&
      ((((pcVar3[9] == 'I' && (pcVar3[10] == 'c')) && (pcVar3[0xb] == 'o')) &&
       ((pcVar3[0xc] == 'n' && (pcVar3[0xd] == '_')))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056d81e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d81e0), iVar1 != 0)) {
        DAT_056d81c0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d81c8 = &DAT_0407c03e;
        DAT_056d81d8 = &DAT_0407ebb1;
        DAT_056d81d0 = DAT_056d81c0;
        __cxa_guard_release(&DAT_056d81e0);
      }
      if (((DAT_056d81f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d81f8), iVar1 != 0)) {
        DAT_056d81e8 = 0x100000002;
        DAT_056d81f0 = &DAT_056d81c0;
        __cxa_guard_release(&DAT_056d81f8);
      }
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_1;
      local_30 = &DAT_056d81e8;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

