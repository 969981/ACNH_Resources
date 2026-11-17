
void FUN_02e3b3bc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte local_4 [4];
  
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0x60) != 1) {
      if (*(int *)(param_1 + 100) == 0x2c) {
        *(undefined1 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0xb;
      }
      FUN_03ebb160(param_1 + 8,0);
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x6c);
    if ((uVar1 < 8) && ((0xe1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(&DAT_040589a0 + (long)(int)uVar1 * 4);
      *(char *)(param_1 + 500) = (char)(0x100000101010101 >> (((ulong)uVar1 & 7) << 3));
    }
    local_4[0] = *(byte *)(param_1 + 0x50);
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    uVar2 = FUN_02658470(local_4);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    FUN_03ebb160(param_1 + 8,uVar3);
  }
  return;
}

