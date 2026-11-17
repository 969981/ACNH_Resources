
undefined8 FUN_031850d4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'S' && (pcVar3[4] == 't')))) &&
      ((pcVar3[5] == 'o' && ((pcVar3[6] == 'r' && (pcVar3[7] == 'a')))))) &&
     ((pcVar3[8] == 'g' &&
      ((((pcVar3[9] == 'e' && (pcVar3[10] == 'N')) && (pcVar3[0xb] == 'u')) &&
       ((pcVar3[0xc] == 'm' && (pcVar3[0xd] == '_')))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc5288 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5288);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc5280), (uVar2 & 1) != 0)) {
      if (((DAT_057009e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057009e0), iVar1 != 0)) {
        DAT_057009d0 = PTR_DAT_04bb2020 + 0x10;
        DAT_057009d8 = "@T_TotalNum_00";
        __cxa_guard_release(&DAT_057009e0);
      }
      local_28 = 0;
      local_38 = &DAT_04b06df8;
      uStack_30 = 0;
      local_40 = 0;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

