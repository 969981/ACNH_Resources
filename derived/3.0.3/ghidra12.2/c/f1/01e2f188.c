
void FUN_01e2f188(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((int)param_2[1] <= (int)*param_2) {
    return;
  }
  *(long *)(*(long *)(param_2 + 2) + (long)(int)*param_2 * 8) = param_1 + 0x78;
  uVar3 = param_2[1];
  uVar2 = (long)(int)*param_2 + 1;
  uVar1 = (uint)uVar2;
  *param_2 = uVar1;
  if ((int)uVar1 < (int)uVar3) {
    *(long *)(*(long *)(param_2 + 2) + uVar2 * 8) = param_1 + 0xa0;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    uVar2 = (ulong)uVar1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f238;
LAB_01e2f1c4:
    uVar1 = (uint)uVar2;
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1cc;
LAB_01e2f258:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0xf0;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f278;
LAB_01e2f1d4:
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1dc;
LAB_01e2f298:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x140;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f2b8;
LAB_01e2f1e4:
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1ec;
LAB_01e2f2d8:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 400;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f2f8;
  }
  else {
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1c4;
LAB_01e2f238:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 8) = param_1 + 200;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f258;
LAB_01e2f1cc:
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1d4;
LAB_01e2f278:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x118;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f298;
LAB_01e2f1dc:
    if ((int)uVar3 <= (int)uVar1) goto LAB_01e2f1e4;
LAB_01e2f2b8:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x168;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_01e2f2d8;
LAB_01e2f1ec:
    if ((int)uVar1 < (int)uVar3) {
LAB_01e2f2f8:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x1b8;
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)param_2[1] <= (int)uVar1) {
        return;
      }
      goto LAB_01e2f1fc;
    }
  }
  if ((int)uVar3 <= (int)uVar1) {
    return;
  }
LAB_01e2f1fc:
  *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x1e0;
  *param_2 = *param_2 + 1;
  return;
}

