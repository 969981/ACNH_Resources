
void FUN_03b47300(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long local_38;
  
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    return;
  }
  if (**(long **)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  fVar5 = *(float *)(lVar4 + 0x10);
  if (*(float *)(lVar4 + 8) != fVar5) {
    *(float *)(lVar4 + 8) = *(float *)(lVar4 + 0xc);
    fVar6 = *(float *)(lVar4 + 0xc) +
            *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
            *(float *)(lVar4 + 0x14);
    if (0.0 <= *(float *)(lVar4 + 0x14)) {
      if (fVar5 < fVar6) goto LAB_03b47374;
    }
    else if (fVar6 < fVar5) {
LAB_03b47374:
      fVar6 = fVar5;
    }
    *(float *)(lVar4 + 0xc) = fVar6;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_03b47414;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_03b47414;
  iVar1 = *(int *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(*(long *)(param_1 + 0x38) + 8);
  if (iVar1 == 3) {
    fVar5 = sinf(fVar5 * 1.5707964);
LAB_03b473e8:
    fVar7 = fVar5;
  }
  else if (iVar1 == 2) {
    fVar7 = SQRT(fVar5);
    if (NAN(fVar7)) {
      fVar5 = sqrtf(fVar5);
      goto LAB_03b473e8;
    }
  }
  else {
    if (iVar1 != 1) goto LAB_03b473e8;
    fVar7 = fVar5 * fVar5;
  }
  if (**(long **)(param_1 + 0x40) != 0) {
    FUN_003cfb08(fVar6 * fVar7,**(long **)(param_1 + 0x40),0);
  }
LAB_03b47414:
  if ((*(int *)(param_1 + 8) == 3) &&
     (*(float *)(*(long *)(param_1 + 0x38) + 8) == *(float *)(*(long *)(param_1 + 0x38) + 0x10))) {
    if (**(long **)(param_1 + 0x40) != 0) {
      FUN_003ceb1c(**(long **)(param_1 + 0x40),0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar2 = FUN_02a0c760(*(undefined1 *)(*(long *)(param_1 + 0x30) + 0x10));
  iVar1 = 0;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_02a0c760(1);
  if (iVar1 == iVar2) {
    FUN_003e41d0(&local_38,*(undefined8 *)(param_1 + 0x40));
    if (((local_38 != 0) && (uVar3 = FUN_003ced34(), (uVar3 & 1) == 0)) && (local_38 != 0)) {
      FUN_003e40b8();
    }
    FUN_003e42a0(&local_38);
  }
  return;
}

