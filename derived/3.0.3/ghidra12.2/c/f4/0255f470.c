
void FUN_0255f470(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5cb8;
    uVar2 = param_1[1];
    uVar3 = (long)(int)*param_1 + 1;
    uVar1 = (uint)uVar3;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined8 **)(*(long *)(param_1 + 2) + uVar3 * 8) = &DAT_054f5cd0;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      uVar3 = (ulong)uVar1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f514;
LAB_0255f4b0:
      uVar1 = (uint)uVar3;
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f4b8;
LAB_0255f538:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5d00;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f55c;
LAB_0255f4c0:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f4c8;
LAB_0255f580:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5d30;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f5a4;
LAB_0255f4d0:
      if ((int)uVar1 < (int)uVar2) {
LAB_0255f5c8:
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5d60;
        uVar1 = *param_1 + 1;
        *param_1 = uVar1;
        if ((int)param_1[1] <= (int)uVar1) {
          return;
        }
        goto LAB_0255f5ec;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f4b0;
LAB_0255f514:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_054f5ce8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f538;
LAB_0255f4b8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f4c0;
LAB_0255f55c:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5d18;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f580;
LAB_0255f4c8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f4d0;
LAB_0255f5a4:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5d48;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f5c8;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  }
  else if ((int)param_1[1] <= (int)uVar1) {
    return;
  }
LAB_0255f5ec:
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = 0;
  uVar1 = param_1[1];
  uVar3 = (long)(int)*param_1 + 1;
  uVar2 = (uint)uVar3;
  *param_1 = uVar2;
  if ((int)uVar2 < (int)uVar1) {
    *(undefined8 *)(*(long *)(param_1 + 2) + uVar3 * 8) = 0;
    uVar1 = param_1[1];
    uVar2 = *param_1 + 1;
    uVar3 = (ulong)uVar2;
    *param_1 = uVar2;
    if ((int)uVar2 < (int)uVar1) goto LAB_0255f63c;
  }
  else if ((int)uVar2 < (int)uVar1) {
LAB_0255f63c:
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = 0;
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
    if ((int)param_1[1] <= (int)uVar2) {
      return;
    }
    goto LAB_0255f658;
  }
  uVar2 = (uint)uVar3;
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
LAB_0255f658:
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
  *param_1 = *param_1 + 1;
  return;
}

