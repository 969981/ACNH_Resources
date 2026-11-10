
long * FUN_0018dbbc(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if ((int)param_1[1] == 4) {
    pcVar3 = *(code **)(*param_1 + -0x14);
    if (pcVar3 == (code *)0x0) {
      free((undefined8 *)(*param_1 + -0x14));
      *(int *)(param_1 + 1) = (int)param_2[1];
      iVar1 = (int)param_2[1];
      goto joined_r0x0018dc04;
    }
    (*pcVar3)();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  iVar1 = (int)param_2[1];
joined_r0x0018dc04:
  if (iVar1 - 1U < 6) {
                    /* WARNING: Could not recover jumptable at 0x0018dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar2 = (long *)(*(code *)(&UNK_0018dc20 + (ulong)(byte)(&DAT_04108e61)[iVar1 - 1U] * 4))();
    return plVar2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return param_1;
}

