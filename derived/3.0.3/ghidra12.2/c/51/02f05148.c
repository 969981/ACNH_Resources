
undefined8 FUN_02f05148(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'E' && (pcVar3[4] == 'f')))) &&
      (((pcVar3[5] == 'f' && ((pcVar3[6] == 'e' && (pcVar3[7] == 'c')))) && (pcVar3[8] == 't')))) &&
     ((((((pcVar3[9] == 'C' && (pcVar3[10] == 'l')) && (pcVar3[0xb] == 'o')) &&
        (((pcVar3[0xc] == 't' && (pcVar3[0xd] == 'h')) &&
         ((pcVar3[0xe] == 'G' && ((pcVar3[0xf] == 'u' && (pcVar3[0x10] == 'i')))))))) &&
       (pcVar3[0x11] == 'd')) && ((pcVar3[0x12] == 'e' && (pcVar3[0x13] == '_')))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b84e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b84e8), iVar1 != 0)) {
        DAT_056b84c8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b84d0 = "Share";
        DAT_056b84e0 = &DAT_0407ebb1;
        DAT_056b84d8 = DAT_056b84c8;
        __cxa_guard_release(&DAT_056b84e8);
      }
      if (((DAT_056b8500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8500), iVar1 != 0)) {
        DAT_056b84f0 = 0x100000002;
        DAT_056b84f8 = &DAT_056b84c8;
        __cxa_guard_release(&DAT_056b8500);
      }
      if (((DAT_056b8518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8518), iVar1 != 0)) {
        DAT_056b8508 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8510 = "@T_Key_00";
        __cxa_guard_release(&DAT_056b8518);
      }
      local_38 = 0;
      local_50 = 0;
      local_48 = &DAT_04ae0410;
      puStack_40 = &DAT_056b84f0;
      uStack_58 = *param_1;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_60);
      return 1;
    }
  }
  return 0;
}

