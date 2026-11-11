
void FUN_00474900(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 == (long *)0x0) {
    lVar5 = 0;
    if (plVar4 != (long *)0x0) {
      do {
        lVar6 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                          (*(long **)(param_1 + 0x50),plVar4,*(undefined8 *)(param_1 + 0x28));
        plVar4 = (long *)*plVar4;
        lVar5 = lVar6 + lVar5;
      } while (plVar4 != (long *)0x0);
      goto LAB_004749b0;
    }
    plVar4 = *(long **)(param_1 + 0x20);
    lVar6 = 0;
    if (plVar4 == (long *)0x0) goto LAB_00474a4c;
LAB_00474a24:
    lVar6 = 0;
    do {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                        (*(long **)(param_1 + 0x50),plVar4,*(undefined8 *)(param_1 + 0x28));
      plVar4 = (long *)*plVar4;
      lVar6 = lVar3 + lVar6;
    } while (plVar4 != (long *)0x0);
    goto LAB_00474a4c;
  }
  lVar5 = 0;
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar6 = 0;
    if (plVar4 == (long *)0x0) goto LAB_00474a4c;
LAB_004749c0:
    lVar6 = 0;
    while( true ) {
      lVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,plVar4,0x20);
      lVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                        (*(long **)(param_1 + 0x50),plVar4[1],*(undefined8 *)(param_1 + 0x28));
      plVar4 = (long *)*plVar4;
      lVar6 = lVar3 + lVar6 + lVar2;
      if (plVar4 == (long *)0x0) break;
      plVar1 = *(long **)(param_1 + 0x58);
    }
  }
  else {
    while( true ) {
      lVar6 = (**(code **)(*plVar1 + 0x40))(plVar1,plVar4,0x20);
      lVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                        (*(long **)(param_1 + 0x50),plVar4[1],*(undefined8 *)(param_1 + 0x28));
      plVar4 = (long *)*plVar4;
      lVar5 = lVar6 + lVar5 + lVar3;
      if (plVar4 == (long *)0x0) break;
      plVar1 = *(long **)(param_1 + 0x58);
    }
LAB_004749b0:
    plVar1 = *(long **)(param_1 + 0x58);
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) {
      if (plVar4 != (long *)0x0) goto LAB_00474a24;
    }
    else if (plVar4 != (long *)0x0) goto LAB_004749c0;
    lVar6 = 0;
  }
LAB_00474a4c:
  *param_2 = lVar6 + lVar5;
  lVar5 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x68);
  lVar3 = *(long *)(param_1 + 8) * lVar6;
  param_2[3] = lVar3;
  param_2[1] = *(long *)(param_1 + 8) * (lVar5 - lVar6);
  lVar5 = *(long *)(param_1 + 8);
  param_2[4] = lVar3;
  param_2[5] = lVar5;
  return;
}

