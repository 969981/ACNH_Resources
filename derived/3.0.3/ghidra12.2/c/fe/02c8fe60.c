
void FUN_02c8fe60(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  if (0 < *param_1) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 4);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar7 = puVar3;
      *(undefined8 **)(param_1 + 4) = puVar7;
      puVar3 = puVar7;
    } while (lVar2 < *param_1);
  }
  *param_1 = 0;
  if (param_1[1] < 1) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 4);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar3;
  }
  *(undefined4 *)puVar3 = 0;
  if (*param_1 < param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar3;
    *param_1 = *param_1 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  iVar1 = *param_1;
  iVar5 = param_1[1];
  if (iVar1 < iVar5) {
    puVar4 = *(uint **)(param_1 + 4);
    if (puVar4 != (uint *)0x0) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar4;
    }
    *puVar4 = 0;
    if (*param_1 < param_1[1]) {
      *(uint **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar4;
      *param_1 = *param_1 + 1;
    }
    *puVar4 = (uint)DAT_05662bd4;
    iVar1 = *param_1;
    iVar5 = param_1[1];
    if (iVar1 < iVar5) goto LAB_02c8ff54;
  }
  else if (iVar1 < iVar5) {
LAB_02c8ff54:
    puVar3 = *(undefined8 **)(param_1 + 4);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar3;
    }
    *(undefined4 *)puVar3 = 0;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar3;
      *param_1 = *param_1 + 1;
    }
    uVar6 = 3;
    if (DAT_05662bd8 == '\0') {
      uVar6 = 0;
    }
    *(undefined4 *)puVar3 = uVar6;
    if (param_1[1] <= *param_1) {
      return;
    }
    goto LAB_02c8ffb0;
  }
  if (iVar5 <= iVar1) {
    return;
  }
LAB_02c8ffb0:
  puVar3 = *(undefined8 **)(param_1 + 4);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar3;
  }
  *(undefined4 *)puVar3 = 0;
  if (*param_1 < param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar3;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 2;
  if (DAT_05662bdc == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar3 = uVar6;
  return;
}

