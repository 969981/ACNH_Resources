
undefined8 FUN_02c61310(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'C' && (pcVar3[4] == 'o')))) &&
      ((pcVar3[5] == 'l' && ((pcVar3[6] == 'o' && (pcVar3[7] == 'r')))))) &&
     ((pcVar3[8] == 'I' &&
      ((((pcVar3[9] == 'n' && (pcVar3[10] == 'f')) && (pcVar3[0xb] == 'o')) && (pcVar3[0xc] == '_'))
      )))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_0565ee78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ee78), iVar1 != 0)) {
        DAT_0565ee68 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565ee70 = "@T_Guide_00";
        __cxa_guard_release(&DAT_0565ee78);
      }
      local_18 = 0;
      local_28 = &DAT_04ab2838;
      uStack_20 = 0;
      local_30 = 0;
      uStack_38 = *param_1;
      local_40 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_40);
      return 1;
    }
  }
  return 0;
}

