
void FUN_03410df4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar6 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar6;
      *plVar6 = lVar4;
      plVar6[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar6;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04b29e18;
  puVar2 = PTR_DAT_04bb46c0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  lVar3 = *(long *)puVar2;
  param_1[7] = *(long *)(param_2 + 8);
  plVar6 = (long *)(lVar3 + 0x18);
  lVar7 = *plVar6;
  param_1 = (long *)((long)*(int *)(lVar3 + 0x2c) + (long)param_1);
  *plVar6 = (long)param_1;
  *param_1 = lVar7;
  param_1[1] = (long)plVar6;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = param_1;
  }
  *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
  return;
}

