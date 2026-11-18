
void FUN_035a122c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_04b3e590;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x25] = PTR_DAT_04bb35a8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x2f]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x2f] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x2f] + 8))();
  }
  param_1[0x2f] = 0;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x24] = 0;
  param_1[0x1f] = puVar2 + 0x10;
  param_1[6] = PTR_DAT_04bb58c8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x1e]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x1e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  param_1[0x1e] = 0;
  return;
}

