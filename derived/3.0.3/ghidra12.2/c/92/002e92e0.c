
void FUN_002e92e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  int local_50;
  ErrorResultVariant aEStack_4c [24];
  undefined4 local_34;
  
  if (param_3 == (long *)0x0) {
    local_50 = 0x10c07;
    goto LAB_002e93b8;
  }
  (**(code **)(*param_3 + 0x40))(&local_50,param_3);
  puVar1 = &LAB_01c68ad4;
  if (local_50 < 0) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 == (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0x40))(&local_50,param_3);
    if (local_50 == -0x7ffcff2e) {
      local_50 = 0xc406;
      goto LAB_002e93b8;
    }
    (**(code **)(*param_3 + 0x40))(&local_50,param_3);
    if (local_50 == -0x7ffcff1e) {
      local_50 = 0xa471;
      goto LAB_002e93b8;
    }
    (**(code **)(*param_3 + 0x40))(&local_50,param_3);
    if (local_50 == -0x7ffaffff) {
      local_50 = 0xc406;
      goto LAB_002e93b8;
    }
  }
  local_50 = 0;
LAB_002e93b8:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

