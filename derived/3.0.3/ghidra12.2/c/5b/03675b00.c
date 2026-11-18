
void FUN_03675b00(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(int *)(param_1 + 0x388) == 6) {
    FUN_03643fc0(param_1 + 0x13ef0,param_1 + 0x11450,*(undefined4 *)(param_1 + 0x13450),0,0);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x13450);
  if (*(int *)(*(long *)(param_1 + 0x11420) + 0x298) != 6 && uVar6 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    plVar2 = (long *)(param_1 + 0x139a0);
    do {
      uVar3 = *(uint *)(param_1 + 0x139b0);
      uVar4 = *(undefined2 *)(param_1 + 0x11450 + uVar7 * 2);
      *(uint *)(param_1 + 0x139b0) = uVar3 + 1 & 0xf;
      lVar1 = -0x80000000;
      if (0 < *plVar2) {
        lVar1 = *plVar2 + -0x80000000;
      }
      *plVar2 = lVar1;
      *(undefined2 *)(param_1 + (ulong)uVar3 * 2 + 0x13e00) = uVar4;
      if (lVar1 < 0) {
        iVar5 = FUN_03ffc238(plVar2);
        lVar1 = uVar8 * 2;
        if (iVar5 < -0x7fff) {
          iVar5 = -0x8000;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        *(short *)(param_1 + lVar1 + 0x12450) = (short)iVar5;
        uVar6 = (ulong)*(uint *)(param_1 + 0x13450);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  *(undefined4 *)(param_1 + 0x13450) = 0;
  return;
}

