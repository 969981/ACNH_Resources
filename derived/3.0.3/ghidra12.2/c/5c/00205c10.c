
void FUN_00205c10(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar13 = (undefined8 *)(param_1 + 0x10);
  puVar6 = (undefined8 *)*puVar13;
  if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
    puVar14 = puVar13;
  }
  else {
    do {
      while (puVar5 = puVar6, puVar13 = puVar5, param_2 < (ulong)puVar5[4]) {
        puVar6 = (undefined8 *)*puVar5;
        puVar14 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_00205c6c;
      }
      if (param_2 <= (ulong)puVar5[4]) goto LAB_00205cc8;
      puVar6 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    puVar14 = puVar5 + 1;
  }
LAB_00205c6c:
  puVar5 = (undefined8 *)FUN_00187df4(0x38);
  puVar4 = PTR_DAT_04bccbc0;
  puVar5[6] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = puVar13;
  *puVar14 = puVar5;
  puVar5[4] = param_2;
  puVar5[5] = puVar4 + 0x10;
  puVar6 = puVar5;
  if (**(long **)(param_1 + 8) != 0) {
    *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
    puVar6 = (undefined8 *)*puVar14;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x10),puVar6);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_00205cc8:
  plVar11 = (long *)puVar5[6];
  plVar7 = *(long **)(param_3 + 8);
  if (plVar11 == plVar7) {
    return;
  }
  if (plVar11 == (long *)0x0) goto LAB_00205dac;
  plVar7 = plVar11 + 1;
  iVar10 = (int)*plVar7;
  iVar8 = (int)*plVar7 + -1;
  if (iVar10 != (int)*plVar7) {
    ClearExclusiveLocal();
LAB_00205d60:
    do {
      lVar3 = *plVar7;
      iVar8 = iVar10 + -1;
      if ((int)lVar3 == iVar10) {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *(int *)plVar7 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_00205d14;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = (int)lVar3;
    } while( true );
  }
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *(int *)plVar7 = iVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_00205d60;
LAB_00205d14:
  if (iVar8 == 0) {
    piVar12 = (int *)((long)plVar11 + 0xc);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    iVar8 = *piVar12 + -1;
    iVar10 = *piVar12;
    if (iVar10 == *piVar12) {
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar9) {
        *piVar12 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00205d8c;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00205d8c:
      bVar9 = false;
    }
    if (!bVar9) {
      do {
        iVar1 = *piVar12;
        iVar8 = iVar10 + -1;
        if (iVar1 == iVar10) {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar9) {
            *piVar12 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar1;
      } while( true );
    }
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  plVar7 = *(long **)(param_3 + 8);
LAB_00205dac:
  puVar5[6] = plVar7;
  if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 1, (int)*plVar7 == 0)) {
    return;
  }
  iVar10 = (int)*plVar7;
  if (iVar10 == (int)*plVar7) {
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *(int *)plVar7 = (int)*plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar3 = *plVar7;
    if ((int)lVar3 == iVar10) {
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar3;
  } while( true );
}

