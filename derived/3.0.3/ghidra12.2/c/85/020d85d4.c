
void FUN_020d85d4(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if ((int)uVar1 < (int)param_2[1]) {
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x13230;
    uVar2 = param_2[1];
    uVar3 = (long)(int)*param_2 + 1;
    uVar1 = (uint)uVar3;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      *(long *)(*(long *)(param_2 + 2) + uVar3 * 8) = param_1 + 0x264c8;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      uVar3 = (ulong)uVar1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d8678;
LAB_020d8614:
      uVar1 = (uint)uVar3;
      if ((int)uVar2 <= (int)uVar1) goto LAB_020d861c;
LAB_020d869c:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x4c9f8;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d86c0;
LAB_020d8624:
      if ((int)uVar2 <= (int)uVar1) goto LAB_020d862c;
LAB_020d86e4:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x72f28;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d8708;
LAB_020d8634:
      if ((int)uVar1 < (int)uVar2) {
LAB_020d872c:
        *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x99458;
        uVar1 = *param_2 + 1;
        *param_2 = uVar1;
        if ((int)param_2[1] <= (int)uVar1) {
          return;
        }
        goto LAB_020d8750;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar1) goto LAB_020d8614;
LAB_020d8678:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar3 * 8) = param_1 + 0x39760;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d869c;
LAB_020d861c:
      if ((int)uVar2 <= (int)uVar1) goto LAB_020d8624;
LAB_020d86c0:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x5fc90;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d86e4;
LAB_020d862c:
      if ((int)uVar2 <= (int)uVar1) goto LAB_020d8634;
LAB_020d8708:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x861c0;
      uVar2 = param_2[1];
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_020d872c;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  }
  else if ((int)param_2[1] <= (int)uVar1) {
    return;
  }
LAB_020d8750:
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = 0;
  uVar1 = param_2[1];
  uVar3 = (long)(int)*param_2 + 1;
  uVar2 = (uint)uVar3;
  *param_2 = uVar2;
  if ((int)uVar2 < (int)uVar1) {
    *(undefined8 *)(*(long *)(param_2 + 2) + uVar3 * 8) = 0;
    uVar1 = param_2[1];
    uVar2 = *param_2 + 1;
    uVar3 = (ulong)uVar2;
    *param_2 = uVar2;
    if ((int)uVar2 < (int)uVar1) goto LAB_020d87a0;
  }
  else if ((int)uVar2 < (int)uVar1) {
LAB_020d87a0:
    *(undefined8 *)(*(long *)(param_2 + 2) + (long)(int)uVar3 * 8) = 0;
    uVar2 = *param_2 + 1;
    *param_2 = uVar2;
    if ((int)param_2[1] <= (int)uVar2) {
      return;
    }
    goto LAB_020d87bc;
  }
  uVar2 = (uint)uVar3;
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
LAB_020d87bc:
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 8) = 0;
  *param_2 = *param_2 + 1;
  return;
}

