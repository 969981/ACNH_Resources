
void FUN_03c88000(long *param_1,long *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined *local_88;
  char *local_80;
  int local_78;
  ushort local_74;
  char local_72;
  undefined *local_70;
  undefined8 *puStack_68;
  
  puVar2 = PTR_DAT_04bb2120;
  if (*param_1 == 0) {
    return;
  }
  local_72 = '\0';
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_88,param_2,0xffffffff,0);
  lVar8 = *param_1;
  if (*(long *)(lVar8 + 0x58) != lVar8 + 0x50) {
    lVar17 = (long)*(int *)(lVar8 + 100);
    lVar19 = *(long *)(lVar8 + 0x58) - lVar17;
    do {
      if ((*(long *)(lVar19 + 0x28) == param_3) && (*(int *)(lVar19 + 0x20) == local_78)) {
        uVar1 = *(ushort *)(lVar19 + 0x24);
        uVar15 = (ulong)uVar1;
        if (uVar1 == local_74) {
          (**(code **)(*(long *)(lVar19 + 0x10) + 0x18))(lVar19 + 0x10);
          (**(code **)(*(long *)(lVar19 + 0x10) + 0x18))(lVar19 + 0x10);
          pcVar13 = *(char **)(lVar19 + 0x18);
          (**(code **)(local_88 + 0x18))(&local_88);
          if ((uVar1 == 0) || (pcVar13 == local_80)) goto LAB_03c885dc;
          pcVar13 = local_80;
          pcVar9 = *(char **)(lVar19 + 0x18);
          while( true ) {
            uVar15 = uVar15 - 1;
            if (*pcVar9 != *pcVar13) break;
            if ((*pcVar9 == '\0') || (pcVar13 = pcVar13 + 1, pcVar9 = pcVar9 + 1, uVar15 == 0))
            goto LAB_03c885dc;
          }
        }
      }
      lVar19 = *(long *)(lVar19 + lVar17 + 8) - lVar17;
    } while (lVar19 != (lVar8 + 0x50) - lVar17);
  }
  plVar6 = (long *)PTR_DAT_04bb3350;
  uVar14 = *DAT_05aefb18;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar12 = DAT_05aefb18;
  lVar19 = *(long *)(lVar8 + 0xa8);
  *(undefined8 *)(lVar8 + 0xa8) = uVar14;
  uVar15 = (**(code **)(*(long *)*puVar12 + 0x80))((long *)*puVar12,8);
  puVar3 = PTR_DAT_04bb2698;
  iVar7 = *(int *)(puVar12 + 3);
  if (uVar15 < 0x30 && iVar7 != 0) {
    do {
      if (0 < iVar7) {
        plVar10 = (long *)puVar12[1];
        if (*plVar10 != 0) {
          *(long *)(*plVar10 + 8) = plVar10[1];
        }
        if ((long *)plVar10[1] != (long *)0x0) {
          *(long *)plVar10[1] = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + -1;
        if ((plVar10 != (long *)0x0) &&
           (pvVar11 = (void *)((long)plVar10 - (long)*(int *)((long)puVar12 + 0x1c)),
           pvVar11 != (void *)0x0)) {
          FUN_03c889e0(pvVar11);
          if (*(long *)puVar3 == 0) {
            free(pvVar11);
          }
          else {
            plVar10 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
            }
          }
        }
      }
      *(int *)(puVar12 + 8) = *(int *)(puVar12 + 8) + 1;
      uVar15 = (**(code **)(*(long *)*puVar12 + 0x80))((long *)*puVar12,8);
      iVar7 = *(int *)(puVar12 + 3);
    } while (uVar15 < 0x30 && iVar7 != 0);
  }
  puVar12 = DAT_05aefb18;
  puVar3 = PTR_DAT_04bb2698;
  if (uVar15 < 0x30) {
    pvVar11 = (void *)*param_1;
    plVar10 = (long *)((long)*(int *)((long)DAT_05aefb18 + 0x34) + (long)pvVar11);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(puVar12 + 6) = *(int *)(puVar12 + 6) + -1;
    if (pvVar11 != (void *)0x0) {
      FUN_03c889e0(pvVar11);
      lVar8 = *(long *)PTR_DAT_04bb2698;
joined_r0x03c885a8:
      if (lVar8 == 0) {
        free(pvVar11);
      }
      else {
        plVar10 = (long *)FUN_038cb610(lVar8,pvVar11);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar11);
        }
      }
    }
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      puVar5 = malloc(0x30);
    }
    else {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*plVar6 + 0x68));
      puVar12 = (undefined8 *)(lVar8 + 8);
      if (lVar17 != 0) {
        puVar12 = (undefined8 *)(lVar17 + 0xa8);
      }
      puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x30,8);
    }
    local_70 = PTR_DAT_04bb2020;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[3] = puVar2;
    *(undefined1 *)((long)puVar5 + 0x26) = 0;
    local_70 = local_70 + 0x10;
    plVar16 = puVar5 + 2;
    *plVar16 = (long)local_70;
    puStack_68 = &DAT_0407ebb1;
    FUN_03c5a110(plVar16,&local_70,0xffffffff,1);
    puVar5[5] = param_3;
    lVar8 = *param_1;
    plVar10 = (long *)(lVar8 + 0x50);
    lVar17 = *plVar10;
    plVar6 = (long *)((long)*(int *)(lVar8 + 100) + (long)puVar5);
    *plVar10 = (long)plVar6;
    *plVar6 = lVar17;
    plVar6[1] = (long)plVar10;
    if (lVar17 != 0) {
      *(long **)(lVar17 + 8) = plVar6;
    }
    puVar4 = DAT_05aefb18;
    *(int *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x60) + 1;
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar15 = 0;
    uVar18 = 1;
    do {
      if (*(char *)(param_2[1] + uVar15) == '\0') {
        uVar15 = uVar15 + 1;
LAB_03c88428:
        uVar18 = uVar15 & 0xffffffff;
        break;
      }
      lVar8 = param_2[1] + uVar15;
      if (*(char *)(lVar8 + 1) == '\0') {
        uVar15 = uVar15 + 2;
        goto LAB_03c88428;
      }
      uVar15 = uVar15 + 3;
      if (*(char *)(lVar8 + 2) == '\0') goto LAB_03c88428;
    } while (uVar15 != 0x80001);
    while( true ) {
      uVar15 = (**(code **)(*(long *)*puVar4 + 0x80))((long *)*puVar4,8);
      puVar12 = DAT_05aefb18;
      if (uVar18 <= uVar15 || *(int *)(puVar4 + 3) == 0) break;
      if (0 < *(int *)(puVar4 + 3)) {
        plVar6 = (long *)puVar4[1];
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
        if ((plVar6 != (long *)0x0) &&
           (pvVar11 = (void *)((long)plVar6 - (long)*(int *)((long)puVar4 + 0x1c)),
           pvVar11 != (void *)0x0)) {
          FUN_03c889e0(pvVar11);
          if (*(long *)puVar3 == 0) {
            free(pvVar11);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
            }
          }
        }
      }
      *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + 1;
    }
    if (uVar18 <= uVar15) {
      if (*(char *)((long)puVar5 + 0x26) != '\0') {
        (**(code **)(puVar5[2] + 0x18))(plVar16);
        pvVar11 = (void *)puVar5[3];
        if (pvVar11 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar11);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
            }
          }
        }
        *(undefined1 *)((long)puVar5 + 0x26) = 0;
      }
      FUN_03c5a110(plVar16,param_2,0xffffffff,2);
      plVar6 = (long *)PTR_DAT_04bb3350;
      goto joined_r0x03c88680;
    }
    pvVar11 = (void *)*param_1;
    plVar10 = (long *)((long)*(int *)((long)DAT_05aefb18 + 0x34) + (long)pvVar11);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    plVar6 = (long *)PTR_DAT_04bb3350;
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(puVar12 + 6) = *(int *)(puVar12 + 6) + -1;
    if (pvVar11 != (void *)0x0) {
      FUN_03c889e0(pvVar11);
      lVar8 = *(long *)puVar3;
      goto joined_r0x03c885a8;
    }
  }
  *(int *)(puVar12 + 8) = *(int *)(puVar12 + 8) + 1;
  *param_1 = 0;
joined_r0x03c88680:
  if (lVar19 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar6 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar19;
  }
LAB_03c885dc:
  if ((local_72 != '\0') &&
     ((**(code **)(local_88 + 0x18))(&local_88), pcVar13 = local_80, local_80 != (char *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_80);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_80);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pcVar13);
      }
    }
  }
  return;
}

