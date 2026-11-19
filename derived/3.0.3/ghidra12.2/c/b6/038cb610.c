
long * FUN_038cb610(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  bool bVar11;
  long *plVar12;
  ulong *puVar13;
  
  if ((*(long *)PTR_DAT_04bb3350 == 0) ||
     (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)), lVar4 == 0)) {
    nn::os::LockMutex((MutexType *)&DAT_05ae75e0);
    puVar13 = (ulong *)0x0;
    bVar11 = true;
  }
  else {
    plVar8 = *(long **)(lVar4 + 0xa8);
    puVar13 = (ulong *)(lVar4 + 0xb0);
    do {
      plVar6 = (long *)*puVar13;
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar11) {
        *puVar13 = (ulong)plVar6 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 == (long *)0x0) || ((int)plVar6[0xb] != 0)) {
      plVar10 = (long *)0x0;
LAB_038cb674:
      bVar11 = true;
    }
    else {
      uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
      plVar10 = plVar6;
      if ((uVar5 & 1) == 0) goto LAB_038cb674;
      bVar11 = false;
      plVar10 = (long *)0x0;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar3) {
        *puVar13 = *puVar13 & 0xfffffffffffffffe;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (!bVar11) {
      return plVar6;
    }
    if (((plVar8 != (long *)0x0) && (plVar8 != plVar10)) && ((int)plVar8[0xb] == 0)) {
      uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2);
      if ((uVar5 & 1) != 0) {
        *puVar13 = (ulong)plVar8;
        return plVar8;
      }
      plVar8 = (long *)0x0;
    }
    nn::os::LockMutex((MutexType *)&DAT_05ae75e0);
    plVar6 = (long *)*puVar13;
    if ((plVar6 != (long *)0x0) && (plVar10 != plVar6)) {
      uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
      plVar10 = plVar6;
      if ((uVar5 & 1) != 0) {
        plVar7 = plVar6;
        do {
          if ((long *)plVar7[10] == plVar7 + 9) {
LAB_038cba1c:
            if (plVar7 == plVar6) goto LAB_038cb868;
            goto LAB_038cb85c;
          }
          lVar4 = (long)*(int *)((long)plVar7 + 0x5c);
          plVar12 = (long *)(plVar7[10] - lVar4);
          while (uVar5 = (**(code **)(*plVar12 + 0x88))(plVar12,param_2), (uVar5 & 1) == 0) {
            plVar12 = (long *)(*(long *)((long)plVar12 + lVar4 + 8) - lVar4);
            if (plVar12 == (long *)((long)(plVar7 + 9) - (long)*(int *)((long)plVar7 + 0x5c)))
            goto LAB_038cba1c;
          }
          uVar5 = (**(code **)(*plVar12 + 0x88))(plVar12,param_2);
          plVar7 = plVar12;
        } while ((uVar5 & 1) != 0);
      }
    }
    bVar11 = false;
    if ((plVar8 != (long *)0x0) && (plVar8 != plVar10)) {
      uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2);
      while ((uVar5 & 1) != 0) {
        if ((long *)plVar8[10] == plVar8 + 9) {
LAB_038cba2c:
          plVar7 = plVar8;
          goto LAB_038cb85c;
        }
        lVar4 = (long)*(int *)((long)plVar8 + 0x5c);
        plVar6 = (long *)(plVar8[10] - lVar4);
        while (uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2), (uVar5 & 1) == 0) {
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar4 + 8) - lVar4);
          if (plVar6 == (long *)((long)(plVar8 + 9) - (long)*(int *)((long)plVar8 + 0x5c)))
          goto LAB_038cba2c;
        }
        uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
        plVar8 = plVar6;
      }
      bVar11 = false;
    }
  }
  if (DAT_05ae7550 != 0) {
    puVar1 = DAT_05ae7558 + DAT_05ae7550;
    puVar9 = DAT_05ae7558;
    do {
      plVar6 = (long *)*puVar9;
      uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
      while ((uVar5 & 1) != 0) {
        if ((long *)plVar6[10] == plVar6 + 9) goto LAB_038cb858;
        lVar4 = (long)*(int *)((long)plVar6 + 0x5c);
        plVar8 = (long *)(plVar6[10] - lVar4);
        while (uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2), (uVar5 & 1) == 0) {
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar4 + 8) - lVar4);
          if (plVar8 == (long *)((long)(plVar6 + 9) - (long)*(int *)((long)plVar6 + 0x5c)))
          goto LAB_038cb858;
        }
        uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2);
        plVar6 = plVar8;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  if (DAT_05ae7580 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    puVar1 = DAT_05ae7588 + DAT_05ae7580;
    puVar9 = DAT_05ae7588;
    do {
      plVar6 = (long *)*puVar9;
      uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
      while ((uVar5 & 1) != 0) {
        if ((long *)plVar6[10] == plVar6 + 9) goto LAB_038cb858;
        lVar4 = (long)*(int *)((long)plVar6 + 0x5c);
        plVar8 = (long *)(plVar6[10] - lVar4);
        while (uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2), (uVar5 & 1) == 0) {
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar4 + 8) - lVar4);
          if (plVar8 == (long *)((long)(plVar6 + 9) - (long)*(int *)((long)plVar6 + 0x5c)))
          goto LAB_038cb858;
        }
        uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2);
        plVar6 = plVar8;
      }
      puVar9 = puVar9 + 1;
      plVar6 = (long *)0x0;
    } while (puVar9 != puVar1);
  }
LAB_038cb868:
  nn::os::UnlockMutex((MutexType *)&DAT_05ae75e0);
  return plVar6;
LAB_038cb858:
  plVar7 = plVar6;
  if (!bVar11) {
LAB_038cb85c:
    plVar6 = plVar7;
    *puVar13 = (ulong)plVar6;
  }
  goto LAB_038cb868;
}

