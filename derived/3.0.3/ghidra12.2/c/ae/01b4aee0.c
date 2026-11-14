
long FUN_01b4aee0(byte *param_1)

{
  long lVar1;
  long lVar2;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar1 = FUN_025830c0(DAT_055021a0,local_14,1);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x194b0;
    if (*(long *)(lVar1 + 0x194b8) == 0) {
      lVar2 = *(long *)(DAT_05574040 + 0x20);
    }
    lVar2 = lVar2 + 0x8420;
  }
  return lVar2;
}

