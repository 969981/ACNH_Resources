
void FUN_0255f270(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5938;
    uVar2 = param_1[1];
    uVar3 = (long)(int)*param_1 + 1;
    uVar1 = (uint)uVar3;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined8 **)(*(long *)(param_1 + 2) + uVar3 * 8) = &DAT_054f59a8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      uVar3 = (ulong)uVar1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f314;
LAB_0255f2b0:
      uVar1 = (uint)uVar3;
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f2b8;
LAB_0255f338:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5a88;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f35c;
LAB_0255f2c0:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f2c8;
LAB_0255f380:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5b68;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f3a4;
LAB_0255f2d0:
      if ((int)uVar1 < (int)uVar2) {
LAB_0255f3c8:
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5c48;
        uVar1 = *param_1 + 1;
        *param_1 = uVar1;
        if ((int)param_1[1] <= (int)uVar1) {
          return;
        }
        goto LAB_0255f3ec;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f2b0;
LAB_0255f314:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_054f5a18;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f338;
LAB_0255f2b8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f2c0;
LAB_0255f35c:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5af8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f380;
LAB_0255f2c8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f2d0;
LAB_0255f3a4:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5bd8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f3c8;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  }
  else if ((int)param_1[1] <= (int)uVar1) {
    return;
  }
LAB_0255f3ec:
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
    if ((int)uVar2 < (int)uVar1) goto LAB_0255f43c;
  }
  else if ((int)uVar2 < (int)uVar1) {
LAB_0255f43c:
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = 0;
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
    if ((int)param_1[1] <= (int)uVar2) {
      return;
    }
    goto LAB_0255f458;
  }
  uVar2 = (uint)uVar3;
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
LAB_0255f458:
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
  *param_1 = *param_1 + 1;
  return;
}

