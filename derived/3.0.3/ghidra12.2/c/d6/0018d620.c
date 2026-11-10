
long * FUN_0018d620(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 != param_2) {
    if ((int)param_1[1] == 4) {
      pcVar3 = *(code **)(*param_1 + -0x14);
      if (pcVar3 == (code *)0x0) {
        free((undefined8 *)(*param_1 + -0x14));
        *(int *)(param_1 + 1) = (int)param_2[1];
        uVar1 = (int)param_2[1] - 1;
        if (5 < uVar1) {
          return param_1;
        }
        goto LAB_0018d674;
      }
      (*pcVar3)();
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    uVar1 = (int)param_2[1] - 1;
    if (uVar1 < 6) {
LAB_0018d674:
                    /* WARNING: Could not recover jumptable at 0x0018d688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(*(code *)(&UNK_0018d68c + (ulong)(byte)(&DAT_04108e5b)[uVar1] * 4))();
      return plVar2;
    }
  }
  return param_1;
}

