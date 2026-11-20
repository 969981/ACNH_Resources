
void FUN_03ff3f08(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  iVar5 = *(int *)(param_1 + 0x978);
  lVar1 = (long)iVar5 + 1;
  iVar9 = *(int *)(param_1 + 0x330);
  iVar11 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar11;
  bVar2 = *(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar13 = iVar11 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)bVar2;
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
    iVar15 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar15 = *(int *)(param_1 + 0x794);
      iVar12 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar12 = *(int *)(param_1 + 0x790);
      iVar15 = 0;
    }
    iVar11 = *(int *)(param_1 + 0x78c);
    uVar13 = iVar12 - iVar11;
  }
  *(uint *)(param_1 + 0x790) = uVar13;
  uVar14 = iVar15 - iVar11;
  *(uint *)(param_1 + 0x794) = uVar14;
  iVar11 = *(int *)(param_1 + 0x780) - iVar11;
  lVar1 = (long)iVar5 + 2;
  *(int *)(param_1 + 0x780) = iVar11;
  iVar15 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar15;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar6 = iVar15 - *(int *)(param_1 + 0x340);
  if (uVar6 < 0x200) {
    uVar6 = 1 << (ulong)(uVar6 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar6) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar6;
      iVar15 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x788);
    }
  }
  else {
    bVar8 = 0x5f < *(byte *)(param_1 + 100);
    iVar15 = *(int *)(param_1 + 0x78c);
    uVar6 = uVar13;
    if (bVar8) {
      uVar6 = uVar14;
    }
    uVar7 = 0;
    if (bVar8) {
      uVar14 = 0;
      uVar7 = uVar13;
    }
    uVar13 = uVar7;
    iVar11 = iVar11 - (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
  }
  uVar10 = (long)iVar9 | (ulong)bVar2 << 8;
  *(uint *)(param_1 + 0x790) = uVar13 - iVar15;
  *(int *)(param_1 + 0x780) = iVar11 - iVar15;
  iVar9 = (int)uVar10;
  *(int *)(param_1 + 0x338) = iVar9;
  if (0 < (int)(uVar14 - iVar15)) {
    *(uint *)(param_1 + 0x780) = (iVar11 - iVar15) - (uVar14 - iVar15);
  }
  *(undefined4 *)(param_1 + 0x794) = 0;
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x348) + uVar10);
  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x348) + ((long)iVar9 ^ 1U));
  *(int *)(param_1 + 0x978) = iVar5 + 3;
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(uint *)(param_1 + 0x948) = (uint)CONCAT11(uVar4,uVar3);
  return;
}

