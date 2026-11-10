
void FUN_002bdc98(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == (void *)0x0) {
    local_24 = 0x10c07;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x234);
    if (uVar1 == 0) {
      local_24 = 0x10c08;
    }
    else if (param_4 < uVar1) {
      local_24 = 0x10c04;
    }
    else {
      memcpy(param_3,(void *)(param_2 + 0x34),(ulong)uVar1);
      local_24 = 0;
    }
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

