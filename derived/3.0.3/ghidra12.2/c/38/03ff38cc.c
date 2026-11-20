
void FUN_03ff38cc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = (long)*(int *)(param_1 + 0x978) + 1;
  iVar2 = *(int *)(param_1 + 0x330);
  iVar6 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar6;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar5 = iVar6 - *(int *)(param_1 + 0x340);
  if (uVar5 < 0x200) {
    uVar5 = 1 << (ulong)(uVar5 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar5) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar5;
      iVar6 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x788);
    }
    *(int *)(param_1 + 0x790) = *(int *)(param_1 + 0x790) - iVar6;
    iVar7 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar7 = *(int *)(param_1 + 0x794);
      iVar8 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar8 = *(int *)(param_1 + 0x790);
      iVar7 = 0;
    }
    iVar6 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x790) = iVar8 - iVar6;
  }
  iVar2 = iVar2 << 1;
  *(int *)(param_1 + 0x338) = iVar2;
  iVar8 = *(int *)(param_1 + 0x780) - iVar6;
  *(int *)(param_1 + 0x780) = iVar8;
  if (0 < iVar7 - iVar6) {
    *(int *)(param_1 + 0x780) = iVar8 - (iVar7 - iVar6);
  }
  *(undefined4 *)(param_1 + 0x794) = 0;
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x348) + (long)iVar2);
  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x348) + ((long)iVar2 | 1U));
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(uint *)(param_1 + 0x978) = (uint)CONCAT11(uVar4,uVar3);
  return;
}

