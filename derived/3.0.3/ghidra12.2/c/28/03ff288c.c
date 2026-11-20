
void FUN_03ff288c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0x978);
  lVar1 = (long)iVar5 + 1;
  iVar2 = *(int *)(param_1 + 0x330);
  iVar7 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar7;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar6 = iVar7 - *(int *)(param_1 + 0x340);
  if (uVar6 < 0x200) {
    uVar6 = 1 << (ulong)(uVar6 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar6) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar6;
      iVar7 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x788);
    }
    *(int *)(param_1 + 0x790) = *(int *)(param_1 + 0x790) - iVar7;
    iVar8 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar8 = *(int *)(param_1 + 0x794);
      iVar9 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar9 = *(int *)(param_1 + 0x790);
      iVar8 = 0;
    }
    iVar7 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x790) = iVar9 - iVar7;
  }
  iVar2 = iVar2 << 1;
  *(int *)(param_1 + 0x338) = iVar2;
  iVar9 = *(int *)(param_1 + 0x780) - iVar7;
  *(int *)(param_1 + 0x780) = iVar9;
  if (0 < iVar8 - iVar7) {
    *(int *)(param_1 + 0x780) = iVar9 - (iVar8 - iVar7);
  }
  *(undefined4 *)(param_1 + 0x794) = 0;
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x348) + (long)iVar2);
  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x348) + ((long)iVar2 | 1U));
  *(int *)(param_1 + 0x978) = iVar5 + 2;
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(uint *)(param_1 + 0x940) = (uint)CONCAT11(uVar4,uVar3);
  return;
}

