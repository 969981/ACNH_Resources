
void FUN_03855fdc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x48))();
  if (*(char *)((long)param_1 + 0x172) != '\0') {
    plVar2 = param_1 + 7;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (((uVar1 & 1) != 0) && ((char)param_1[0x2f] != '\0')) {
      (**(code **)*plVar2)(plVar2,param_2);
    }
    plVar2 = param_1 + 0xb;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (((uVar1 & 1) != 0) && (*(char *)((long)param_1 + 0x179) != '\0')) {
      (**(code **)*plVar2)(plVar2,param_2);
    }
    plVar2 = param_1 + 0xf;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (((uVar1 & 1) != 0) && (*(char *)((long)param_1 + 0x17a) != '\0')) {
      (**(code **)*plVar2)(plVar2,param_2);
    }
    plVar2 = param_1 + 0x13;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (((uVar1 & 1) != 0) && (*(char *)((long)param_1 + 0x17b) != '\0')) {
      (**(code **)*plVar2)(plVar2,param_2);
    }
  }
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  return;
}

