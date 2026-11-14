
void FUN_015e7984(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_049b00e8;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = param_1 + 7;
  param_1[9] = 0xffffffff00000000;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  FUN_038e18e4(param_1 + 0xb);
  plVar5 = param_1 + 0x13;
  *plVar5 = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar2 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar5);
    param_1[0x14] = lVar2;
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
  puVar1 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x17] = puVar1 + 0x10;
  param_1[0x18] = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bbd830;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x13] = puVar1 + 0x10;
  *(undefined ***)((long)param_1 + 0xd4) = &PTR_LAB_049b0198;
  return;
}

