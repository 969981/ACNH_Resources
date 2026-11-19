
undefined8 FUN_03bde320(long param_1)

{
  ushort uVar1;
  long *plVar2;
  undefined **ppuVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  undefined1 auVar8 [12];
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  byte bVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  char *pcVar23;
  undefined1 (*pauVar24) [12];
  ulong uVar25;
  uint uVar26;
  undefined4 *puVar27;
  char *pcVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ushort uVar32;
  long *plVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined1 (*pauVar36) [12];
  void *__src;
  long *plVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [12];
  long *local_158;
  undefined7 local_150;
  undefined1 uStack_149;
  ushort uStack_148;
  byte bStack_146;
  undefined *local_140;
  char *local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *local_110;
  char *pcStack_108;
  undefined *local_100;
  char *local_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined1 local_ad;
  char local_a4 [4];
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  undefined1 (*local_88) [12];
  long local_80;
  uint *local_78;
  undefined8 local_70;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar6 = *(undefined **)(param_1 + 0x20);
  plVar12 = (long *)(**(code **)(**(long **)(*(long *)(puVar6 + 0x30) + 0x18) + 0x18))();
  plVar33 = *(long **)(*(long *)PTR_DAT_04bb49b0 + 0x9b0);
  if (plVar33 != (long *)0x0) {
    local_f0 = *(undefined8 *)(param_1 + 0x28);
    local_f8 = (char *)0x0;
    local_100 = puVar6;
    lStack_e8 = param_1;
    local_e0 = uVar5;
    uVar13 = (**(code **)(*plVar33 + 0x20))(plVar33,&local_100);
    if ((uVar13 & 1) != 0) {
      return 0;
    }
  }
  plVar37 = *(long **)(puVar6 + 0x118);
  if (plVar37 != (long *)0x0) {
    local_f0 = *(undefined8 *)(param_1 + 0x28);
    local_f8 = (char *)0x0;
    local_100 = puVar6;
    lStack_e8 = param_1;
    local_e0 = uVar5;
    uVar13 = (**(code **)(*plVar37 + 0x20))(plVar37,&local_100);
    if ((uVar13 & 1) != 0) {
      return 0;
    }
  }
  pcVar14 = (char *)FUN_03bdbcf0(plVar12,*(undefined8 *)(param_1 + 0x28));
  if (*pcVar14 == '\0') {
    return 1;
  }
  iVar9 = strncmp(pcVar14,"@Blank",6);
  if (iVar9 == 0) {
    return 1;
  }
  local_ad = 0;
  pcVar23 = (char *)((long)&local_f0 + 4);
  local_f0 = CONCAT35(local_f0._5_3_,0x40);
  local_100 = PTR_DAT_04bb2bc0 + 0x10;
  local_f8 = pcVar23;
  lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18);
  plVar15 = (long *)(lVar20 + 0x18);
  uVar11 = *(uint *)(lVar20 + 0x10);
  plVar2 = plVar15 + uVar11;
  if (1 < uVar11) {
    plVar2 = plVar15;
  }
  lVar21 = *plVar2;
  uVar13 = *(long *)(param_1 + 0x28) - *(long *)(lVar21 + 0x28);
  lVar20 = (long)(uVar13 * 0x8000000) >> 0x20;
  if (*(uint *)(lVar21 + 0x78) <= (uint)(uVar13 >> 5)) {
    lVar20 = 0;
  }
  lVar20 = *(long *)(lVar21 + 0x80) + lVar20 * 8;
  if ((*(byte *)(lVar20 + 2) >> 2 & 1) != 0) {
    lVar21 = 0;
    __src = *(void **)(*(long *)(*(long *)(*(long *)(*(long *)(puVar6 + 0x30) + 0x48) +
                                          (ulong)*(byte *)(lVar20 + 4) * 8) + 0x70) +
                      (ulong)*(uint *)(*(long *)(puVar6 + 0x78) + (ulong)*(byte *)(lVar20 + 4) * 4)
                      * 0x10);
    do {
      if (pcVar14[lVar21] == '\0') goto LAB_03bde4ec;
      if (pcVar14[lVar21 + 1] == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_03bde4ec;
      }
      if (pcVar14[lVar21 + 2] == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_03bde4ec;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_03bde4ec:
    local_138 = *(char **)(PTR_PTR_04bb2238 + 8);
    if ((int)(uint)*(byte *)(lVar20 + 6) <= (int)lVar21) {
      local_138 = pcVar14 + *(byte *)(lVar20 + 6);
    }
    local_140 = PTR_DAT_04bb2020 + 0x10;
    pcVar28 = pcVar14;
    if (pcVar23 != pcVar14) {
      uVar11 = (uint)*(byte *)(lVar20 + 5);
      if (0x3e < uVar11) {
        uVar11 = 0x3f;
      }
      memcpy(pcVar23,pcVar14,(ulong)uVar11);
      pcVar23[uVar11] = '\0';
      pcVar28 = pcVar23;
    }
    lVar21 = 0;
    local_ad = 0;
    do {
      if (local_a4[lVar21 + -0x48] == '\0') goto LAB_03bde59c;
      if (local_a4[lVar21 + -0x47] == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_03bde59c;
      }
      if (local_a4[lVar21 + -0x46] == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_03bde59c;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_03bde59c:
    uVar11 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
    lVar21 = 0;
    do {
      if (*(char *)((long)__src + lVar21) == '\0') goto LAB_03bde5e0;
      if (*(char *)((long)__src + lVar21 + 1) == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_03bde5e0;
      }
      if (*(char *)((long)__src + lVar21 + 2) == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_03bde5e0;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_03bde5e0:
    uVar26 = (uint)lVar21;
    if ((int)(0x40 - uVar11) <= (int)(uint)lVar21) {
      uVar26 = 0x3f - uVar11;
    }
    if ((int)uVar26 < 1) {
      puVar22 = PTR_DAT_04bb2bc0 + 0x10;
    }
    else {
      memcpy(pcVar28 + uVar11,__src,(ulong)uVar26);
      pcVar28[(int)(uVar26 + uVar11)] = '\0';
      puVar22 = local_100;
      pcVar23 = local_f8;
    }
    bVar19 = *(byte *)(lVar20 + 7);
    (**(code **)(puVar22 + 0x18))(&local_100);
    lVar20 = 0;
    do {
      if (local_f8[lVar20] == '\0') goto LAB_03bde680;
      if (local_f8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_03bde680;
      }
      if (local_f8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_03bde680;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_03bde680:
    uVar11 = (uint)lVar20 & ((int)(uint)lVar20 >> 0x1f ^ 0xffffffffU);
    uVar26 = (uint)bVar19;
    if ((int)((int)local_f0 - uVar11) <= (int)(uint)bVar19) {
      uVar26 = (int)local_f0 + ~uVar11;
    }
    if (0 < (int)uVar26) {
      (**(code **)(local_140 + 0x18))(&local_140);
      memcpy(pcVar23 + uVar11,local_138,(ulong)uVar26);
      pcVar23[(ulong)uVar26 + (ulong)uVar11] = '\0';
    }
  }
  local_110 = PTR_DAT_04bb2020 + 0x10;
  pcStack_108 = pcVar14;
  cVar7 = *local_f8;
  puVar34 = *(undefined8 **)(puVar6 + 0x110);
  local_140 = (undefined *)0x0;
  local_138 = (char *)0x0;
  local_130 = 0xff;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  ppuVar3 = &local_110;
  if (cVar7 != '\0') {
    ppuVar3 = &local_100;
  }
  if (plVar33 == (long *)0x0) {
    iVar9 = 0;
    iVar10 = 0;
    if (plVar37 != (long *)0x0) goto LAB_03bde754;
LAB_03bde790:
    if (iVar9 == 0) {
LAB_03bde79c:
      ppcVar4 = &pcStack_108;
      if (cVar7 != '\0') {
        ppcVar4 = &local_f8;
      }
      if (((**ppcVar4 == '\0') || (puVar34 == (undefined8 *)0x0)) ||
         (uVar13 = (**(code **)*puVar34)(puVar34,&local_140,ppuVar3), (uVar13 & 1) == 0)) {
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x20))();
        (**(code **)(*ppuVar3 + 0x18))(ppuVar3);
        goto LAB_03bdeb04;
      }
    }
  }
  else {
    iVar10 = (**(code **)(*plVar33 + 0x40))
                       (plVar33,&local_140,ppuVar3,puVar6,*(undefined8 *)(param_1 + 0x28));
    if (iVar10 == 2) {
      return 0;
    }
    iVar9 = iVar10;
    if (plVar37 == (long *)0x0) goto LAB_03bde790;
LAB_03bde754:
    iVar9 = (**(code **)(*plVar37 + 0x40))
                      (plVar37,&local_140,ppuVar3,puVar6,*(undefined8 *)(param_1 + 0x28));
    if (iVar9 == 2) {
      return 0;
    }
    if (iVar9 == 0 && iVar10 == 0) goto LAB_03bde79c;
  }
  bStack_146 = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 3;
  local_88 = (undefined1 (*) [12])FUN_03bdbe18(plVar12,*(undefined8 *)(param_1 + 0x28));
  puVar22 = PTR_DAT_04bc3ee8;
  lVar20 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  if (((*(char *)(lVar20 + 8) == '\0') || (*(char *)local_88 == '\0')) ||
     (plVar15 = (long *)FUN_03ba4630(lVar20,&local_90), plVar15 == (long *)0x0)) {
LAB_03bde878:
    plVar15 = *(long **)(*(long *)(*(long *)puVar22 + 0x18) + 0x18);
  }
  else {
    if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3d48);
    }
    uVar13 = (**(code **)(*plVar15 + 0x18))(plVar15,PTR_DAT_04bc3d40);
    if ((uVar13 & 1) == 0) goto LAB_03bde878;
  }
  local_158 = plVar15;
  uVar13 = (**(code **)(*plVar12 + 0x58))(plVar12,*(undefined8 *)(param_1 + 0x28));
  uVar1 = (ushort)(uVar13 >> 2) & 2;
  uVar32 = uVar1 | 1;
  uVar11 = (**(code **)(*plVar12 + 0x58))(plVar12,*(undefined8 *)(param_1 + 0x28));
  uVar35 = *(undefined8 *)(param_1 + 0x28);
  if ((uVar11 >> 1 & 1) != 0) {
    uVar11 = (**(code **)(*plVar12 + 0x58))(plVar12,uVar35);
    uVar35 = *(undefined8 *)(param_1 + 0x28);
    if ((uVar11 >> 4 & 1) == 0) {
      uVar13 = FUN_03bea324(plVar12,uVar35);
      if ((uVar13 & 1) == 0) {
        uVar32 = uVar1;
      }
    }
  }
  uStack_148 = uVar32;
  uVar11 = (**(code **)(*plVar12 + 0x58))(plVar12,uVar35);
  bStack_146 = (byte)(uVar11 >> 4) & 1;
  auVar52 = FUN_03b3d1bc(*(undefined8 *)(param_1 + 0x60),&local_140,&local_158,0);
  lVar20 = auVar52._0_8_;
  pauVar36 = (undefined1 (*) [12])(param_1 + 0x68);
  *pauVar36 = auVar52;
  if ((((lVar20 == 0) || (*(int *)(lVar20 + 0x10) != auVar52._8_4_)) ||
      (*(int *)(lVar20 + 0xc) == 0)) || (*(int *)(lVar20 + 0xc) == 7)) {
LAB_03bdeb04:
    (**(code **)(*ppuVar3 + 0x18))(ppuVar3);
    return 0;
  }
  local_90 = *(undefined **)(param_1 + 0x20);
  local_80 = *(long *)(param_1 + 0x28);
  local_88 = *(undefined1 (**) [12])(*(long *)(local_90 + 0x30) + 0x18);
  local_78 = (uint *)0x0;
  local_70 = (ulong)local_70._5_3_ << 0x28;
  uVar13 = *(ulong *)PTR_DAT_04bb38c0;
  uVar25 = *(ulong *)PTR_DAT_04bb38c8;
  puVar31 = (undefined8 *)(uVar25 | *(uint *)(local_80 + 0x18));
  puVar34 = puVar31 + 0x20000000;
  if (uVar13 <= *(uint *)(local_80 + 0x18)) {
    puVar34 = puVar31;
  }
  uVar11 = (uint)*puVar34;
  if ((uVar11 >> 0x11 & 1) != 0) {
    uVar11 = (uVar11 & 0x3ffff) - (uVar11 >> 1 & 0x15555);
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    puVar31 = (undefined8 *)((long)local_88 + 0x18) + *(uint *)((long)local_88 + 0x10);
    if (1 < *(uint *)((long)local_88 + 0x10)) {
      puVar31 = (undefined8 *)((long)local_88 + 0x18);
    }
    local_70 = CONCAT44(local_70._4_4_,
                        *(undefined4 *)
                         (*(long *)(*(long *)*puVar31 + 0x48) +
                         ((ulong)*(uint *)((long)puVar34 +
                                          ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f) * 4 + 4) &
                         0xffffff) * 4));
  }
  plVar12 = (long *)((long)local_88 + 0x18) + *(uint *)((long)local_88 + 0x10);
  if (1 < *(uint *)((long)local_88 + 0x10)) {
    plVar12 = (long *)((long)local_88 + 0x18);
  }
  lVar29 = *plVar12;
  uVar30 = local_80 - *(long *)(lVar29 + 0x28);
  lVar21 = (long)(uVar30 * 0x8000000) >> 0x20;
  if (*(uint *)(lVar29 + 0x78) <= (uint)(uVar30 >> 5)) {
    lVar21 = 0;
  }
  uVar30 = *(ulong *)(param_1 + 0x38) & 0xffffffff;
  local_70 = CONCAT35(local_70._5_3_,
                      CONCAT14(*(byte *)(*(long *)(lVar29 + 0x80) + lVar21 * 8 + 2) >> 1,
                               (uint)local_70)) & 0xffffff01ffffffff;
  if (uVar30 == 0) {
    lVar21 = *(long *)(param_1 + 0x18);
LAB_03bdeb20:
    puVar31 = (undefined8 *)(uVar25 | *(uint *)(local_80 + 0x18));
    puVar34 = puVar31 + 0x20000000;
    if (uVar13 <= *(uint *)(local_80 + 0x18)) {
      puVar34 = puVar31;
    }
    uVar11 = (uint)*puVar34;
    if ((uVar11 >> 9 & 1) != 0) {
      uVar11 = (uVar11 & 0x3ff) - (uVar11 >> 1 & 0x155);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      puVar18 = (uint *)((long)puVar34 + ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f) * 4 + 4);
      goto LAB_03bdeb78;
    }
  }
  else {
    lVar21 = *(long *)(param_1 + 0x18);
    local_78 = (uint *)(uVar25 | uVar30) + 0x40000000;
    if (uVar13 <= uVar30) {
      local_78 = (uint *)(uVar25 | uVar30);
    }
    if ((local_78 == (uint *)0x0) || (uVar11 = *local_78, (uVar11 >> 4 & 1) == 0))
    goto LAB_03bdeb20;
    uVar11 = (uVar11 & 0x1f) - (uVar11 >> 1 & 5);
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    puVar18 = local_78 + ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f);
LAB_03bdeb78:
    fVar47 = (float)FUN_03be0a1c(&local_90,puVar18);
    lVar20 = *(long *)*pauVar36;
    fVar48 = -fVar47;
    if (0.0 <= fVar47) {
      fVar48 = fVar47;
    }
    if (((fVar48 <= 3.4028235e+38) && (lVar20 != 0)) &&
       ((*(int *)(param_1 + 0x70) == *(int *)(lVar20 + 0x10) &&
        ((0.0 <= fVar47 && (*(int *)(lVar20 + 0xc) < 3)))))) {
      *(float *)(lVar20 + 0x30) = fVar47;
      lVar20 = *(long *)*pauVar36;
    }
  }
  uVar13 = *(ulong *)PTR_DAT_04bb38c0;
  uVar25 = *(ulong *)PTR_DAT_04bb38c8;
  puVar31 = (undefined8 *)(uVar25 | *(uint *)(local_80 + 0x18));
  puVar34 = puVar31 + 0x20000000;
  if (uVar13 <= *(uint *)(local_80 + 0x18)) {
    puVar34 = puVar31;
  }
  uVar11 = (uint)*puVar34;
  if ((uVar11 >> 10 & 1) != 0) {
    puVar31 = (undefined8 *)((long)local_88 + 0x18) + *(uint *)((long)local_88 + 0x10);
    if (1 < *(uint *)((long)local_88 + 0x10)) {
      puVar31 = (undefined8 *)((long)local_88 + 0x18);
    }
    if (lVar20 != 0) {
      uVar11 = (uVar11 & 0x7ff) - (uVar11 >> 1 & 0x155);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar9 = *(int *)(lVar20 + 0x10);
      uVar38 = *(undefined4 *)
                (*(long *)(*(long *)*puVar31 + 0x48) +
                ((ulong)*(uint *)((long)puVar34 +
                                 ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f) * 4 + 4) & 0xffffff) *
                4);
      iVar10 = *(int *)(param_1 + 0x70);
      if (iVar10 == iVar9) {
        *(undefined4 *)(lVar20 + 0x34) = uVar38;
        lVar20 = *(long *)*pauVar36;
        if (lVar20 == 0) goto LAB_03bdecdc;
        iVar10 = *(int *)(param_1 + 0x70);
        iVar9 = *(int *)(lVar20 + 0x10);
      }
      if ((iVar10 == iVar9) && (*(int *)(lVar20 + 0xc) < 3)) {
        lVar29 = *(long *)(*(long *)(lVar20 + 0x120) + 8);
        if (DAT_05aebc00 == '\0') {
          puVar27 = (undefined4 *)(lVar29 + 0x14);
        }
        else {
          if (*(char *)(lVar29 + 0x58) == '\0') goto LAB_03bdecdc;
          puVar27 = (undefined4 *)(lVar29 + 0x6c);
        }
        *puVar27 = uVar38;
        lVar20 = *(long *)*pauVar36;
      }
    }
  }
LAB_03bdecdc:
  if (local_70._4_1_ == '\0') {
LAB_03bded38:
    if (lVar20 == 0) goto LAB_03bdf07c;
    iVar9 = *(int *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar20 + 0x10);
  }
  else {
    if (lVar20 == 0) goto LAB_03bdf07c;
    iVar9 = *(int *)(param_1 + 0x70);
    iVar10 = *(int *)(lVar20 + 0x10);
    if (iVar9 == iVar10) {
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,2);
      if ((*(int *)(lVar20 + 0xc) < 3) && ((*(ushort *)(lVar20 + 0x14) & 1) != 0)) {
        *(undefined4 *)(*(long *)(lVar20 + 0x120) + 0x14) = 2;
        lVar20 = *(long *)*pauVar36;
      }
      goto LAB_03bded38;
    }
  }
  if (iVar9 != iVar10) goto LAB_03bdf07c;
  lVar29 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18);
  plVar12 = (long *)(lVar29 + 0x18);
  uVar11 = *(uint *)(lVar29 + 0x10);
  plVar15 = plVar12 + uVar11;
  if (1 < uVar11) {
    plVar15 = plVar12;
  }
  lVar29 = *plVar15;
  if ((((uint)local_70 >> 2 & 1) != 0) || (*(char *)(lVar29 + 0xd4) != '\0')) {
    *(undefined1 *)(lVar20 + 0x1a4) = 0;
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  if ((*(ushort *)(lVar21 + 0x98) >> 0xc & 1) == 0) {
    uVar11 = (uint)*(byte *)(param_1 + 0x50);
  }
  else {
    bVar19 = *(byte *)(lVar21 + 0xe1);
    *(byte *)(lVar20 + 0x1a4) = bVar19 ^ 1;
    uVar11 = *(byte *)(param_1 + 0x50) & 0xfffffffd | (uint)bVar19 << 1;
    *(char *)(param_1 + 0x50) = (char)uVar11;
  }
  if ((local_70 & 1) == 0) {
    uVar26 = uVar11;
    if ((uVar11 >> 1 & 1) == 0) goto LAB_03bdedd8;
LAB_03bdedc4:
    if ((uVar26 >> 1 & 1) != 0) goto LAB_03bdf07c;
  }
  else {
    uVar26 = uVar11 | 4;
    *(char *)(param_1 + 0x50) = (char)uVar26;
    if ((uVar11 & 2) != 0) goto LAB_03bdedc4;
LAB_03bdedd8:
    puVar31 = (undefined8 *)(uVar25 | *(uint *)(local_80 + 0x18));
    puVar34 = puVar31 + 0x20000000;
    if (uVar13 <= *(uint *)(local_80 + 0x18)) {
      puVar34 = puVar31;
    }
    uVar11 = (uint)*puVar34;
    if ((uVar11 >> 0x10 & 1) == 0) {
      pcVar14 = *(char **)(lVar29 + 0xc0);
      if (pcVar14 != (char *)0x0) goto LAB_03bdee88;
    }
    else {
      uVar11 = (uVar11 & 0x1ffff) - (uVar11 >> 1 & 0x5555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      puVar31 = (undefined8 *)((long)local_88 + 0x18) + *(uint *)((long)local_88 + 0x10);
      if (1 < *(uint *)((long)local_88 + 0x10)) {
        puVar31 = (undefined8 *)((long)local_88 + 0x18);
      }
      uVar30 = (ulong)((*(uint *)((long)puVar34 +
                                 ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f) * 4 + 4) & 0xffffff) +
                      *(int *)(*(long *)*puVar31 + 0x70));
      pcVar23 = (char *)(uVar25 | uVar30);
      pcVar14 = pcVar23 + 0x100000000;
      if (uVar13 <= uVar30) {
        pcVar14 = pcVar23;
      }
      if (*pcVar14 != '\0') {
LAB_03bdee88:
        local_a0 = PTR_DAT_04bb2020 + 0x10;
        lVar17 = *(long *)puVar22;
        pcStack_98 = pcVar14;
        if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x28), lVar17 != 0)) {
          lVar16 = FUN_03baddf0(lVar17,&local_a0);
          lVar17 = *(long *)(lVar17 + 0x88);
          if (lVar16 != 0) {
            lVar17 = lVar16;
          }
          if (lVar17 != 0) {
            *(long *)(lVar20 + 0x1b8) = lVar17;
          }
        }
      }
    }
    puVar31 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(local_80 + 0x18));
    puVar34 = puVar31 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(local_80 + 0x18)) {
      puVar34 = puVar31;
    }
    uVar11 = (uint)*puVar34;
    if ((uVar11 >> 0xe & 1) == 0) {
LAB_03bdef64:
      fVar47 = *(float *)(lVar29 + 0xd8);
      if (fVar47 != -1.0) goto LAB_03bdef74;
    }
    else {
      uVar11 = (uVar11 & 0x7fff) - (uVar11 >> 1 & 0x1555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      fVar47 = (float)FUN_03be0a1c(&local_90,
                                   (long)puVar34 +
                                   ((ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f) * 4 + 4);
      fVar48 = -fVar47;
      if (0.0 <= fVar47) {
        fVar48 = fVar47;
      }
      if (3.4028235e+38 < fVar48) goto LAB_03bdef64;
LAB_03bdef74:
      *(float *)(lVar20 + 0x1c0) = fVar47;
    }
    pauVar24 = *(undefined1 (**) [12])(param_1 + 0x40);
    puVar34 = (undefined8 *)(lVar20 + 0x168);
    if (pauVar24 == (undefined1 (*) [12])0x0) {
      pauVar24 = *(undefined1 (**) [12])(*(long *)(param_1 + 0x58) + 8);
      if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) != '\0') goto LAB_03bdef8c;
LAB_03bdefc4:
      uVar44 = (undefined4)*(undefined8 *)(*pauVar24 + 8);
      uVar49 = (undefined4)((ulong)*(undefined8 *)(*pauVar24 + 8) >> 0x20);
      uVar38 = (undefined4)*(undefined8 *)*pauVar24;
      uVar39 = (undefined4)((ulong)*(undefined8 *)*pauVar24 >> 0x20);
      uVar45 = (undefined4)*(undefined8 *)pauVar24[2];
      uVar50 = (undefined4)((ulong)*(undefined8 *)pauVar24[2] >> 0x20);
      uVar40 = (undefined4)*(undefined8 *)(pauVar24[1] + 4);
      uVar41 = (undefined4)((ulong)*(undefined8 *)(pauVar24[1] + 4) >> 0x20);
      uVar46 = (undefined4)*(undefined8 *)(pauVar24[3] + 4);
      uVar51 = (undefined4)((ulong)*(undefined8 *)(pauVar24[3] + 4) >> 0x20);
      uVar42 = (undefined4)*(undefined8 *)(pauVar24[2] + 8);
      uVar43 = (undefined4)((ulong)*(undefined8 *)(pauVar24[2] + 8) >> 0x20);
    }
    else {
      if (*(char *)(param_1 + 0x48) == '\0') goto LAB_03bdefc4;
LAB_03bdef8c:
      auVar8 = *(undefined1 (*) [12])(pauVar24[1] + 4);
      auVar52 = *(undefined1 (*) [12])(pauVar24[2] + 8);
      uVar38 = SUB124(*pauVar24,0);
      uVar40 = SUB124(*pauVar24,4);
      uVar44 = auVar52._0_4_;
      uVar45 = auVar52._4_4_;
      uVar42 = SUB124(*pauVar24,8);
      uVar46 = SUB124(*(undefined1 (*) [12])(pauVar24[2] + 8),8);
      uVar39 = auVar8._0_4_;
      uVar41 = auVar8._4_4_;
      uVar49 = (undefined4)*(undefined8 *)pauVar24[4];
      uVar50 = (undefined4)((ulong)*(undefined8 *)pauVar24[4] >> 0x20);
      uVar43 = SUB124(*(undefined1 (*) [12])(pauVar24[1] + 4),8);
      uVar51 = (undefined4)*(undefined8 *)(pauVar24[4] + 8);
    }
    if ((*(ushort *)(lVar21 + 0x98) >> 9 & 1) == 0) {
      *(ulong *)(lVar20 + 0x170) = CONCAT44(uVar49,uVar44);
      *puVar34 = CONCAT44(uVar39,uVar38);
      *(ulong *)(lVar20 + 0x180) = CONCAT44(uVar50,uVar45);
      *(ulong *)(lVar20 + 0x178) = CONCAT44(uVar41,uVar40);
      *(undefined8 **)(lVar20 + 0x1a8) = puVar34;
      *(ulong *)(lVar20 + 400) = CONCAT44(uVar51,uVar46);
      *(ulong *)(lVar20 + 0x188) = CONCAT44(uVar43,uVar42);
      *(undefined4 *)(param_1 + 0x98) = uVar51;
      *(ulong *)(param_1 + 0x90) = CONCAT44(uVar50,uVar49);
    }
    else {
      uVar49 = *(undefined4 *)(lVar21 + 0xc0);
      uVar51 = *(undefined4 *)(lVar21 + 0xc4);
      uVar50 = *(undefined4 *)(lVar21 + 200);
      *(undefined8 **)(lVar20 + 0x1a8) = puVar34;
      *(ulong *)(lVar20 + 0x170) = CONCAT44(uVar49,uVar44);
      *puVar34 = CONCAT44(uVar39,uVar38);
      *(ulong *)(lVar20 + 0x180) = CONCAT44(uVar51,uVar45);
      *(ulong *)(lVar20 + 0x178) = CONCAT44(uVar41,uVar40);
      *(ulong *)(lVar20 + 400) = CONCAT44(uVar50,uVar46);
      *(ulong *)(lVar20 + 0x188) = CONCAT44(uVar43,uVar42);
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 8;
    }
    *(undefined8 *)(lVar20 + 0x198) = 0;
    *(undefined4 *)(lVar20 + 0x1a0) = 0;
    *(long *)(lVar20 + 0x1b0) = lVar20 + 0x198;
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) goto LAB_03bdf07c;
  }
  lVar17 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x20))();
  lVar29 = 0x538;
  if (*(char *)(lVar17 + 0x968) != '\0') {
    lVar29 = 0x108;
  }
  if ((*(byte *)(lVar17 + lVar29 + 2) >> 4 & 1) != 0) {
    *(undefined1 *)(lVar20 + 0x1a4) = 0;
  }
LAB_03bdf07c:
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  local_a4[0] = '\0';
  uVar13 = FUN_03bdfe34(&local_90,&local_a0,3,0,local_a4);
  if ((uVar13 & 1) != 0) {
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
    *(undefined4 *)(param_1 + 0x7c) = local_a0._0_4_;
    if (local_a4[0] != '\0') {
      *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 1;
    }
  }
  puVar31 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(local_80 + 0x18));
  puVar34 = puVar31 + 0x20000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(local_80 + 0x18)) {
    puVar34 = puVar31;
  }
  uVar11 = (uint)*puVar34;
  if ((uVar11 >> 4 & 1) != 0) {
    uVar11 = (uVar11 & 0x1f) - (uVar11 >> 1 & 5);
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    uVar13 = (ulong)(uVar11 + (uVar11 >> 0x10)) & 0x3f;
    fVar48 = (float)FUN_03be0a1c(&local_90,(long)puVar34 + uVar13 * 4 + 4);
    uVar11 = *(uint *)((long)puVar34 + uVar13 * 4 + 4);
    if (uVar11 >> 0x18 == 2) {
      puVar34 = (undefined8 *)((long)local_88 + 0x18) + *(uint *)((long)local_88 + 0x10);
      if (1 < *(uint *)((long)local_88 + 0x10)) {
        puVar34 = (undefined8 *)((long)local_88 + 0x18);
      }
      bVar19 = *(byte *)(*(long *)(*(long *)*puVar34 + 0x58) + ((ulong)uVar11 & 0xffffff) * 0x14 +
                        0x12) ^ 1;
    }
    else {
      bVar19 = 0;
    }
    fVar47 = -fVar48;
    if (0.0 <= fVar48) {
      fVar47 = fVar48;
    }
    if (fVar47 <= 3.4028235e+38) {
      *(float *)(param_1 + 0x80) = fVar48;
      *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 2;
      if (bVar19 != 0) {
        *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 2;
      }
    }
  }
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  local_a4[0] = '\0';
  uVar13 = FUN_03bdfe34(&local_90,&local_a0,6,1,local_a4);
  if ((uVar13 & 1) != 0) {
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 4;
    *(undefined4 *)(param_1 + 0x84) = local_a0._0_4_;
    if (local_a4[0] != '\0') {
      *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 4;
    }
  }
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  local_a4[0] = '\0';
  uVar13 = FUN_03bdfe34(&local_90,&local_a0,7,2,local_a4);
  if ((uVar13 & 1) != 0) {
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 8;
    *(undefined4 *)(param_1 + 0x88) = local_a0._0_4_;
    if (local_a4[0] != '\0') {
      *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 8;
    }
  }
  local_a4[0] = '\0';
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x3f000000);
  FUN_03bdfe34(&local_90,&local_a0,0xd,6,local_a4);
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 0x20;
  *(undefined4 *)(param_1 + 0x8c) = local_a0._0_4_;
  if (local_a4[0] != '\0') {
    *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 0x20;
  }
  FUN_03be001c(param_1,*(undefined2 *)(lVar21 + 0x98));
  if (plVar33 != (long *)0x0) {
    local_80 = *(undefined8 *)(param_1 + 0x28);
    local_90 = puVar6;
    local_88 = pauVar36;
    local_78 = (uint *)param_1;
    local_70 = uVar5;
    (**(code **)(*plVar33 + 0x28))(plVar33,&local_90);
  }
  if (plVar37 != (long *)0x0) {
    local_80 = *(undefined8 *)(param_1 + 0x28);
    local_90 = puVar6;
    local_88 = pauVar36;
    local_78 = (uint *)param_1;
    local_70 = uVar5;
    (**(code **)(*plVar37 + 0x28))(plVar37,&local_90);
  }
  return 1;
}

