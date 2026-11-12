
void FUN_006978b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0xf8);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_006a97a0();
  FUN_00692640(lVar1,param_8);
  FUN_006a97e4(lVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_00691e00(lVar1,param_1);
  return;
}

