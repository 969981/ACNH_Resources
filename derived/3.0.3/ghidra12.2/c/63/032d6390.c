
undefined8 FUN_032d6390(long param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  puVar5 = PTR_DAT_04bb2028;
  if (*(long **)(param_1 + 0x328) == (long *)0x0) {
LAB_032d64f4:
    if (*(int *)(param_1 + 800) != 0) {
      uVar12 = 0;
      puVar1 = PTR_DAT_04bb2a08 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar3 = uVar12;
        if (99 < uVar12) {
          uVar3 = 0;
        }
        pcVar7 = (char *)(**(code **)(**(long **)(param_1 + uVar3 * 8) + 0x20))();
        local_88 = 0x20;
        local_65 = 0;
        local_90 = local_84;
        if (local_84 != pcVar7) {
          lVar10 = 0;
          do {
            if (pcVar7[lVar10] == '\0') {
LAB_032d65cc:
              iVar9 = (int)lVar10;
joined_r0x032d65d0:
              if (0x1f < iVar9) {
                iVar9 = 0x1f;
              }
              goto LAB_032d65d8;
            }
            if (pcVar7[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_032d65cc;
            }
            if (pcVar7[lVar10 + 2] == '\0') {
              iVar9 = (int)lVar10 + 2;
              goto joined_r0x032d65d0;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          iVar9 = 0;
LAB_032d65d8:
          local_98 = puVar1;
          memcpy(local_84,pcVar7,(long)iVar9);
          local_84[iVar9] = '\0';
        }
        local_90[(long)local_88 + -1] = '\0';
        local_a8 = puVar2;
        local_a0 = param_2;
        local_98 = puVar5 + 0x10;
        (**(code **)(puVar5 + 0x28))(&local_98);
        pcVar7 = local_90;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar7 == local_a0) {
LAB_032d66b0:
          *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + uVar3 * 8);
          return *(undefined8 *)(param_1 + uVar3 * 8);
        }
        uVar11 = 0;
        bVar6 = true;
        do {
          if (local_90[uVar11] != local_a0[uVar11]) break;
          if (local_90[uVar11] == '\0') {
            if (bVar6) goto LAB_032d66b0;
            break;
          }
          if (local_90[uVar11 + 1] != local_a0[uVar11 + 1]) break;
          if (local_90[uVar11 + 1] == '\0') goto LAB_032d66b0;
          if (local_90[uVar11 + 2] != local_a0[uVar11 + 2]) break;
          if (local_90[uVar11 + 2] == '\0') goto LAB_032d66b0;
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 800));
    }
    uVar8 = 0;
  }
  else {
    pcVar7 = (char *)(**(code **)(**(long **)(param_1 + 0x328) + 0x20))();
    local_65 = 0;
    local_88 = 0x20;
    local_90 = local_84;
    if (local_84 == pcVar7) {
      lVar10 = 0x1f;
    }
    else {
      lVar10 = 0;
      do {
        if (pcVar7[lVar10] == '\0') {
LAB_032d6440:
          iVar9 = (int)lVar10;
joined_r0x032d6444:
          if (0x1f < iVar9) {
            iVar9 = 0x1f;
          }
          goto LAB_032d644c;
        }
        if (pcVar7[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_032d6440;
        }
        if (pcVar7[lVar10 + 2] == '\0') {
          iVar9 = (int)lVar10 + 2;
          goto joined_r0x032d6444;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      iVar9 = 0;
LAB_032d644c:
      memcpy(local_84,pcVar7,(long)iVar9);
      local_84[iVar9] = '\0';
      lVar10 = (long)local_88 + -1;
      pcVar7 = local_90;
    }
    local_98 = puVar5 + 0x10;
    pcVar7[lVar10] = '\0';
    (**(code **)(puVar5 + 0x28))(&local_98);
    if (local_90 != param_2) {
      if (*local_90 != *param_2) goto LAB_032d64f4;
      if (*local_90 != '\0') {
        lVar10 = 0;
        do {
          if ((lVar10 == 0x80000) || (local_90[lVar10 + 1] != param_2[lVar10 + 1]))
          goto LAB_032d64f4;
          if (local_90[lVar10 + 1] == '\0') break;
          lVar4 = lVar10 + 2;
          if (local_90[lVar4] != param_2[lVar10 + 2]) goto LAB_032d64f4;
          lVar10 = lVar10 + 2;
        } while (local_90[lVar4] != '\0');
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 0x328);
  }
  return uVar8;
}

