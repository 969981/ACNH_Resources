
void FUN_03f164d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  if ((param_2 != (undefined8 *)0x0) && (uVar1 = *(uint *)(param_2 + 7), uVar1 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x1e4);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar1 / uVar2;
    }
    uVar4 = uVar1 - uVar4 * uVar2;
    uVar7 = (ulong)uVar4;
    lVar5 = *(long *)(param_1 + 0x1d8);
    uVar3 = *(uint *)(lVar5 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
    while (uVar3 != uVar1) {
      uVar4 = 0;
      if ((int)uVar7 + 1 < (int)uVar2) {
        uVar4 = (int)uVar7 + 1;
      }
      uVar7 = (ulong)uVar4;
      uVar3 = *(uint *)(lVar5 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x1c0) +
                     (long)*(int *)(lVar5 + (long)(int)uVar4 * 8 + 4) * 8);
    plVar6 = (long *)((long)*(int *)(lVar5 + 0x14) + (long)param_2);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    plVar6 = param_2 + 8;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 8) = param_2[9];
    }
    if ((long *)param_2[9] != (long *)0x0) {
      *(long *)param_2[9] = *plVar6;
    }
    *plVar6 = 0;
    param_2[9] = 0;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + -1;
    *param_2 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 **)(param_1 + 0x1a0) = param_2;
  }
  return;
}

