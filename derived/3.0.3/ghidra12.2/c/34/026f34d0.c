
undefined8 FUN_026f34d0(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xd4) == 1 && *(int *)(param_1 + 0xd0) == param_2) {
    lVar3 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    lVar3 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
    lVar3 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == param_2)) {
    lVar3 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == param_2)) {
    lVar3 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == param_2)) {
    lVar3 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == param_2)) {
    lVar3 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x108) != param_2) {
      return 0;
    }
    lVar3 = 7;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar3 * 8 + 0xa0), plVar1 == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x026f3520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x18))();
  return uVar2;
}

