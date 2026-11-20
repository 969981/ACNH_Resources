
void FUN_03ff6758(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = (long)*(int *)(param_1 + 0x978) + 1;
  iVar2 = *(int *)(param_1 + 0x330);
  iVar5 = (int)lVar1;
  *(int *)(param_1 + 0x978) = iVar5;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar4 = iVar5 - *(int *)(param_1 + 0x340);
  if (uVar4 < 0x200) {
    uVar4 = 1 << (ulong)(uVar4 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar4) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar4;
      iVar5 = *(int *)(param_1 + 0x790);
      iVar6 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x788);
      iVar5 = *(int *)(param_1 + 0x790);
    }
    *(int *)(param_1 + 0x790) = iVar5 - iVar6;
    iVar5 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar5 = *(int *)(param_1 + 0x794);
      iVar7 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar7 = *(int *)(param_1 + 0x790);
      iVar5 = 0;
    }
    iVar6 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x790) = iVar7 - iVar6;
  }
  *(int *)(param_1 + 0x794) = iVar5 - iVar6;
  *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - iVar6;
  iVar2 = iVar2 << 1;
  uVar3 = *(undefined4 *)(param_1 + 0x970);
  *(int *)(param_1 + 0x338) = iVar2;
  *(char *)(*(long *)(param_1 + 0x348) + (long)iVar2) = (char)uVar3;
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(char *)(*(long *)(param_1 + 0x348) + ((long)iVar2 | 1U)) = (char)((uint)uVar3 >> 8);
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + 1;
  return;
}

