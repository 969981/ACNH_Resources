
long FUN_0266aca0(byte *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0xa8;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar1 + 0x16228;
  }
  return lVar2;
}

