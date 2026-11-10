
void FUN_002e7760(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[1];
  if ((param_2 != param_3) && (plVar5 != param_1)) {
    do {
      FUN_003151e0(plVar5 + 2,param_2 + 0x10);
      param_2 = *(long *)(param_2 + 8);
      plVar5 = (long *)plVar5[1];
    } while (param_2 != param_3 && plVar5 != param_1);
  }
  if (plVar5 == param_1) {
    if (param_2 != param_3) {
      plVar5 = (long *)FUN_00187df4(0x158);
      *plVar5 = 0;
      FUN_002e78f0(plVar5 + 2,param_2 + 0x10);
      lVar2 = 1;
      lVar3 = *(long *)(param_2 + 8);
      puVar1 = PTR_DAT_04bce978 + 0x10;
      plVar5[2] = (long)puVar1;
      if (lVar3 == param_3) {
        plVar4 = plVar5;
      }
      else {
        plVar6 = plVar5;
        do {
          plVar4 = (long *)FUN_00187df4(0x158);
          FUN_002e78f0(plVar4 + 2,lVar3 + 0x10);
          plVar6[1] = (long)plVar4;
          lVar2 = lVar2 + 1;
          lVar3 = *(long *)(lVar3 + 8);
          *plVar4 = (long)plVar6;
          plVar4[2] = (long)puVar1;
          plVar6 = plVar4;
        } while (lVar3 != param_3);
      }
      lVar3 = *param_1;
      *(long **)(lVar3 + 8) = plVar5;
      *plVar5 = lVar3;
      lVar3 = param_1[2];
      *param_1 = (long)plVar4;
      plVar4[1] = (long)param_1;
      param_1[2] = lVar3 + lVar2;
      return;
    }
  }
  else {
    lVar2 = *param_1;
    lVar3 = *plVar5;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    do {
      plVar4 = (long *)plVar5[1];
      param_1[2] = param_1[2] + -1;
      (**(code **)plVar5[2])();
      FUN_00187e4c(plVar5);
      plVar5 = plVar4;
    } while (plVar4 != param_1);
  }
  return;
}

