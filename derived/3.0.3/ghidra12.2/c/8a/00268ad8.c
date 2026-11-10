
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00268ad8(undefined8 param_1,undefined2 *param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (DAT_04c603c8 == 0) {
    _DAT_04be24ce = *param_2;
    local_24 = 0;
    DAT_04be24d0 = *(undefined1 *)(param_2 + 1);
  }
  else {
    local_24 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

