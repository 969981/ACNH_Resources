
void FUN_038e19ac(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  if (param_2 == 0) {
    if (DAT_05ae7600 == 0) goto LAB_038e1a5c;
    param_2 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = param_2;
    if (param_2 == 0) goto LAB_038e1a5c;
  }
  if ((*(uint *)(param_2 + 0xd0) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2 + 0x90;
    nn::os::LockMutex((MutexType *)(param_2 + 0xb0));
  }
  plVar4 = (long *)(param_2 + 0x70);
  lVar3 = *plVar4;
  plVar2 = (long *)((long)*(int *)(param_2 + 0x84) + (long)param_1);
  *plVar4 = (long)plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  if (lVar5 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
  }
LAB_038e1a5c:
  *param_1 = (long)&PTR_FUN_04b65190;
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}

