
undefined8 FUN_0015bb84(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = FUN_00143330(1,0x2a0);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_0015333c(lVar1 + 0x28,*param_1);
    *(long *)(lVar3 + 0x1e8) = lVar1;
    if (param_1[0x9c] + param_1[0xa0] == 0) {
      FUN_00159624(param_1);
    }
    FUN_001595ec(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}

