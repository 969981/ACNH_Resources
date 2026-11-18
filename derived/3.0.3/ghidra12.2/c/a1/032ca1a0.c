
undefined8 FUN_032ca1a0(long param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bb2028;
  puVar7 = PTR_DAT_04bb2020;
  if (*(long **)(param_1 + 0x650) == (long *)0x0) {
LAB_032ca334:
    puVar7 = PTR_DAT_04bb2028;
    if (*(int *)(param_1 + 0x648) != 0) {
      uVar15 = 0;
      puVar1 = (undefined8 *)(param_1 + 8);
      puVar2 = PTR_DAT_04bb2a08 + 0x10;
      puVar3 = PTR_DAT_04bb2028 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar5 = uVar15;
        if (99 < uVar15) {
          uVar5 = 0;
        }
        puVar14 = puVar1 + uVar15;
        if (99 < uVar15) {
          puVar14 = puVar1;
        }
        pcVar9 = (char *)(**(code **)(*(long *)puVar1[uVar5] + 0x20))();
        local_88 = 0x20;
        local_65 = 0;
        local_90 = local_84;
        if (local_84 != pcVar9) {
          lVar12 = 0;
          do {
            if (pcVar9[lVar12] == '\0') {
LAB_032ca420:
              iVar11 = (int)lVar12;
joined_r0x032ca424:
              if (0x1f < iVar11) {
                iVar11 = 0x1f;
              }
              goto LAB_032ca42c;
            }
            if (pcVar9[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_032ca420;
            }
            if (pcVar9[lVar12 + 2] == '\0') {
              iVar11 = (int)lVar12 + 2;
              goto joined_r0x032ca424;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          iVar11 = 0;
LAB_032ca42c:
          local_98 = puVar2;
          memcpy(local_84,pcVar9,(long)iVar11);
          local_84[iVar11] = '\0';
        }
        local_90[(long)local_88 + -1] = '\0';
        local_a8 = puVar4;
        local_a0 = param_2;
        local_98 = puVar3;
        (**(code **)(puVar7 + 0x28))(&local_98);
        pcVar9 = local_90;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar9 == local_a0) {
LAB_032ca50c:
          uVar10 = puVar1[uVar5];
          goto LAB_032ca710;
        }
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_90[uVar13] != local_a0[uVar13]) break;
          if (local_90[uVar13] == '\0') {
            if (bVar8) goto LAB_032ca50c;
            break;
          }
          if (local_90[uVar13 + 1] != local_a0[uVar13 + 1]) break;
          if (local_90[uVar13 + 1] == '\0') goto LAB_032ca50c;
          if (local_90[uVar13 + 2] != local_a0[uVar13 + 2]) break;
          if (local_90[uVar13 + 2] == '\0') goto LAB_032ca50c;
          bVar8 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0x648));
    }
    puVar7 = PTR_DAT_04bb2028;
    if (*(int *)(param_1 + 0x64c) == 0) {
      uVar10 = 0;
    }
    else {
      uVar15 = 0;
      puVar1 = (undefined8 *)(param_1 + 0x328);
      puVar2 = PTR_DAT_04bb2a08 + 0x10;
      puVar3 = PTR_DAT_04bb2028 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar5 = uVar15;
        if (99 < uVar15) {
          uVar5 = 0;
        }
        puVar14 = puVar1 + uVar15;
        if (99 < uVar15) {
          puVar14 = puVar1;
        }
        pcVar9 = (char *)(**(code **)(*(long *)puVar1[uVar5] + 0x20))();
        local_88 = 0x20;
        local_65 = 0;
        local_90 = local_84;
        if (local_84 != pcVar9) {
          lVar12 = 0;
          do {
            if (pcVar9[lVar12] == '\0') {
LAB_032ca61c:
              iVar11 = (int)lVar12;
joined_r0x032ca620:
              if (0x1f < iVar11) {
                iVar11 = 0x1f;
              }
              goto LAB_032ca628;
            }
            if (pcVar9[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_032ca61c;
            }
            if (pcVar9[lVar12 + 2] == '\0') {
              iVar11 = (int)lVar12 + 2;
              goto joined_r0x032ca620;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          iVar11 = 0;
LAB_032ca628:
          local_98 = puVar2;
          memcpy(local_84,pcVar9,(long)iVar11);
          local_84[iVar11] = '\0';
        }
        local_90[(long)local_88 + -1] = '\0';
        local_a8 = puVar4;
        local_a0 = param_2;
        local_98 = puVar3;
        (**(code **)(puVar7 + 0x28))(&local_98);
        pcVar9 = local_90;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar9 == local_a0) {
LAB_032ca70c:
          uVar10 = puVar1[uVar5];
LAB_032ca710:
          *(undefined8 *)(param_1 + 0x650) = uVar10;
          return *puVar14;
        }
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_90[uVar13] != local_a0[uVar13]) break;
          if (local_90[uVar13] == '\0') {
            if (bVar8) goto LAB_032ca70c;
            break;
          }
          if (local_90[uVar13 + 1] != local_a0[uVar13 + 1]) break;
          if (local_90[uVar13 + 1] == '\0') goto LAB_032ca70c;
          if (local_90[uVar13 + 2] != local_a0[uVar13 + 2]) break;
          if (local_90[uVar13 + 2] == '\0') goto LAB_032ca70c;
          bVar8 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
        uVar15 = uVar15 + 1;
        uVar10 = 0;
      } while (uVar15 < *(uint *)(param_1 + 0x64c));
    }
  }
  else {
    pcVar9 = (char *)(**(code **)(**(long **)(param_1 + 0x650) + 0x20))();
    local_65 = 0;
    local_88 = 0x20;
    local_90 = local_84;
    if (local_84 == pcVar9) {
      lVar12 = 0x1f;
    }
    else {
      lVar12 = 0;
      do {
        if (pcVar9[lVar12] == '\0') {
LAB_032ca25c:
          iVar11 = (int)lVar12;
joined_r0x032ca260:
          if (0x1f < iVar11) {
            iVar11 = 0x1f;
          }
          goto LAB_032ca268;
        }
        if (pcVar9[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_032ca25c;
        }
        if (pcVar9[lVar12 + 2] == '\0') {
          iVar11 = (int)lVar12 + 2;
          goto joined_r0x032ca260;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      iVar11 = 0;
LAB_032ca268:
      memcpy(local_84,pcVar9,(long)iVar11);
      local_84[iVar11] = '\0';
      lVar12 = (long)local_88 + -1;
      pcVar9 = local_90;
    }
    local_a8 = puVar7 + 0x10;
    local_98 = puVar2 + 0x10;
    pcVar9[lVar12] = '\0';
    local_a0 = param_2;
    (**(code **)(puVar2 + 0x28))(&local_98);
    pcVar9 = local_90;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    if (pcVar9 != local_a0) {
      if (*local_90 != *local_a0) goto LAB_032ca334;
      if (*local_90 != '\0') {
        lVar12 = 0;
        do {
          if ((lVar12 == 0x80000) || (local_90[lVar12 + 1] != local_a0[lVar12 + 1]))
          goto LAB_032ca334;
          if (local_90[lVar12 + 1] == '\0') break;
          lVar6 = lVar12 + 2;
          if (local_90[lVar6] != local_a0[lVar12 + 2]) goto LAB_032ca334;
          lVar12 = lVar12 + 2;
        } while (local_90[lVar6] != '\0');
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0x650);
  }
  return uVar10;
}

