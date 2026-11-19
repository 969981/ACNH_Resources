
void FUN_03c5dab0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x40))();
  plVar1 = param_1 + 7;
  if ((long *)*plVar1 != plVar1) {
    lVar3 = (long)*(int *)((long)param_1 + 0x4c);
    lVar2 = *plVar1 - lVar3;
    do {
      FUN_03c5dab0(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3) - lVar3;
    } while (lVar2 != (long)plVar1 - lVar3);
  }
  if ((long *)param_1[0x33] != param_1 + 0x32) {
    lVar3 = (long)*(int *)((long)param_1 + 0x1a4);
    lVar2 = param_1[0x33] - lVar3;
    do {
      FUN_03ea81f0(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (long)(param_1 + 0x32) - lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x03c5db68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

