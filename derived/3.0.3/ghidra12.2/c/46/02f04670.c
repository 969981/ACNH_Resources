
undefined8 FUN_02f04670(undefined8 *param_1)

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
      ((pcVar3[3] == 'S' && (pcVar3[4] == 't')))) &&
     ((((pcVar3[5] == 'i' && ((pcVar3[6] == 'c' && (pcVar3[7] == 'k')))) && (pcVar3[8] == 'B')) &&
      ((((pcVar3[9] == 'a' && (pcVar3[10] == 'l')) && (pcVar3[0xb] == 'l')) &&
       (((pcVar3[0xc] == 'o' && (pcVar3[0xd] == 'o')) &&
        ((pcVar3[0xe] == 'n' && (pcVar3[0xf] == '_')))))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b8238 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8238), iVar1 != 0)) {
        DAT_056b8228 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8230 = "@T_Text_00";
        __cxa_guard_release(&DAT_056b8238);
      }
      local_38 = &DAT_04ae03b0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_48 = *param_1;
      local_40 = 0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

