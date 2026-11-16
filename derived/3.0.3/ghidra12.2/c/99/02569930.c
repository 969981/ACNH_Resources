
bool FUN_02569930(long param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return false;
  }
  uVar2 = FUN_02569820();
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    bVar1 = true;
    do {
      if ((uVar3 < 0x37) &&
         ((*(uint *)(param_1 + 0x10 + (long)((int)uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) !=
          0)) {
        return bVar1;
      }
      bVar1 = uVar3 < 0x36;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x37);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

