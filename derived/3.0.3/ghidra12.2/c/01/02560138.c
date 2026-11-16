
void FUN_02560138(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  DAT_054f68b8 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = &DAT_054f6888;
    DAT_054f68f0 = 1;
    uVar3 = param_1[1];
    uVar2 = (long)(int)*param_1 + 1;
    *param_1 = (uint)uVar2;
    if ((int)(uint)uVar2 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + uVar2 * 8) = &DAT_054f68c0;
      uVar3 = param_1[1];
      uVar2 = (ulong)(*param_1 + 1);
      *param_1 = *param_1 + 1;
    }
    DAT_054f6928 = 2;
    uVar1 = (uint)uVar2;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f68f8;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6960 = 3;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6930;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6998 = 4;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6968;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f69d0 = 5;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f69a0;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6a08 = 6;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f69d8;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6a40 = 7;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6a10;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6a78 = 8;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6a48;
      uVar3 = param_1[1];
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    }
    DAT_054f6ab0 = 9;
    if ((int)uVar1 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_054f6a80;
      *param_1 = *param_1 + 1;
      return;
    }
  }
  else {
    DAT_054f68f0 = 1;
    DAT_054f6928 = 2;
    DAT_054f6960 = 3;
    DAT_054f6998 = 4;
    DAT_054f69d0 = 5;
    DAT_054f6a08 = 6;
    DAT_054f6a40 = 7;
    DAT_054f6a78 = 8;
  }
  DAT_054f6ab0 = 9;
  return;
}

