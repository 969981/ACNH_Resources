
long FUN_003b49b8(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar1 = 0;
  if ((uVar2 & 1) != 0) {
    lVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    lVar1 = lVar1 + 0xc;
  }
  if ((uVar2 & 4) != 0) {
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}

