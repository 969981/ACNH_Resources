
undefined8 FUN_02577fa0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  undefined *local_138;
  char *local_130;
  undefined8 local_128;
  undefined1 local_a5;
  undefined1 auStack_a0 [8];
  char *local_98;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  
  puVar3 = PTR_DAT_04bb43c0;
  puVar11 = *(undefined8 **)(param_1 + 0x228);
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar11);
  puVar4 = PTR_DAT_04bc0510;
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *(undefined2 *)puVar11;
  local_76 = *(undefined1 *)((long)puVar11 + 2);
  local_75 = *(undefined1 *)((long)puVar11 + 3);
  local_74 = *(undefined4 *)((long)puVar11 + 4);
  local_70 = (uint *)0x0;
  local_80 = puVar1;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar11);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        local_70 = puVar9;
      }
    }
  }
  lVar12 = *(long *)puVar3;
  local_130 = (char *)*puVar11;
  local_128 = 0;
  local_138 = puVar1;
  uVar5 = FUN_0277d6c4(&local_130);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar11);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0)) {
        local_128 = lVar12;
      }
    }
  }
  FUN_01ade370(&local_90,&local_138);
  puVar1 = PTR_DAT_04bb2020;
  if (*local_88 == '\0') {
    FUN_01adf970(&local_138,&local_80);
    lVar12 = *(long *)(param_1 + 0x60);
    pcVar13 = *(char **)(lVar12 + 0x280);
    (**(code **)(local_138 + 0x18))(&local_138);
    pcVar15 = local_130;
    if (pcVar13 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar14 = 0;
      do {
        if (local_130[lVar14] == '\0') goto LAB_025782fc;
        if (local_130[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_025782fc;
        }
        if (local_130[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_025782fc;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_025782fc:
      iVar8 = (int)lVar14;
      if (*(int *)(lVar12 + 0x288) <= (int)lVar14) {
        iVar8 = *(int *)(lVar12 + 0x288) + -1;
      }
      memcpy(pcVar13,pcVar15,(long)iVar8);
      pcVar13[iVar8] = '\0';
    }
    *(undefined4 *)(lVar12 + 0x10d8) = 0;
    return 0;
  }
  if (*(int *)(param_1 + 0x150) == 3) {
    return 0;
  }
  if (*(int *)((long)puVar11 + 0xc) == 1) {
    local_138 = PTR_DAT_04bb2020 + 0x10;
    local_130 = "Kimonomydesign";
    (**(code **)(local_90 + 0x18))(&local_90);
    lVar12 = 0;
    do {
      if (local_88[lVar12] == '\0') goto LAB_02578338;
      if (local_88[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02578338;
      }
      if (local_88[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02578338;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02578338:
    lVar14 = 0;
    do {
      iVar8 = (int)lVar12;
      if (local_130[lVar14] == '\0') {
LAB_0257837c:
        iVar10 = (int)lVar14;
        if (iVar8 < iVar10) goto LAB_02578424;
        if (iVar10 < 1) goto LAB_02578408;
        uVar16 = 0;
        goto LAB_0257839c;
      }
      if (local_130[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0257837c;
      }
      if (local_130[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0257837c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    if (iVar8 < 0) goto LAB_02578424;
LAB_02578408:
    (**(code **)(local_138 + 0x18))(&local_138);
LAB_02578478:
    lVar12 = *(long *)(param_1 + 0x60);
    pcVar13 = *(char **)(lVar12 + 0x280);
    (**(code **)(local_90 + 0x18))(&local_90);
    pcVar15 = local_88;
    if (pcVar13 != local_88) {
      (**(code **)(local_90 + 0x18))(&local_90);
      lVar14 = 0;
      do {
        if (local_88[lVar14] == '\0') goto LAB_025784f0;
        if (local_88[lVar14 + 1] == '\0') goto LAB_025784e4;
        if (local_88[lVar14 + 2] == '\0') goto LAB_025784ec;
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      goto LAB_025784dc;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x60);
    pcVar13 = *(char **)(lVar12 + 0x280);
    (**(code **)(local_90 + 0x18))(&local_90);
    pcVar15 = local_88;
    if (pcVar13 != local_88) {
      (**(code **)(local_90 + 0x18))(&local_90);
      lVar14 = 0;
      do {
        if (local_88[lVar14] == '\0') goto LAB_025784f0;
        if (local_88[lVar14 + 1] == '\0') goto LAB_025784e4;
        if (local_88[lVar14 + 2] == '\0') goto LAB_025784ec;
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
LAB_025784dc:
      lVar14 = 0;
      goto LAB_025784f0;
    }
  }
  goto LAB_02578518;
  while( true ) {
    pcVar13 = local_130;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (pcVar15[uVar16] != *pcVar13) break;
      if ((pcVar15[uVar16] == '\0') || (pcVar15 = pcVar15 + 1, pcVar13 = pcVar13 + 1, lVar12 == 0))
      goto LAB_0257841c;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (iVar8 - iVar10) + 1) break;
LAB_0257839c:
    pcVar15 = local_88;
    pcVar13 = local_88 + uVar16;
    (**(code **)(local_138 + 0x18))(&local_138);
    if (pcVar13 == local_130) {
LAB_0257841c:
      if ((int)uVar16 != -1) goto LAB_02578478;
      break;
    }
  }
LAB_02578424:
  local_138 = puVar1 + 0x10;
  local_130 = "Kimono";
  (**(code **)(local_90 + 0x18))(&local_90);
  lVar12 = 0;
  do {
    if (local_88[lVar12] == '\0') {
LAB_0257852c:
      if (5 < (int)lVar12) {
        uVar16 = 0;
        goto LAB_02578720;
      }
      break;
    }
    if (local_88[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0257852c;
    }
    if (local_88[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0257852c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  goto LAB_02578534;
  while (uVar16 = uVar16 + 1, (int)lVar12 - 5 != uVar16) {
LAB_02578720:
    pcVar15 = local_88 + uVar16;
    (**(code **)(local_138 + 0x18))(&local_138);
    if ((pcVar15 == local_130) ||
       ((*pcVar15 == *local_130 &&
        ((*pcVar15 == '\0' ||
         ((pcVar15[1] == local_130[1] &&
          ((pcVar15[1] == '\0' ||
           ((pcVar15[2] == local_130[2] &&
            ((pcVar15[2] == '\0' ||
             ((pcVar15[3] == local_130[3] &&
              ((pcVar15[3] == '\0' ||
               ((pcVar15[4] == local_130[4] &&
                ((pcVar15[4] == '\0' || (pcVar15[5] == local_130[5])))))))))))))))))))))) {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      if ((int)uVar16 == -1) goto LAB_02578538;
      local_138 = puVar1 + 0x10;
      ppuVar7 = &local_138;
      local_130 = "PlayerTopsOnepieceKimonotasukiL";
      goto LAB_0257853c;
    }
  }
LAB_02578534:
  uVar6 = *(undefined8 *)(param_1 + 0x60);
LAB_02578538:
  ppuVar7 = &local_90;
LAB_0257853c:
  FUN_0152ca90(uVar6,ppuVar7,0);
  goto LAB_02578544;
LAB_025784e4:
  lVar14 = lVar14 + 1;
  goto LAB_025784f0;
LAB_025784ec:
  lVar14 = lVar14 + 2;
LAB_025784f0:
  iVar8 = (int)lVar14;
  if (*(int *)(lVar12 + 0x288) <= (int)lVar14) {
    iVar8 = *(int *)(lVar12 + 0x288) + -1;
  }
  memcpy(pcVar13,pcVar15,(long)iVar8);
  pcVar13[iVar8] = '\0';
LAB_02578518:
  *(undefined4 *)(lVar12 + 0x10d8) = 0;
LAB_02578544:
  local_138 = puVar4 + 0x10;
  lVar12 = *(long *)puVar3;
  local_130 = (char *)*puVar11;
  local_128 = 0;
  uVar5 = FUN_0277d6c4(&local_130);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar11);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0)) {
        local_128 = lVar12;
      }
    }
  }
  FUN_01adf970(auStack_a0,&local_138);
  if ((*local_98 != '\0') && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_0074ed40(*(long *)(param_1 + 0x78),auStack_a0,0);
  }
  if (((local_70 != (uint *)0x0) && (uVar5 = *local_70, uVar5 != 0)) &&
     (local_70 != (uint *)(ulong)uVar5)) {
    puVar9 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
      lVar12 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar12 != 0) {
        uVar2 = 0;
        if ((ulong)uVar5 != 0) {
          uVar2 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
        }
        if (*puVar9 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
            (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xaf)) &&
           (lVar12 = *(long *)(param_1 + 0x78), lVar12 != 0)) {
          local_a5 = 0;
          local_130 = (char *)((long)&local_128 + 4);
          local_128 = CONCAT35(local_128._5_3_,0x80);
          local_138 = PTR_DAT_04bb2d88 + 0x10;
          FUN_01b08dd0(&local_80,&local_138);
          FUN_0074ed40(lVar12,&local_138,0);
        }
      }
    }
  }
  return 0;
}

