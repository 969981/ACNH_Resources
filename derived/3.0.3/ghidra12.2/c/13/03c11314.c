
void FUN_03c11314(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  FUN_038b9ee4();
  puVar6 = PTR_DAT_04bd0d40;
  puVar3 = PTR_DAT_04bcb5f8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x2d] = (long)(puVar6 + 0x10);
  param_1[0x2e] = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar7 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1 + 0x2d);
    param_1[0x2e] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar9 = (long *)(lVar7 + 0x70);
      lVar8 = *plVar9;
      plVar1 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x2d));
      *plVar9 = (long)plVar1;
      *plVar1 = lVar8;
      plVar1[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar1;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  puVar5 = PTR_DAT_04bbd830;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)&DAT_0407ebb1;
  param_1[0x2d] = (long)(puVar5 + 0x10);
  puVar4 = PTR_DAT_04bbd828;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  param_1[0x39] = (long)(puVar6 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(long *)((long)param_1 + 0x1a4) = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  if (*(long *)puVar3 != 0) {
    lVar7 = FUN_038cb610(*(long *)puVar3,param_1 + 0x39);
    param_1[0x3a] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar9 = (long *)(lVar7 + 0x70);
      lVar8 = *plVar9;
      plVar1 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x39));
      *plVar9 = (long)plVar1;
      *plVar1 = lVar8;
      plVar1[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar1;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x39] = (long)(puVar5 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1b4) = 0xb8;
  *(undefined8 *)((long)param_1 + 0x1bc) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(long *)((long)param_1 + 0x1a4) = (long)&PTR_LAB_04b7d1d8;
  *(long **)((long)param_1 + 0x1ac) = param_1;
  param_1[0x32] = param_3;
  *(undefined4 *)(param_1 + 0x33) = 1;
  param_1[0x3f] = 1;
  *(undefined8 *)((long)param_1 + 0x214) = 0xc0;
  *(undefined8 *)((long)param_1 + 0x21c) = 1;
  *(undefined ***)((long)param_1 + 0x204) = &PTR_LAB_04b7d1d8;
  *(long **)((long)param_1 + 0x20c) = param_1;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x3e] = param_3;
  return;
}

