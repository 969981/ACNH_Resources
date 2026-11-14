
void FUN_01cabfe0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 != 0) {
    do {
      if (iVar4 < 1) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = *(long **)(param_2 + 0x28);
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        iVar4 = *(int *)(param_2 + 0x30) + -1;
        *(int *)(param_2 + 0x30) = iVar4;
      }
      plVar3 = (long *)*param_1;
      lVar1 = 0;
      if (plVar2 != (long *)0x0) {
        lVar1 = (long)plVar2 - (long)*(int *)(param_2 + 0x34);
      }
      if (plVar3 != (long *)0x0) {
        if (*(long *)(lVar1 + 8) != 0) {
          (**(code **)(*plVar3 + 0x38))();
          plVar3 = (long *)*param_1;
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,lVar1);
        iVar4 = *(int *)(param_2 + 0x30);
      }
    } while (iVar4 != 0);
    plVar2 = (long *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01cac0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  return;
}

