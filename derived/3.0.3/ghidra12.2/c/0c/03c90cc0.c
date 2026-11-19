
/* WARNING: Type propagation algorithm not settling */

uint FUN_03c90cc0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined **local_c8;
  char *local_c0;
  undefined **local_a8;
  char *pcStack_a0;
  long *local_98;
  undefined **local_88;
  char *local_80;
  undefined8 local_78;
  char local_64 [4];
  
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar13 = 0;
  do {
    if (*(char *)(param_4[1] + uVar13) == '\0') goto LAB_03c90d50;
    lVar11 = param_4[1] + uVar13;
    if (*(char *)(lVar11 + 1) == '\0') {
      uVar13 = uVar13 + 1;
      goto LAB_03c90d50;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      uVar13 = uVar13 + 2;
      goto LAB_03c90d50;
    }
    uVar13 = uVar13 + 3;
  } while (uVar13 != 0x80001);
  uVar13 = 0;
LAB_03c90d50:
  local_88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_80 = "|";
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar10 = 0;
  do {
    if (*(char *)(param_4[1] + uVar10) == '\0') {
LAB_03c90db0:
      iVar7 = (int)uVar10;
joined_r0x03c90db4:
      if (0 < iVar7) {
        uVar3 = 0;
        goto LAB_03c90dd0;
      }
      break;
    }
    lVar11 = param_4[1] + uVar10;
    if (*(char *)(lVar11 + 1) == '\0') {
      uVar10 = uVar10 + 1;
      goto LAB_03c90db0;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      uVar10 = uVar10 + 2;
      iVar7 = (int)uVar10;
      goto joined_r0x03c90db4;
    }
    uVar10 = uVar10 + 3;
  } while (uVar10 != 0x80001);
  goto LAB_03c90e10;
  while (uVar3 = uVar3 + 1, uVar10 != uVar3) {
LAB_03c90dd0:
    lVar11 = param_4[1];
    (*(code *)local_88[3])(&local_88);
    if (((char *)(lVar11 + uVar3) == local_80) || (*(char *)(lVar11 + uVar3) == *local_80)) {
      uVar10 = uVar13 & 0xffffffff;
      if (-1 < (int)uVar3) {
        uVar10 = uVar3 & 0xffffffff;
      }
      goto LAB_03c90e24;
    }
  }
LAB_03c90e10:
  uVar10 = uVar13 & 0xffffffff;
LAB_03c90e24:
  local_88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_80 = ";";
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar11 = 0;
  do {
    if (*(char *)(param_4[1] + lVar11) == '\0') goto LAB_03c90e90;
    lVar4 = param_4[1] + lVar11;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03c90e90;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03c90e90;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_03c90e90:
  (*(code *)local_88[3])(&local_88);
  lVar4 = 0;
  do {
    iVar7 = (int)lVar11;
    if (local_80[lVar4] == '\0') {
LAB_03c90ee4:
      iVar12 = (int)lVar4;
      if (iVar7 < iVar12) goto LAB_03c90fb4;
LAB_03c90efc:
      if ((int)lVar4 < 1) goto LAB_03c90f8c;
      uVar3 = 0;
      goto LAB_03c90f14;
    }
    if (local_80[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03c90ee4;
    }
    if (local_80[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      iVar12 = (int)lVar4;
      if (iVar12 <= iVar7) goto LAB_03c90efc;
      goto LAB_03c90fb4;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  if (iVar7 < 0) {
LAB_03c90fb4:
    uVar15 = uVar13 & 0xffffffff;
  }
  else {
LAB_03c90f8c:
    (*(code *)local_88[3])(&local_88);
    uVar15 = 0;
  }
LAB_03c90fb8:
  local_64[0] = '\0';
  pcStack_a0 = local_64;
  local_88 = &PTR_LAB_04b85380;
  local_a8 = &PTR_LAB_04b853a8;
  iVar7 = (int)uVar13;
  if (iVar7 < 0) {
LAB_03c913fc:
    uVar9 = 0;
LAB_03c91408:
    return uVar9 & 1;
  }
  uVar8 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_98 = param_3;
  local_80 = pcStack_a0;
  local_78 = param_2;
LAB_03c9100c:
  iVar14 = (int)uVar15;
  iVar16 = (int)uVar10;
  iVar12 = iVar16;
  if (iVar14 <= iVar16) {
    iVar12 = iVar14;
  }
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  local_c8 = &PTR_LAB_04b85358;
  if ((uVar3 & 1) != 0) {
    (*(code *)local_a8[2])(&local_a8,&local_c8);
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar2 = FUN_03c91430(param_1,&local_88,&local_c8,param_4[1] + (long)(int)uVar8,iVar12 - uVar8,1,
                       param_5,param_6);
  uVar9 = 1;
  if ((uVar2 & 1) == 0) {
    if (iVar14 < iVar16) {
      if ((local_64[0] == '\0') && (iVar14 < iVar7)) {
        uVar8 = iVar14 + 1;
        local_c0 = ";";
        local_c8 = ppuVar1;
        (**(code **)(*param_4 + 0x18))(param_4);
        lVar11 = 0;
        do {
          if (*(char *)(param_4[1] + lVar11) == '\0') {
LAB_03c911d4:
            iVar12 = (int)lVar11;
            goto joined_r0x03c91244;
          }
          lVar4 = param_4[1] + lVar11;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03c911d4;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            iVar12 = (int)lVar11 + 2;
            goto joined_r0x03c91244;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar12 = 0;
joined_r0x03c91244:
        if ((iVar14 < -1) || (iVar12 <= iVar14)) goto LAB_03c913e4;
        (*(code *)local_c8[3])(&local_c8);
        lVar11 = 0;
        do {
          if (local_c0[lVar11] == '\0') {
LAB_03c9131c:
            iVar12 = iVar12 - (int)lVar11;
            if (iVar12 <= iVar14) goto LAB_03c913e4;
            if (0 < (int)lVar11) {
              uVar15 = (ulong)(int)uVar8;
              goto LAB_03c91344;
            }
            break;
          }
          if (local_c0[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03c9131c;
          }
          if (local_c0[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03c9131c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        (*(code *)local_c8[3])(&local_c8);
        uVar15 = (ulong)uVar8;
        uVar9 = uVar8;
joined_r0x03c913e0:
        if ((int)uVar9 < 0) goto LAB_03c913e4;
        goto LAB_03c91004;
      }
    }
    else if (iVar16 < iVar7) {
      uVar8 = iVar16 + 1;
      local_c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_c0 = "|";
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar11 = 0;
      do {
        if (*(char *)(param_4[1] + lVar11) == '\0') {
LAB_03c9117c:
          iVar12 = (int)lVar11;
          goto joined_r0x03c91180;
        }
        lVar4 = param_4[1] + lVar11;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03c9117c;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          iVar12 = (int)lVar11 + 2;
          goto joined_r0x03c91180;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar12 = 0;
joined_r0x03c91180:
      if ((-2 < iVar16) && (iVar16 < iVar12)) {
        (*(code *)local_c8[3])(&local_c8);
        lVar11 = 0;
        do {
          if (local_c0[lVar11] == '\0') {
LAB_03c91258:
            iVar12 = iVar12 - (int)lVar11;
            if (iVar12 <= iVar16) goto LAB_03c91000;
            if (0 < (int)lVar11) {
              uVar10 = (ulong)(int)uVar8;
              goto LAB_03c91280;
            }
            break;
          }
          if (local_c0[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03c91258;
          }
          if (local_c0[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03c91258;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        (*(code *)local_c8[3])(&local_c8);
        uVar10 = (ulong)uVar8;
LAB_03c91308:
        iVar12 = (int)uVar10;
joined_r0x03c913f4:
        if (-1 < iVar12) goto LAB_03c91004;
      }
      goto LAB_03c91000;
    }
    goto LAB_03c913fc;
  }
  goto LAB_03c91408;
  while( true ) {
    pcVar5 = local_80;
    lVar6 = lVar4;
    while( true ) {
      lVar6 = lVar6 + -1;
      if (*(char *)(lVar11 + uVar3) != *pcVar5) break;
      if ((*(char *)(lVar11 + uVar3) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar5 = pcVar5 + 1, lVar6 == 0)) goto LAB_03c90fa4;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar7 - iVar12) + 1) break;
LAB_03c90f14:
    lVar11 = param_4[1];
    (*(code *)local_88[3])(&local_88);
    if ((char *)(lVar11 + uVar3) == local_80) {
LAB_03c90fa4:
      uVar15 = uVar3 & 0xffffffff;
      if (-1 < (int)uVar3) goto LAB_03c90fb8;
      break;
    }
  }
  goto LAB_03c90fb4;
  while( true ) {
    pcVar5 = local_c0;
    lVar6 = lVar11;
    while( true ) {
      lVar6 = lVar6 + -1;
      if (*(char *)(lVar4 + uVar10) != *pcVar5) break;
      if ((*(char *)(lVar4 + uVar10) == '\0') ||
         (lVar4 = lVar4 + 1, pcVar5 = pcVar5 + 1, lVar6 == 0)) goto LAB_03c91308;
    }
    uVar10 = uVar10 + 1;
    if (iVar12 + 1 == (int)uVar10) break;
LAB_03c91280:
    lVar4 = param_4[1];
    (*(code *)local_c8[3])(&local_c8);
    if ((char *)(lVar4 + uVar10) == local_c0) {
      iVar12 = (int)uVar10;
      goto joined_r0x03c913f4;
    }
  }
LAB_03c91000:
  uVar10 = uVar13 & 0xffffffff;
LAB_03c91004:
  uVar9 = uVar2;
  if (iVar7 < (int)uVar8) goto LAB_03c91408;
  goto LAB_03c9100c;
  while( true ) {
    pcVar5 = local_c0;
    lVar6 = lVar11;
    while( true ) {
      lVar6 = lVar6 + -1;
      if (*(char *)(lVar4 + uVar15) != *pcVar5) break;
      if ((*(char *)(lVar4 + uVar15) == '\0') ||
         (lVar4 = lVar4 + 1, pcVar5 = pcVar5 + 1, lVar6 == 0)) goto LAB_03c913d8;
    }
    uVar15 = uVar15 + 1;
    if (iVar12 + 1 == (int)uVar15) break;
LAB_03c91344:
    lVar4 = param_4[1];
    (*(code *)local_c8[3])(&local_c8);
    if ((char *)(lVar4 + uVar15) == local_c0) {
LAB_03c913d8:
      uVar9 = (int)uVar15;
      goto joined_r0x03c913e0;
    }
  }
LAB_03c913e4:
  uVar15 = uVar13 & 0xffffffff;
  goto LAB_03c91004;
}

