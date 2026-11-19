
void FUN_03c5dbe0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((long *)param_1[0xd] != param_1 + 0xc) {
    lVar2 = (long)*(int *)((long)param_1 + 0x74);
    plVar1 = (long *)(param_1[0xd] - lVar2);
    do {
      *(int *)(plVar1 + 6) = (int)plVar1[6] + 1;
      (**(code **)(*plVar1 + 0x30))(plVar1);
      FUN_03c835a0(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
    } while (plVar1 != (long *)((long)(param_1 + 0xc) - lVar2));
  }
  plVar1 = param_1 + 7;
  if ((long *)*plVar1 != plVar1) {
    lVar3 = (long)*(int *)((long)param_1 + 0x4c);
    lVar2 = *plVar1 - lVar3;
    do {
      FUN_03c5dbe0(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3) - lVar3;
    } while (lVar2 != (long)plVar1 - lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x03c5dcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

