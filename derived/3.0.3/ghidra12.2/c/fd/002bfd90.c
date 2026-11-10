
void FUN_002bfd90(undefined8 param_1,long param_2)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0xd8) == 1 && *(int *)(param_2 + 0xd0) == 5) {
    FUN_002210f0();
    if (*(int *)(param_2 + 0x108) == 1) {
      FUN_002210f0(param_2 + 0x108);
    }
    if (*(int *)(param_2 + 0x138) == 1) {
      FUN_002210f0(param_2 + 0x138);
    }
    local_30 = 0;
  }
  else {
    local_30 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

