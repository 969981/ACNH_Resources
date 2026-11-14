
void FUN_01cabe80(long *param_1,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  pcVar2 = (char *)FUN_01cab720(param_1,param_2);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar3 = FUN_01cabc80(param_1,param_2);
    plVar4 = (long *)(*(int *)((long)param_1 + 0x54) + lVar3);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4 = (long *)*param_1;
    *(int *)(param_1 + 10) = (int)param_1[10] + -1;
    if (plVar4 != (long *)0x0) {
      iVar6 = *(int *)(lVar3 + 0x30);
      if (iVar6 != 0) {
        do {
          if (iVar6 < 1) {
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = *(long **)(lVar3 + 0x28);
            if (*plVar4 != 0) {
              *(long *)(*plVar4 + 8) = plVar4[1];
            }
            if ((long *)plVar4[1] != (long *)0x0) {
              *(long *)plVar4[1] = *plVar4;
            }
            *plVar4 = 0;
            plVar4[1] = 0;
            iVar6 = *(int *)(lVar3 + 0x30) + -1;
            *(int *)(lVar3 + 0x30) = iVar6;
          }
          plVar5 = (long *)*param_1;
          lVar1 = 0;
          if (plVar4 != (long *)0x0) {
            lVar1 = (long)plVar4 - (long)*(int *)(lVar3 + 0x34);
          }
          if (plVar5 != (long *)0x0) {
            if (*(long *)(lVar1 + 8) != 0) {
              (**(code **)(*plVar5 + 0x38))();
              plVar5 = (long *)*param_1;
            }
            (**(code **)(*plVar5 + 0x38))(plVar5,lVar1);
            iVar6 = *(int *)(lVar3 + 0x30);
          }
        } while (iVar6 != 0);
        plVar4 = (long *)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x01cabfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,lVar3);
      return;
    }
  }
  return;
}

