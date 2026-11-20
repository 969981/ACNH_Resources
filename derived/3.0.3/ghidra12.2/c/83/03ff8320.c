
void FUN_03ff8320(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  iVar9 = *(int *)(param_1 + 0x978);
  lVar1 = (long)iVar9 + 1;
  iVar4 = *(int *)(param_1 + 0x330);
  iVar11 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar11;
  bVar3 = *(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar13 = iVar11 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)bVar3;
  if (uVar13 < 0x200) {
    uVar13 = 1 << (ulong)(uVar13 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar13) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar13;
      iVar11 = *(int *)(param_1 + 0x78c) * 0x10;
      uVar13 = *(int *)(param_1 + 0x790) + *(int *)(param_1 + 0x78c) * -0x10;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x788);
      uVar13 = *(int *)(param_1 + 0x790) - iVar11;
    }
    iVar14 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar14 = *(int *)(param_1 + 0x794);
      iVar12 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar12 = *(int *)(param_1 + 0x790);
      iVar14 = 0;
    }
    iVar11 = *(int *)(param_1 + 0x78c);
    uVar13 = iVar12 - iVar11;
  }
  *(uint *)(param_1 + 0x790) = uVar13;
  uVar5 = iVar14 - iVar11;
  lVar1 = (long)iVar9 + 2;
  *(uint *)(param_1 + 0x794) = uVar5;
  iVar9 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar9;
  iVar11 = *(int *)(param_1 + 0x780) - iVar11;
  *(int *)(param_1 + 0x780) = iVar11;
  uVar6 = iVar9 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  if (uVar6 < 0x200) {
    uVar6 = 1 << (ulong)(uVar6 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar6) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar6;
      iVar9 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x788);
    }
    *(uint *)(param_1 + 0x790) = uVar13 - iVar9;
    iVar14 = uVar5 - iVar9;
  }
  else {
    bVar8 = 0x5f < *(byte *)(param_1 + 100);
    iVar9 = *(int *)(param_1 + 0x78c);
    uVar6 = uVar13;
    if (bVar8) {
      uVar6 = uVar5;
    }
    uVar7 = 0;
    if (bVar8) {
      uVar5 = 0;
      uVar7 = uVar13;
    }
    *(uint *)(param_1 + 0x790) = uVar7 - iVar9;
    iVar11 = iVar11 - (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
    iVar14 = uVar5 - iVar9;
  }
  uVar10 = (long)iVar4 | (ulong)bVar3 << 8;
  uVar2 = *(undefined4 *)(param_1 + 0x96c);
  *(int *)(param_1 + 0x780) = iVar11 - iVar9;
  *(int *)(param_1 + 0x794) = iVar14;
  iVar9 = (int)uVar10;
  *(int *)(param_1 + 0x338) = iVar9;
  *(char *)(*(long *)(param_1 + 0x348) + uVar10) = (char)uVar2;
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(char *)(*(long *)(param_1 + 0x348) + ((long)iVar9 ^ 1U)) = (char)((uint)uVar2 >> 8);
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + 1;
  return;
}

