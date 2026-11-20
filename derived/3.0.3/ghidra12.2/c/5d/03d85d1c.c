
bool FUN_03d85d1c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x280);
  if (*(char *)(lVar3 + 0x20) == '\0') {
    uVar2 = *(uint *)(lVar3 + 0x28);
    if (uVar2 < 9 && (1 << (ulong)(uVar2 & 0x1f) & 0x122U) != 0) {
      return true;
    }
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x28);
    uVar1 = *(uint *)(lVar3 + 0x24);
    if (*(char *)(lVar3 + 0x21) != '\0') {
      uVar1 = uVar2;
    }
    if ((uVar1 - 1 < 0xb) && ((0x491U >> (ulong)(uVar1 - 1 & 0x1f) & 1) != 0)) {
      return true;
    }
  }
  return *(char *)(lVar3 + 0x20) == '\0' && uVar2 == 0xb;
}

