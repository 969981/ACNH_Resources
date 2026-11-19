
void FUN_03c115d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  FUN_038b9ee4(param_1,param_2,&DAT_04066c7f);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *param_1 = &PTR_FUN_04b7d250;
  param_1[0x2d] = &PTR_FUN_04b7d318;
  param_1[0x2f] = &PTR_LAB_04b7d358;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  puVar1 = param_1 + 0x37;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = &PTR_LAB_04b7d378;
  param_1[0x32] = 0;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x37] = puVar2;
  param_1[0x38] = 0;
  puVar4 = PTR_DAT_04bb2698;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  lVar6 = *(long *)puVar4;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,puVar1);
    param_1[0x38] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)puVar1);
      *plVar8 = (long)plVar3;
      *plVar3 = lVar7;
      plVar3[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar3;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  puVar5 = PTR_DAT_04bd0f20;
  lVar6 = *(long *)puVar4;
  param_1[0x43] = puVar2;
  param_1[0x3d] = puVar1;
  param_1[0x3e] = 0;
  puVar1 = param_1 + 0x43;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = &PTR_LAB_04b7d3c8;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x37] = puVar5 + 0x10;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,puVar1);
    param_1[0x44] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)puVar1);
      *plVar8 = (long)plVar3;
      *plVar3 = lVar7;
      plVar3[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar3;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  param_1[0x47] = 0;
  param_1[0x43] = &PTR_LAB_04b7d338;
  param_1[0x4b] = &PTR_LAB_04b7d3f0;
  param_1[0x48] = 0;
  DAT_05aec978 = param_1;
  param_1[0x49] = puVar1;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return;
}

