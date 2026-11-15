
undefined8 FUN_021948ac(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  
  if ((int)*(uint *)(param_1 + 0x1b30) < 1) {
    uVar2 = *(int *)(param_1 + 0x3658) + param_2;
    if ((-1 < (int)uVar2) &&
       (uVar2 < *(uint *)(param_1 + 0x10) && (int)uVar2 < (int)*(uint *)(param_1 + 0x10))) {
      plVar1 = (long *)(param_1 + 0x18);
      goto LAB_021948fc;
    }
  }
  else {
    uVar2 = *(int *)(param_1 + 0x365c) + param_2;
    if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(param_1 + 0x1b30))) {
      plVar1 = (long *)(param_1 + 0x1b38);
LAB_021948fc:
      return *(undefined8 *)(*plVar1 + (ulong)uVar2 * 8);
    }
  }
  return 0;
}

