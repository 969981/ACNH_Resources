
long FUN_002b9d70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x28,uVar1);
  if (lVar2 != 0) {
    FUN_002b7850(lVar2,param_1,param_2,param_3,param_4,param_5,param_6 & 1);
  }
  return lVar2;
}

