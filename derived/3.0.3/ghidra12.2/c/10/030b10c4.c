
uint FUN_030b10c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *local_40;
  undefined4 local_38;
  
  plVar2 = (long *)(**(code **)*param_1)();
  local_40 = PTR_DAT_04bc0cb8 + 0x10;
  local_38 = 0xb;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  uVar3 = (**(code **)(plVar2[3] + 0xd0))(plVar2[1]);
  uVar1 = FUN_030b2720(*(undefined4 *)((long)param_1 + 0x4c),param_2,param_3,uVar3,
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)((long)param_1 + 100));
  return uVar1 & 1;
}

