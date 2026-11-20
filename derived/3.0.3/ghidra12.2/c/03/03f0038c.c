
void FUN_03f0038c(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *local_448;
  undefined1 *puStack_440;
  undefined4 local_438;
  undefined1 local_434 [1023];
  undefined1 local_35;
  
  FUN_03f00480(param_2,0);
  if (param_4 == 0) {
    FUN_03f01a50(param_1,param_2,0,0);
    param_4 = 0;
  }
  else {
    FUN_03f018a0(param_2,param_4);
    FUN_03f01a50(param_1,param_2,0,param_4);
  }
  local_35 = 0;
  local_434[0] = 0;
  local_438 = 0x400;
  puStack_440 = local_434;
  local_448 = PTR_DAT_04bb2f40 + 0x10;
  FUN_03f02c00(param_1,param_2,&local_448,0,param_4);
  return;
}

