
void FUN_03b60e78(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (DAT_05aebc00 != '\0') {
    if (*(long *)(param_2 + 0x128) == 0) {
      return;
    }
    if (1 < *(int *)(param_2 + 0x5c) - 1U) {
      return;
    }
    *(int *)(param_2 + 0x5c) = 3;
    if (*(char *)(param_2 + 0x58) == '\0') {
      return;
    }
    lVar2 = *(long *)(param_2 + 0x130);
    if (lVar2 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 8) == '\0') {
      return;
    }
    if (*(int **)(lVar2 + 0x10) == (int *)0x0) {
      return;
    }
    if (**(int **)(lVar2 + 0x10) != 0x56415742) {
      return;
    }
    if (*(short *)(lVar2 + 0x30) == 0) {
      return;
    }
    FUN_03b628a0(*(undefined8 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0x6c),0);
    return;
  }
  if (*(long **)(param_2 + 0x48) == (long *)0x0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x40);
  if (lVar2 == 0) {
    return;
  }
  if (**(long **)(param_2 + 0x48) == 0) {
    return;
  }
  if (param_1 < 0.0) goto LAB_03b60f7c;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  lVar1 = DAT_05aebb78;
  if ((param_1 == 0.0) || (fVar3 = *(float *)(lVar2 + 8), fVar3 == 0.0)) {
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined4 *)(lVar2 + 0x14) = 0;
    goto LAB_03b60f7c;
  }
  param_1 = (0.0 - fVar3) / param_1;
  *(float *)(lVar2 + 0x14) = param_1;
  fVar3 = fVar3 + *(float *)(*(long *)(lVar1 + 0x10) + 0x1c) * param_1;
  if (0.0 <= param_1) {
    if (0.0 < fVar3) goto LAB_03b60f68;
  }
  else if (fVar3 < 0.0) {
LAB_03b60f68:
    fVar3 = 0.0;
  }
  *(float *)(lVar2 + 0xc) = fVar3;
LAB_03b60f7c:
  *(undefined4 *)(param_2 + 0x10) = 3;
  return;
}

