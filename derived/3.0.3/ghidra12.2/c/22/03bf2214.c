
void FUN_03bf2214(uint *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  
  if ((int)param_4 < 0) {
    return;
  }
  if ((int)*(short *)(*(long *)(param_1 + -0x14) + 0x46) <= (int)param_4) {
    return;
  }
  puVar9 = param_1 + 2;
  puVar2 = puVar9 + (ulong)*param_1 * 2;
  if (1 < *param_1) {
    puVar2 = puVar9;
  }
  lVar5 = *(long *)puVar2;
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x38) == 0) {
    return;
  }
  uVar6 = param_4;
  if (*(uint *)(lVar5 + 0x30) <= param_4) {
    uVar6 = 0;
  }
  if (*(long *)(*(long *)(lVar5 + 0x38) + (ulong)uVar6 * 8) == 0) {
    return;
  }
  FUN_03befc90();
  puVar2 = puVar9 + (ulong)*param_1 * 2;
  if (1 < *param_1) {
    puVar2 = puVar9;
  }
  uVar6 = param_4;
  if (*(uint *)(*(long *)puVar2 + 0x30) <= param_4) {
    uVar6 = 0;
  }
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0x38) + (ulong)uVar6 * 8);
  lVar5 = *(long *)(lVar7 + 0x30);
  if (lVar5 == 0) {
LAB_03bf2344:
    uVar6 = 1 << (ulong)(param_4 & 0x1f);
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x30) + 0x18);
    plVar1 = (long *)(lVar7 + 0x18);
    uVar6 = *(uint *)(lVar7 + 0x10);
    plVar3 = plVar1 + uVar6;
    if (1 < uVar6) {
      plVar3 = plVar1;
    }
    uVar8 = (lVar5 - *(long *)(*plVar3 + 0x40) >> 2) * -0x5555555555555555;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < 0) goto LAB_03bf2344;
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + -0x14) + 0x18) + 0x18);
    uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + -0x14) + 0x18) + 0x10);
    plVar3 = plVar1 + uVar4;
    if (1 < uVar4) {
      plVar3 = plVar1;
    }
    uVar8 = uVar8 & 0xffffffff;
    if (*(uint *)(*plVar3 + 0x88) <= uVar6) {
      uVar8 = 0;
    }
    uVar6 = 1 << (ulong)(param_4 & 0x1f);
    if (*(char *)(*(long *)(*plVar3 + 0x90) + uVar8) != '\0') {
      uVar6 = param_1[6] | uVar6;
      goto LAB_03bf2354;
    }
  }
  uVar6 = param_1[6] & (uVar6 ^ 0xffffffff);
LAB_03bf2354:
  param_1[6] = uVar6;
  return;
}

