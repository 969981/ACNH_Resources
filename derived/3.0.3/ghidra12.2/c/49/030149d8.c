
undefined8 FUN_030149d8(undefined8 *param_1)

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
  if (((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
      ((pcVar3[3] == 'I' && (pcVar3[4] == 't')))) &&
     ((((pcVar3[5] == 'e' && ((pcVar3[6] == 'm' && (pcVar3[7] == 'B')))) && (pcVar3[8] == 'a')) &&
      ((((pcVar3[9] == 'l' && (pcVar3[10] == 'l')) && (pcVar3[0xb] == 'o')) &&
       (((pcVar3[0xc] == 'o' && (pcVar3[0xd] == 'n')) && (pcVar3[0xe] == '_')))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fd8), (uVar2 & 1) != 0)) {
      if (((DAT_056d8120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d8120), iVar1 != 0)) {
        DAT_056d8110 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d8118 = "@T_Name_00";
        __cxa_guard_release(&DAT_056d8120);
      }
      local_28 = 0;
      local_38 = &DAT_04af2e68;
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

