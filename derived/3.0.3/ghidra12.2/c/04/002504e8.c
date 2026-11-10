
void FUN_002504e8(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_24 = 0x10c0c;
  }
  else {
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00250518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x18) + 200))(param_1);
      return;
    }
    local_24 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

