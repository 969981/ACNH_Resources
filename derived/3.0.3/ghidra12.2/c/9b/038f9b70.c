
void FUN_038f9b70(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  lVar12 = param_1[0xb5];
  *param_1 = &PTR_FUN_04b65af0;
  puVar7 = PTR_DAT_04bcf9e0;
  puVar6 = PTR_DAT_04bb2698;
  if (lVar12 != 0) {
    plVar10 = (long *)(lVar12 + -8);
    if (*plVar10 != 0) {
      lVar14 = lVar12 + *plVar10 * 0x80;
      do {
        lVar8 = DAT_05ae78f0;
        if ((*(byte *)(lVar14 + -8) & 1) != 0) {
          (**(code **)puVar7)(lVar14 + -0x58);
          piVar1 = (int *)(lVar8 + 0x64c);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar14 = lVar14 + -0x80;
      } while (lVar14 != lVar12);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar10);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar6,plVar10);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar10);
      }
    }
    param_1[0xb5] = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  pvVar11 = (void *)param_1[0xb7];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
  }
  pvVar11 = (void *)param_1[0x70];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
  }
  pvVar11 = (void *)param_1[0x72];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x71] = 0;
    param_1[0x72] = 0;
  }
  puVar7 = PTR_DAT_04bcf0c0;
  uVar2 = *(uint *)(param_1 + 0x6d);
  if (uVar2 != 0) {
    lVar12 = param_1[0x6e];
    uVar13 = 0;
    do {
      plVar10 = *(long **)(lVar12 + ((long)((ulong)uVar13 << 0x20) >> 0x1b) + 0x10);
      if (plVar10 != (long *)0x0) {
        piVar1 = (int *)(*plVar10 + 0x80);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          lVar14 = DAT_05ae78f0;
        } while (cVar4 != '\0');
        if (iVar3 == 1) {
          (**(code **)puVar7)();
          piVar1 = (int *)(lVar14 + 0x648);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(int *)(param_1 + 0x79) < *(int *)((long)param_1 + 0x3cc)) {
            *(long *)(param_1[0x7a] + (long)*(int *)(param_1 + 0x79) * 8) = *plVar10;
            *(int *)(param_1 + 0x79) = *(int *)(param_1 + 0x79) + 1;
          }
        }
        *plVar10 = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  pvVar11 = (void *)param_1[0x74];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x74] = 0;
    *(undefined4 *)(param_1 + 0x73) = 0;
  }
  pvVar11 = (void *)param_1[0x76];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x75] = 0;
    param_1[0x76] = 0;
  }
  pvVar11 = (void *)param_1[0x6e];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,pvVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
      }
    }
    param_1[0x6e] = 0;
    *(undefined4 *)(param_1 + 0x6d) = 0;
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 8))();
  }
  if ((long *)param_1[99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[99] + 8))();
  }
  (**(code **)PTR_DAT_04bc8e38)(param_1 + 0xc1);
  param_1[0xba] = &PTR_LAB_04b65b88;
  FUN_038f4940(param_1 + 0xba);
  FUN_038e1a84(param_1 + 0xac);
  FUN_038e1a84(param_1 + 0x65);
  puVar6 = PTR_DAT_04bd1150;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = puVar6 + 0x10;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x62) =
       *(byte *)(param_1 + 0x62) & 0xfc | *(int *)((long)param_1 + 0x304) != 0;
  FUN_038e1a84(param_1 + 0xf);
  FUN_038e1a84(param_1 + 7);
  return;
}

