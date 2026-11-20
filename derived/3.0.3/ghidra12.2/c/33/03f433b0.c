
void FUN_03f433b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_038e1f88();
  puVar2 = PTR_DAT_04bd0d40;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar3 = PTR_DAT_04bd0e58;
  *(undefined1 *)((long)param_1 + 0x104) = 6;
  *param_1 = &PTR_FUN_04ba9180;
  *(undefined4 *)(param_1 + 0x23) = 3;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = puVar2 + 0x10;
  param_1[0x25] = param_3;
  lVar6 = param_3;
  if (param_3 == 0) {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      lVar6 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1 + 0x24);
      param_1[0x25] = lVar6;
      if (lVar6 != 0) goto LAB_03f4341c;
    }
    param_1[0x24] = puVar3 + 0x10;
    param_1[0x2a] = puVar2 + 0x10;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
LAB_03f434d4:
    if (*(long *)PTR_DAT_04bb2698 == 0) goto LAB_03f4354c;
    param_3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1 + 0x2a);
    param_1[0x2b] = param_3;
    if (param_3 == 0) goto LAB_03f4354c;
  }
  else {
LAB_03f4341c:
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar5 = (long *)(lVar6 + 0x70);
    lVar4 = *plVar5;
    plVar1 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x24));
    *plVar5 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar5;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    param_1[0x24] = puVar3 + 0x10;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = puVar2 + 0x10;
    param_1[0x2b] = param_3;
    if (param_3 == 0) goto LAB_03f434d4;
  }
  if ((*(uint *)(param_3 + 0xd0) & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_3 + 0x90;
    nn::os::LockMutex((MutexType *)(param_3 + 0xb0));
  }
  plVar5 = (long *)(param_3 + 0x70);
  lVar7 = *plVar5;
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x84) + 0x150);
  *plVar5 = (long)plVar1;
  *plVar1 = lVar7;
  plVar1[1] = (long)plVar5;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar1;
  }
  *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
  if (lVar6 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
  }
LAB_03f4354c:
  param_1[0x30] = 0;
  param_1[0x2a] = puVar3 + 0x10;
  return;
}

