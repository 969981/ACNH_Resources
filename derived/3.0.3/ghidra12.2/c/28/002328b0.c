
undefined8 FUN_002328b0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (1 < param_3) {
    param_3 = 2;
  }
  *(uint *)(param_1 + 0x16b8) = param_3;
  if (param_3 != 0) {
    uVar2 = 0;
    lVar1 = param_1 + 0x11e8;
    do {
      FUN_0024353c(lVar1,param_2);
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0x268;
      lVar1 = lVar1 + 0x268;
    } while (uVar2 < *(uint *)(param_1 + 0x16b8));
  }
  return 1;
}

