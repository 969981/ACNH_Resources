
undefined8 FUN_031d465c(long param_1,int *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int local_34;
  int local_18;
  int local_14;
  
  local_14 = *param_2;
  if (local_14 == DAT_05718ef8) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c1cc) == 1) {
    local_34 = local_14;
    uVar2 = FUN_02206830(*(undefined4 *)(param_1 + 0x1c1d0),&local_34,0);
  }
  else {
    if (*(int *)(param_1 + 0x1c1cc) != 0) {
      if (0x2b < (int)param_3) {
        return 0;
      }
      goto LAB_031d470c;
    }
    local_18 = local_14;
    uVar2 = FUN_02536144(param_1 + 0x1f8,&local_18);
  }
  if (0x2b < (int)param_3) {
    return 0;
  }
  if ((uVar2 & 1) != 0) {
    return 0;
  }
LAB_031d470c:
  plVar1 = (long *)(*(long *)(param_1 + 0x210) + 0x590);
  plVar3 = plVar1 + param_3;
  if (0x2b < param_3) {
    plVar3 = plVar1;
  }
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  *(undefined1 *)((long)plVar3 + 0x315) = 1;
  (**(code **)(*plVar3 + 0x110))();
  return 1;
}

