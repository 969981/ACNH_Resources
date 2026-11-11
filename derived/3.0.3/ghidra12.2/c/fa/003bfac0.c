
long FUN_003bfac0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_003cc20c();
  lVar1 = FUN_003cc554();
  if (lVar1 == 0) {
    uVar2 = FUN_003baea4();
    FUN_003b8220(uVar2,0,0,0);
    return 0;
  }
  *(undefined1 *)(lVar1 + 0xc2) = 1;
  uVar2 = FUN_003cb1d8();
  lVar3 = FUN_003cb460(uVar2,param_1,param_2,PTR_FUN_04bd0528,lVar1);
  if (lVar3 == 0) {
    uVar2 = FUN_003cc20c();
    FUN_003cc49c(uVar2,lVar1);
    return 0;
  }
  *(long *)(lVar1 + 400) = lVar3;
  FUN_003bee98(lVar1,param_3,param_4);
  return lVar1;
}

