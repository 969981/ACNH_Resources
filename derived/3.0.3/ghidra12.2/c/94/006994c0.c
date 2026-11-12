
void FUN_006994c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0x2c8);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_0069eb60();
  FUN_0069c3cc(lVar1,param_11);
  FUN_00692640(lVar1,param_12);
  FUN_0069ebcc(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  FUN_00691e00(lVar1,param_1);
  return;
}

