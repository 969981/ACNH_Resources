
void FUN_00699bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_006916f0();
  lVar1 = FUN_00691700(0x88);
  if (lVar1 == 0) {
    FUN_00691594(param_1,0x6db);
    return;
  }
  FUN_006ae340();
  FUN_006ae378(lVar1,param_2,param_3);
  FUN_00691e00(lVar1,param_1);
  return;
}

