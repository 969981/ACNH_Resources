
void FUN_029f58f4(byte *param_1,char *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  byte bVar3;
  float *pfVar4;
  undefined4 *puVar5;
  long lVar6;
  float *pfVar7;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*param_2 == '\0') goto LAB_029f59b4;
    bVar3 = 5;
LAB_029f5930:
    param_1[1] = param_1[1] | bVar3;
    if (*param_2 == '\0') goto LAB_029f59b4;
  }
  else if (*param_2 == '\0') {
    bVar3 = 2;
    goto LAB_029f5930;
  }
  pfVar4 = *(float **)(param_2 + 8);
  if ((((*(float *)(param_1 + 4) != *pfVar4) || (*(float *)(param_1 + 8) != pfVar4[1])) ||
      (*(float *)(param_1 + 0xc) != pfVar4[2])) ||
     (((pfVar7 = *(float **)(param_2 + 0x10), *(float *)(param_1 + 0x10) != *pfVar7 ||
       (*(float *)(param_1 + 0x14) != pfVar7[1])) || (*(float *)(param_1 + 0x18) != pfVar7[2])))) {
    *(float *)(param_1 + 4) = *pfVar4;
    *(float *)(param_1 + 8) = pfVar4[1];
    *(float *)(param_1 + 0xc) = pfVar4[2];
    puVar5 = *(undefined4 **)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *puVar5;
    *(undefined4 *)(param_1 + 0x14) = puVar5[1];
    *(undefined4 *)(param_1 + 0x18) = puVar5[2];
    param_1[1] = param_1[1] | 4;
  }
LAB_029f59b4:
  lVar2 = DAT_055f0cb8;
  if (param_1[1] == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_055f0cb8 + 0x20);
  nn::os::LockMutex(pMVar1);
  lVar6 = *(long *)(lVar2 + 0x3308);
  param_1 = param_1 + *(int *)(lVar2 + 0x331c);
  *(byte **)(lVar2 + 0x3308) = param_1;
  *(long *)param_1 = lVar6;
  *(long *)(param_1 + 8) = lVar2 + 0x3308;
  if (lVar6 != 0) {
    *(byte **)(lVar6 + 8) = param_1;
  }
  *(int *)(lVar2 + 0x3318) = *(int *)(lVar2 + 0x3318) + 1;
  nn::os::UnlockMutex(pMVar1);
  return;
}

