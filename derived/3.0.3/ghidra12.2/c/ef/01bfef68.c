
void FUN_01bfef68(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x21b0);
  if (iVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x210);
    if ((((*(int *)(lVar3 + 0x28) == 2) &&
         ((((*(int *)(lVar3 + 0x2c) != 0 ||
            (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x218),
            (*(int *)(lVar4 + 0x1f0) != 7 && *(int *)(lVar4 + 500) != 7) &&
            *(int *)(lVar4 + 0x1b0) != 7)) && (*(undefined4 *)(param_1 + 0x21b0) = 0, param_2 < 6))
          && ((*(int *)(lVar3 + 0x28) == 2 && (*(int *)(lVar3 + 0x2c) == 0)))))) &&
        (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x218), *(int *)(lVar4 + 0x1b0) == 3)) &&
       (*(int *)(lVar4 + 0x314) != param_2)) {
      *(int *)(lVar4 + 0x310) = *(int *)(lVar4 + 0x314);
      *(int *)(lVar4 + 0x314) = param_2;
      if (*(int *)(lVar4 + 0x1f0 + (ulong)*(byte *)(lVar4 + 0x200) * 4) == -1) {
        *(undefined4 *)(lVar4 + 0x1f0 + (ulong)*(byte *)(lVar4 + 0x200) * 4) = 7;
      }
      *(int *)(lVar3 + 0x34) = param_2;
    }
    uVar2 = *(uint *)(param_1 + 0x1e8);
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x21b0) = 0xffffffff;
      return;
    }
    *(int *)(param_1 + 0x21b0) = iVar1 + -1;
    uVar2 = *(uint *)(param_1 + 0x1e8);
  }
  if ((uVar2 < 10) && (lVar3 = *(long *)(param_1 + (ulong)uVar2 * 0x30 + 8), lVar3 != 0)) {
    *(long *)(param_1 + 0x1f0) = lVar3;
  }
  *(undefined4 *)(param_1 + 0x21ac) = 5;
  return;
}

