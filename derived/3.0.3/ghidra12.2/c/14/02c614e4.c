
undefined8 FUN_02c614e4(undefined8 *param_1)

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
       ((pcVar3[3] == 'C' && (pcVar3[4] == 'a')))) &&
      ((((pcVar3[5] == 't' && ((pcVar3[6] == 'e' && (pcVar3[7] == 'g')))) && (pcVar3[8] == 'o')) &&
       ((((pcVar3[9] == 'r' && (pcVar3[10] == 'y')) && (pcVar3[0xb] == 'O')) &&
        (((pcVar3[0xc] == 'n' && (pcVar3[0xd] == 'l')) &&
         ((pcVar3[0xe] == 'i' && ((pcVar3[0xf] == 'n' && (pcVar3[0x10] == 'e')))))))))))) &&
     (pcVar3[0x11] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_0565eec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565eec0), iVar1 != 0)) {
        DAT_0565ee80 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565ee88 = "Share";
        DAT_0565ee98 = &DAT_0407ebb1;
        DAT_0565eeb8 = &DAT_0407ebb1;
        DAT_0565eea8 = "CategoryNum";
        DAT_0565ee90 = DAT_0565ee80;
        DAT_0565eea0 = DAT_0565ee80;
        DAT_0565eeb0 = DAT_0565ee80;
        __cxa_guard_release(&DAT_0565eec0);
      }
      if (((DAT_0565eed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565eed8), iVar1 != 0)) {
        DAT_0565eec8 = 0x200000002;
        DAT_0565eed0 = &DAT_0565ee80;
        __cxa_guard_release(&DAT_0565eed8);
      }
      if (((DAT_0565ef00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565ef00), iVar1 != 0)) {
        DAT_0565eee0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565eee8 = "@T_L_00";
        DAT_0565eef8 = "@T_R_00";
        DAT_0565eef0 = DAT_0565eee0;
        __cxa_guard_release(&DAT_0565ef00);
      }
      local_38 = 0;
      local_50 = 0;
      local_48 = &DAT_04ab2848;
      puStack_40 = &DAT_0565eec8;
      uStack_58 = *param_1;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_60);
      return 1;
    }
  }
  return 0;
}

