
undefined8 FUN_02f03cc4(undefined8 *param_1)

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
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'T' && (pcVar3[4] == 'i')))) &&
      ((pcVar3[5] == 'm' && ((pcVar3[6] == 'e' && (pcVar3[7] == 'r')))))) && (pcVar3[8] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b8080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8080), iVar1 != 0)) {
        DAT_056b8040 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8048 = "State";
        DAT_056b8058 = &DAT_0407ebb1;
        DAT_056b8078 = &DAT_0407ebb1;
        DAT_056b8068 = "PinchLoop";
        DAT_056b8050 = DAT_056b8040;
        DAT_056b8060 = DAT_056b8040;
        DAT_056b8070 = DAT_056b8040;
        __cxa_guard_release(&DAT_056b8080);
      }
      if (((DAT_056b8098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8098), iVar1 != 0)) {
        DAT_056b8088 = 0x200000002;
        DAT_056b8090 = &DAT_056b8040;
        __cxa_guard_release(&DAT_056b8098);
      }
      if (((DAT_056b80d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b80d0), iVar1 != 0)) {
        DAT_056b80a0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b80a8 = "@T_Num_00";
        DAT_056b80c8 = "@T_Num_01";
        DAT_056b80b8 = "@T_Colon_00";
        DAT_056b80b0 = DAT_056b80a0;
        DAT_056b80c0 = DAT_056b80a0;
        __cxa_guard_release(&DAT_056b80d0);
      }
      local_28 = 0;
      local_40 = 0;
      local_38 = &DAT_04ae0380;
      puStack_30 = &DAT_056b8088;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}

