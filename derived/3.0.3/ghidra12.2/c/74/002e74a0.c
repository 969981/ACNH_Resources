
void FUN_002e74a0(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar2 = (long *)param_1[1];
  if ((param_2 != param_3) && (plVar2 != param_1)) {
    do {
      *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
      param_2 = *(long *)(param_2 + 8);
      plVar2 = (long *)plVar2[1];
    } while (param_2 != param_3 && plVar2 != param_1);
  }
  if (plVar2 == param_1) {
    if (param_2 != param_3) {
      plVar2 = (long *)FUN_00187df4(0x18);
      lVar5 = *(long *)(param_2 + 8);
      *plVar2 = 0;
      lVar4 = 1;
      *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
      if (lVar5 == param_3) {
        plVar3 = plVar2;
      }
      else {
        plVar6 = plVar2;
        do {
          plVar3 = (long *)FUN_00187df4(0x18);
          plVar6[1] = (long)plVar3;
          uVar1 = *(undefined4 *)(lVar5 + 0x10);
          lVar4 = lVar4 + 1;
          lVar5 = *(long *)(lVar5 + 8);
          *plVar3 = (long)plVar6;
          *(undefined4 *)(plVar3 + 2) = uVar1;
          plVar6 = plVar3;
        } while (lVar5 != param_3);
      }
      lVar5 = *param_1;
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
      lVar5 = param_1[2];
      *param_1 = (long)plVar3;
      plVar3[1] = (long)param_1;
      param_1[2] = lVar5 + lVar4;
      return;
    }
  }
  else {
    lVar4 = *param_1;
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar5;
    do {
      plVar2 = (long *)plVar2[1];
      param_1[2] = param_1[2] + -1;
      FUN_00187e4c();
    } while (plVar2 != param_1);
  }
  return;
}

