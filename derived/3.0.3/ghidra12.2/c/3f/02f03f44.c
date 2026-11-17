
undefined8 FUN_02f03f44(undefined8 *param_1)

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
  if (((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
      ((pcVar3[3] == 'R' && (pcVar3[4] == 'o')))) &&
     ((pcVar3[5] == 'a' && ((pcVar3[6] == 'd' && (pcVar3[7] == '_')))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e38), (uVar2 & 1) != 0)) {
      if (((DAT_056b80f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b80f8), iVar1 != 0)) {
        DAT_056b80d8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b80e0 = "Share";
        DAT_056b80f0 = &DAT_0407ebb1;
        DAT_056b80e8 = DAT_056b80d8;
        __cxa_guard_release(&DAT_056b80f8);
      }
      if (((DAT_056b8110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8110), iVar1 != 0)) {
        DAT_056b8100 = 0x100000002;
        DAT_056b8108 = &DAT_056b80d8;
        __cxa_guard_release(&DAT_056b8110);
      }
      if (((DAT_056b8128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8128), iVar1 != 0)) {
        DAT_056b8118 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8120 = "@T_Icon_00";
        __cxa_guard_release(&DAT_056b8128);
      }
      local_28 = 0;
      local_40 = 0;
      local_38 = &DAT_04ae0390;
      puStack_30 = &DAT_056b8100;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x2c8,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

