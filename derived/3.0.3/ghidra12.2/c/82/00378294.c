
int FUN_00378294(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x14) & 3;
  uVar2 = *(uint *)(param_1 + 0x14) >> 4 & 3;
  if (uVar4 <= uVar2) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18) +
            ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
            ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14;
    uVar4 = (uint)*(byte *)(lVar1 + 1);
    if ((uVar4 != 6 && 1 < uVar4 - 3) && (uVar4 == 6 || uVar4 - 3 != 2)) {
      iVar3 = 0;
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      iVar3 = 1;
    }
    if (uVar2 != 1) {
      if (*(byte *)(lVar1 + 0x11) == 6 || *(byte *)(lVar1 + 0x11) - 3 < 3) {
        if (param_2 == 1) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      }
      if (uVar2 != 2) {
        if (2 < *(byte *)(lVar1 + 0x21) - 3 && *(byte *)(lVar1 + 0x21) != 6 || param_2 != 2) {
          iVar3 = 0;
        }
        return iVar3;
      }
    }
  }
  return 0;
}

