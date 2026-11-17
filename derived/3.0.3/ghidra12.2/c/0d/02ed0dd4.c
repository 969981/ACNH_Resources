
void FUN_02ed0dd4(undefined8 *param_1)

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
      ((pcVar3[3] == 'N' && (pcVar3[4] == 'p')))) &&
     ((((pcVar3[5] == 'c' && ((pcVar3[6] == 'O' && (pcVar3[7] == 'n')))) && (pcVar3[8] == 'O')) &&
      ((((pcVar3[9] == 'f' && (pcVar3[10] == 'f')) && (pcVar3[0xb] == 'G')) &&
       (((pcVar3[0xc] == 'u' && (pcVar3[0xd] == 'i')) &&
        ((pcVar3[0xe] == 'd' && ((pcVar3[0xf] == 'e' && (pcVar3[0x10] == '_')))))))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b1030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b1030), iVar1 != 0)) {
        DAT_056b1020 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b1028 = "@T_Key_00";
        __cxa_guard_release(&DAT_056b1030);
      }
      local_28 = 0;
      local_38 = &DAT_04add980;
      uStack_30 = 0;
      local_40 = 0;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
    }
  }
  return;
}

