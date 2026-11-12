
void FUN_00904684(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar6 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar6;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar6;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x200000002;
  *param_1 = (long)&PTR_FUN_04926bf8;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 7) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar5;
  puVar2 = PTR_DAT_04bb39d0;
  if (*(int *)(DAT_04c93e08 + 0x5e8) == 1) {
    *(undefined8 *)PTR_DAT_04bb39d0 = *(undefined8 *)((long)param_1 + 0x3c);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((long)param_1 + 0x44);
  }
  return;
}

