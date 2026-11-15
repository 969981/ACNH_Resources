
void FUN_0212944c(undefined8 param_1,undefined4 param_2,byte *param_3)

{
  byte local_28 [4];
  undefined4 local_24;
  
  local_28[0] = *param_3;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  local_24 = FUN_02582fe0(local_28);
  FUN_021294b0(param_1,param_2,&local_24);
  return;
}

