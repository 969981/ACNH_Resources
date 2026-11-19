
int FUN_03ba9b5c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(float *)(param_2 + 0x1c) < *(float *)(param_1 + 0x1c)) {
    return 1;
  }
  if (*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c)) {
    return -1;
  }
  if (((*(int *)(param_1 + 0xc) < 6) || (7 < *(int *)(param_1 + 0xc))) &&
     (*(char *)(param_1 + 0x16) == '\0')) {
    fVar4 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xfc);
    if (*(long *)(param_1 + 0x1e8) == 0) {
      if (*(long **)(param_1 + 0x118) != (long *)0x0) {
        fVar3 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x48))();
        goto LAB_03ba9bf8;
      }
    }
    else {
      fVar3 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x18);
LAB_03ba9bf8:
      fVar4 = fVar4 * fVar3;
    }
    iVar2 = (int)(fVar4 * 255.0);
  }
  else {
    iVar2 = 0;
  }
  if (((5 < *(int *)(param_2 + 0xc)) && (*(int *)(param_2 + 0xc) < 8)) ||
     (*(char *)(param_2 + 0x16) != '\0')) {
    iVar1 = 0;
    goto LAB_03ba9c78;
  }
  fVar4 = *(float *)(param_2 + 0xf4) * *(float *)(param_2 + 0xfc);
  if (*(long *)(param_2 + 0x1e8) == 0) {
    if (*(long **)(param_2 + 0x118) != (long *)0x0) {
      fVar3 = (float)(**(code **)(**(long **)(param_2 + 0x118) + 0x48))();
      goto LAB_03ba9c64;
    }
  }
  else {
    fVar3 = *(float *)(*(long *)(param_2 + 0x1e8) + 0x18);
LAB_03ba9c64:
    fVar4 = fVar4 * fVar3;
  }
  iVar1 = (int)(fVar4 * 255.0);
LAB_03ba9c78:
  return iVar1 - iVar2;
}

