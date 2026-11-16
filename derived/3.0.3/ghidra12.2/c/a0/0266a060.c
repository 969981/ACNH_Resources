
long FUN_0266a060(byte *param_1)

{
  long lVar1;
  long lVar2;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_14,1);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x1a78;
  }
  return lVar1;
}

