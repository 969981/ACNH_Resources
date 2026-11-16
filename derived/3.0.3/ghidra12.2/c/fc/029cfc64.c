
void FUN_029cfc64(byte *param_1,char *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*param_2 == '\0') goto LAB_029cfcf8;
    bVar4 = 5;
LAB_029cfca0:
    param_1[1] = param_1[1] | bVar4;
    if (*param_2 == '\0') goto LAB_029cfcf8;
  }
  else if (*param_2 == '\0') {
    bVar4 = 2;
    goto LAB_029cfca0;
  }
  plVar5 = *(long **)(param_2 + 8);
  lVar6 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  lVar7 = *plVar5;
  lVar3 = plVar5[1];
  *(int *)(param_1 + 8) = (int)*plVar5;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)plVar5 + 4);
  *(int *)(param_1 + 0x10) = (int)plVar5[1];
  if (lVar6 != lVar7 || iVar2 != (int)lVar3) {
    param_1[1] = param_1[1] | 4;
  }
LAB_029cfcf8:
  lVar3 = DAT_055ea8e0;
  if (param_1[1] == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_055ea8e0 + 0x20);
  plVar5 = (long *)(DAT_055ea8e0 + 0xcc28);
  nn::os::LockMutex(pMVar1);
  param_1 = param_1 + *(int *)(lVar3 + 0xcc3c);
  lVar6 = *plVar5;
  *plVar5 = (long)param_1;
  *(long *)param_1 = lVar6;
  *(long **)(param_1 + 8) = plVar5;
  if (lVar6 != 0) {
    *(byte **)(lVar6 + 8) = param_1;
  }
  *(int *)(lVar3 + 0xcc38) = *(int *)(lVar3 + 0xcc38) + 1;
  nn::os::UnlockMutex(pMVar1);
  return;
}

