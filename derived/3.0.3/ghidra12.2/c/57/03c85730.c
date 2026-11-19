
/* WARNING: Type propagation algorithm not settling */

byte FUN_03c85730(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  uint local_1ac;
  undefined *local_1a0;
  char *local_198;
  undefined4 local_190;
  char local_18c [255];
  undefined1 local_8d;
  long *local_88;
  uint local_80;
  undefined *local_78;
  undefined1 *local_70;
  
  local_80 = 0;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = &DAT_040d759c;
  local_88 = param_1;
  (**(code **)(*param_1 + 0x18))();
  puVar5 = PTR_DAT_04bb2120;
  lVar11 = 0;
  do {
    if (*(char *)(param_1[1] + lVar11) == '\0') {
LAB_03c857e0:
      local_1ac = (int)lVar11 + 1;
      if ((int)lVar11 != -1) goto LAB_03c857f8;
      bVar9 = false;
      bVar8 = true;
      goto LAB_03c85b44;
    }
    lVar2 = param_1[1] + lVar11;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03c857e0;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03c857e0;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  local_1ac = 1;
LAB_03c857f8:
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  do {
    local_8d = 0;
    local_190 = 0x100;
    local_18c[0] = '\0';
    local_1a0 = puVar1;
    local_198 = local_18c;
    FUN_0076e020(&local_88,&local_1a0);
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar11 = 0;
    while (local_198[lVar11] != '\0') {
      if (local_198[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        break;
      }
      if (local_198[lVar11 + 2] == '\0') {
        iVar10 = (int)lVar11 + 2;
        goto joined_r0x03c85898;
      }
      lVar11 = lVar11 + 3;
      if (lVar11 == 0x80001) goto LAB_03c85b3c;
    }
    iVar10 = (int)lVar11;
joined_r0x03c85898:
    if (iVar10 < 3) {
LAB_03c85b3c:
      bVar9 = false;
      bVar8 = false;
LAB_03c85b44:
      return bVar9 & bVar8;
    }
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar11 = 0;
    do {
      if (local_198[lVar11] == '\0') {
LAB_03c858e4:
        iVar10 = (int)lVar11;
joined_r0x03c858e8:
        if (0 < iVar10) {
          pcVar12 = local_198 + 1;
          goto LAB_03c85904;
        }
        break;
      }
      if (local_198[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03c858e4;
      }
      if (local_198[lVar11 + 2] == '\0') {
        iVar10 = (int)lVar11 + 2;
        goto joined_r0x03c858e8;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    pcVar12 = puVar5;
LAB_03c85904:
    if (*pcVar12 != '_') goto LAB_03c85b3c;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar11 = 0;
    do {
      pcVar12 = local_198;
      if (local_198[lVar11] == '\0') {
LAB_03c85968:
        if ((int)lVar11 < 0) {
          pcVar12 = puVar5;
        }
        break;
      }
      if (local_198[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03c85968;
      }
      if (local_198[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03c85968;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    cVar3 = *pcVar12;
    bVar9 = cVar3 != 'L';
    if (bVar9) {
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      lVar11 = 0;
      do {
        pcVar12 = local_198;
        if (local_198[lVar11] == '\0') {
LAB_03c859d8:
          if ((int)lVar11 < 0) {
            pcVar12 = puVar5;
          }
          break;
        }
        if (local_198[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03c859d8;
        }
        if (local_198[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_03c859d8;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      if (*pcVar12 != 'T') goto LAB_03c85b3c;
    }
    uVar7 = local_80;
    plVar6 = local_88;
    uVar14 = (ulong)local_80;
    (**(code **)(*local_88 + 0x18))(local_88);
    lVar11 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar11) == '\0') {
LAB_03c85a4c:
        iVar10 = (int)lVar11;
        goto joined_r0x03c85a50;
      }
      lVar2 = plVar6[1] + lVar11;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03c85a4c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        iVar10 = (int)lVar11 + 2;
        goto joined_r0x03c85a50;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar10 = 0;
joined_r0x03c85a50:
    if ((-1 < (int)uVar7) && ((int)uVar7 <= iVar10)) {
      for (; lVar11 = local_88[1], *(char *)(lVar11 + uVar14) != '\0'; uVar14 = uVar14 + 1) {
        (**(code **)(local_78 + 0x18))(&local_78);
        uVar13 = 0;
        bVar8 = true;
        cVar4 = *(char *)(lVar11 + uVar14);
        do {
          if (local_70[uVar13] == '\0') break;
          if (local_70[uVar13] == cVar4) {
            if (bVar8) goto LAB_03c85b14;
            break;
          }
          if (local_70[uVar13 + 1] == '\0') break;
          if (local_70[uVar13 + 1] == cVar4) goto LAB_03c85b14;
          if (local_70[uVar13 + 2] == '\0') break;
          if (local_70[uVar13 + 2] == cVar4) goto LAB_03c85b14;
          bVar8 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
      }
LAB_03c85b14:
      local_80 = (int)uVar14 + 1;
    }
    bVar8 = local_88 == param_1 && local_80 == local_1ac;
    if ((cVar3 != 'L') || (local_88 == param_1 && local_80 == local_1ac)) goto LAB_03c85b44;
  } while( true );
}

