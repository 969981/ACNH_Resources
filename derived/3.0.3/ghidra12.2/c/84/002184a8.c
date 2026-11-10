
void FUN_002184a8(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(param_2 + 0x54) == '\0') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x70) = 0;
    *(undefined2 *)(param_2 + 0x54) = 1;
    local_24 = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else {
    local_24 = 0x10c02;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

