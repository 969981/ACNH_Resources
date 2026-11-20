
void FUN_03ff538c(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar11 = *(int *)(param_1 + 0x978);
  lVar1 = (long)iVar11 + 1;
  iVar9 = *(int *)(param_1 + 0x330);
  iVar12 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar12;
  bVar2 = *(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar14 = iVar12 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)bVar2;
  if (uVar14 < 0x200) {
    uVar14 = 1 << (ulong)(uVar14 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar14) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar14;
      iVar12 = *(int *)(param_1 + 0x78c) * 0x10;
      uVar14 = *(int *)(param_1 + 0x790) + *(int *)(param_1 + 0x78c) * -0x10;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x788);
      uVar14 = *(int *)(param_1 + 0x790) - iVar12;
    }
    iVar15 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar15 = *(int *)(param_1 + 0x794);
      iVar13 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar13 = *(int *)(param_1 + 0x790);
      iVar15 = 0;
    }
    iVar12 = *(int *)(param_1 + 0x78c);
    uVar14 = iVar13 - iVar12;
  }
  *(uint *)(param_1 + 0x790) = uVar14;
  uVar5 = iVar15 - iVar12;
  lVar1 = (long)iVar11 + 2;
  *(uint *)(param_1 + 0x794) = uVar5;
  iVar11 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar11;
  iVar12 = *(int *)(param_1 + 0x780) - iVar12;
  *(int *)(param_1 + 0x780) = iVar12;
  uVar6 = iVar11 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  if (uVar6 < 0x200) {
    uVar6 = 1 << (ulong)(uVar6 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar6) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar6;
      iVar11 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x788);
    }
    *(uint *)(param_1 + 0x790) = uVar14 - iVar11;
    iVar15 = uVar5 - iVar11;
  }
  else {
    bVar8 = 0x5f < *(byte *)(param_1 + 100);
    iVar11 = *(int *)(param_1 + 0x78c);
    uVar6 = uVar14;
    if (bVar8) {
      uVar6 = uVar5;
    }
    uVar7 = 0;
    if (bVar8) {
      uVar5 = 0;
      uVar7 = uVar14;
    }
    iVar12 = iVar12 - (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
    *(uint *)(param_1 + 0x790) = uVar7 - iVar11;
    iVar15 = uVar5 - iVar11;
  }
  uVar10 = (long)iVar9 | (ulong)bVar2 << 8;
  *(int *)(param_1 + 0x780) = iVar12 - iVar11;
  iVar9 = (int)uVar10;
  *(int *)(param_1 + 0x338) = iVar9;
  if (0 < iVar15) {
    *(int *)(param_1 + 0x780) = (iVar12 - iVar11) - iVar15;
  }
  *(undefined4 *)(param_1 + 0x794) = 0;
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x348) + uVar10);
  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x348) + ((long)iVar9 ^ 1U));
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(uint *)(param_1 + 0x978) = (uint)CONCAT11(uVar4,uVar3);
  return;
}

