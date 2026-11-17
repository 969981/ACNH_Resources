
void FUN_030df4f4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined *local_30;
  undefined4 local_28;
  
  if (((long *)param_1[0x36] != (long *)0x0) &&
     (uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x90))(), (uVar1 & 1) != 0)) {
    (**(code **)(*(long *)param_1[0x36] + 0x20))((long *)param_1[0x36],0);
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  plVar2 = (long *)param_1[0x38];
  if (plVar2 != (long *)0x0) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 6;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
    (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
  }
  FUN_030deeec(param_1);
  return;
}

