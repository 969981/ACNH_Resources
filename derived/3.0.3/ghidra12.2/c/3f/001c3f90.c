
void FUN_001c3f90(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar8 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar8;
  if (plVar4 == (long *)0x0) {
LAB_001c4008:
    iVar5 = (int)param_2[1];
    iVar7 = (int)param_2[1];
    if (iVar7 != iVar5) {
LAB_001c40ac:
      ClearExclusiveLocal();
      goto LAB_001c40e0;
    }
  }
  else {
    plVar6 = plVar4;
    plVar10 = plVar8;
    do {
      while (plVar9 = plVar6, (short)((short)param_2[0xe] - (short)plVar9[5]) < 1) {
        plVar6 = (long *)*plVar9;
        plVar10 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_001c3fec;
      }
      plVar6 = (long *)plVar9[1];
    } while ((long *)plVar9[1] != (long *)0x0);
LAB_001c3fec:
    if ((plVar10 == plVar8) || (0 < (short)((short)plVar10[5] - (short)param_2[0xe])))
    goto LAB_001c4008;
    plVar8 = (long *)plVar10[1];
    if ((long *)plVar10[1] == (long *)0x0) {
      plVar8 = plVar10;
      do {
        plVar6 = (long *)plVar8[2];
        bVar3 = (long *)*plVar6 != plVar8;
        plVar8 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar8;
        plVar8 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if (*(long **)(param_1 + 8) == plVar10) {
      *(long **)(param_1 + 8) = plVar6;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    FUN_00192390(plVar4,plVar10);
    FUN_00187e4c(plVar10);
    iVar5 = (int)param_2[1];
    iVar7 = (int)param_2[1];
    if (iVar7 != iVar5) goto LAB_001c40ac;
  }
  iVar5 = iVar5 + -1;
  cVar1 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(param_2 + 1,0x10);
  if (bVar3) {
    *(int *)(param_2 + 1) = iVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') {
LAB_001c40b8:
    if ((iVar5 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
      *(undefined1 *)((long)param_2 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x001c4124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
    return;
  }
LAB_001c40e0:
  do {
    plVar4 = param_2 + 1;
    lVar2 = *plVar4;
    iVar5 = iVar7 + -1;
    if ((int)lVar2 == iVar7) {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_001c40b8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar2;
  } while( true );
}

