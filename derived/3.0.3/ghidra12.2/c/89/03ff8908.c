
void FUN_03ff8908(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar7 = *(int *)(param_1 + 0x978);
  lVar1 = (long)iVar7 + 1;
  iVar3 = *(int *)(param_1 + 0x330);
  iVar9 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar9;
  bVar2 = *(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar11 = iVar9 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)bVar2;
  if (uVar11 < 0x200) {
    uVar11 = 1 << (ulong)(uVar11 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar11) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar11;
      iVar9 = *(int *)(param_1 + 0x78c) * 0x10;
      uVar11 = *(int *)(param_1 + 0x790) + *(int *)(param_1 + 0x78c) * -0x10;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x788);
      uVar11 = *(int *)(param_1 + 0x790) - iVar9;
    }
    iVar12 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar12 = *(int *)(param_1 + 0x794);
      iVar10 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar10 = *(int *)(param_1 + 0x790);
      iVar12 = 0;
    }
    iVar9 = *(int *)(param_1 + 0x78c);
    uVar11 = iVar10 - iVar9;
  }
  *(uint *)(param_1 + 0x790) = uVar11;
  uVar13 = iVar12 - iVar9;
  lVar1 = (long)iVar7 + 2;
  *(uint *)(param_1 + 0x794) = uVar13;
  *(int *)(param_1 + 0x978) = (int)lVar1;
  iVar9 = *(int *)(param_1 + 0x780) - iVar9;
  *(int *)(param_1 + 0x780) = iVar9;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar4 = (int)lVar1 - *(int *)(param_1 + 0x340);
  if (uVar4 < 0x200) {
    uVar4 = 1 << (ulong)(uVar4 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar4) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar4;
      iVar7 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x788);
    }
    *(uint *)(param_1 + 0x790) = uVar11 - iVar7;
  }
  else {
    bVar6 = 0x5f < *(byte *)(param_1 + 100);
    iVar7 = *(int *)(param_1 + 0x78c);
    uVar4 = uVar11;
    if (bVar6) {
      uVar4 = uVar13;
    }
    uVar5 = 0;
    if (bVar6) {
      uVar13 = 0;
      uVar5 = uVar11;
    }
    *(uint *)(param_1 + 0x790) = uVar5 - iVar7;
    iVar9 = iVar9 - (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
  }
  uVar8 = (long)iVar3 | (ulong)bVar2 << 8;
  *(uint *)(param_1 + 0x794) = uVar13 - iVar7;
  *(int *)(param_1 + 0x780) = iVar9 - iVar7;
  iVar7 = (int)uVar8;
  *(int *)(param_1 + 0x338) = iVar7;
  *(char *)(*(long *)(param_1 + 0x348) + uVar8) = (char)lVar1;
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(char *)(*(long *)(param_1 + 0x348) + ((long)iVar7 ^ 1U)) = (char)((ulong)lVar1 >> 8);
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + 1;
  return;
}

