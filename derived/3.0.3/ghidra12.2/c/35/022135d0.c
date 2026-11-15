
void FUN_022135d0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  char *pcVar13;
  long *plVar14;
  undefined *puVar15;
  undefined4 local_a4;
  undefined **local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [7];
  undefined1 local_85;
  undefined **local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_65;
  
  uVar9 = FUN_0221119c();
  puVar15 = PTR_PTR_04bb2238;
  if ((uVar9 & 1) != 0) {
    local_65 = 0;
    pcVar3 = (char *)((long)&local_70 + 4);
    local_70 = (undefined ***)CONCAT44(local_70._4_4_,8);
    local_80 = (undefined **)(PTR_DAT_04bb6a30 + 0x10);
    local_78 = pcVar3;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    pcVar13 = *(char **)(puVar15 + 8);
    if (pcVar3 != pcVar13) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15);
      lVar10 = 0;
      do {
        if (*(char *)(*(long *)(puVar15 + 8) + lVar10) == '\0') goto LAB_022136a0;
        lVar4 = *(long *)(puVar15 + 8) + lVar10;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_022136a0;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_022136a0;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_022136a0:
      iVar5 = (int)lVar10;
      if ((int)local_70 <= (int)lVar10) {
        iVar5 = (int)local_70 + -1;
      }
      memcpy(pcVar3,pcVar13,(long)iVar5);
      pcVar3[iVar5] = '\0';
    }
    pcVar3 = local_78;
    puVar15 = PTR_DAT_04bb3768;
    ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    local_80 = ppuVar1;
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar14 = *(long **)(*(long *)(param_1 + 0x38) + (long)(*(int *)(param_1 + 0x30) + -1) * 8);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcVar13 = (char *)plVar14[1];
      if (pcVar3 != pcVar13) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        lVar10 = 0;
        do {
          if (*(char *)(plVar14[1] + lVar10) == '\0') goto LAB_02213760;
          lVar4 = plVar14[1] + lVar10;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_02213760;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_02213760;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_02213760:
        iVar5 = (int)lVar10;
        if ((int)local_70 <= (int)lVar10) {
          iVar5 = (int)local_70 + -1;
        }
        memcpy(pcVar3,pcVar13,(long)iVar5);
        pcVar3[iVar5] = '\0';
      }
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar10 = 0;
        do {
          puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x38) + lVar10 * 8);
          (**(code **)*puVar11)(puVar11);
          lVar10 = lVar10 + 1;
          *puVar11 = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 **)(param_1 + 0x40) = puVar11;
        } while (lVar10 < *(int *)(param_1 + 0x30));
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_0252d11c(&local_a4);
    local_a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_98 = "ChocolateVillagerIndex";
    uVar8 = FUN_0274bce0(&local_a4,&local_a0);
    bVar6 = 0;
    uVar12 = 0;
    puVar2 = PTR_DAT_04bb6a30 + 0x10;
    do {
      if ((uVar8 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
        local_85 = 0;
        local_90 = 8;
        local_8c[0] = '\0';
        local_a0 = ppuVar1;
        local_98 = local_8c;
        FUN_021d7c00(&local_a0,uVar12);
        (*(code *)local_a0[3])(&local_a0);
        (*(code *)local_a0[3])(&local_a0);
        pcVar3 = local_98;
        (*(code *)local_80[3])(&local_80);
        if (pcVar3 == local_78) {
LAB_02213830:
          bVar6 = 1;
        }
        else {
          uVar9 = 0;
          bVar7 = true;
          do {
            if (local_98[uVar9] != local_78[uVar9]) break;
            if (local_98[uVar9] == '\0') {
              if (bVar7) goto LAB_02213830;
              break;
            }
            if (local_98[uVar9 + 1] != local_78[uVar9 + 1]) break;
            if (local_98[uVar9 + 1] == '\0') goto LAB_02213830;
            if (local_98[uVar9 + 2] != local_78[uVar9 + 2]) break;
            if (local_98[uVar9 + 2] == '\0') goto LAB_02213830;
            bVar7 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            plVar14 = *(long **)(param_1 + 0x40);
            if (plVar14 != (long *)0x0) {
              *(long *)(param_1 + 0x40) = *plVar14;
            }
            pcVar3 = (char *)((long)plVar14 + 0x14);
            *(undefined1 *)((long)plVar14 + 0x1b) = 0;
            *(undefined4 *)(plVar14 + 2) = 8;
            *plVar14 = (long)puVar2;
            plVar14[1] = (long)pcVar3;
            (*(code *)local_a0[3])(&local_a0);
            pcVar13 = local_98;
            if (pcVar3 != local_98) {
              (*(code *)local_a0[3])(&local_a0);
              lVar10 = 0;
              do {
                if (local_98[lVar10] == '\0') goto LAB_022139cc;
                if (local_98[lVar10 + 1] == '\0') {
                  lVar10 = lVar10 + 1;
                  goto LAB_022139cc;
                }
                if (local_98[lVar10 + 2] == '\0') {
                  lVar10 = lVar10 + 2;
                  goto LAB_022139cc;
                }
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              lVar10 = 0;
LAB_022139cc:
              iVar5 = (int)lVar10;
              if ((int)plVar14[2] <= (int)lVar10) {
                iVar5 = (int)plVar14[2] + -1;
              }
              memcpy(pcVar3,pcVar13,(long)iVar5);
              pcVar3[iVar5] = '\0';
              puVar15 = PTR_DAT_04bb3768;
            }
            *plVar14 = (long)(puVar15 + 0x10);
            if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
              *(long **)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = plVar14;
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 10);
    if (((bool)(*local_78 != '\0' & bVar6)) && (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34))
       ) {
      plVar14 = *(long **)(param_1 + 0x40);
      if (plVar14 != (long *)0x0) {
        *(long *)(param_1 + 0x40) = *plVar14;
      }
      *(undefined1 *)((long)plVar14 + 0x1b) = 0;
      pcVar3 = (char *)((long)plVar14 + 0x14);
      *(undefined4 *)(plVar14 + 2) = 8;
      *plVar14 = (long)(PTR_DAT_04bb6a30 + 0x10);
      plVar14[1] = (long)pcVar3;
      (*(code *)local_80[3])(&local_80);
      pcVar13 = local_78;
      if (pcVar3 != local_78) {
        (*(code *)local_80[3])(&local_80);
        lVar10 = 0;
        do {
          if (local_78[lVar10] == '\0') goto LAB_02213afc;
          if (local_78[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_02213afc;
          }
          if (local_78[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_02213afc;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_02213afc:
        iVar5 = (int)lVar10;
        if ((int)plVar14[2] <= (int)lVar10) {
          iVar5 = (int)plVar14[2] + -1;
        }
        memcpy(pcVar3,pcVar13,(long)iVar5);
        pcVar3[iVar5] = '\0';
      }
      *plVar14 = (long)(puVar15 + 0x10);
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(long **)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = plVar14;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
  }
  local_a4 = 0;
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  local_80 = &PTR_FUN_04a772a8;
  local_78 = (char *)param_1;
  local_70 = &local_a0;
  FUN_03777940(&local_80,&local_a4);
  local_80 = &PTR_LAB_04a772d0;
  local_a4 = 1;
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  local_78 = (char *)param_1;
  local_70 = &local_a0;
  FUN_03777940(&local_80,&local_a4);
  local_80 = &PTR_LAB_04a772f8;
  local_a4 = 2;
  local_78 = (char *)param_1;
  FUN_03777940(&local_80,&local_a4);
  FUN_02214e8c(param_1);
  return;
}

