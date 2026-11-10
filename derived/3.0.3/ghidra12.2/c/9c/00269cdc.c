
void FUN_00269cdc(long param_1,int param_2)

{
  long *plVar1;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0xa0) != param_2) {
    *(int *)(param_1 + 0xa0) = param_2;
    plVar1 = *(long **)(param_1 + 0x110);
    if (plVar1 != (long *)0x0) {
      local_18 = 0;
      local_20 = 0x11;
      if (param_2 != 1) {
        local_20 = 0x12;
      }
      local_1c = 0xfd;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    }
  }
  return;
}

