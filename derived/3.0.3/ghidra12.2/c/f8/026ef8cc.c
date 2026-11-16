
undefined8 FUN_026ef8cc(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_026ef5fc();
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0xd4) == 1) && (*(int *)(param_1 + 0xd0) == iVar1)) {
      lVar4 = 0;
    }
    else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == iVar1)) {
      lVar4 = 1;
    }
    else {
      if ((((*(int *)(param_1 + 0xe4) != 1) || (*(int *)(param_1 + 0xe0) != iVar1)) &&
          ((*(int *)(param_1 + 0xec) != 1 || (*(int *)(param_1 + 0xe8) != iVar1)))) &&
         ((((*(int *)(param_1 + 0xf4) != 1 || (*(int *)(param_1 + 0xf0) != iVar1)) &&
           ((*(int *)(param_1 + 0xfc) != 1 || (*(int *)(param_1 + 0xf8) != iVar1)))) &&
          ((*(int *)(param_1 + 0x104) != 1 || (*(int *)(param_1 + 0x100) != iVar1)))))) {
        if (*(int *)(param_1 + 0x10c) != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x108) != iVar1) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == iVar1)) {
        lVar4 = 2;
      }
      else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == iVar1)) {
        lVar4 = 3;
      }
      else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == iVar1)) {
        lVar4 = 4;
      }
      else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == iVar1)) {
        lVar4 = 5;
      }
      else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == iVar1)) {
        lVar4 = 6;
      }
      else {
        if (*(int *)(param_1 + 0x10c) != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x108) != iVar1) {
          return 0;
        }
        lVar4 = 7;
      }
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + lVar4 * 8 + 0xa0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x026efa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x18))();
      return uVar3;
    }
  }
  return 0;
}

