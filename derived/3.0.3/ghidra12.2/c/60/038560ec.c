
void FUN_038560ec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x50))();
  plVar2 = param_1 + 0x17;
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (((uVar1 & 1) != 0) && ((char)param_1[0x2f] != '\0')) {
    (**(code **)*plVar2)(plVar2,param_2);
  }
  plVar2 = param_1 + 0x1b;
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (((uVar1 & 1) != 0) && (*(char *)((long)param_1 + 0x179) != '\0')) {
    (**(code **)*plVar2)(plVar2,param_2);
  }
  plVar2 = param_1 + 0x1f;
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (((uVar1 & 1) != 0) && (*(char *)((long)param_1 + 0x17a) != '\0')) {
    (**(code **)*plVar2)(plVar2,param_2);
  }
  plVar2 = param_1 + 0x23;
  uVar1 = (**(code **)(param_1[0x23] + 0x10))(plVar2);
  if (((uVar1 & 1) == 0) || (*(char *)((long)param_1 + 0x17b) == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038561e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar2)(plVar2,param_2);
  return;
}

