
long FUN_0036ab80(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  while( true ) {
    if (lVar2 == param_1 + 0x48) {
      return 0;
    }
    uVar1 = FUN_003606c0(param_2,lVar2 + -0x28);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + -0xd8;
}

