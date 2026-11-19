
void FUN_03c5d850(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_03c5d3b0();
  if ((long *)param_1[8] != param_1 + 7) {
    lVar2 = (long)*(int *)((long)param_1 + 0x4c);
    lVar1 = param_1[8] - lVar2;
    do {
      FUN_03c5d850(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (long)(param_1 + 7) - lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x03c5d8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

