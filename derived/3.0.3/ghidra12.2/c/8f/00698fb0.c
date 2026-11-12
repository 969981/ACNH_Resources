
void FUN_00698fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0x2b0);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_006aa818();
  FUN_0069c3cc(lVar1,param_10);
  FUN_00692640(lVar1,param_11);
  FUN_006aa878(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,&DAT_04148a40,param_8,param_9);
  FUN_00691e00(lVar1,param_1);
  return;
}

