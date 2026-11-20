
void FUN_03ff6a20(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = (long)*(int *)(param_1 + 0x978) + 1;
  iVar2 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x978) = (int)lVar1;
  *(uint *)(param_1 + 0x330) = (uint)*(byte *)(*(long *)(param_1 + 0x770) + lVar1);
  uVar3 = (int)lVar1 - *(int *)(param_1 + 0x340);
  if (uVar3 < 0x200) {
    uVar3 = 1 << (ulong)(uVar3 >> 4 & 0x1f);
    if ((*(uint *)(param_1 + 0x344) & uVar3) == 0) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | uVar3;
      iVar5 = *(int *)(param_1 + 0x790);
      iVar4 = *(int *)(param_1 + 0x78c) << 4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x788);
      iVar5 = *(int *)(param_1 + 0x790);
    }
    *(int *)(param_1 + 0x790) = iVar5 - iVar4;
    iVar5 = *(int *)(param_1 + 0x794);
  }
  else {
    if (*(byte *)(param_1 + 100) < 0x60) {
      if (0 < *(int *)(param_1 + 0x790)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x790);
      }
      iVar5 = *(int *)(param_1 + 0x794);
      iVar6 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x794)) {
        *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
      }
      iVar6 = *(int *)(param_1 + 0x790);
      iVar5 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x790) = iVar6 - iVar4;
  }
  iVar2 = iVar2 << 1;
  *(int *)(param_1 + 0x794) = iVar5 - iVar4;
  *(int *)(param_1 + 0x338) = iVar2;
  *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - iVar4;
  *(char *)(*(long *)(param_1 + 0x348) + (long)iVar2) = (char)lVar1;
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(char *)(*(long *)(param_1 + 0x348) + ((long)iVar2 | 1U)) = (char)((ulong)lVar1 >> 8);
  if (0 < *(int *)(param_1 + 0x794)) {
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0x794);
  }
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x78c);
  *(uint *)(param_1 + 0x938) = (uint)*(ushort *)(param_1 + 0x938);
  *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + 1;
  return;
}

