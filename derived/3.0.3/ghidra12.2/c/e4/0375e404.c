
void FUN_0375e404(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  *(undefined8 *)(param_1 + 0x94) = 0x4120000042c80000;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x200000;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  uVar5 = DAT_05abff50;
  fVar9 = (float)((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c)) + 1) * 5.0;
  fVar11 = ((float)*(int *)(param_1 + 0x2c) * 5.0 + (float)*(int *)(param_1 + 0x3c) * 5.0 + 5.0) *
           0.5;
  fVar12 = ((float)*(int *)(param_1 + 0x28) * 5.0 + (float)*(int *)(param_1 + 0x38) * 5.0 + 5.0) *
           0.5;
  *(undefined4 *)(param_1 + 0x84) = DAT_05abff50;
  fVar14 = (float)((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28)) + 1) * 5.0;
  *(float *)(param_1 + 0xa8) = fVar12;
  *(float *)(param_1 + 0x90) = fVar14;
  *(float *)(param_1 + 0xb0) = fVar11 - (fVar9 * 0.5 + 5.0);
  puVar4 = PTR_DAT_04bb27c8;
  lVar8 = *(long *)PTR_DAT_04bb27c8;
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x78) == 0 && *(long *)(param_1 + 0x70) == 0)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
    plVar7 = (long *)(lVar8 + 0x70);
    lVar6 = *plVar7;
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 0x68);
    *plVar7 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar7;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    lVar8 = *(long *)puVar4;
    uVar5 = DAT_05abff50;
  }
  *(float *)(param_1 + 0x288) = fVar9;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0xc1f00000;
  fVar14 = fVar14 * 0.5 + 5.0;
  *(float *)(param_1 + 0x2a0) = fVar11;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0x42c8000041200000;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x274) = uVar5;
  *(undefined4 *)(param_1 + 0x2a4) = 0x200000;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  *(float *)(param_1 + 0x298) = fVar12 - fVar14;
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x268) == 0 && *(long *)(param_1 + 0x260) == 0)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
    plVar7 = (long *)(lVar8 + 0x70);
    lVar6 = *plVar7;
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 600);
    *plVar7 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar7;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    lVar8 = *(long *)puVar4;
    uVar5 = DAT_05abff50;
  }
  *(undefined8 *)(param_1 + 0x470) = 0x42c8000041200000;
  *(float *)(param_1 + 0x478) = fVar9;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0xc1f00000;
  *(undefined8 *)(param_1 + 0x47c) = 0;
  *(float *)(param_1 + 0x490) = fVar11;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x464) = uVar5;
  *(undefined4 *)(param_1 + 0x494) = 0x200000;
  *(undefined1 *)(param_1 + 0x46c) = 1;
  *(float *)(param_1 + 0x488) = fVar14 + fVar12;
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x458) == 0 && *(long *)(param_1 + 0x450) == 0)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
    plVar7 = (long *)(lVar8 + 0x70);
    lVar6 = *plVar7;
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 0x448);
    *plVar7 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar7;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    lVar8 = *(long *)puVar4;
    uVar5 = DAT_05abff50;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x674) = 0;
  iVar3 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x67c) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x654) = uVar5;
  *(undefined4 *)(param_1 + 0x684) = 0x200000;
  *(undefined4 *)(param_1 + 0x664) = 0x42c80000;
  *(undefined8 *)(param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0x65c) = 1;
  fVar14 = (float)*(int *)(param_1 + 0x50) * 5.0;
  fVar10 = (float)((*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x50)) + 1) * 5.0;
  fVar9 = (float)*(int *)(param_1 + 0x60) * 5.0 + 5.0;
  fVar11 = (float)iVar3 * 5.0 + 5.0;
  fVar12 = fVar14 - (float)*(int *)(param_1 + 0x28) * 5.0;
  fVar15 = fVar10 * 0.5;
  *(float *)(param_1 + 0x660) = fVar12;
  fVar14 = (fVar14 + fVar9) * 0.5;
  fVar13 = ((float)iVar2 * 5.0 + fVar11) * 0.5;
  fVar11 = (fVar11 - ((float)*(int *)(param_1 + 0x3c) * 5.0 + 5.0)) + 10.0;
  fVar16 = fVar13 + 5.0;
  *(float *)(param_1 + 0x668) = fVar11;
  *(float *)(param_1 + 0x680) = fVar16;
  *(float *)(param_1 + 0x678) = fVar14 - (fVar15 + fVar12 * 0.5);
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x648) == 0 && *(long *)(param_1 + 0x640) == 0)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
    plVar7 = (long *)(lVar8 + 0x70);
    lVar6 = *plVar7;
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 0x638);
    *plVar7 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar7;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    lVar8 = *(long *)puVar4;
    fVar9 = (float)*(int *)(param_1 + 0x60) * 5.0 + 5.0;
    fVar11 = (((float)*(int *)(param_1 + 100) * 5.0 + 5.0) -
             ((float)*(int *)(param_1 + 0x3c) * 5.0 + 5.0)) + 10.0;
    uVar5 = DAT_05abff50;
  }
  *(float *)(param_1 + 0x858) = fVar11;
  *(undefined4 *)(param_1 + 0x854) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0xc1f00000;
  *(float *)(param_1 + 0x870) = fVar16;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x844) = uVar5;
  *(undefined8 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0x200000;
  *(undefined1 *)(param_1 + 0x84c) = 1;
  fVar9 = ((float)*(int *)(param_1 + 0x38) * 5.0 + 5.0) - fVar9;
  *(float *)(param_1 + 0x850) = fVar9;
  *(float *)(param_1 + 0x868) = fVar14 + fVar15 + fVar9 * 0.5;
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x838) == 0 && *(long *)(param_1 + 0x830) == 0)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
    plVar7 = (long *)(lVar8 + 0x70);
    lVar6 = *plVar7;
    plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 0x828);
    *plVar7 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar7;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    lVar8 = *(long *)puVar4;
    uVar5 = DAT_05abff50;
  }
  *(float *)(param_1 + 0xa40) = fVar10;
  *(undefined4 *)(param_1 + 0xa54) = 0;
  *(float *)(param_1 + 0xa58) = fVar14;
  *(undefined4 *)(param_1 + 0xa5c) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined8 *)(param_1 + 0xa44) = 0x4120000042c80000;
  *(undefined8 *)(param_1 + 0xa4c) = 0;
  *(undefined4 *)(param_1 + 0xa34) = uVar5;
  *(undefined4 *)(param_1 + 0xa64) = 0x200000;
  *(undefined1 *)(param_1 + 0xa3c) = 1;
  *(float *)(param_1 + 0xa60) = fVar13 + (float)((iVar3 - iVar2) + 1) * 5.0 * 0.5 + 10.0 + 5.0;
  if ((lVar8 == 0) || (*(long *)(param_1 + 0xa28) != 0 || *(long *)(param_1 + 0xa20) != 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
  plVar7 = (long *)(lVar8 + 0x70);
  lVar6 = *plVar7;
  plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + param_1 + 0xa18);
  *plVar7 = (long)plVar1;
  *plVar1 = lVar6;
  plVar1[1] = (long)plVar7;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
  return;
}

