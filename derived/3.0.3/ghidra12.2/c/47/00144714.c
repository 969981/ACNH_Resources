
undefined8 FUN_00144714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0015625c(&PTR_LAB_048364d8);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar1 = FUN_00146664(param_2);
    FUN_001562b8(lVar2,param_1,uVar1);
    FUN_001562d8(lVar2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}

