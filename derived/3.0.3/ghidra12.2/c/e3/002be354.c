
byte FUN_002be354(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x63a) >> 7;
  }
  return bVar1;
}

