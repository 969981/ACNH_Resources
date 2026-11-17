
undefined8 FUN_02f0440c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'M' && (pcVar3[4] == 'i')))) &&
      ((((pcVar3[5] == 'n' && ((pcVar3[6] == 'i' && (pcVar3[7] == 'G')))) && (pcVar3[8] == 'a')) &&
       ((((pcVar3[9] == 'm' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == 'C')) &&
        (((pcVar3[0xc] == 'o' && (pcVar3[0xd] == 'u')) &&
         ((pcVar3[0xe] == 'n' && ((pcVar3[0xf] == 't' && (pcVar3[0x10] == 'e')))))))))))) &&
     ((pcVar3[0x11] == 'r' && (pcVar3[0x12] == '_')))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b8208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8208), iVar1 != 0)) {
        DAT_056b81e8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b81f0 = &DAT_040a0741;
        DAT_056b8200 = &DAT_0407ebb1;
        DAT_056b81f8 = DAT_056b81e8;
        __cxa_guard_release(&DAT_056b8208);
      }
      if (((DAT_056b8220 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8220), iVar1 != 0)) {
        DAT_056b8210 = 0x100000002;
        DAT_056b8218 = &DAT_056b81e8;
        __cxa_guard_release(&DAT_056b8220);
      }
      local_50 = 0;
      uStack_48 = 0;
      uStack_58 = *param_1;
      local_38 = 0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056b8210;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_60);
      return 1;
    }
  }
  return 0;
}

