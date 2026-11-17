
void FUN_030be514(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined *local_30;
  undefined4 local_28;
  
  if ((param_1[6] == 0) &&
     (((long *)param_1[0x36] == (long *)0x0 ||
      (uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x90))(), (uVar1 & 1) == 0)))) {
    (**(code **)(*param_1 + 0xa8))(param_1);
  }
  if ((long *)param_1[0x36] == (long *)0x0) {
    lVar2 = 0x16;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x90))();
    lVar2 = 0x18;
    if ((uVar1 & 1) == 0) {
      lVar2 = 0x16;
    }
  }
  (**(code **)(*param_1 + lVar2 * 8))(param_1);
  plVar3 = (long *)param_1[0x44];
  if (plVar3 != (long *)0x0) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 6;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
    (**(code **)(plVar3[3] + 0x1b8))(plVar3[1]);
  }
  return;
}

