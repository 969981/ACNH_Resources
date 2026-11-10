
void FUN_002444e0(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  byte bVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == (void *)0x0) {
    local_24 = 0x10c07;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0xa4);
    if (bVar1 == 0) {
      local_24 = 0x10c08;
    }
    else if (bVar1 < param_4 || bVar1 == param_4) {
      memcpy(param_3,(void *)(param_2 + 100),(ulong)bVar1);
      local_24 = 0;
    }
    else {
      local_24 = 0x10c04;
    }
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

