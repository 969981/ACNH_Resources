
undefined4 FUN_00360d70(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)uVar1;
  if (((int)param_2 < 5) && ((uVar1 >> 0x10 & 1) != 0)) {
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              (((ulong)uVar1 & 3) * 0x10 + (uVar3 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
              ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
              (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 +
              (ulong)(param_2 % 5) * 4 + 4);
  }
  else {
    if (4 < (int)param_2) {
      return 0xffffffff;
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              ((uVar3 & 3) * 0x10 + (uVar3 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
              ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
              (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
              ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
              (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 +
              (ulong)(param_2 % 5) * 4 + 0x60);
  }
  return *puVar2;
}

