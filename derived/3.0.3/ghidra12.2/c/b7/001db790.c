
void FUN_001db790(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[1];
  if ((param_2 != param_3) && (plVar4 != param_1)) {
    do {
      FUN_001b83dc(plVar4 + 2,param_2 + 0x10);
      param_2 = *(long *)(param_2 + 8);
      plVar4 = (long *)plVar4[1];
    } while (param_2 != param_3 && plVar4 != param_1);
  }
  if (plVar4 == param_1) {
    if (param_2 != param_3) {
      plVar4 = (long *)FUN_00187df4(0x80);
      *plVar4 = 0;
      FUN_001b8358(plVar4 + 2,param_2 + 0x10);
      lVar2 = *(long *)(param_2 + 8);
      lVar1 = 1;
      if (lVar2 == param_3) {
        plVar3 = plVar4;
      }
      else {
        plVar5 = plVar4;
        do {
          plVar3 = (long *)FUN_00187df4(0x80);
          FUN_001b8358(plVar3 + 2,lVar2 + 0x10);
          plVar5[1] = (long)plVar3;
          lVar1 = lVar1 + 1;
          lVar2 = *(long *)(lVar2 + 8);
          *plVar3 = (long)plVar5;
          plVar5 = plVar3;
        } while (lVar2 != param_3);
      }
      lVar2 = *param_1;
      *(long **)(lVar2 + 8) = plVar4;
      *plVar4 = lVar2;
      lVar2 = param_1[2];
      *param_1 = (long)plVar3;
      plVar3[1] = (long)param_1;
      param_1[2] = lVar2 + lVar1;
      return;
    }
  }
  else {
    lVar1 = *param_1;
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    do {
      plVar3 = (long *)plVar4[1];
      param_1[2] = param_1[2] + -1;
      (**(code **)plVar4[2])();
      FUN_00187e4c(plVar4);
      plVar4 = plVar3;
    } while (plVar3 != param_1);
  }
  return;
}

