
void FUN_029cadfc(byte *param_1,char *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04bb26a8;
  if (((*(byte *)(lVar4 + 0xb3890) >> 5 & 1) != 0) &&
     (lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
     *(long *)(lVar4 + 0xb80e0) != lVar2)) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*param_2 == '\0') goto LAB_029caef8;
    bVar3 = 5;
LAB_029cae78:
    param_1[1] = param_1[1] | bVar3;
    if (*param_2 == '\0') goto LAB_029caef8;
  }
  else if (*param_2 == '\0') {
    bVar3 = 2;
    goto LAB_029cae78;
  }
  pfVar5 = *(float **)(param_2 + 8);
  fVar6 = *pfVar5;
  if ((*(float *)(param_1 + 4) == fVar6) && (*(float *)(param_1 + 8) == pfVar5[1])) {
    fVar7 = pfVar5[2];
    *(float *)(param_1 + 4) = fVar6;
    fVar6 = *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 8) = pfVar5[1];
    *(float *)(param_1 + 0xc) = pfVar5[2];
    if (fVar6 == fVar7) goto LAB_029caef8;
  }
  else {
    *(float *)(param_1 + 4) = fVar6;
    *(float *)(param_1 + 8) = pfVar5[1];
    *(float *)(param_1 + 0xc) = pfVar5[2];
  }
  param_1[1] = param_1[1] | 4;
LAB_029caef8:
  lVar4 = DAT_055ea108;
  if (param_1[1] == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_055ea108 + 0x20);
  nn::os::LockMutex(pMVar1);
  param_1 = param_1 + *(int *)(lVar4 + 0x3cc);
  lVar2 = *(long *)(lVar4 + 0x3b8);
  *(byte **)(lVar4 + 0x3b8) = param_1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + 8) = lVar4 + 0x3b8;
  if (lVar2 != 0) {
    *(byte **)(lVar2 + 8) = param_1;
  }
  *(int *)(lVar4 + 0x3c8) = *(int *)(lVar4 + 0x3c8) + 1;
  nn::os::UnlockMutex(pMVar1);
  return;
}

