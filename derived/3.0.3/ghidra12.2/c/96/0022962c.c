
void FUN_0022962c(undefined8 param_1,int param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_2 - 0x1bU < 0xffffffe7) {
    local_24 = 0x10c07;
  }
  else {
    if ((0 < (int)DAT_04c60394) &&
       (*(int *)(PTR_DAT_04bcd058 + (ulong)(DAT_04c60394 - 1) * 4) == param_2)) {
      local_24 = 0;
      DAT_04c60394 = DAT_04c60394 - 1;
      goto LAB_00229698;
    }
    local_24 = 0x10c08;
  }
LAB_00229698:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

