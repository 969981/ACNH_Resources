
void FUN_002a12c0(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 0x50) == 0) {
    local_34 = 0x10c0c;
  }
  else {
    cVar1 = FUN_002aaa44();
    if (cVar1 == -3) {
      if ((param_3 & 0xff) <= (uint)*(byte *)(param_2 + 0x4e)) {
        *(undefined2 *)(param_2 + 0x58) = 0;
        FUN_002aa97c(param_1,param_2,param_3);
        return;
      }
      local_34 = 0x10c07;
    }
    else {
      local_34 = 0x10c08;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

