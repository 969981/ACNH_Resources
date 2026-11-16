
void FUN_029f03cc(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)((long)param_1 + 0x20);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x20) == *(int *)((long)param_1 + 0x28))) {
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x10;
    if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x10))();
      (**(code **)(**(long **)(lVar2 + 0x58) + 0x38))(*(long **)(lVar2 + 0x58),0xffffffff);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  *(undefined8 *)((long)param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x30) = 0x3f800000;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029f04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

