
void FUN_02a04570(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
  puVar4 = PTR_DAT_04bb3350;
  if ((char)param_1[1] == '\0') {
    return;
  }
  lVar11 = param_1[3];
  if (lVar11 == 0) {
    lVar14 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar11;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_02a035a4(param_1 + 0xe);
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = param_1[0xd];
  if ((int)lVar11 != 0) {
    iVar15 = 0;
    do {
      iVar7 = (int)param_1[0xc];
      iVar8 = *(int *)((long)param_1 + 100) + iVar15;
      lVar5 = param_1[0xb];
      iVar1 = 0;
      if (iVar7 <= iVar8) {
        iVar1 = iVar7;
      }
      lVar10 = *(long *)(lVar5 + (long)(iVar8 - iVar1) * 8);
      lVar12 = *(long *)(lVar10 + 8);
      if (lVar12 != lVar10) {
        do {
          if (*(long **)(lVar12 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -8) + 0x18))();
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 + -8 != lVar10 + -8);
        iVar7 = (int)param_1[0xc];
        iVar8 = *(int *)((long)param_1 + 100) + iVar15;
        lVar5 = param_1[0xb];
      }
      iVar1 = 0;
      if (iVar7 <= iVar8) {
        iVar1 = iVar7;
      }
      plVar16 = *(long **)(lVar5 + (long)(iVar8 - iVar1) * 8);
      pvVar13 = (void *)plVar16[4];
      if (pvVar13 != (void *)0x0) {
        plVar6 = (long *)plVar16[1];
        if ((long *)plVar16[1] == plVar16) {
LAB_02a04708:
          if (*(long *)puVar3 == 0) {
            free(pvVar13);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar13);
            }
          }
        }
        else {
          do {
            plVar2 = (long *)plVar6[1];
            plVar9 = plVar2;
            if (*plVar6 != 0) {
              *(long **)(*plVar6 + 8) = plVar2;
              plVar9 = (long *)plVar6[1];
            }
            if (plVar9 != (long *)0x0) {
              *plVar9 = *plVar6;
            }
            *plVar6 = 0;
            plVar6[1] = 0;
            *(int *)(plVar16 + 2) = (int)plVar16[2] + -1;
            plVar6[-1] = plVar16[3];
            plVar16[3] = (long)(plVar6 + -1);
            plVar6 = plVar2;
          } while (plVar2 != plVar16);
          pvVar13 = (void *)plVar16[4];
          if (pvVar13 != (void *)0x0) goto LAB_02a04708;
        }
        *(undefined4 *)(plVar16 + 5) = 0;
        plVar16[3] = 0;
        plVar16[4] = 0;
        iVar7 = (int)param_1[0xc];
        lVar5 = param_1[0xb];
        iVar8 = *(int *)((long)param_1 + 100) + iVar15;
      }
      iVar1 = 0;
      if (iVar7 <= iVar8) {
        iVar1 = iVar7;
      }
      pvVar13 = (void *)(lVar5 + (long)(iVar8 - iVar1) * 8);
      if (*(long *)puVar3 == 0) {
        free(pvVar13);
      }
      else if ((lVar5 != 0) &&
              (plVar16 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x38))(plVar16,pvVar13);
      }
      iVar15 = iVar15 + 1;
    } while ((int)lVar11 != iVar15);
  }
  pvVar13 = (void *)param_1[0xb];
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar13);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,pvVar13);
      }
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  plVar6 = (long *)param_1[6];
  plVar16 = param_1 + 5;
  if (plVar6 != plVar16) {
    do {
      if ((long *)plVar6[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[-1] + 0x18))();
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 + -1 != param_1 + 4);
  }
  pvVar13 = (void *)param_1[9];
  if (pvVar13 == (void *)0x0) goto LAB_02a048b0;
  plVar6 = (long *)param_1[6];
  if ((long *)param_1[6] == plVar16) {
LAB_02a04878:
    if (*(long *)puVar3 == 0) {
      free(pvVar13);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)puVar3,pvVar13);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,pvVar13);
      }
    }
  }
  else {
    do {
      plVar2 = (long *)plVar6[1];
      plVar9 = plVar2;
      if (*plVar6 != 0) {
        *(long **)(*plVar6 + 8) = plVar2;
        plVar9 = (long *)plVar6[1];
      }
      if (plVar9 != (long *)0x0) {
        *plVar9 = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(param_1 + 7) = (int)param_1[7] + -1;
      plVar6[-1] = param_1[8];
      param_1[8] = (long)(plVar6 + -1);
      plVar6 = plVar2;
    } while (plVar2 != plVar16);
    pvVar13 = (void *)param_1[9];
    if (pvVar13 != (void *)0x0) goto LAB_02a04878;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
LAB_02a048b0:
  if (lVar14 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar14;
  }
  param_1[3] = 0;
  return;
}

