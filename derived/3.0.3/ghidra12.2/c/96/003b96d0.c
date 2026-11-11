
uint FUN_003b96d0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return 0;
  }
  return ((uint *)(param_1 + 0x14))
         [((ulong)uVar1 & 1) + ((ulong)(uVar1 >> 1) & 1) +
          ((ulong)(uVar1 >> 2) & 1) + ((ulong)(uVar1 >> 3) & 1) +
          ((ulong)(uVar1 >> 4) & 1) + ((ulong)(uVar1 >> 5) & 1) + ((ulong)(uVar1 >> 6) & 1) +
          ((ulong)(uVar1 >> 7) & 1) + ((ulong)(uVar1 >> 8) & 1) + ((ulong)(uVar1 >> 9) & 1) +
          ((ulong)(uVar1 >> 10) & 1) +
          ((ulong)(uVar1 >> 0xb) & 1) + ((ulong)(uVar1 >> 0xc) & 1) + ((ulong)(uVar1 >> 0xd) & 1) +
          ((ulong)(uVar1 >> 0xe) & 1) + ((ulong)(uVar1 >> 0xf) & 1) + ((ulong)(uVar1 >> 0x10) & 1) +
          1] & 1;
}

