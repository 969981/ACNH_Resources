
uint FUN_0094b958(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 local_54 [48];
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  if (-1 < (int)*(uint *)(param_2 + 8)) {
    uVar1 = 0;
    if (-1 < (int)*(uint *)(param_2 + 0xc)) {
      lVar2 = *(long *)(param_1 + 0x68);
      if (*(uint *)(param_2 + 8) < *(uint *)(lVar2 + 0x38) &&
          *(uint *)(param_2 + 0xc) < *(uint *)(lVar2 + 0x3c)) {
        FUN_00962530(lVar2,param_2,local_54);
        uVar1 = (uint)local_24;
        if ((((uVar1 < 0x49) &&
             ((*(uint *)(param_3 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0))
            || ((uVar1 = (uint)local_23, uVar1 < 0x49 &&
                ((*(uint *)(param_3 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) !=
                 0)))) ||
           ((uVar1 = (uint)local_22, uVar1 < 0x49 &&
            ((*(uint *)(param_3 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)))
           ) {
          uVar1 = 1;
        }
        else {
          uVar1 = (uint)local_21;
          if (uVar1 < 0x49) {
            uVar1 = *(uint *)(param_3 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
          }
          else {
            uVar1 = 0;
          }
        }
      }
      return uVar1;
    }
  }
  return 0;
}

