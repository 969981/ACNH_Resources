
void FUN_00697c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0x280);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_006a22c8();
  FUN_0069c3cc(lVar1,param_5);
  FUN_00692640(lVar1,param_6);
  FUN_006a2314(lVar1,param_2,param_3,param_4,"receive");
  FUN_00691e00(lVar1,param_1);
  return;
}

