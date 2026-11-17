
void FUN_031b0858(int *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  
  plVar1 = DAT_05690d38;
  if (*param_1 == 2) {
    if ((DAT_05690d38 == (long *)0x0) ||
       (uVar4 = *(uint *)(DAT_05690d38 + 0x36),
       ((int)DAT_05690d38[0x3e] == -1 && *(int *)((long)DAT_05690d38 + 500) == -1) && uVar4 < 2))
    goto LAB_031b0a04;
    if (DAT_05690d38[0x42] != 0) {
      plVar2 = *(long **)(**(long **)(DAT_05690d38[0x42] + 0x3f8) + 0x1b0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      uVar3 = (**(code **)(*plVar2 + 0x60))();
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar4 = *(uint *)(plVar1 + 0x36);
    }
    if (uVar4 != 5 && uVar4 != 3) {
      return;
    }
    if (DAT_05690d38 == (long *)0x0) goto LAB_031b0a04;
    pcVar5 = *(code **)(*DAT_05690d38 + 0xb0);
LAB_031b0970:
    (*pcVar5)(DAT_05690d38);
LAB_031b0a04:
    *param_1 = 0;
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (DAT_05690d38 == (long *)0x0) {
    return;
  }
  if (DAT_05690d38[0x42] == 0) {
LAB_031b08c4:
    if (*(uint *)(plVar1 + 0x36) < 2) {
      FUN_02dfa190(DAT_05690d38,param_1 + 2);
      plVar1 = DAT_05690d38;
      if (4 < (int)DAT_05690d38[0x15] - 3U) {
        if (((int)DAT_05690d38[0x15] == 5) || ((int)DAT_05690d38[0x15] == 2)) {
          FUN_0386b170(DAT_05690d38[0x13],DAT_05690d38);
          *(undefined1 *)((long)plVar1 + 0x165) = 1;
          goto LAB_031b0a04;
        }
        if ((6 < *(uint *)(DAT_05690d38 + 0x15)) ||
           ((1 << (ulong)(*(uint *)(DAT_05690d38 + 0x15) & 0x1f) & 0x58U) == 0)) goto LAB_031b0a04;
      }
      pcVar5 = *(code **)(*DAT_05690d38 + 0xa8);
      goto LAB_031b0970;
    }
  }
  else {
    plVar2 = *(long **)(**(long **)(DAT_05690d38[0x42] + 0x3f8) + 0x1b0);
    if (plVar2 == (long *)0x0) goto LAB_031b0980;
    uVar3 = (**(code **)(*plVar2 + 0x58))();
    if ((uVar3 & 1) != 0) goto LAB_031b08c4;
  }
  if (DAT_05690d38 == (long *)0x0) {
    return;
  }
LAB_031b0980:
  plVar1 = DAT_05690d38;
  if ((((DAT_05690d38[0x42] == 0) ||
       ((plVar2 = *(long **)(**(long **)(DAT_05690d38[0x42] + 0x3f8) + 0x1b0), plVar2 != (long *)0x0
        && (uVar3 = (**(code **)(*plVar2 + 0x60))(), (uVar3 & 1) != 0)))) &&
      (((int)plVar1[0x36] == 5 || ((int)plVar1[0x36] == 3)))) && (DAT_05690d38 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031b09d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_05690d38 + 0xb0))();
    return;
  }
  return;
}

