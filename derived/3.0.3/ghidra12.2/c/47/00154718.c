
undefined8 FUN_00154718(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_f0 [128];
  
  lVar1 = FUN_001462a8(param_2,auStack_f0 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_0014e000(*param_1,lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      return 0;
    }
    FUN_00143300(lVar1);
  }
  return 0x1b;
}

