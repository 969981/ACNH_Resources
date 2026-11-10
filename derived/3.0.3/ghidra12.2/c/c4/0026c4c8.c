
void FUN_0026c4c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  
  *(int *)(param_1 + 0xa4) = (int)param_2;
  if ((int)param_2 != 9) {
    FUN_0026c2a0(param_1,param_2,1);
    FUN_00269780(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    plVar1 = *(long **)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (plVar1 != (long *)0x0) {
      local_18 = 0;
      local_20 = 0x12;
      local_1c = 0xfd;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    }
  }
  return;
}

