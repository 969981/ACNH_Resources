
void FUN_034ba9b0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = DAT_04c4a540;
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x248) <= param_2) {
    uVar1 = 0;
  }
  if ((int)DAT_04c4a540 < 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x250);
  uVar3 = *(uint *)(lVar5 + (long)(int)uVar1 * 0x38 + 0x20);
  if ((int)uVar3 < 1) {
    return;
  }
  uVar7 = 0;
  while (*(uint *)(*(long *)(lVar5 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) != DAT_04c4a540) {
    uVar7 = uVar7 + 1;
    if (uVar3 == uVar7) {
      return;
    }
  }
  lVar5 = lVar5 + (long)(int)uVar1 * 0x38;
  if (*(uint *)(lVar5 + 0x10) <= (uint)uVar7) {
    uVar7 = 0;
  }
  uVar1 = *(uint *)(*(long *)(lVar5 + 0x18) + uVar7 * 0x30 + 0x28);
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (uVar1 < 0x10e) {
    lVar5 = param_1 + 0x2a8 + (ulong)uVar1 * 0x1a8;
    if (*(int *)(lVar5 + 0x1a0) != 0) {
      lVar6 = param_1 + 0x2a8 + (ulong)uVar1 * 0x1a8;
      **(undefined1 **)(lVar6 + 0x60) = 0;
      *(undefined1 *)(lVar6 + 0xf0) = 0;
      if (((*(int *)(lVar6 + 0x100) != 1) && ((*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar6 + 0x140) == -1)) {
        *(undefined4 *)(lVar6 + 0x140) = 1;
      }
      *(undefined4 *)(lVar5 + 0x1a0) = 0;
    }
  }
  if (uVar2 == 0xffffffff) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x250);
  if (*(uint *)(param_1 + 0x248) <= param_2) {
    param_2 = 0;
  }
  uVar1 = *(uint *)(lVar5 + (long)(int)param_2 * 0x38 + 0x20);
  if ((int)uVar1 < 1) {
    return;
  }
  uVar7 = 0;
  while (*(uint *)(*(long *)(lVar5 + (long)(int)param_2 * 0x38 + 0x28) + uVar7 * 4) != uVar2) {
    uVar7 = uVar7 + 1;
    if (uVar1 == uVar7) {
      return;
    }
  }
  lVar6 = *(long *)(lVar5 + (long)(int)param_2 * 0x38 + 8);
  if (*(uint *)(lVar6 + 0x2c8) <= uVar2) {
    uVar2 = 0;
  }
  if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar2 * 8) == 0) {
    return;
  }
  lVar5 = lVar5 + (long)(int)param_2 * 0x38;
  if (*(uint *)(lVar5 + 0x10) <= (uint)uVar7) {
    uVar7 = 0;
  }
  piVar4 = (int *)(*(long *)(lVar5 + 0x18) + uVar7 * 0x30 + 0x28);
  if (*piVar4 == -1) {
    return;
  }
  *piVar4 = -1;
  return;
}

