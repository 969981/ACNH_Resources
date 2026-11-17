
void FUN_030c3694(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_50;
  undefined4 local_48;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_48 = 0x1f;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 6,plVar2[1],0,0);
    plVar2 = (long *)*param_1;
    local_48 = 0x1f;
    local_50 = puVar1;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 1,plVar2[1],0,0);
    if (param_1[2] != -1) {
      plVar2 = (long *)*param_1;
      local_48 = 0x1f;
      local_50 = puVar1;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x208))(plVar2[1],0,0,param_1 + 1);
    }
  }
  return;
}

