
void FUN_03f43570(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_038e1f88(param_1,param_2,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  *param_1 = &PTR_FUN_04ba9180;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 6;
  *(undefined4 *)(param_1 + 0x23) = 3;
  puVar3 = PTR_DAT_04bd0d40;
  lVar6 = *(long *)(param_2 + 0x10);
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = puVar1;
  param_1[0x25] = lVar6;
  if (lVar6 == 0) {
    if (DAT_05ae7600 != 0) {
      lVar6 = FUN_038cb610(DAT_05ae7600,param_1 + 0x24);
      param_1[0x25] = lVar6;
      if (lVar6 != 0) goto LAB_03f435e0;
    }
  }
  else {
LAB_03f435e0:
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar5 = (long *)(lVar6 + 0x70);
    lVar4 = *plVar5;
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x24));
    *plVar5 = (long)plVar2;
    *plVar2 = lVar4;
    plVar2[1] = (long)plVar5;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  puVar1 = PTR_DAT_04bd0e58;
  param_1[0x24] = PTR_DAT_04bd0e58 + 0x10;
  lVar6 = *(long *)(param_2 + 0x10);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = puVar3 + 0x10;
  param_1[0x2b] = lVar6;
  if (lVar6 == 0) {
    if (DAT_05ae7600 == 0) goto LAB_03f43700;
    lVar6 = FUN_038cb610(DAT_05ae7600,param_1 + 0x2a);
    param_1[0x2b] = lVar6;
    if (lVar6 == 0) goto LAB_03f43700;
  }
  if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6 + 0x90;
    nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
  }
  plVar5 = (long *)(lVar6 + 0x70);
  lVar4 = *plVar5;
  plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x2a));
  *plVar5 = (long)plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)plVar5;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
  if (lVar7 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
  }
LAB_03f43700:
  param_1[0x30] = 0;
  param_1[0x2a] = puVar1 + 0x10;
  return;
}

