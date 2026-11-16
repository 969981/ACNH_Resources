
long FUN_0266a690(byte *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  byte local_4 [4];
  
  local_4[0] = *param_1;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_4,1);
  lVar1 = lVar2 + (ulong)param_2 * 0x2450 + 0x3f00;
  if (lVar2 == 0 || 7 < param_2) {
    lVar1 = 0;
  }
  return lVar1;
}

