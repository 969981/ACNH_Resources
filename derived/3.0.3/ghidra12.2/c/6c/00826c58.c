
void FUN_00826c58(long param_1)

{
  int iVar1;
  undefined *local_48 [4];
  int local_24;
  byte local_8 [4];
  int local_4;
  
  *(uint *)(param_1 + 0x50) = *(byte *)(param_1 + 0x160) + 1 & 0xff;
  local_48[0] = (undefined *)CONCAT44(local_48[0]._4_4_,1);
  FUN_03ebb160(param_1 + 8,1);
  local_8[0] = *(byte *)(param_1 + 0x158);
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
  FUN_025e3ff4(local_48,local_8);
  FUN_02602bc0(local_48,1);
  local_48[0] = PTR_DAT_04bc3478 + 0x10;
  iVar1 = FUN_025e4320(local_48);
  if (iVar1 != -1) {
    local_4 = (**(code **)(local_48[0] + 0x20))(local_48);
    if (local_4 < 0xd) goto LAB_00826d0c;
  }
  if (local_24 == 0) {
    local_24 = 1;
  }
LAB_00826d0c:
  FUN_02601530(local_48);
  return;
}

