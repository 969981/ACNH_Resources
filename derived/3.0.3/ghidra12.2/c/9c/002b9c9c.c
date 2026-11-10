
void FUN_002b9c9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(char *)(param_2 + 0x5b) == '\0') {
    local_24 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
    return;
  }
  FUN_002b9bac();
  FUN_002b9888(param_1,param_2,param_3);
  return;
}

