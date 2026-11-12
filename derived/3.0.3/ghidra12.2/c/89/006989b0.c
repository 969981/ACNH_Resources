
void FUN_006989b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0x288);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_0069cb00();
  FUN_0069c3cc(lVar1,param_3);
  FUN_00692640(lVar1,param_4);
  FUN_0069cb3c(lVar1,param_2);
  FUN_00691e00(lVar1,param_1);
  return;
}

