
void FUN_03d5bf40(long *param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  
  puVar7 = PTR_DAT_04bb2718;
  *param_1 = (long)&PTR_FUN_04b8fa28;
  lVar14 = *(long *)puVar7;
  nn::os::LockMutex((MutexType *)(lVar14 + 0x3e0));
  plVar10 = (long *)((long)*(int *)(lVar14 + 0x464) + (long)param_1);
  lVar12 = *plVar10;
  plVar11 = (long *)plVar10[1];
  if (plVar11 != (long *)0x0 || lVar12 != 0) {
    if (lVar12 != 0) {
      *(long **)(lVar12 + 8) = plVar11;
      plVar11 = (long *)plVar10[1];
    }
    if (plVar11 != (long *)0x0) {
      *plVar11 = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar14 + 0x460) = *(int *)(lVar14 + 0x460) + -1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar14 + 0x3e0));
  puVar6 = PTR_DAT_04bb26b8;
  uVar9 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x138))();
  if ((uVar9 & 1) != 0) {
    if ((long *)param_1[0xb] != param_1 + 10) {
      lVar14 = (long)*(int *)((long)param_1 + 100);
      lVar12 = param_1[0xb] - lVar14;
      do {
        if (*(long *)(lVar12 + 0x10) != 0) {
          puVar1 = (uint *)(*(long *)(lVar12 + 0x10) + 0xd0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 & 0xfffffffd;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar12 = *(long *)(lVar12 + lVar14 + 8) - lVar14;
      } while (lVar12 != (long)(param_1 + 10) - lVar14);
    }
  }
  while (puVar8 = PTR_DAT_04bb3350, puVar5 = PTR_DAT_04bb2698, (int)param_1[0x11] != 0) {
    if ((int)param_1[0x11] < 1) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)param_1[0xf];
      if (*plVar10 != 0) {
        *(long *)(*plVar10 + 8) = plVar10[1];
      }
      if ((long *)plVar10[1] != (long *)0x0) {
        *(long *)plVar10[1] = *plVar10;
      }
      *plVar10 = 0;
      plVar10[1] = 0;
      *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
    }
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar11 = (long *)((long)plVar10 - (long)*(int *)((long)param_1 + 0x8c));
    }
    FUN_03d57400(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  iVar4 = (int)param_1[0xc];
  while (iVar4 != 0) {
    if (iVar4 < 1) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)param_1[10];
      if (*plVar10 != 0) {
        *(long *)(*plVar10 + 8) = plVar10[1];
      }
      if ((long *)plVar10[1] != (long *)0x0) {
        *(long *)plVar10[1] = *plVar10;
      }
      *plVar10 = 0;
      plVar10[1] = 0;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
    }
    pvVar13 = (void *)0x0;
    if (plVar10 != (long *)0x0) {
      pvVar13 = (void *)((long)plVar10 - (long)*(int *)((long)param_1 + 100));
    }
    lVar12 = *(long *)((long)pvVar13 + 0x10);
    if (lVar12 == 0) {
      FUN_03ca1c60((long)pvVar13 + 0x20);
      plVar10 = *(long **)((long)pvVar13 + 0x18);
    }
    else {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      lVar15 = *(long *)(lVar14 + 0xa8);
      *(long *)(lVar14 + 0xa8) = lVar12;
      FUN_03ca1c60((long)pvVar13 + 0x20);
      if (lVar15 != 1) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
        *(long *)(lVar12 + 0xa8) = lVar15;
      }
      plVar10 = *(long **)((long)pvVar13 + 0x18);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    if (*(long *)((long)pvVar13 + 0x10) != 0) {
      uVar9 = (**(code **)(**(long **)puVar6 + 0x138))();
      if (((uVar9 & 1) != 0) &&
         (uVar9 = (**(code **)(**(long **)((long)pvVar13 + 0x10) + 0x90))(), (uVar9 & 1) == 0)) {
        (**(code **)(**(long **)((long)pvVar13 + 0x10) + 0xb0))();
      }
      (**(code **)(**(long **)((long)pvVar13 + 0x10) + 0x20))();
    }
    if (*(long *)puVar5 == 0) {
      free(pvVar13);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar5,pvVar13);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar13);
      }
    }
    iVar4 = (int)param_1[0xc];
  }
  pvVar13 = (void *)param_1[0x12];
  if ((pvVar13 != (void *)0x0) && (pvVar13 != *(void **)(*(long *)puVar7 + 0x508))) {
    FUN_038e1a84((long)pvVar13 + 0x40);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar13);
      cVar2 = *(char *)((long)param_1 + 0x46);
      goto joined_r0x03d5c264;
    }
    plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar13);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10,pvVar13);
    }
  }
  cVar2 = *(char *)((long)param_1 + 0x46);
joined_r0x03d5c264:
  if (cVar2 != '\0') {
    (**(code **)(param_1[6] + 0x18))(param_1 + 6);
    pvVar13 = (void *)param_1[7];
    if (pvVar13 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar13);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar13);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar13);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  lVar12 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar12 != 0) {
    if (lVar12 == 1) {
      return;
    }
    if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = lVar12 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
    }
    plVar10 = (long *)((long)*(int *)(lVar12 + 0x84) + (long)param_1);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    if (lVar14 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

