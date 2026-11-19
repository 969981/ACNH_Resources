
void FUN_03baf910(char *param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  
  if (*param_1 != '\0') {
    return;
  }
  param_1[0x1c] = 'P';
  puVar18 = PTR_DAT_04bc9388;
  plVar8 = (long *)PTR_DAT_04bc3ee8;
  puVar5 = PTR_DAT_04bb2698;
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  pcVar1 = param_1 + 8;
  lVar11 = *(long *)PTR_DAT_04bc3ee8;
  plVar6 = *(long **)(lVar11 + 0x108);
  if (plVar6 != (long *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
    }
    plVar6 = puVar7 + 1;
    *plVar6 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_04b7a5b8;
    *(undefined8 **)(param_1 + 0x20) = puVar7;
    lVar11 = *plVar6;
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != lVar11)) {
      lVar13 = (long)*(int *)(lVar11 + 0x14);
      lVar14 = *(long *)(lVar11 + 8) - lVar13;
      do {
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != lVar11 - lVar13);
    }
    *plVar6 = (long)pcVar1;
    if (*(char **)(param_1 + 0x10) != pcVar1) {
      lVar14 = (long)*(int *)(param_1 + 0x1c);
      lVar11 = (long)*(char **)(param_1 + 0x10) - lVar14;
      do {
        lVar11 = *(long *)(lVar11 + lVar14 + 8) - lVar14;
      } while (lVar11 != (long)pcVar1 - lVar14);
    }
    lVar14 = *(long *)(param_1 + 0x20);
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      plVar6 = malloc(0x18);
LAB_03bafab0:
      puVar7 = malloc(0x20);
    }
    else {
      plVar15 = *(long **)(*plVar8 + 0x108);
      plVar8 = plVar15;
      if (plVar15 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar11 + 8);
        if (lVar13 != 0) {
          plVar8 = (long *)(lVar13 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_03bafa70;
        lVar11 = *(long *)puVar5;
        plVar6 = (long *)0x0;
        plVar8 = (long *)PTR_DAT_04bc3ee8;
        if (lVar11 == 0) goto LAB_03bafab0;
LAB_03bafad0:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar11 + 8);
        if (lVar13 != 0) {
          puVar7 = (undefined8 *)(lVar13 + 0xa8);
        }
        plVar15 = (long *)*puVar7;
      }
      else {
LAB_03bafa70:
        plVar6 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
        lVar11 = *(long *)puVar5;
        if (lVar11 == 0) {
          plVar8 = (long *)PTR_DAT_04bc3ee8;
          goto LAB_03bafab0;
        }
        if (plVar15 == (long *)0x0) goto LAB_03bafad0;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x20,8);
      plVar8 = (long *)PTR_DAT_04bc3ee8;
    }
    *(undefined8 *)((long)puVar7 + 0x17) = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    plVar6[1] = (long)puVar7;
    *(undefined4 *)(plVar6 + 2) = 0x20;
    *(undefined1 *)((long)puVar7 + 0x1f) = 0;
    *plVar6 = (long)(puVar18 + 0x10);
    *(undefined1 *)plVar6[1] = 0;
    lVar11 = *plVar8;
    *(long **)(lVar14 + 0x10) = plVar6;
  }
  param_1[0x3c] = 'P';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  pcVar2 = param_1 + 0x28;
  plVar6 = *(long **)(lVar11 + 0x108);
  if (plVar6 != (long *)0x0) {
    if (*(long *)puVar5 == 0) {
      puVar7 = malloc(0x20);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
    }
    plVar6 = puVar7 + 1;
    *plVar6 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_04b7a588;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined8 **)(param_1 + 0x40) = puVar7;
    lVar11 = *plVar6;
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != lVar11)) {
      lVar13 = (long)*(int *)(lVar11 + 0x14);
      lVar14 = *(long *)(lVar11 + 8) - lVar13;
      do {
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != lVar11 - lVar13);
    }
    *plVar6 = (long)pcVar2;
    if (*(char **)(param_1 + 0x30) != pcVar2) {
      lVar14 = (long)*(int *)(param_1 + 0x3c);
      lVar11 = (long)*(char **)(param_1 + 0x30) - lVar14;
      do {
        lVar11 = *(long *)(lVar11 + lVar14 + 8) - lVar14;
      } while (lVar11 != (long)pcVar2 - lVar14);
    }
    lVar14 = *(long *)(param_1 + 0x40);
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      plVar6 = malloc(0x18);
LAB_03bafca0:
      puVar7 = malloc(0x20);
    }
    else {
      plVar15 = *(long **)(*plVar8 + 0x108);
      plVar8 = plVar15;
      if (plVar15 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar11 + 8);
        if (lVar13 != 0) {
          plVar8 = (long *)(lVar13 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_03bafc60;
        lVar11 = *(long *)puVar5;
        plVar6 = (long *)0x0;
        plVar8 = (long *)PTR_DAT_04bc3ee8;
        if (lVar11 == 0) goto LAB_03bafca0;
LAB_03bafcc0:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar11 + 8);
        if (lVar13 != 0) {
          puVar7 = (undefined8 *)(lVar13 + 0xa8);
        }
        plVar15 = (long *)*puVar7;
      }
      else {
LAB_03bafc60:
        plVar6 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
        lVar11 = *(long *)puVar5;
        if (lVar11 == 0) {
          plVar8 = (long *)PTR_DAT_04bc3ee8;
          goto LAB_03bafca0;
        }
        if (plVar15 == (long *)0x0) goto LAB_03bafcc0;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x20,8);
      plVar8 = (long *)PTR_DAT_04bc3ee8;
    }
    *(undefined8 *)((long)puVar7 + 0x17) = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    plVar6[1] = (long)puVar7;
    *(undefined4 *)(plVar6 + 2) = 0x20;
    *(undefined1 *)((long)puVar7 + 0x1f) = 0;
    *plVar6 = (long)(puVar18 + 0x10);
    *(undefined1 *)plVar6[1] = 0;
    lVar11 = *plVar8;
    *(long **)(lVar14 + 0x10) = plVar6;
  }
  param_1[0x5c] = '`';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  plVar6 = *(long **)(lVar11 + 0x108);
  if (plVar6 != (long *)0x0) {
    pcVar3 = param_1 + 0x48;
    if (*(long *)puVar5 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
    }
    plVar6 = puVar7 + 1;
    *plVar6 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_04b7a5e8;
    *(undefined8 **)(param_1 + 0x60) = puVar7;
    lVar11 = *plVar6;
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != lVar11)) {
      lVar13 = (long)*(int *)(lVar11 + 0x14);
      lVar14 = *(long *)(lVar11 + 8) - lVar13;
      do {
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != lVar11 - lVar13);
    }
    *plVar6 = (long)pcVar3;
    if (*(char **)(param_1 + 0x50) != pcVar3) {
      lVar14 = (long)*(int *)(param_1 + 0x5c);
      lVar11 = (long)*(char **)(param_1 + 0x50) - lVar14;
      do {
        lVar11 = *(long *)(lVar11 + lVar14 + 8) - lVar14;
      } while (lVar11 != (long)pcVar3 - lVar14);
    }
    lVar14 = *(long *)(param_1 + 0x60);
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      plVar6 = malloc(0x18);
LAB_03bafe90:
      puVar7 = malloc(0x20);
      puVar18 = PTR_DAT_04bc9388;
    }
    else {
      plVar15 = *(long **)(*plVar8 + 0x108);
      plVar8 = plVar15;
      if (plVar15 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar11 + 8);
        if (lVar13 != 0) {
          plVar8 = (long *)(lVar13 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_03bafe50;
        lVar11 = *(long *)puVar5;
        plVar6 = (long *)0x0;
        plVar8 = (long *)PTR_DAT_04bc3ee8;
        if (lVar11 == 0) goto LAB_03bafe90;
LAB_03bafeb8:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar11 + 8);
        if (lVar13 != 0) {
          puVar7 = (undefined8 *)(lVar13 + 0xa8);
        }
        plVar15 = (long *)*puVar7;
      }
      else {
LAB_03bafe50:
        plVar6 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
        lVar11 = *(long *)puVar5;
        if (lVar11 == 0) {
          plVar8 = (long *)PTR_DAT_04bc3ee8;
          goto LAB_03bafe90;
        }
        if (plVar15 == (long *)0x0) goto LAB_03bafeb8;
      }
      puVar18 = PTR_DAT_04bc9388;
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x20,8);
      plVar8 = (long *)PTR_DAT_04bc3ee8;
    }
    *(undefined8 *)((long)puVar7 + 0x17) = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    plVar6[1] = (long)puVar7;
    *(undefined4 *)(plVar6 + 2) = 0x20;
    *(undefined1 *)((long)puVar7 + 0x1f) = 0;
    *plVar6 = (long)(puVar18 + 0x10);
    *(undefined1 *)plVar6[1] = 0;
    lVar11 = *plVar8;
    *(long **)(lVar14 + 0x10) = plVar6;
  }
  param_1[0x7c] = '`';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  plVar6 = *(long **)(lVar11 + 0x108);
  if (plVar6 != (long *)0x0) {
    pcVar3 = param_1 + 0x68;
    if (*(long *)puVar5 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
    }
    plVar6 = puVar7 + 1;
    *plVar6 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_04b7a618;
    *(undefined8 **)(param_1 + 0x80) = puVar7;
    lVar11 = *plVar6;
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != lVar11)) {
      lVar13 = (long)*(int *)(lVar11 + 0x14);
      lVar14 = *(long *)(lVar11 + 8) - lVar13;
      do {
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != lVar11 - lVar13);
    }
    *plVar6 = (long)pcVar3;
    if (*(char **)(param_1 + 0x70) != pcVar3) {
      lVar14 = (long)*(int *)(param_1 + 0x7c);
      lVar11 = (long)*(char **)(param_1 + 0x70) - lVar14;
      do {
        lVar11 = *(long *)(lVar11 + lVar14 + 8) - lVar14;
      } while (lVar11 != (long)pcVar3 - lVar14);
    }
    lVar14 = *(long *)(param_1 + 0x80);
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      plVar8 = malloc(0x18);
LAB_03bb0080:
      puVar7 = malloc(0x20);
      puVar18 = PTR_DAT_04bc9388;
    }
    else {
      plVar6 = *(long **)(*plVar8 + 0x108);
      plVar8 = plVar6;
      if (plVar6 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar11 + 8);
        if (lVar13 != 0) {
          plVar8 = (long *)(lVar13 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_03bb004c;
        lVar11 = *(long *)puVar5;
        plVar8 = (long *)0x0;
        if (lVar11 == 0) goto LAB_03bb0080;
LAB_03bb00a0:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar11 + 8);
        if (lVar13 != 0) {
          puVar7 = (undefined8 *)(lVar13 + 0xa8);
        }
        plVar6 = (long *)*puVar7;
      }
      else {
LAB_03bb004c:
        plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
        lVar11 = *(long *)puVar5;
        if (lVar11 == 0) goto LAB_03bb0080;
        if (plVar6 == (long *)0x0) goto LAB_03bb00a0;
      }
      puVar18 = PTR_DAT_04bc9388;
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
    }
    *(undefined8 *)((long)puVar7 + 0x17) = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    plVar8[1] = (long)puVar7;
    *(undefined4 *)(plVar8 + 2) = 0x20;
    *(undefined1 *)((long)puVar7 + 0x1f) = 0;
    *plVar8 = (long)(puVar18 + 0x10);
    *(undefined1 *)plVar8[1] = 0;
    *(long **)(lVar14 + 0x10) = plVar8;
  }
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar14 != 0) {
        plVar8 = (long *)(lVar14 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
  *(undefined1 *)((long)plVar8 + 0x33) = 0;
  *(undefined1 *)((long)plVar8 + 0x14) = 0;
  *(undefined4 *)(plVar8 + 2) = 0x20;
  *plVar8 = (long)(PTR_DAT_04bb2028 + 0x10);
  plVar8[1] = (long)plVar8 + 0x14;
  *(long **)(param_1 + 0x90) = plVar8;
  pvVar16 = (void *)plVar8[1];
  (**(code **)(DAT_05aec020 + 0x18))(&DAT_05aec020);
  pvVar9 = DAT_05aec028;
  if (pvVar16 != DAT_05aec028) {
    (**(code **)(DAT_05aec020 + 0x18))(&DAT_05aec020);
    lVar11 = 0;
    do {
      if (*(char *)((long)DAT_05aec028 + lVar11) == '\0') goto LAB_03bb0220;
      if (*(char *)((long)DAT_05aec028 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03bb0220;
      }
      if (*(char *)((long)DAT_05aec028 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03bb0220;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03bb0220:
    iVar4 = (int)lVar11;
    if ((int)plVar8[2] <= (int)lVar11) {
      iVar4 = (int)plVar8[2] + -1;
    }
    memcpy(pvVar16,pvVar9,(long)iVar4);
    *(undefined1 *)((long)pvVar16 + (long)iVar4) = 0;
  }
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x110);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar14 != 0) {
        plVar8 = (long *)(lVar14 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_03bb02a8;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x110,8);
  }
LAB_03bb02a8:
  FUN_03bb43e0(pvVar9,*(undefined8 *)(param_1 + 0x90));
  *(undefined4 *)((long)pvVar9 + 0x68) = 0x3fc00000;
  if (*(long **)((long)pvVar9 + 0x60) == (long *)0x0) {
    *(undefined4 *)((long)pvVar9 + 0x6c) = 0;
  }
  else {
    uVar19 = (**(code **)(**(long **)((long)pvVar9 + 0x60) + 0x18))
                       (0x3fc00000,*(undefined4 *)((long)pvVar9 + 0x6c),
                        *(undefined4 *)((long)pvVar9 + 0x70));
    *(undefined4 *)((long)pvVar9 + 0x80) = uVar19;
    *(undefined4 *)((long)pvVar9 + 0x6c) = 0;
    if (*(long **)((long)pvVar9 + 0x60) != (long *)0x0) {
      uVar19 = (**(code **)(**(long **)((long)pvVar9 + 0x60) + 0x18))
                         (*(undefined4 *)((long)pvVar9 + 0x68),0,
                          *(undefined4 *)((long)pvVar9 + 0x70));
      *(undefined4 *)((long)pvVar9 + 0x80) = uVar19;
      *(undefined4 *)((long)pvVar9 + 0x70) = 0x3f800000;
      if (*(long **)((long)pvVar9 + 0x60) != (long *)0x0) {
        uVar19 = (**(code **)(**(long **)((long)pvVar9 + 0x60) + 0x18))
                           (*(undefined4 *)((long)pvVar9 + 0x68),
                            *(undefined4 *)((long)pvVar9 + 0x6c),0x3f800000);
        *(undefined4 *)((long)pvVar9 + 0x80) = uVar19;
      }
      goto LAB_03bb033c;
    }
  }
  *(undefined4 *)((long)pvVar9 + 0x70) = 0x3f800000;
LAB_03bb033c:
  FUN_03bb46e8(pvVar9,1,param_2);
  plVar8 = (long *)((long)*(int *)(param_1 + 0x3c) + (long)pvVar9);
  lVar11 = *(long *)(param_1 + 0x28);
  *(long **)(param_1 + 0x28) = plVar8;
  *plVar8 = lVar11;
  plVar8[1] = (long)pcVar2;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar8;
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (*(char **)(param_1 + 0x10) != pcVar1) {
    lVar14 = (long)*(int *)(param_1 + 0x1c);
    lVar11 = (long)*(char **)(param_1 + 0x10) - lVar14;
    do {
      FUN_03bbf760(lVar11);
      lVar11 = *(long *)(lVar11 + lVar14 + 8) - lVar14;
    } while (lVar11 != (long)pcVar1 - lVar14);
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar11 != 0)) &&
     (*(long *)(lVar11 + 8) != lVar11)) {
    lVar12 = (long)*(int *)(lVar11 + 0x14);
    lVar13 = *(long *)(lVar11 + 8) - lVar12;
    lVar14 = lVar13;
    do {
      lVar14 = *(long *)(lVar14 + lVar12 + 8) + -lVar12;
    } while (lVar14 != lVar11 - lVar12);
    do {
      lVar13 = *(long *)(lVar13 + lVar12 + 8) + -lVar12;
    } while (lVar13 != lVar11 - lVar12);
  }
  if (((*(long *)(param_1 + 0x40) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8), lVar11 != 0)) &&
     (*(long *)(lVar11 + 8) != lVar11)) {
    lVar12 = (long)*(int *)(lVar11 + 0x14);
    lVar13 = *(long *)(lVar11 + 8) - lVar12;
    lVar14 = lVar13;
    do {
      lVar14 = *(long *)(lVar14 + lVar12 + 8) + -lVar12;
    } while (lVar14 != lVar11 - lVar12);
    do {
      lVar13 = *(long *)(lVar13 + lVar12 + 8) + -lVar12;
    } while (lVar13 != lVar11 - lVar12);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    pvVar16 = malloc(0x170);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar14 != 0) {
        plVar8 = (long *)(lVar14 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar16 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x170,8);
  }
  FUN_03bbe490(pvVar16,uVar17);
  uVar10 = FUN_03bbdecc(pvVar16,param_2);
  if ((uVar10 & 1) == 0) {
    pvVar16 = (void *)0x0;
  }
  FUN_03bbe6f0(pvVar16,0,pvVar9);
  plVar8 = (long *)((long)*(int *)(param_1 + 0x1c) + (long)pvVar16);
  lVar11 = *(long *)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar8;
  *plVar8 = lVar11;
  plVar8[1] = (long)pcVar1;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar8;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar11 != 0)) &&
     (*(long *)(lVar11 + 8) != lVar11)) {
    lVar12 = (long)*(int *)(lVar11 + 0x14);
    lVar13 = *(long *)(lVar11 + 8) - lVar12;
    lVar14 = lVar13;
    do {
      lVar14 = *(long *)(lVar14 + lVar12 + 8) + -lVar12;
    } while (lVar14 != lVar11 - lVar12);
    do {
      lVar13 = *(long *)(lVar13 + lVar12 + 8) + -lVar12;
    } while (lVar13 != lVar11 - lVar12);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar17 = FUN_03baddf0(param_1);
    *(undefined8 *)(param_1 + 0x88) = uVar17;
  }
  *param_1 = '\x01';
  return;
}

