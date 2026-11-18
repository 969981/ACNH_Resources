
int FUN_03722560(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  local_84[0] = 0;
  local_90 = local_84;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_98 = puVar1;
  FUN_021d7aa0(&local_98);
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar12 = *(long **)(param_1 + 0xe8);
    iVar9 = 0;
    plVar3 = plVar12 + *(int *)(param_1 + 0xe0);
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    do {
      lVar10 = *plVar12;
      local_c0 = 0x20;
      local_9d = 0;
      plVar13 = (long *)(lVar10 + 0x10);
      local_d0 = puVar2;
      local_c8 = local_bc;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puVar11 = *(undefined1 **)(lVar10 + 0x18);
      if (local_bc != puVar11) {
        (**(code **)(*(long *)(lVar10 + 0x10) + 0x18))(plVar13);
        lVar7 = 0;
        do {
          if (*(char *)(*(long *)(lVar10 + 0x18) + lVar7) == '\0') goto LAB_03722690;
          lVar4 = *(long *)(lVar10 + 0x18) + lVar7;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_03722690;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_03722690;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_03722690:
        iVar5 = (int)lVar7;
        if (local_c0 <= (int)lVar7) {
          iVar5 = local_c0 + -1;
        }
        memcpy(local_bc,puVar11,(long)iVar5);
        local_bc[iVar5] = 0;
      }
      local_d0 = puVar1;
      if (*(int *)(lVar10 + 0x3c) == 1) {
        FUN_021d7aa0(&local_d0,plVar13);
      }
      (**(code **)(local_98 + 0x18))(&local_98);
      (**(code **)(local_98 + 0x18))(&local_98);
      puVar11 = local_90;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (puVar11 == local_c8) {
        return iVar9;
      }
      uVar8 = 0;
      bVar6 = true;
      do {
        if (local_90[uVar8] != local_c8[uVar8]) break;
        if (local_90[uVar8] == '\0') {
          if (bVar6) {
            return iVar9;
          }
          break;
        }
        if (local_90[uVar8 + 1] != local_c8[uVar8 + 1]) break;
        if (local_90[uVar8 + 1] == '\0') {
          return iVar9;
        }
        if (local_90[uVar8 + 2] != local_c8[uVar8 + 2]) break;
        if (local_90[uVar8 + 2] == '\0') {
          return iVar9;
        }
        bVar6 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      plVar12 = plVar12 + 1;
      iVar9 = iVar9 + 1;
    } while (plVar12 != plVar3);
  }
  return -1;
}

