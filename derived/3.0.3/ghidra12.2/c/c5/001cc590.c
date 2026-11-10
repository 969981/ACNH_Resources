
void FUN_001cc590(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(long *)(param_2 + 0x1d0) - *(long *)(param_3 + 0x1d0);
  if (uVar4 < 0xea61) {
    iVar3 = (int)uVar4;
    if (*(char *)(param_1 + 0x134) == '\0') {
      iVar2 = iVar3 - (*(uint *)(param_1 + 0x128) >> 3);
      uVar5 = iVar2 + *(uint *)(param_1 + 0x128);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(uint *)(param_1 + 0x128) = uVar5;
      uVar6 = (*(uint *)(param_1 + 300) - (*(uint *)(param_1 + 300) >> 2)) + iVar1;
    }
    else {
      uVar5 = iVar3 << 3;
      *(undefined1 *)(param_1 + 0x134) = 0;
      uVar6 = iVar3 << 1;
      *(uint *)(param_1 + 0x128) = uVar5;
    }
    *(uint *)(param_1 + 300) = uVar6;
    *(int *)(param_1 + 0x130) = iVar3;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x128);
    uVar6 = *(uint *)(param_1 + 300);
  }
  uVar6 = uVar6 & 0xfffffffc;
  if (uVar6 < 0x22) {
    uVar6 = 0x21;
  }
  uVar6 = uVar6 + (uVar5 >> 3);
  if (*(uint *)(param_1 + 0x498) < uVar6) {
    *(uint *)(param_1 + 0x498) = uVar6;
    uVar5 = *(uint *)(param_1 + 0x49c);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x49c);
  }
  if (uVar6 < uVar5) {
    *(uint *)(param_1 + 0x49c) = uVar6;
    return;
  }
  return;
}

