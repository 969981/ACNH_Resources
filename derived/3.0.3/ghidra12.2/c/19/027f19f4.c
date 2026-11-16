
/* WARNING: Type propagation algorithm not settling */

uint FUN_027f19f4(int *param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *local_b8;
  uint local_a0;
  undefined1 uStack_99;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  undefined *local_88;
  long local_80;
  undefined1 local_78;
  byte local_77;
  byte local_6c [4];
  long local_68;
  
  local_6c[0] = *param_2;
  if ((7 < local_6c[0]) ||
     (lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1), lVar12 == 0)) {
    return 0xffffffff;
  }
  local_78 = 1;
  local_80 = lVar12 + 0x17b88;
  if ((*(long **)(lVar12 + 0x17bb0) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x17bb0), puVar13 == (undefined8 *)0x0)) {
    bVar11 = 0;
  }
  else {
    bVar11 = (**(code **)*puVar13)();
  }
  local_77 = bVar11 & 1;
  local_88 = PTR_DAT_04bb4c18 + 0x10;
  piVar22 = (int *)(*(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90));
  iVar18 = piVar22[7];
  if ((param_1[7] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 8) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 10)) && piVar22[0xc] == param_1[0xc])) {
    if (((short)param_1[1] == 0) || ((short)piVar22[1] == 0)) {
      if (*param_1 == *piVar22) goto LAB_027f1fbc;
    }
    else if ((*param_1 == *piVar22) &&
            (!((*(long *)(piVar22 + 1) != *(long *)(param_1 + 1) ||
               *(long *)(piVar22 + 3) != *(long *)(param_1 + 3)) || piVar22[5] != param_1[5]))) {
LAB_027f1fbc:
      uVar21 = 0;
      piVar15 = param_1;
      goto LAB_027f27c4;
    }
  }
  piVar1 = param_1 + 0x36;
  piVar15 = piVar1;
  if ((param_1[0x3d] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0x3e) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0x40)) && piVar22[0xc] == param_1[0x42])) {
    if ((short)param_1[0x37] == 0) {
      iVar19 = *piVar22;
LAB_027f201c:
      if (*piVar1 != iVar19) goto LAB_027f1b30;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f201c;
      if ((*piVar1 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0x37) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0x39)) || piVar22[5] != param_1[0x3b]))
      goto LAB_027f1b30;
    }
    uVar21 = 1;
    goto LAB_027f27c4;
  }
LAB_027f1b30:
  piVar2 = param_1 + 0x6c;
  if ((param_1[0x73] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0x74) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0x76)) && piVar22[0xc] == param_1[0x78])) {
    if ((short)*(long *)(param_1 + 0x6d) == 0) {
      iVar19 = *piVar22;
LAB_027f2038:
      if (*piVar2 != iVar19) goto LAB_027f1b64;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f2038;
      if ((*piVar2 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0x6d) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0x6f)) || piVar22[5] != param_1[0x71]))
      goto LAB_027f1b64;
    }
    uVar21 = 2;
    piVar15 = piVar2;
    goto LAB_027f27c4;
  }
LAB_027f1b64:
  piVar3 = param_1 + 0xa2;
  if ((param_1[0xa9] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0xaa) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0xac)) && piVar22[0xc] == param_1[0xae])) {
    if ((short)param_1[0xa3] == 0) {
      iVar19 = *piVar22;
LAB_027f2054:
      if (*piVar3 != iVar19) goto LAB_027f1b98;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f2054;
      if ((*piVar3 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0xa3) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0xa5)) || piVar22[5] != param_1[0xa7]))
      goto LAB_027f1b98;
    }
    uVar21 = 3;
    piVar15 = piVar3;
    goto LAB_027f27c4;
  }
LAB_027f1b98:
  piVar4 = param_1 + 0xd8;
  if ((param_1[0xdf] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0xe0) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0xe2)) && piVar22[0xc] == param_1[0xe4])) {
    if ((short)*(long *)(param_1 + 0xd9) == 0) {
      iVar19 = *piVar22;
LAB_027f2070:
      if (*piVar4 != iVar19) goto LAB_027f1bd0;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f2070;
      if ((*piVar4 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0xd9) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0xdb)) || piVar22[5] != param_1[0xdd]))
      goto LAB_027f1bd0;
    }
    uVar21 = 4;
    piVar15 = piVar4;
    goto LAB_027f27c4;
  }
LAB_027f1bd0:
  piVar5 = param_1 + 0x10e;
  if ((param_1[0x115] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0x116) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0x118)) && piVar22[0xc] == param_1[0x11a])) {
    if ((short)param_1[0x10f] == 0) {
      iVar19 = *piVar22;
LAB_027f208c:
      if (*piVar5 != iVar19) goto LAB_027f1c04;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f208c;
      if ((*piVar5 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0x10f) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0x111)) || piVar22[5] != param_1[0x113]))
      goto LAB_027f1c04;
    }
    uVar21 = 5;
    piVar15 = piVar5;
    goto LAB_027f27c4;
  }
LAB_027f1c04:
  piVar6 = param_1 + 0x144;
  if ((param_1[0x14b] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0x14c) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0x14e)) && piVar22[0xc] == param_1[0x150])) {
    if ((short)*(long *)(param_1 + 0x145) == 0) {
      iVar19 = *piVar22;
LAB_027f20a8:
      if (*piVar6 != iVar19) goto LAB_027f1c3c;
    }
    else {
      iVar19 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f20a8;
      if ((*piVar6 != iVar19) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0x145) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0x147)) || piVar22[5] != param_1[0x149]))
      goto LAB_027f1c3c;
    }
    uVar21 = 6;
    piVar15 = piVar6;
    goto LAB_027f27c4;
  }
LAB_027f1c3c:
  piVar7 = param_1 + 0x17a;
  if ((param_1[0x181] == iVar18) &&
     ((*(long *)(piVar22 + 8) == *(long *)(param_1 + 0x182) &&
      *(long *)(piVar22 + 10) == *(long *)(param_1 + 0x184)) && piVar22[0xc] == param_1[0x186])) {
    if ((short)param_1[0x17b] == 0) {
      iVar18 = *piVar22;
LAB_027f20c4:
      if (*piVar7 != iVar18) goto LAB_027f1c70;
    }
    else {
      iVar18 = *piVar22;
      if ((short)piVar22[1] == 0) goto LAB_027f20c4;
      if ((*piVar7 != iVar18) ||
         ((*(long *)(piVar22 + 1) != *(long *)(param_1 + 0x17b) ||
          *(long *)(piVar22 + 3) != *(long *)(param_1 + 0x17d)) || piVar22[5] != param_1[0x17f]))
      goto LAB_027f1c70;
    }
    uVar21 = 7;
    piVar15 = piVar7;
    goto LAB_027f27c4;
  }
LAB_027f1c70:
  uVar21 = 0;
  if ((param_1[7] == 0) || (*param_1 == 0)) {
    piVar15 = param_1;
    goto LAB_027f27c4;
  }
  uVar21 = 1;
  if ((param_1[0x3d] == 0) || (*piVar1 == 0)) goto LAB_027f27c4;
  uVar21 = 2;
  if (param_1[0x73] == 0) {
    piVar15 = piVar2;
    goto LAB_027f27c4;
  }
  piVar15 = piVar2;
  if (*piVar2 == 0) goto LAB_027f27c4;
  uVar21 = 3;
  if (param_1[0xa9] == 0) {
    piVar15 = piVar3;
    goto LAB_027f27c4;
  }
  piVar15 = piVar3;
  if (*piVar3 == 0) goto LAB_027f27c4;
  uVar21 = 4;
  if (param_1[0xdf] == 0) {
    piVar15 = piVar4;
    goto LAB_027f27c4;
  }
  piVar15 = piVar4;
  if (*piVar4 == 0) goto LAB_027f27c4;
  uVar21 = 5;
  if (param_1[0x115] == 0) {
    piVar15 = piVar5;
    goto LAB_027f27c4;
  }
  piVar15 = piVar5;
  if (*piVar5 == 0) goto LAB_027f27c4;
  uVar21 = 6;
  if (param_1[0x14b] == 0) {
    piVar15 = piVar6;
    goto LAB_027f27c4;
  }
  piVar15 = piVar6;
  if (*piVar6 == 0) goto LAB_027f27c4;
  uVar21 = 7;
  if (param_1[0x181] == 0) {
    piVar15 = piVar7;
    goto LAB_027f27c4;
  }
  piVar15 = piVar7;
  if (*piVar7 == 0) goto LAB_027f27c4;
  FUN_038e7ea0(&local_98);
  FUN_025196e4(&uStack_99);
  uVar23 = local_90;
  uVar21 = uStack_94;
  uVar8 = 0;
  if (-1 < (int)DAT_05454114) {
    uVar8 = 1 << (ulong)(DAT_05454114 & 0x1f);
  }
  if ((uVar8 & 1) == 0) {
    uVar24 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar20 = uVar24 >> 8 ^ local_8c >> 0x13 ^ uVar24 ^ local_8c;
    local_68 = *(long *)(param_1 + 0x34);
    local_90 = local_8c;
    piVar22 = param_1;
    if (local_68 == 0) {
    }
    else {
      local_8c = uVar20;
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      if ((uVar14 & 1) != 0) {
        local_a0 = 0;
        local_b8 = (int *)0x0;
        uVar24 = 1;
        goto LAB_027f216c;
      }
      uVar21 = local_98;
      uVar20 = local_8c;
      uVar23 = uStack_94;
    }
    uVar21 = uVar21 ^ uVar21 << 0xb;
    uVar24 = 1;
    local_a0 = 1;
    local_8c = uVar21 >> 8 ^ uVar20 >> 0x13 ^ uVar21 ^ uVar20;
    local_b8 = param_1;
    local_98 = uVar23;
    uStack_94 = local_90;
    local_90 = uVar20;
  }
  else {
    piVar22 = (int *)0x0;
    local_a0 = 0;
    uVar24 = 0;
    local_b8 = (int *)0x0;
  }
LAB_027f216c:
  uVar23 = local_90;
  uVar21 = uStack_94;
  if ((uVar8 >> 1 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar20 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar20 = uVar20 >> 8 ^ local_8c >> 0x13 ^ uVar20 ^ local_8c;
    local_90 = local_8c;
    bVar10 = ((ulong)uVar20 * (ulong)uVar24 & 0xffffffff00000000) == 0;
    local_68 = *(long *)(param_1 + 0x6a);
    if (bVar10) {
      piVar22 = piVar1;
    }
    local_8c = uVar20;
    if (local_68 != 0) {
      uVar21 = (uint)bVar10;
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      if ((uVar14 & 1) != 0) {
        uVar23 = 0;
        goto LAB_027f2250;
      }
    }
    uVar21 = (uint)bVar10;
    local_98 = local_98 ^ local_98 << 0xb;
    local_a0 = local_a0 + 1;
    uVar20 = local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c;
    bVar10 = ((ulong)uVar20 * (ulong)local_a0 & 0xffffffff00000000) == 0;
    uVar23 = (uint)bVar10;
    if (bVar10) {
      local_b8 = piVar1;
    }
    local_98 = uStack_94;
    uStack_94 = local_90;
    local_90 = local_8c;
    local_8c = uVar20;
  }
  else {
    uVar21 = 0;
    uVar23 = 0;
  }
LAB_027f2250:
  uVar16 = local_90;
  uVar20 = uStack_94;
  if ((uVar8 >> 2 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar17 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar17 = uVar17 >> 8 ^ local_8c >> 0x13 ^ uVar17 ^ local_8c;
    local_90 = local_8c;
    local_68 = *(long *)(param_1 + 0xa0);
    if (((ulong)uVar17 * (ulong)uVar24 & 0xffffffff00000000) == 0) {
      uVar21 = 2;
      piVar22 = piVar2;
    }
    local_8c = uVar17;
    if (local_68 != 0) {
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      if ((uVar14 & 1) != 0) {
        goto LAB_027f2340;
      }
    }
    local_98 = local_98 ^ local_98 << 0xb;
    local_a0 = local_a0 + 1;
    uVar20 = local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c;
    if (((ulong)uVar20 * (ulong)local_a0 & 0xffffffff00000000) == 0) {
      uVar23 = 2;
      local_b8 = piVar2;
    }
    local_98 = uStack_94;
    uStack_94 = local_90;
    local_90 = local_8c;
    local_8c = uVar20;
  }
LAB_027f2340:
  uVar16 = local_90;
  uVar20 = uStack_94;
  if ((uVar8 >> 3 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar17 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar17 = uVar17 >> 8 ^ local_8c >> 0x13 ^ uVar17 ^ local_8c;
    local_90 = local_8c;
    local_68 = *(long *)(param_1 + 0xd6);
    if (((ulong)uVar17 * (ulong)uVar24 & 0xffffffff00000000) == 0) {
      uVar21 = 3;
      piVar22 = piVar3;
    }
    local_8c = uVar17;
    if (local_68 != 0) {
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      if ((uVar14 & 1) != 0) {
        goto LAB_027f2420;
      }
    }
    local_98 = local_98 ^ local_98 << 0xb;
    local_a0 = local_a0 + 1;
    uVar20 = local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c;
    if (((ulong)uVar20 * (ulong)local_a0 & 0xffffffff00000000) == 0) {
      uVar23 = 3;
      local_b8 = piVar3;
    }
    local_98 = uStack_94;
    uStack_94 = local_90;
    local_90 = local_8c;
    local_8c = uVar20;
  }
LAB_027f2420:
  uVar16 = local_90;
  uVar20 = uStack_94;
  if ((uVar8 >> 4 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar17 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar17 = uVar17 >> 8 ^ local_8c >> 0x13 ^ uVar17 ^ local_8c;
    local_90 = local_8c;
    local_68 = *(long *)(param_1 + 0x10c);
    if (((ulong)uVar17 * (ulong)uVar24 & 0xffffffff00000000) == 0) {
      uVar21 = 4;
      piVar22 = piVar4;
    }
    if (local_68 == 0) {
    }
    else {
      local_8c = uVar17;
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      if ((uVar14 & 1) != 0) {
        goto LAB_027f2510;
      }
      uVar20 = local_98;
      uVar17 = local_8c;
      uVar16 = uStack_94;
    }
    uVar20 = uVar20 ^ uVar20 << 0xb;
    local_a0 = local_a0 + 1;
    local_8c = uVar20 >> 8 ^ uVar17 >> 0x13 ^ uVar20 ^ uVar17;
    if (((ulong)local_8c * (ulong)local_a0 & 0xffffffff00000000) == 0) {
      uVar23 = 4;
      local_b8 = piVar4;
    }
    local_98 = uVar16;
    uStack_94 = local_90;
    local_90 = uVar17;
  }
LAB_027f2510:
  uVar9 = local_90;
  uVar17 = uStack_94;
  uVar16 = local_98;
  uVar17 = uStack_94;
  uVar9 = local_90;
  uVar20 = local_8c;
  if ((uVar8 >> 5 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar20 = local_98 ^ local_98 << 0xb;
    local_98 = uStack_94;
    uStack_94 = local_90;
    uVar20 = uVar20 >> 8 ^ local_8c >> 0x13 ^ uVar20 ^ local_8c;
    local_90 = local_8c;
    bVar10 = ((ulong)uVar20 * (ulong)uVar24 & 0xffffffff00000000) == 0;
    if (bVar10) {
      uVar21 = 5;
    }
    local_68 = *(long *)(param_1 + 0x142);
    if (bVar10) {
      piVar22 = piVar5;
    }
    local_8c = uVar20;
    if (local_68 != 0) {
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      uVar16 = local_98;
      uVar17 = uStack_94;
      uVar9 = local_90;
      uVar20 = local_8c;
      if ((uVar14 & 1) != 0) goto joined_r0x027f259c;
    }
    local_98 = local_98 ^ local_98 << 0xb;
    local_a0 = local_a0 + 1;
    uVar20 = local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c;
    uVar16 = uStack_94;
    uVar17 = local_90;
    uVar9 = local_8c;
    if (((ulong)uVar20 * (ulong)local_a0 & 0xffffffff00000000) == 0) {
      uVar23 = 5;
      local_b8 = piVar5;
      uVar9 = local_8c;
    }
  }
joined_r0x027f259c:
  local_90 = uVar20;
  uStack_94 = uVar9;
  local_98 = uVar17;
  uVar20 = local_90;
  uVar17 = local_98;
  uVar9 = uStack_94;
  if ((uVar8 >> 6 & 1) == 0) {
    uVar24 = uVar24 + 1;
    uVar16 = uVar16 ^ uVar16 << 0xb;
    local_8c = uVar16 >> 8 ^ local_90 >> 0x13 ^ uVar16 ^ local_90;
    local_68 = *(long *)(param_1 + 0x178);
    if (((ulong)local_8c * (ulong)uVar24 & 0xffffffff00000000) == 0) {
      uVar21 = 6;
      piVar22 = piVar6;
    }
    if (local_68 != 0) {
      uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0);
      uVar20 = local_8c;
      uVar17 = uStack_94;
      uVar9 = local_90;
      uVar16 = local_98;
      if ((uVar14 & 1) != 0) goto joined_r0x027f26d4;
    }
    local_98 = local_98 ^ local_98 << 0xb;
    local_a0 = local_a0 + 1;
    uVar20 = local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c;
    uVar17 = local_90;
    uVar9 = local_8c;
    uVar16 = uStack_94;
    if (((ulong)uVar20 * (ulong)local_a0 & 0xffffffff00000000) == 0) {
      uVar23 = 6;
      local_b8 = piVar6;
      uVar17 = local_90;
      uVar9 = local_8c;
    }
  }
joined_r0x027f26d4:
  uStack_94 = uVar9;
  local_98 = uVar17;
  local_90 = uVar20;
  uVar20 = local_98;
  uVar17 = uStack_94;
  local_8c = local_90;
  if ((uVar8 >> 7 & 1) == 0) {
    uVar16 = uVar16 ^ uVar16 << 0xb;
    local_8c = uVar16 >> 8 ^ local_90 >> 0x13 ^ uVar16 ^ local_90;
    local_68 = *(long *)(param_1 + 0x1ae);
    if (((ulong)local_8c * (ulong)(uVar24 + 1) & 0xffffffff00000000) == 0) {
      uVar21 = 7;
      piVar22 = piVar7;
    }
    if ((local_68 == 0) || (uVar14 = FUN_01df2da0(&local_68,&uStack_99,0,0), (uVar14 & 1) == 0)) {
      local_98 = local_98 ^ local_98 << 0xb;
      if (((ulong)(local_98 >> 8 ^ local_8c >> 0x13 ^ local_98 ^ local_8c) * (ulong)(local_a0 + 1) &
          0xffffffff00000000) == 0) {
        uVar23 = 7;
        local_b8 = piVar7;
      }
      uVar16 = uStack_94;
      uVar20 = uStack_94;
      uVar17 = local_90;
    }
    else {
      uVar16 = local_98;
      uVar20 = uStack_94;
      uVar17 = local_90;
    }
  }
  local_90 = uVar17;
  uStack_94 = uVar20;
  local_98 = uVar16;
  piVar15 = piVar22;
  if (local_b8 != (int *)0x0 || piVar22 == (int *)0x0) {
    piVar15 = local_b8;
  }
  if (piVar15 == (int *)0x0) {
    FUN_02640184(&local_88);
    return 0xffffffff;
  }
  if (local_b8 != (int *)0x0 || piVar22 == (int *)0x0) {
    uVar21 = uVar23;
  }
  piVar22 = (int *)(*(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90));
LAB_027f27c4:
  FUN_027f0c8c(piVar15,piVar22);
  if ((((bVar11 & 1) != 0) && (*(long *)(lVar12 + 0x17bb0) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return uVar21;
}

