
void FUN_002502f8(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_24 = 0x10c0c;
  }
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_0025b394(param_1);
      return;
    }
    local_24 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

