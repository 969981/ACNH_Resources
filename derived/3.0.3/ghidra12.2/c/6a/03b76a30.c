
undefined8 FUN_03b76a30(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint local_198;
  undefined **local_190;
  long local_188;
  undefined *local_180;
  char *local_178;
  uint local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_6d = 0;
  local_170 = 0x100;
  local_178 = local_16c;
  local_16c[0] = '\0';
  local_198 = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  local_188 = *(long *)(param_3 + 8);
  local_190 = &PTR_LAB_048f9770;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') {
LAB_03b76af8:
      uVar4 = (int)lVar7 + 1;
      if ((int)lVar7 == -1) {
        return 0;
      }
      goto LAB_03b76b10;
    }
    lVar8 = param_2[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03b76af8;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      uVar4 = (int)lVar7 + 3;
      if ((int)lVar7 == -3) {
        return 0;
      }
      goto LAB_03b76b10;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  uVar4 = 1;
LAB_03b76b10:
  uVar13 = 0;
LAB_03b76b20:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') {
LAB_03b76b78:
      iVar5 = (int)lVar7;
      goto joined_r0x03b76bb4;
    }
    lVar8 = param_2[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03b76b78;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar5 = (int)lVar7 + 2;
      goto joined_r0x03b76bb4;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  iVar5 = 0;
joined_r0x03b76bb4:
  if ((-1 < (int)uVar13) && ((int)uVar13 <= iVar5)) {
    (**(code **)(local_180 + 0x18))(&local_180);
    pcVar9 = local_178;
    uVar12 = (ulong)local_170;
    if (0 < (int)local_170) {
      uVar14 = 0;
      do {
        lVar7 = param_2[1];
        if (*(char *)(lVar7 + uVar13) == '\0') {
LAB_03b76c50:
          local_198 = (int)uVar13 + 1;
          pcVar9[uVar14 & 0xffffffff] = '\0';
          break;
        }
        (*(code *)local_190[3])(&local_190);
        uVar10 = 0;
        bVar3 = true;
        cVar2 = *(char *)(lVar7 + uVar13);
        do {
          if (*(char *)(local_188 + uVar10) == '\0') break;
          if (*(char *)(local_188 + uVar10) == cVar2) {
            if (bVar3) goto LAB_03b76c50;
            break;
          }
          cVar1 = *(char *)(local_188 + uVar10 + 1);
          if (cVar1 == '\0') break;
          if (cVar1 == cVar2) goto LAB_03b76c50;
          cVar1 = *(char *)(local_188 + uVar10 + 2);
          if (cVar1 == '\0') break;
          if (cVar1 == cVar2) goto LAB_03b76c50;
          bVar3 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        pcVar9[uVar14] = cVar2;
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar14 != uVar12);
    }
  }
  if (*local_178 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar7 = 0;
    do {
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_03b76cbc;
      lVar8 = param_1[1] + lVar7;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03b76cbc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03b76cbc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03b76cbc:
    (**(code **)(local_180 + 0x18))(&local_180);
    lVar8 = 0;
    do {
      iVar5 = (int)lVar7;
      if (local_178[lVar8] == '\0') {
LAB_03b76d08:
        iVar6 = (int)lVar8;
        if (iVar5 < iVar6) goto LAB_03b76da8;
LAB_03b76d20:
        if ((int)lVar8 < 1) goto LAB_03b76dcc;
        uVar13 = 0;
        goto LAB_03b76d34;
      }
      if (local_178[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03b76d08;
      }
      if (local_178[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        iVar6 = (int)lVar8;
        if (iVar6 <= iVar5) goto LAB_03b76d20;
        goto LAB_03b76da8;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    if (-1 < iVar5) {
LAB_03b76dcc:
      (**(code **)(local_180 + 0x18))(&local_180);
      return 1;
    }
  }
  goto LAB_03b76da8;
  while( true ) {
    pcVar9 = local_178;
    lVar11 = lVar8;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (*(char *)(lVar7 + uVar13) != *pcVar9) break;
      if ((*(char *)(lVar7 + uVar13) == '\0') ||
         (lVar7 = lVar7 + 1, pcVar9 = pcVar9 + 1, lVar11 == 0)) goto LAB_03b76da0;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar5 - iVar6) + 1) break;
LAB_03b76d34:
    lVar7 = param_1[1];
    (**(code **)(local_180 + 0x18))(&local_180);
    if ((char *)(lVar7 + uVar13) == local_178) {
LAB_03b76da0:
      if ((int)uVar13 != -1) {
        return 1;
      }
      break;
    }
  }
LAB_03b76da8:
  uVar13 = (ulong)local_198;
  if (local_198 == uVar4) {
    return 0;
  }
  goto LAB_03b76b20;
}

