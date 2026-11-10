
void FUN_002ba14c(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_24 = 0x10c07;
  }
  else if (*(long *)(param_2 + 0x70) == 0) {
    local_24 = 0x10c08;
  }
  else {
    FUN_002b415c(param_3,*(long *)(param_2 + 0x70) + 8);
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

