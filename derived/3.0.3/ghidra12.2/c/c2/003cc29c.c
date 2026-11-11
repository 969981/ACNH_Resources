
long FUN_003cc29c(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_003c0150(param_3);
  lVar1 = 0x400;
  if (lVar2 != 0) {
    lVar1 = (lVar2 + 3U & 0xfffffffffffffffc) + 0x418;
  }
  return lVar1 * param_2 + 0x70;
}

