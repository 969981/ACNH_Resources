
void FUN_0255f070(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f57b8;
    uVar2 = param_1[1];
    uVar3 = (long)(int)*param_1 + 1;
    uVar1 = (uint)uVar3;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined8 **)(*(long *)(param_1 + 2) + uVar3 * 8) = &DAT_054f57e8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      uVar3 = (ulong)uVar1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f114;
LAB_0255f0b0:
      uVar1 = (uint)uVar3;
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f0b8;
LAB_0255f138:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5848;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f15c;
LAB_0255f0c0:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f0c8;
LAB_0255f180:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f58a8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f1a4;
LAB_0255f0d0:
      if ((int)uVar1 < (int)uVar2) {
LAB_0255f1c8:
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5908;
        uVar1 = *param_1 + 1;
        *param_1 = uVar1;
        if ((int)param_1[1] <= (int)uVar1) {
          return;
        }
        goto LAB_0255f1ec;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f0b0;
LAB_0255f114:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_054f5818;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f138;
LAB_0255f0b8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f0c0;
LAB_0255f15c:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f5878;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f180;
LAB_0255f0c8:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255f0d0;
LAB_0255f1a4:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f58d8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255f1c8;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  }
  else if ((int)param_1[1] <= (int)uVar1) {
    return;
  }
LAB_0255f1ec:
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
    if ((int)uVar2 < (int)uVar1) goto LAB_0255f23c;
  }
  else if ((int)uVar2 < (int)uVar1) {
LAB_0255f23c:
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = 0;
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
    if ((int)param_1[1] <= (int)uVar2) {
      return;
    }
    goto LAB_0255f258;
  }
  uVar2 = (uint)uVar3;
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
LAB_0255f258:
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
  *param_1 = *param_1 + 1;
  return;
}

