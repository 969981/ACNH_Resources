
float FUN_003b6ac0(long param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xf4)) {
    fVar3 = *(float *)(param_1 + 0xec) +
            ((*(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xec)) *
            (float)*(int *)(param_1 + 0xf8)) / (float)*(int *)(param_1 + 0xf4);
    iVar2 = *(int *)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x104);
    if (iVar2 < iVar1) {
LAB_003b6b18:
      return fVar3 * (*(float *)(param_1 + 0xfc) +
                     ((*(float *)(param_1 + 0x100) - *(float *)(param_1 + 0xfc)) * (float)iVar2) /
                     (float)iVar1);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xf0);
    iVar2 = *(int *)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x104);
    if (iVar2 < iVar1) goto LAB_003b6b18;
  }
  return fVar3 * *(float *)(param_1 + 0x100);
}

