
void FUN_006f91cc(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = &DAT_04c898f0;
  uVar3 = param_1[1];
  uVar2 = (long)(int)*param_1 + 1;
  uVar1 = (uint)uVar2;
  *param_1 = uVar1;
  if ((int)uVar1 < (int)uVar3) {
    *(undefined8 **)(*(long *)(param_1 + 2) + uVar2 * 8) = &DAT_04c89908;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    uVar2 = (ulong)uVar1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f9288;
LAB_006f920c:
    uVar1 = (uint)uVar2;
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f9214;
LAB_006f92ac:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c89938;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f92d0;
LAB_006f921c:
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f9224;
LAB_006f92f4:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c89968;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f9318;
LAB_006f922c:
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f9234;
LAB_006f933c:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c89998;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f9360;
  }
  else {
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f920c;
LAB_006f9288:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_04c89920;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f92ac;
LAB_006f9214:
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f921c;
LAB_006f92d0:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c89950;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f92f4;
LAB_006f9224:
    if ((int)uVar3 <= (int)uVar1) goto LAB_006f922c;
LAB_006f9318:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c89980;
    uVar3 = param_1[1];
    uVar1 = *param_1 + 1;
    *param_1 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_006f933c;
LAB_006f9234:
    if ((int)uVar1 < (int)uVar3) {
LAB_006f9360:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c899b0;
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      if ((int)param_1[1] <= (int)uVar1) {
        return;
      }
      goto LAB_006f9244;
    }
  }
  if ((int)uVar3 <= (int)uVar1) {
    return;
  }
LAB_006f9244:
  *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = &DAT_04c899c8;
  *param_1 = *param_1 + 1;
  return;
}

