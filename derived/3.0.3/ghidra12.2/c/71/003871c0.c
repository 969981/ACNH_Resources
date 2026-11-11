
void FUN_003871c0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)param_1[3];
  while (plVar2 != param_1 + 2) {
    plVar5 = (long *)plVar2[1];
    if ((long *)plVar2[0xb] != plVar2 + 10) {
      plVar4 = (long *)plVar2[0xb];
      do {
        plVar6 = (long *)plVar4[1];
        if (plVar4[3] != 0) {
          FUN_00367b50();
        }
        plVar4[3] = 0;
        if (plVar4 != plVar5 + 10) {
          plVar1 = (long *)plVar4[1];
          lVar3 = *plVar1;
          *(long **)(*plVar4 + 8) = plVar1;
          *plVar1 = *plVar4;
          *(long **)(lVar3 + 8) = plVar4;
          *plVar4 = lVar3;
        }
        FUN_00367b50(plVar4);
        plVar4 = plVar6;
      } while (plVar6 != plVar2 + 10);
    }
    if (plVar2 != param_1 + 2) {
      plVar4 = (long *)plVar2[1];
      lVar3 = *plVar4;
      *(long **)(*plVar2 + 8) = plVar4;
      *plVar4 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    FUN_00367b50(plVar2);
    plVar2 = plVar5;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

