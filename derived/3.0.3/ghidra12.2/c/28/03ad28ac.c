
void FUN_03ad28ac(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar4 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar6 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar6;
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)&PTR_FUN_04b714c8;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[9] = 0;
  param_1[7] = (long)puVar1;
  param_1[8] = (long)puVar3;
  return;
}

