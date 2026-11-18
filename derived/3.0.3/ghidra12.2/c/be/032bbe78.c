
void FUN_032bbe78(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      FUN_032bbf80(param_1,param_2);
      plVar3 = *(long **)(param_1 + 0x10);
      *(uint *)(param_1 + 0xb4) = param_2;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      if (plVar3 != (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x70);
        if ((param_2 < *(uint *)(plVar5 + 2)) && (*plVar5 != 0)) {
          iVar1 = *(int *)((long)plVar5 + 0xc) + param_2;
          iVar2 = 0;
          if ((int)plVar5[1] <= iVar1) {
            iVar2 = (int)plVar5[1];
          }
          uVar4 = *(undefined4 *)(*plVar5 + (long)(iVar1 - iVar2) * 4);
        }
        else {
          uVar4 = 0xffffffff;
        }
        (**(code **)(*plVar3 + 0x20))(plVar3,uVar4);
      }
      FUN_032b7f2c(*(undefined8 *)(param_1 + 0x68),0);
      return;
    }
  }
  else {
    FUN_032bbf80(param_1,param_2);
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x70);
      if ((param_2 < *(uint *)(plVar5 + 2)) && (*plVar5 != 0)) {
        iVar1 = *(int *)((long)plVar5 + 0xc) + param_2;
        iVar2 = 0;
        if ((int)plVar5[1] <= iVar1) {
          iVar2 = (int)plVar5[1];
        }
        uVar4 = *(undefined4 *)(*plVar5 + (long)(iVar1 - iVar2) * 4);
      }
      else {
        uVar4 = 0xffffffff;
      }
                    /* WARNING: Could not recover jumptable at 0x032bbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar4);
      return;
    }
  }
  return;
}

