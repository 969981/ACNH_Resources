
uint FUN_01f7a770(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *puStack_20;
  uint local_18;
  uint uStack_14;
  
  local_18 = (uint)*param_2;
  uStack_14 = (uint)param_2[1];
  local_30 = 0;
  local_28 = 0;
  puStack_20 = &DAT_048f9750;
  if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) {
    FUN_0094924c(DAT_04cfae30 + 0x28,&puStack_20,(long)&local_28 + 4,&local_28,(long)&local_30 + 4,
                 &local_30);
    if ((local_28._4_4_ - 4U < 0x2a) &&
       ((0x32002000001U >> ((ulong)(local_28._4_4_ - 4U) & 0x3f) & 1) != 0)) {
      return 0;
    }
  }
  if ((0x29 < (int)local_28 - 4U) ||
     ((0x32002000001U >> ((ulong)((int)local_28 - 4U) & 0x3f) & 1) == 0)) {
    if ((0x29 < local_30._4_4_ - 4U) ||
       ((0x32002000001U >> ((ulong)(local_30._4_4_ - 4U) & 0x3f) & 1) == 0)) {
      uVar1 = (uint)(0xdffdfffffef >> (local_30 & 0x3f)) & 1;
      if (0x2d < (uint)local_30) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return 0;
}

