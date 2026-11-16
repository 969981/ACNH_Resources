
void FUN_029adc88(long param_1,char *param_2)

{
  MutexType *pMVar1;
  char cVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  cVar2 = *param_2;
  if (*(char *)(param_1 + 0x50) != -1) {
    *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + '\x01';
  }
  if (*(int *)(param_1 + 0x48) == 2) {
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0xff;
LAB_029adcf0:
      bVar4 = true;
      *(undefined4 *)(param_1 + 0x48) = 1;
LAB_029adcf8:
      lVar5 = DAT_055f6860;
      pMVar1 = (MutexType *)(DAT_055f6860 + 0xb4408);
      nn::os::LockMutex(pMVar1);
      cVar2 = *(char *)(lVar5 + 0xb442a);
      nn::os::UnlockMutex(pMVar1);
      if (*(char *)(param_1 + 0x51) == cVar2) {
        fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x50));
      }
      else {
        fVar8 = 0.0;
        *(char *)(param_1 + 0x51) = cVar2;
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      fVar3 = fVar8 * 11.25 + 45.0;
      if (cVar2 != '\0') {
        fVar3 = fVar8 * -1.8 + 108.0;
      }
      iVar6 = 0x40b60b80;
      fVar8 = 90.0;
      if (fVar3 <= 90.0) {
        fVar8 = fVar3;
      }
      fVar9 = 45.0;
      if (45.0 <= fVar3) {
        fVar9 = fVar8;
      }
      goto LAB_029addf0;
    }
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 0x48) == 1) {
      if (cVar2 != '\0') {
        bVar4 = false;
        goto LAB_029adcf8;
      }
      *(undefined1 *)(param_1 + 0x50) = 0xff;
    }
    else {
      *(undefined1 *)(param_1 + 0x50) = 0xff;
      if (cVar2 != '\0') goto LAB_029adcf0;
    }
    bVar4 = true;
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  iVar6 = 0x40000000;
  fVar9 = 60.0;
  if (*(int *)(*(long *)PTR_DAT_04bb26a8 + 0x63804) != 4) {
    fVar9 = 30.0;
  }
LAB_029addf0:
  if (fVar9 == *(float *)(param_1 + 0x4c)) {
    if (!bVar4) {
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x4c) = fVar9;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  iVar7 = (int)(long)(fVar9 * 11930465.0);
  *(int *)(param_1 + 0x24) = iVar7;
  *(int *)(param_1 + 0x28) = iVar6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x30) = iVar6 - iVar7;
  *(int *)(param_1 + 0x38) = iVar7 * -2;
  *(int *)(param_1 + 0x3c) = -iVar7;
  *(int *)(param_1 + 0x34) = -iVar7 - iVar6;
  if (*(long *)(lVar5 + 0x38) != 0) {
    FUN_03bc7ff0(*(long *)(lVar5 + 0x38));
    lVar5 = *(long *)(param_1 + 0x40);
  }
  FUN_03bc7350(lVar5);
  return;
}

