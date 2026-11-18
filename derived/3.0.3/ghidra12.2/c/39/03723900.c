
uint FUN_03723900(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb2028;
  local_65 = 0;
  local_88 = 0x20;
  local_84[0] = 0;
  local_90 = local_84;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  FUN_021d7aa0(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (local_90 != &DAT_040cec26) {
    uVar10 = 0;
    bVar5 = true;
    while( true ) {
      if (local_90[uVar10] != (&DAT_040cec26)[uVar10]) {
        return 0;
      }
      if (local_90[uVar10] == '\0') break;
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
      if (uVar10 == 0x80001) {
        return 0;
      }
    }
    if (!bVar5) {
      return 0;
    }
  }
  local_c8 = (undefined1 *)(long)*(int *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar13 = *(long **)(param_1 + 0xe8);
    plVar1 = plVar13 + (long)local_c8;
    do {
      lVar11 = *plVar13;
      local_c0 = 0x20;
      local_9d = 0;
      local_bc[0] = 0;
      local_d0 = puVar3 + 0x10;
      local_c8 = local_bc;
      FUN_021d7aa0(&local_d0,lVar11 + 0x10);
      (**(code **)(local_98 + 0x18))(&local_98);
      (**(code **)(local_98 + 0x18))(&local_98);
      puVar4 = local_90;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (puVar4 == local_c8) {
LAB_03723aec:
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar12 = (char *)param_2[1];
        (**(code **)(*(long *)(lVar11 + 0x10) + 0x18))(lVar11 + 0x10);
        pcVar7 = *(char **)(lVar11 + 0x18);
        if (pcVar12 != pcVar7) {
          cVar2 = *(char *)param_2[1];
          if (cVar2 != *pcVar7) {
            uVar6 = 1;
            goto LAB_03723bd8;
          }
          if (cVar2 != '\0') {
            pcVar12 = (char *)param_2[1] + 2;
            uVar10 = 0;
            goto LAB_03723b50;
          }
        }
        uVar6 = 0;
        goto LAB_03723bd8;
      }
      uVar10 = 0;
      bVar5 = true;
      do {
        if (local_90[uVar10] != local_c8[uVar10]) break;
        if (local_90[uVar10] == '\0') {
          if (bVar5) goto LAB_03723aec;
          break;
        }
        if (local_90[uVar10 + 1] != local_c8[uVar10 + 1]) break;
        if (local_90[uVar10 + 1] == '\0') goto LAB_03723aec;
        if (local_90[uVar10 + 2] != local_c8[uVar10 + 2]) break;
        if (local_90[uVar10 + 2] == '\0') goto LAB_03723aec;
        bVar5 = uVar10 < 0x7fffe;
        uVar10 = uVar10 + 3;
      } while (uVar10 != 0x80001);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  uVar6 = (uint)local_c8;
  uVar9 = 0;
  goto LAB_03723bdc;
  while( true ) {
    if (pcVar12[uVar8 - 1] != pcVar7[uVar8 + 1]) {
      pcVar12 = (char *)0x0;
      goto LAB_03723bc8;
    }
    if (pcVar12[uVar8 - 1] == '\0') goto LAB_03723b94;
    if (pcVar12[uVar8] != pcVar7[uVar8 + 2]) {
      pcVar12 = (char *)0x0;
      goto LAB_03723bc8;
    }
    uVar10 = uVar8 + 2;
    if (pcVar12[uVar8] == '\0') break;
LAB_03723b50:
    uVar8 = uVar10;
    if (uVar8 == 0x80000) goto LAB_03723bc8;
  }
  uVar8 = uVar8 + 1;
LAB_03723b94:
  pcVar12 = (char *)0x1;
LAB_03723bc8:
  uVar6 = (uint)((uVar8 & 0xfffffffffff80000) != 0) | (uint)pcVar12 ^ 1;
LAB_03723bd8:
  uVar9 = 1;
LAB_03723bdc:
  return uVar9 & uVar6;
}

