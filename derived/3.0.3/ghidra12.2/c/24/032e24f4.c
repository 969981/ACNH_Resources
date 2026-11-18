
void FUN_032e24f4(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[4] = (long)(PTR_DAT_04bb2020 + 0x10);
  lVar3 = *(long *)(param_2 + 8);
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  param_1[5] = lVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar2;
      *plVar2 = lVar4;
      plVar2[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = (long)&PTR_FUN_04b1c300;
  param_1[6] = 0x104b;
  puVar1 = PTR_DAT_04bc8e60;
  param_1[0xe] = 0;
  param_1[8] = (long)(puVar1 + 0x10);
  param_1[9] = 0;
  return;
}

