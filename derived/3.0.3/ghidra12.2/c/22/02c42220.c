
void FUN_02c42220(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  puVar15 = PTR_DAT_04bb2a08;
  if (*(int *)(param_1 + 0x2d8) < 0) {
    return;
  }
  local_c0 = 0x20;
  local_9d = 0;
  local_d0 = PTR_DAT_04bb2a08 + 0x10;
  local_c8 = local_bc;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar13 = (undefined1 *)param_2[1];
  if (local_bc != puVar13) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02c422f0;
      lVar8 = param_2[1] + lVar6;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02c422f0;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02c422f0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02c422f0:
    iVar12 = (int)lVar6;
    if (local_c0 <= (int)lVar6) {
      iVar12 = local_c0 + -1;
    }
    memcpy(local_bc,puVar13,(long)iVar12);
    local_bc[iVar12] = 0;
  }
  puVar3 = PTR_DAT_04bb2230;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_d0 = puVar1;
  if (*(int *)(param_1 + 0x2a8) < 1) {
    iVar12 = -1;
  }
  else {
    iVar12 = 0;
    do {
      local_65 = 0;
      local_88 = 0x20;
      local_84[0] = 0;
      local_98 = puVar1;
      local_90 = local_84;
      FUN_033bf650(*(undefined8 *)(*(long *)puVar3 + 0x30),&local_98,iVar12);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      puVar13 = local_c8;
      (**(code **)(local_98 + 0x18))(&local_98);
      if (puVar13 == local_90) goto LAB_02c42450;
      uVar10 = 0;
      bVar4 = true;
      do {
        if (local_c8[uVar10] != local_90[uVar10]) break;
        if (local_c8[uVar10] == '\0') {
          if (bVar4) goto LAB_02c42450;
          break;
        }
        if (local_c8[uVar10 + 1] != local_90[uVar10 + 1]) break;
        if (local_c8[uVar10 + 1] == '\0') goto LAB_02c42450;
        if (local_c8[uVar10 + 2] != local_90[uVar10 + 2]) break;
        if (local_c8[uVar10 + 2] == '\0') goto LAB_02c42450;
        bVar4 = uVar10 < 0x7fffe;
        uVar10 = uVar10 + 3;
      } while (uVar10 != 0x80001);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x2a8));
    iVar12 = -1;
LAB_02c42450:
    puVar15 = PTR_DAT_04bb2a08;
  }
  puVar1 = PTR_DAT_04bb2028;
  iVar5 = *(int *)(param_1 + 0x2d8);
  *(int *)(param_1 + 0x2e4) = iVar12;
  if (iVar12 == iVar5) {
    return;
  }
  lVar6 = *(long *)puVar3;
  uVar14 = *(undefined8 *)(lVar6 + 0x30);
  if (iVar12 < 0) {
    if (-1 < iVar5) {
      uVar10 = FUN_033c0734(uVar14,iVar5,param_3 & 1);
      if ((uVar10 & 1) == 0) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x2d8);
    }
    FUN_033c08e8(uVar14,iVar5,param_2,param_3 & 1);
    local_65 = 0;
    iVar12 = *(int *)(param_1 + 0x2d8);
    local_88 = 0x20;
    local_98 = puVar15 + 0x10;
    local_90 = local_84;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar13 = (undefined1 *)param_2[1];
    if (local_84 != puVar13) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02c426a8;
        lVar8 = param_2[1] + lVar6;
        if (*(char *)(lVar8 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_02c426a8;
        }
        if (*(char *)(lVar8 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_02c426a8;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_02c426a8:
      iVar5 = (int)lVar6;
      if (local_88 <= (int)lVar6) {
        iVar5 = local_88 + -1;
      }
      memcpy(local_84,puVar13,(long)iVar5);
      local_84[iVar5] = 0;
    }
    local_98 = puVar1 + 0x10;
    if (*(char *)(param_1 + 0x2ea) == '\0') {
      puVar7 = *(undefined8 **)(param_1 + 0x2c0);
      iVar5 = *(int *)*puVar7;
      if (iVar12 < iVar5) {
        uVar14 = 0;
        iVar9 = iVar5;
      }
      else {
        iVar9 = *(int *)puVar7[1];
        iVar5 = iVar9 + iVar5;
        if (iVar12 < iVar5) {
          uVar14 = 1;
        }
        else {
          iVar9 = *(int *)puVar7[2];
          iVar5 = iVar9 + iVar5;
          if (iVar12 < iVar5) {
            uVar14 = 2;
          }
          else {
            iVar9 = *(int *)puVar7[3];
            if (iVar9 + iVar5 <= iVar12) goto LAB_02c42818;
            uVar14 = 3;
          }
        }
      }
      if (iVar9 == 1) {
        FUN_02c48e1c(param_1,*(undefined4 *)(param_1 + 0x244),uVar14,&local_98);
      }
    }
LAB_02c42818:
    lVar6 = **(long **)(param_1 + 0x230);
    goto LAB_02c42820;
  }
  local_65 = 0;
  local_90 = local_84;
  local_98 = puVar1 + 0x10;
  local_88 = 0x20;
  local_84[0] = 0;
  FUN_033bf650(*(undefined8 *)(lVar6 + 0x30),&local_98);
  uVar10 = FUN_033c0a80(uVar14,*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e4));
  if ((uVar10 & 1) == 0) {
    return;
  }
  FUN_033c0c14(uVar14,*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e4));
  local_9d = 0;
  iVar12 = *(int *)(param_1 + 0x2d8);
  local_d0 = puVar15 + 0x10;
  local_c0 = 0x20;
  local_c8 = local_bc;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar13 = (undefined1 *)param_2[1];
  if (local_bc != puVar13) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02c4261c;
      lVar8 = param_2[1] + lVar6;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02c4261c;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02c4261c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02c4261c:
    iVar5 = (int)lVar6;
    if (local_c0 <= (int)lVar6) {
      iVar5 = local_c0 + -1;
    }
    memcpy(local_bc,puVar13,(long)iVar5);
    local_bc[iVar5] = 0;
  }
  local_d0 = puVar1 + 0x10;
  if (*(char *)(param_1 + 0x2ea) == '\0') {
    puVar7 = *(undefined8 **)(param_1 + 0x2c0);
    iVar5 = *(int *)*puVar7;
    if (iVar12 < iVar5) {
      uVar14 = 0;
      iVar9 = iVar5;
LAB_02c4276c:
      if (iVar9 == 1) {
        FUN_02c48e1c(param_1,*(undefined4 *)(param_1 + 0x244),uVar14,&local_d0);
        if (*(char *)(param_1 + 0x2ea) != '\0') goto LAB_02c42654;
        puVar7 = *(undefined8 **)(param_1 + 0x2c0);
      }
    }
    else {
      iVar9 = *(int *)puVar7[1];
      iVar5 = iVar9 + iVar5;
      if (iVar12 < iVar5) {
        uVar14 = 1;
        goto LAB_02c4276c;
      }
      iVar9 = *(int *)puVar7[2];
      iVar5 = iVar9 + iVar5;
      if (iVar12 < iVar5) {
        uVar14 = 2;
        goto LAB_02c4276c;
      }
      iVar9 = *(int *)puVar7[3];
      if (iVar12 < iVar9 + iVar5) {
        uVar14 = 3;
        goto LAB_02c4276c;
      }
    }
    iVar5 = *(int *)(param_1 + 0x2e4);
    iVar12 = *(int *)*puVar7;
    if (iVar5 < iVar12) {
      uVar14 = 0;
      iVar9 = iVar12;
    }
    else {
      iVar9 = *(int *)puVar7[1];
      iVar12 = iVar9 + iVar12;
      if (iVar5 < iVar12) {
        uVar14 = 1;
      }
      else {
        iVar9 = *(int *)puVar7[2];
        iVar12 = iVar9 + iVar12;
        if (iVar5 < iVar12) {
          uVar14 = 2;
        }
        else {
          iVar9 = *(int *)puVar7[3];
          if (iVar9 + iVar12 <= iVar5) goto LAB_02c42654;
          uVar14 = 3;
        }
      }
    }
    if (iVar9 == 1) {
      FUN_02c48e1c(param_1,*(undefined4 *)(param_1 + 0x244),uVar14,&local_98);
    }
  }
LAB_02c42654:
  lVar6 = *(long *)(*(long *)(param_1 + 0x230) + 8);
LAB_02c42820:
  if (*(long *)(lVar6 + 0x18) == 0 && *(long *)(lVar6 + 0x10) == 0) {
    lVar8 = *(long *)(lVar6 + 0x38);
    plVar2 = (long *)(*(int *)(lVar8 + 0x54) + lVar6);
    plVar11 = (long *)(lVar8 + 0x40);
    lVar6 = *plVar11;
    *plVar11 = (long)plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)plVar11;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) + 1;
  }
  return;
}

