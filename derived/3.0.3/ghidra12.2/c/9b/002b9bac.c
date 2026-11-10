
void FUN_002b9bac(long param_1)

{
  long *plVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  FUN_002ab5a0(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_002baf14();
  }
  FUN_002ab210(param_1 + 0x10);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_002ba8a0();
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_002b7b7c();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_002a8a9c();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_002a8a9c();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_002a8a9c();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_002a8a9c();
  }
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_00229780(param_1 + 0xe4,&local_30);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  return;
}

