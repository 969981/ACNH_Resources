
undefined8 FUN_00199b30(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  plVar12 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  plVar13 = (long *)(param_1 + 0xc0);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar6 = *(long **)(param_1 + 0x158);
  if (plVar6 != (long *)(param_1 + 0x160)) {
    plVar8 = plVar6;
LAB_00199b90:
    plVar11 = (long *)plVar8[1];
    if ((long *)plVar8[5] != param_2) goto code_r0x00199ba0;
    if (plVar11 == (long *)0x0) {
      plVar11 = plVar8;
      do {
        plVar9 = (long *)plVar11[2];
        bVar5 = (long *)*plVar9 != plVar11;
        plVar11 = plVar9;
      } while (bVar5);
    }
    else {
      do {
        plVar9 = plVar11;
        plVar11 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if (plVar6 == plVar8) {
      *(long **)(param_1 + 0x158) = plVar9;
    }
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + -1;
    FUN_00192390(*(undefined8 *)(param_1 + 0x160),plVar8);
    FUN_00187e4c(plVar8);
    FUN_0018ada0(param_1 + 0x20);
    iVar1 = (int)param_2[1];
    iVar10 = (int)param_2[1];
    iVar7 = iVar1 + -1;
    if (iVar10 != iVar1) goto LAB_00199dd0;
    goto LAB_00199d8c;
  }
LAB_00199bcc:
  plVar6 = *(long **)(param_1 + 0x110);
  plVar8 = *(long **)(param_1 + 0x120);
  if ((plVar6 != param_2) && (plVar6 != plVar8)) {
    do {
      plVar6 = (long *)plVar6[2];
    } while (plVar6 != plVar8 && plVar6 != param_2);
  }
  if (plVar6 == plVar8) {
    plVar6 = *(long **)(param_1 + 0x138);
    plVar8 = *(long **)(param_1 + 0x148);
    if ((plVar6 != param_2) && (plVar6 != plVar8)) {
      do {
        plVar6 = (long *)plVar6[2];
      } while (plVar6 != plVar8 && plVar6 != param_2);
    }
    if (plVar6 == plVar8) {
      if (*(long **)(param_1 + 8) != param_2) {
        uVar14 = 0;
        goto LAB_00199e48;
      }
      *(undefined1 *)(param_1 + 0x10) = 0;
      iVar1 = (int)param_2[1];
      iVar10 = (int)param_2[1];
      iVar7 = iVar1 + -1;
      if (iVar10 != iVar1) goto LAB_00199dd0;
    }
    else {
      lVar2 = plVar6[2];
      lVar3 = plVar6[3];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      plVar6[3] = 0;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
      }
      plVar6[2] = 0;
      if (*(long **)(param_1 + 0x138) == plVar6) {
        *(long *)(param_1 + 0x138) = lVar2;
      }
      if (*(long **)(param_1 + 0x140) == plVar6) {
        *(long *)(param_1 + 0x140) = lVar3;
      }
      *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
      iVar1 = (int)param_2[1];
      iVar10 = (int)param_2[1];
      iVar7 = iVar1 + -1;
      if (iVar10 != iVar1) goto LAB_00199dd0;
    }
  }
  else {
    lVar2 = plVar6[2];
    lVar3 = plVar6[3];
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    plVar6[3] = 0;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar3;
    }
    plVar6[2] = 0;
    if (*(long **)(param_1 + 0x110) == plVar6) {
      *(long *)(param_1 + 0x110) = lVar2;
      plVar8 = *(long **)(param_1 + 0x118);
    }
    else {
      plVar8 = *(long **)(param_1 + 0x118);
    }
    if (plVar8 == plVar6) {
      *(long *)(param_1 + 0x118) = lVar3;
    }
    *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + -1;
    iVar1 = (int)param_2[1];
    iVar10 = (int)param_2[1];
    iVar7 = iVar1 + -1;
    if (iVar10 != iVar1) {
LAB_00199dd0:
      ClearExclusiveLocal();
      goto LAB_00199e00;
    }
  }
LAB_00199d8c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(param_2 + 1,0x10);
  if (bVar5) {
    *(int *)(param_2 + 1) = iVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') {
LAB_00199ddc:
    if (iVar7 == 0) {
      uVar14 = 1;
      if (*(char *)((long)param_2 + 0xc) == '\0') {
        *(undefined1 *)((long)param_2 + 0xc) = 1;
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
    else {
      uVar14 = 1;
    }
LAB_00199e48:
    (**(code **)(*plVar13 + 0x20))(plVar13);
    (**(code **)(*plVar12 + 0x20))(plVar12);
    return uVar14;
  }
LAB_00199e00:
  do {
    plVar6 = param_2 + 1;
    lVar2 = *plVar6;
    iVar7 = iVar10 + -1;
    if ((int)lVar2 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00199ddc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar2;
  } while( true );
code_r0x00199ba0:
  plVar9 = plVar8;
  if (plVar11 == (long *)0x0) {
    do {
      plVar8 = (long *)plVar9[2];
      bVar5 = (long *)*plVar8 != plVar9;
      plVar9 = plVar8;
    } while (bVar5);
  }
  else {
    do {
      plVar8 = plVar11;
      plVar11 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if (plVar8 == (long *)(param_1 + 0x160)) goto LAB_00199bcc;
  goto LAB_00199b90;
}

