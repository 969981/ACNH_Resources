
void FUN_006fe5f0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x28);
  plVar1 = (long *)param_1[5];
  if (lVar2 != 0 && plVar1 != (long *)0x0) {
    do {
      (**(code **)(*plVar1 + 0x98))(plVar1,lVar2);
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) break;
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
                    /* WARNING: Could not recover jumptable at 0x006fe668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

