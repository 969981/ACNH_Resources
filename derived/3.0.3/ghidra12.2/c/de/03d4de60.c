
void FUN_03d4de60(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = param_3;
  if (param_3 == 0) {
    if (DAT_05ae7600 == 0) goto LAB_03d4df10;
    param_3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = param_3;
    if (param_3 == 0) goto LAB_03d4df10;
  }
  if ((*(uint *)(param_3 + 0xd0) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3 + 0x90;
    nn::os::LockMutex((MutexType *)(param_3 + 0xb0));
  }
  plVar4 = (long *)(param_3 + 0x70);
  lVar3 = *plVar4;
  plVar2 = (long *)((long)*(int *)(param_3 + 0x84) + (long)param_1);
  *plVar4 = (long)plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar2;
  }
  *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
  if (lVar5 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
  }
LAB_03d4df10:
  *(undefined1 *)((long)param_1 + 0x8b) = 0;
  *param_1 = (long)&PTR_FUN_04b8f448;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[8] = (long)param_1 + 0x4c;
  *(undefined4 *)(param_1 + 9) = 0x40;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[6] = 0;
  param_1[7] = (long)puVar1;
  return;
}

