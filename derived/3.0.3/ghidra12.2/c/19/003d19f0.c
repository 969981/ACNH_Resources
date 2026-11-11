
ulong FUN_003d19f0(long param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  ulong param_6)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int local_28;
  int local_24;
  
  plVar3 = (long *)FUN_003b8a18(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10,0x200,0,0);
  if (((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x58))(), (uVar4 & 1) == 0)) ||
     (uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3), (uVar4 & 1) == 0)) {
    return 0;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,(long)param_5,0);
  if (param_6 == 0) {
    local_24 = 0;
    (**(code **)(*plVar3 + 0x20))(plVar3,param_3,param_4,&local_24);
    if (local_24 < 0) {
      return 0;
    }
  }
  else if (param_4 != 0) {
    uVar4 = param_4;
    do {
      uVar5 = uVar4;
      if (param_6 <= uVar4) {
        uVar5 = param_6;
      }
      local_28 = 0;
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_3,uVar5,&local_28);
      if (local_28 < 0) {
        return 0;
      }
      bVar2 = uVar5 <= uVar4;
      uVar1 = uVar4 - uVar5;
      uVar4 = 0;
      if (bVar2) {
        uVar4 = uVar1;
      }
      if (!bVar2 || uVar1 == 0) {
        uVar5 = 0;
      }
      param_3 = param_3 + uVar5;
    } while (bVar2 && uVar1 != 0);
  }
  return param_4;
}

