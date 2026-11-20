
void FUN_03ff51c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar6 = *(int *)(param_1 + 0x978);
  lVar2 = (long)iVar6 + 1;
  uVar7 = *(uint *)(param_1 + 0x330);
  iVar12 = (int)lVar2;
  *(int *)(param_1 + 0x978) = iVar12;
  bVar3 = *(byte *)(*(long *)(param_1 + 0x770) + lVar2);
  uVar14 = iVar12 - *(int *)(param_1 + 0x340);
  *(uint *)(param_1 + 0x330) = (uint)bVar3;
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
    iVar16 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar16 = *(int *)(param_1 + 0x794);
      iVar13 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar13 = *(int *)(param_1 + 0x790);
      iVar16 = 0;
    }
    iVar12 = *(int *)(param_1 + 0x78c);
    uVar14 = iVar13 - iVar12;
  }
  *(uint *)(param_1 + 0x790) = uVar14;
  uVar15 = iVar16 - iVar12;
  *(uint *)(param_1 + 0x794) = uVar15;
  iVar12 = *(int *)(param_1 + 0x780) - iVar12;
  lVar2 = (long)iVar6 + 2;
  *(int *)(param_1 + 0x780) = iVar12;
  iVar16 = (int)lVar2;
  *(int *)(param_1 + 0x978) = iVar16;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar2);
  uVar8 = iVar16 - *(int *)(param_1 + 0x340);
  if (uVar8 < 0x200) {
    uVar8 = 1 << (ulong)(uVar8 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar8) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar8;
      iVar16 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar16 = *(int *)(param_1 + 0x788);
    }
  }
  else {
    bVar10 = 0x5f < *(byte *)(param_1 + 100);
    iVar16 = *(int *)(param_1 + 0x78c);
    uVar8 = uVar14;
    if (bVar10) {
      uVar8 = uVar15;
    }
    uVar9 = 0;
    if (bVar10) {
      uVar15 = 0;
      uVar9 = uVar14;
    }
    uVar14 = uVar9;
    iVar12 = iVar12 - (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
  }
  uVar1 = (ulong)bVar3 << 8;
  uVar11 = (long)(int)uVar7 | uVar1;
  *(uint *)(param_1 + 0x790) = uVar14 - iVar16;
  *(int *)(param_1 + 0x780) = iVar12 - iVar16;
  *(int *)(param_1 + 0x338) = (int)uVar11;
  if (0 < (int)(uVar15 - iVar16)) {
    *(uint *)(param_1 + 0x780) = (iVar12 - iVar16) - (uVar15 - iVar16);
  }
  *(undefined4 *)(param_1 + 0x794) = 0;
  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x348) + uVar11);
  uVar5 = *(undefined1 *)(*(long *)(param_1 + 0x348) + ((long)(int)(uVar7 | (uint)uVar1) ^ 1U));
  *(int *)(param_1 + 0x978) = iVar6 + 3;
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(uint *)(param_1 + 0x974) = (uint)CONCAT11(uVar5,uVar4);
  *(undefined1 *)(param_1 + 0x778) = *(undefined1 *)(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x78c);
  return;
}

