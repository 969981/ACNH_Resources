
void FUN_03bf3600(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar2 + 0x10))();
  plVar1 = param_1 + 1;
  if ((long *)param_1[2] != plVar1) {
    lVar6 = (long)*(int *)((long)param_1 + 0x1c);
    lVar7 = param_1[2] - lVar6;
    do {
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x10;
      if ((*(long *)(lVar7 + 0x28) != 0) && (*(long *)(lVar7 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar7 + 0x58) + 0x30))();
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
    } while (lVar7 != (long)plVar1 - lVar6);
  }
  (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  plVar3 = (long *)param_1[2];
  if (plVar3 != plVar1) {
    lVar6 = (long)*(int *)((long)param_1 + 0x1c);
    lVar7 = (long)plVar3 - lVar6;
    do {
      FUN_03be68a0(lVar7);
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
    } while (lVar7 != (long)plVar1 - lVar6);
    plVar3 = (long *)param_1[2];
  }
  while (plVar3 != plVar1) {
    plVar5 = (long *)plVar3[1];
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3 = plVar5;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)plVar1;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_1[4],0);
  }
  if (param_1[5] != 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_1[5],1);
  }
  __ptr = (void *)param_1[0xf];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0xf] = 0;
  }
  uVar4 = (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  FUN_03bebc70(uVar4,param_1);
  (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x03bf3848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}

