
bool FUN_0037e4dc(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return false;
  }
  lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar2 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  return *(long *)(*(long *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                                              (ulong)*(byte *)(lVar1 + (ulong)(*(int
                                                                                                 *)(
                                                  lVar1 + (ulong)uVar2 + 4) + uVar2) + 0xc) * 4) +
                                            uVar2) + 8) + 8) != 0;
}

