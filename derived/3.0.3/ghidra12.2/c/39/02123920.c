
uint FUN_02123920(long param_1,long *param_2)

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
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [7];
  undefined1 local_85;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb3768;
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = 0;
  local_78 = local_6c;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  FUN_021d7aa0(&local_80);
  (**(code **)(local_80 + 0x18))(&local_80);
  (**(code **)(local_80 + 0x18))(&local_80);
  if (local_78 != &DAT_040cec26) {
    uVar10 = 0;
    bVar5 = true;
    while( true ) {
      if (local_78[uVar10] != (&DAT_040cec26)[uVar10]) {
        return 0;
      }
      if (local_78[uVar10] == '\0') break;
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
  local_98 = (undefined1 *)(long)*(int *)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar13 = *(long **)(param_1 + 0x1f0);
    plVar1 = plVar13 + (long)local_98;
    do {
      lVar11 = *plVar13;
      local_90 = 8;
      local_85 = 0;
      local_8c[0] = 0;
      local_a0 = puVar3 + 0x10;
      local_98 = local_8c;
      FUN_021d7aa0(&local_a0,lVar11 + 0xf8);
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      puVar4 = local_78;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      if (puVar4 == local_98) {
LAB_02123b0c:
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar12 = (char *)param_2[1];
        (**(code **)(*(long *)(lVar11 + 0xf8) + 0x18))(lVar11 + 0xf8);
        pcVar7 = *(char **)(lVar11 + 0x100);
        if (pcVar12 != pcVar7) {
          cVar2 = *(char *)param_2[1];
          if (cVar2 != *pcVar7) {
            uVar6 = 1;
            goto LAB_02123bf8;
          }
          if (cVar2 != '\0') {
            pcVar12 = (char *)param_2[1] + 2;
            uVar10 = 0;
            goto LAB_02123b70;
          }
        }
        uVar6 = 0;
        goto LAB_02123bf8;
      }
      uVar10 = 0;
      bVar5 = true;
      do {
        if (local_78[uVar10] != local_98[uVar10]) break;
        if (local_78[uVar10] == '\0') {
          if (bVar5) goto LAB_02123b0c;
          break;
        }
        if (local_78[uVar10 + 1] != local_98[uVar10 + 1]) break;
        if (local_78[uVar10 + 1] == '\0') goto LAB_02123b0c;
        if (local_78[uVar10 + 2] != local_98[uVar10 + 2]) break;
        if (local_78[uVar10 + 2] == '\0') goto LAB_02123b0c;
        bVar5 = uVar10 < 0x7fffe;
        uVar10 = uVar10 + 3;
      } while (uVar10 != 0x80001);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  uVar6 = (uint)local_98;
  uVar9 = 0;
  goto LAB_02123bfc;
  while( true ) {
    if (pcVar12[uVar8 - 1] != pcVar7[uVar8 + 1]) {
      pcVar12 = (char *)0x0;
      goto LAB_02123be8;
    }
    if (pcVar12[uVar8 - 1] == '\0') goto LAB_02123bb4;
    if (pcVar12[uVar8] != pcVar7[uVar8 + 2]) {
      pcVar12 = (char *)0x0;
      goto LAB_02123be8;
    }
    uVar10 = uVar8 + 2;
    if (pcVar12[uVar8] == '\0') break;
LAB_02123b70:
    uVar8 = uVar10;
    if (uVar8 == 0x80000) goto LAB_02123be8;
  }
  uVar8 = uVar8 + 1;
LAB_02123bb4:
  pcVar12 = (char *)0x1;
LAB_02123be8:
  uVar6 = (uint)((uVar8 & 0xfffffffffff80000) != 0) | (uint)pcVar12 ^ 1;
LAB_02123bf8:
  uVar9 = 1;
LAB_02123bfc:
  return uVar9 & uVar6;
}

