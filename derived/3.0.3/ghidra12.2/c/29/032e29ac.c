
void FUN_032e29ac(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *local_40;
  undefined *puStack_38;
  
  param_1[4] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  plVar4 = param_1 + 3;
  *plVar4 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *plVar5 = (long)(PTR_DAT_04bd0d40 + 0x10);
  *plVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(long *)PTR_DAT_04bb2698;
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_038cb610(lVar2,plVar5);
    *plVar4 = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar4 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar4;
      plVar5 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)plVar5);
      *plVar4 = (long)plVar5;
      *plVar5 = lVar3;
      plVar5[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar5;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[2] = PTR_DAT_04bd0e58 + 0x10;
  FUN_038e18e4(param_1 + 8);
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  puStack_38 = &DAT_040837da;
  FUN_032e24f4(param_1 + 0x13,&local_40);
  puVar1 = PTR_DAT_04bc9600;
  param_1[0x28] = 0;
  param_1[0x13] = puVar1 + 0x10;
  param_1[0x22] = PTR_DAT_04bc8e60 + 0x10;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x149) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x9110;
  return;
}

