
int FUN_03ba9dc8(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0xc) < 6) || (7 < *(int *)(param_1 + 0xc))) &&
     (*(char *)(param_1 + 0x16) == '\0')) {
    fVar3 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xfc);
    if (*(long *)(param_1 + 0x1e8) == 0) {
      if (*(long **)(param_1 + 0x118) != (long *)0x0) {
        fVar2 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x48))();
        goto LAB_03ba9e48;
      }
    }
    else {
      fVar2 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x18);
LAB_03ba9e48:
      fVar3 = fVar3 * fVar2;
    }
    iVar1 = (int)(fVar3 * 255.0);
  }
  else {
    iVar1 = 0;
  }
  if (((5 < *(int *)(param_2 + 0xc)) && (*(int *)(param_2 + 0xc) < 8)) ||
     (*(char *)(param_2 + 0x16) != '\0')) {
    iVar1 = -iVar1;
    goto joined_r0x03ba9e84;
  }
  fVar3 = *(float *)(param_2 + 0xf4) * *(float *)(param_2 + 0xfc);
  if (*(long *)(param_2 + 0x1e8) == 0) {
    if (*(long **)(param_2 + 0x118) != (long *)0x0) {
      fVar2 = (float)(**(code **)(**(long **)(param_2 + 0x118) + 0x48))();
      goto LAB_03ba9ee0;
    }
  }
  else {
    fVar2 = *(float *)(*(long *)(param_2 + 0x1e8) + 0x18);
LAB_03ba9ee0:
    fVar3 = fVar3 * fVar2;
  }
  iVar1 = (int)(fVar3 * 255.0) - iVar1;
joined_r0x03ba9e84:
  if ((iVar1 == 0) &&
     (iVar1 = -(uint)(*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c)),
     *(float *)(param_2 + 0x1c) < *(float *)(param_1 + 0x1c))) {
    iVar1 = 1;
  }
  return iVar1;
}

