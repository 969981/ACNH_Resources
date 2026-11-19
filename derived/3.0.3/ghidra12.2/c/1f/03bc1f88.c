
void FUN_03bc1f88(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (**(code **)(*param_1 + 0x30))();
  lVar8 = param_2[4];
  lVar5 = param_2[5];
  lVar2 = param_2[6];
  param_1[7] = param_2[3];
  lVar6 = *param_2;
  lVar3 = param_2[1];
  lVar10 = param_2[2];
  param_1[9] = lVar5;
  param_1[10] = lVar2;
  param_1[8] = lVar8;
  param_1[5] = lVar3;
  param_1[6] = lVar10;
  param_1[4] = lVar6;
  if ((0.0 < *(float *)((long)param_1 + 0x3c)) && ((*(ushort *)(param_1 + 9) >> 1 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  lVar5 = param_1[6];
  if (lVar5 == 0) {
    if ((DAT_05aebb78 != 0) && (*(long *)(DAT_05aebb78 + 0x28) != 0)) {
      lVar5 = *(long *)(*(long *)(DAT_05aebb78 + 0x28) + 0x88);
      param_1[6] = lVar5;
      if (lVar5 != 0) goto LAB_03bc1ff4;
    }
  }
  else {
LAB_03bc1ff4:
    lVar6 = DAT_05aec0b0;
    lVar5 = *(long *)(lVar5 + 0x88);
    if (lVar5 != 0) {
      if (*(long *)(DAT_05aec0b0 + 0x28) != 0) {
        pMVar1 = (MutexType *)(DAT_05aec0b0 + 0x58);
        nn::os::LockMutex(pMVar1);
        if (*(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x30)) {
          plVar11 = *(long **)(lVar6 + 0x20);
          plVar9 = (long *)(lVar6 + 8);
          if (plVar11 != (long *)0x0) {
            *(long *)(lVar6 + 0x20) = *plVar11;
          }
          *(undefined4 *)(plVar11 + 8) = 0;
          puVar4 = PTR_DAT_04bd2288;
          *(undefined8 *)((long)plVar11 + 0x44) = 0x3ec90fdb3e490fdb;
          plVar11[2] = 0;
          plVar11[3] = 0;
          plVar11[4] = 0;
          plVar11[5] = 0;
          *(undefined4 *)((long)plVar11 + 0x4c) = 0x3e490fdb;
          plVar11[0xb] = 0;
          *plVar11 = (long)(puVar4 + 0x10);
          plVar11[1] = 0;
          plVar7 = plVar11 + 10;
          *plVar7 = 0;
          plVar11[6] = 0;
          plVar11[7] = 0;
          lVar8 = *plVar9;
          *plVar9 = (long)plVar7;
          plVar11[0xb] = (long)plVar9;
          *plVar7 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 8) = plVar7;
          }
          *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
          nn::os::UnlockMutex(pMVar1);
          param_1[0xb] = (long)plVar11;
          fVar14 = *(float *)(lVar5 + 0x50) * 0.017453292;
          fVar12 = *(float *)(lVar5 + 0x54) * 0.017453292;
          fVar13 = 0.0;
          if (0.0 <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = 3.1415927;
          if (fVar13 <= 3.1415927) {
            fVar12 = fVar13;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar14) {
            fVar13 = fVar14;
          }
          fVar14 = fVar12;
          if (fVar13 <= fVar12) {
            fVar14 = fVar13;
          }
          *(float *)((long)plVar11 + 0x44) = fVar14;
          *(float *)(plVar11 + 9) = fVar12;
          *(float *)((long)plVar11 + 0x4c) = fVar12 - fVar14;
          lVar5 = param_1[8];
        }
        else {
          nn::os::UnlockMutex(pMVar1);
          param_1[0xb] = 0;
          lVar5 = param_1[8];
        }
        goto joined_r0x03bc21d8;
      }
      param_1[0xb] = 0;
    }
  }
  lVar5 = param_1[8];
joined_r0x03bc21d8:
  if ((lVar5 == 0) ||
     (plVar9 = (long *)((long)*(int *)(lVar5 + 0xa4) + (long)param_1),
     plVar9[1] != 0 || *plVar9 != 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar5 + 200));
  plVar9 = (long *)(lVar5 + 0x90);
  lVar6 = *plVar9;
  param_1 = (long *)((long)*(int *)(lVar5 + 0xa4) + (long)param_1);
  *plVar9 = (long)param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar9;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = param_1;
  }
  *(int *)(lVar5 + 0xa0) = *(int *)(lVar5 + 0xa0) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 200));
  return;
}

