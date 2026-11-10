
void FUN_002aa97c(undefined8 param_1,long param_2,char param_3)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == -3) {
    local_24 = 0x10c07;
  }
  else {
    if (*(char *)(param_2 + 0x3c) != param_3) {
      *(char *)(param_2 + 0x3c) = param_3;
    }
    *(undefined1 *)(param_2 + 0x4c) = 0;
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

