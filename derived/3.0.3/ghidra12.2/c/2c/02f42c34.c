
void FUN_02f42c34(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if (((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
        ((pcVar3[3] == 'I' && (pcVar3[4] == 't')))) &&
       ((pcVar3[5] == 'e' && ((pcVar3[6] == 'm' && (pcVar3[7] == 'N')))))) && (pcVar3[8] == 'a')) &&
     (((pcVar3[9] == 'm' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == '_')))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fd8), (uVar2 & 1) != 0)) {
      if (((DAT_056c3c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c3c70), iVar1 != 0)) {
        DAT_056c3c30 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c3c38 = "MarkOff";
        DAT_056c3c48 = &DAT_0407ebb1;
        DAT_056c3c68 = &DAT_0407ebb1;
        DAT_056c3c58 = &DAT_040734ad;
        DAT_056c3c40 = DAT_056c3c30;
        DAT_056c3c50 = DAT_056c3c30;
        DAT_056c3c60 = DAT_056c3c30;
        __cxa_guard_release(&DAT_056c3c70);
      }
      if (((DAT_056c3c88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c3c88), iVar1 != 0)) {
        DAT_056c3c78 = 0x200000002;
        DAT_056c3c80 = &DAT_056c3c30;
        __cxa_guard_release(&DAT_056c3c88);
      }
      local_40 = 0;
      uStack_38 = 0;
      uStack_48 = *param_1;
      local_28 = 0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_30 = &DAT_056c3c78;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
    }
  }
  return;
}

