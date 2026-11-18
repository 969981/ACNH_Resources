
void FUN_032d033c(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (ulong)uVar1;
  if (((int)param_2 < 5) && ((uVar1 >> 0x10 & 1) != 0)) {
    if (param_2 < 5) {
      *(undefined4 *)
       (*(long *)(param_1 + 0x18) +
        (((ulong)uVar1 & 3) * 0x10 + (uVar2 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
        ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
        ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
        (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 + (ulong)param_2 * 4 + 4) =
           param_3;
      return;
    }
  }
  else if ((param_2 < 5) && ((uVar1 >> 0x11 & 1) != 0)) {
    *(undefined4 *)
     (*(long *)(param_1 + 0x18) +
      ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
      ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
      ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
      (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
      ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
      (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 + (ulong)param_2 * 4 + 0x60)
         = param_3;
  }
  return;
}

