
void FUN_0255ff38(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6ab8;
    uVar2 = param_1[1];
    uVar3 = (long)(int)*param_1 + 1;
    uVar1 = (uint)uVar3;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined8 **)(*(long *)(param_1 + 2) + uVar3 * 8) = &DAT_054f6ae8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      uVar3 = (ulong)uVar1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0255ffdc;
LAB_0255ff78:
      uVar1 = (uint)uVar3;
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255ff80;
LAB_02560000:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6b48;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_02560024;
LAB_0255ff88:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255ff90;
LAB_02560048:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6ba8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_0256006c;
LAB_0255ff98:
      if ((int)uVar1 < (int)uVar2) {
LAB_02560090:
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6c08;
        uVar1 = *param_1 + 1;
        *param_1 = uVar1;
        if ((int)param_1[1] <= (int)uVar1) {
          return;
        }
        goto LAB_025600b4;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255ff78;
LAB_0255ffdc:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_054f6b18;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_02560000;
LAB_0255ff80:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255ff88;
LAB_02560024:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6b78;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_02560048;
LAB_0255ff90:
      if ((int)uVar2 <= (int)uVar1) goto LAB_0255ff98;
LAB_0256006c:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6bd8;
      uVar2 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)uVar1 < (int)uVar2) goto LAB_02560090;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  }
  else if ((int)param_1[1] <= (int)uVar1) {
    return;
  }
LAB_025600b4:
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
    if ((int)uVar2 < (int)uVar1) goto LAB_02560104;
  }
  else if ((int)uVar2 < (int)uVar1) {
LAB_02560104:
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = 0;
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
    if ((int)param_1[1] <= (int)uVar2) {
      return;
    }
    goto LAB_02560120;
  }
  uVar2 = (uint)uVar3;
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
LAB_02560120:
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
  *param_1 = *param_1 + 1;
  return;
}

