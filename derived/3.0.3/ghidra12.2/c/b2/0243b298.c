
undefined8 FUN_0243b298(long param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  
  uVar2 = FUN_02549590();
  if ((((uVar2 & 1) == 0) && (DAT_04cd19d8 != 0)) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar4 = *(byte *)(param_1 + 0x1ee8);
      bVar3 = *pbVar1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (bVar3 != bVar4) {
        return 0;
      }
    }
    if (((((DAT_054f5738 == 0) || (uVar2 = (ulong)*(byte *)(param_1 + 0x1ee8), 7 < uVar2)) ||
         (*(int *)(DAT_054f5738 + uVar2 * 8 + 0xf04) == 0)) &&
        ((uVar2 = FUN_0231b960(param_1), (uVar2 & 1) != 0 &&
         ((*(byte *)(param_1 + 0xf24) >> 1 & 1) != 0)))) &&
       (uVar2 = FUN_0243b3e0(param_2 & 1), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

