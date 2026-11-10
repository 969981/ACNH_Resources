
void FUN_00250190(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    local_24 = 0x10c08;
  }
  else {
    if ((*(char *)(param_2 + 8) == '\0') || (*(int *)(*(long *)(param_2 + 0x18) + 0x420) == 0)) {
      FUN_0025c3ec(param_1);
      return;
    }
    local_24 = 0x4c11;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

