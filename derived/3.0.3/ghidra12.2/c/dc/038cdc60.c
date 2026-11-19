
undefined8 FUN_038cdc60(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  uint local_ac;
  undefined *local_98;
  undefined1 *local_90;
  undefined *local_88;
  char *local_80;
  uint local_78;
  char local_74 [15];
  undefined1 local_65;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  local_78 = 0x10;
  local_80 = local_74;
  local_65 = 0;
  local_74[0] = '\0';
  local_88 = PTR_DAT_04bb2ab0 + 0x10;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = &DAT_04064e67;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar10 = 0;
  do {
    if (*(char *)(param_2[1] + lVar10) == '\0') {
LAB_038cdd40:
      local_ac = (int)lVar10 + 1;
      if ((int)lVar10 != -1) goto LAB_038cdd5c;
      goto LAB_038cdd4c;
    }
    lVar2 = param_2[1] + lVar10;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_038cdd40;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_038cdd40;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  local_ac = 1;
LAB_038cdd5c:
  uVar15 = 0;
LAB_038cdd68:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar10 = 0;
  do {
    if (*(char *)(param_2[1] + lVar10) == '\0') {
LAB_038cddb8:
      iVar9 = (int)lVar10;
      goto joined_r0x038cdfc4;
    }
    lVar2 = param_2[1] + lVar10;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_038cddb8;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      iVar9 = (int)lVar10 + 2;
      goto joined_r0x038cdfc4;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  iVar9 = 0;
joined_r0x038cdfc4:
  if ((-1 < (int)uVar15) && ((int)uVar15 <= iVar9)) {
    (**(code **)(local_88 + 0x18))(&local_88);
    pcVar16 = local_80;
    uVar14 = (ulong)local_78;
    if (0 < (int)local_78) {
      uVar17 = 0;
      while (lVar10 = param_2[1], *(char *)(lVar10 + uVar15) != '\0') {
        (**(code **)(local_98 + 0x18))(&local_98);
        uVar12 = 0;
        bVar6 = true;
        cVar5 = *(char *)(lVar10 + uVar15);
        do {
          if (local_90[uVar12] == '\0') break;
          if (local_90[uVar12] == cVar5) {
            if (bVar6) goto LAB_038cde90;
            break;
          }
          if (local_90[uVar12 + 1] == '\0') break;
          if (local_90[uVar12 + 1] == cVar5) goto LAB_038cde90;
          if (local_90[uVar12 + 2] == '\0') break;
          if (local_90[uVar12 + 2] == cVar5) goto LAB_038cde90;
          bVar6 = uVar12 < 0x7fffe;
          uVar12 = uVar12 + 3;
        } while (uVar12 != 0x80001);
        pcVar16[uVar17] = cVar5;
        uVar17 = uVar17 + 1;
        uVar15 = uVar15 + 1;
        if (uVar17 == uVar14) goto LAB_038cdfc8;
      }
LAB_038cde90:
      uVar1 = (int)uVar15 + 1;
      pcVar16[uVar17 & 0xffffffff] = '\0';
      if ((uVar17 & 0xffffffff) == 4) {
        uVar13 = 0;
        do {
          pcVar16 = "";
          if (uVar13 < 0x10) {
            pcVar16 = (&PTR_DAT_04912310)[uVar13];
          }
          (**(code **)(local_88 + 0x18))(&local_88);
          if (pcVar16 == local_80) goto LAB_038cdf6c;
          if (*pcVar16 == *local_80) {
            if (*pcVar16 == '\0') goto LAB_038cdf6c;
            lVar10 = 0x7fffe;
            pcVar11 = local_80;
            while( true ) {
              if (pcVar16[1] != pcVar11[1]) break;
              if (pcVar16[1] == '\0') goto LAB_038cdf6c;
              if (pcVar16[2] != pcVar11[2]) break;
              if (pcVar16[2] == '\0') goto LAB_038cdf6c;
              if ((lVar10 == 0) || (cVar5 = pcVar16[3], cVar5 != pcVar11[3])) break;
              lVar10 = lVar10 + -3;
              pcVar11 = pcVar11 + 3;
              pcVar16 = pcVar16 + 3;
              if (cVar5 == '\0') goto LAB_038cdf6c;
            }
          }
          uVar8 = 0x10;
          if ((int)uVar13 < 0x10) {
            uVar8 = uVar13 + 1;
          }
          uVar13 = uVar8;
          if (uVar8 == 0x10) break;
        } while( true );
      }
    }
  }
  goto LAB_038cdfc8;
LAB_038cdf6c:
  iVar9 = (int)param_1[2];
  iVar4 = (int)param_1[1];
  if (iVar9 < iVar4) {
    *(int *)(param_1 + 2) = iVar9 + 1;
    iVar9 = *(int *)((long)param_1 + 0xc) + iVar9;
    iVar3 = 0;
    if (iVar4 <= iVar9) {
      iVar3 = iVar4;
    }
    *(uint *)(*param_1 + (long)(iVar9 - iVar3) * 4) = uVar13;
  }
  uVar15 = (ulong)uVar1;
  if (uVar1 == local_ac) {
LAB_038cdd4c:
    if ((int)param_1[2] == 0) {
LAB_038cdfc8:
      uVar7 = 0;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
    }
    else {
      uVar7 = 1;
    }
    return uVar7;
  }
  goto LAB_038cdd68;
}

