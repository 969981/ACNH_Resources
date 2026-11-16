
void FUN_029dacc0(uint *param_1,long *param_2)

{
  short *psVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 uVar33;
  long *plVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_1f0;
  uint local_1ec;
  ulong *local_1e8;
  long *local_1e0;
  ulong local_1d8;
  long *local_1d0;
  undefined8 local_d8;
  long local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  ulong *local_a0;
  
  lVar14 = *param_2;
  if (lVar14 == 0) {
LAB_029daee0:
    uVar32 = *(uint *)(param_2 + 2);
LAB_029daf1c:
    local_1f0 = 0xffffffff;
    local_208 = 0xffffffff;
    local_20c = 0xffffffff;
    local_210 = 0xffffffff;
    local_214 = 0xffffffff;
    local_218 = 0xffffffff;
    local_21c = 0xffffffff;
    local_220 = 0xffffffff;
    uVar31 = 0xffffffff;
    uVar23 = 0xffffffff;
    fVar42 = 0.0;
    fVar41 = 0.0;
    fVar40 = 0.0;
    fVar36 = -1.0;
    fVar35 = 0.0;
    plVar34 = (long *)0x0;
    uVar28 = 0xffffffff;
    uVar11 = 0xffffffff;
    local_204 = 0xffffffff;
    uVar29 = 0xffffffff;
    uVar18 = 0xffffffff;
    fVar37 = 0.0;
    fVar38 = -1.0;
    if ((int)uVar32 < 200) goto LAB_029db18c;
LAB_029db17c:
    fVar36 = fVar38;
    fVar35 = fVar37;
    uVar28 = uVar18;
    uVar11 = uVar29;
    if (uVar32 < 0xd4) goto LAB_029db204;
    if (uVar32 < 300) goto LAB_029db18c;
    if (uVar32 < 0x138) goto LAB_029db204;
    uVar33 = 0;
    if ((uVar32 != 0x191) && (uVar32 != 0x1f5)) {
      if (uVar32 - 0x264 < 0xfffffff4) goto LAB_029db18c;
      goto LAB_029db204;
    }
  }
  else {
    if (*(long *)(lVar14 + 0x18) == 0) {
      lVar19 = *(long *)(lVar14 + 8);
      if ((lVar19 != 0) && (*(int *)(lVar14 + 0x10) == *(int *)(lVar19 + 0x10))) {
        lVar22 = *(long *)(*(long *)(lVar19 + 0x120) + 8);
        lVar24 = *(long *)(lVar22 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar24 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar24 = lVar22 + 0x70;
          }
          lVar24 = *(long *)(lVar24 + 8);
          if (((lVar24 != 0) && (*(uint *)(lVar24 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar24 + 0x18) + lVar24) == 0x101feff464e494d))
          goto LAB_029dad08;
        }
      }
      goto LAB_029daee0;
    }
    lVar19 = *(long *)(lVar14 + 8);
LAB_029dad08:
    if (((lVar19 != 0) && (*(int *)(lVar19 + 0x10) == *(int *)(lVar14 + 0x10))) &&
       (*(int *)(lVar19 + 0xc) != 0)) {
      uVar32 = *(uint *)(param_2 + 2);
      if ((*(int *)(lVar19 + 0xc) != 7) || (0 < (int)uVar32)) goto LAB_029dad84;
      goto LAB_029daf1c;
    }
    uVar32 = *(uint *)(param_2 + 2);
    if ((int)uVar32 < 1) goto LAB_029daf1c;
LAB_029dad84:
    if (*(int *)((long)param_2 + 0x14) == 0) {
LAB_029daf30:
      puVar20 = (ulong *)*param_2;
      fVar40 = 0.0;
      uVar28 = 0xffffffff;
      uVar32 = *(uint *)(param_2 + 2);
      plVar34 = (long *)0x0;
      iVar12 = 0;
      uVar23 = 0xffffffff;
      local_1d8 = puVar20[2];
      local_1d0 = (long *)puVar20[3];
      local_1e8 = (ulong *)*puVar20;
      local_1e0 = (long *)puVar20[1];
LAB_029daf5c:
      uVar31 = -iVar12;
    }
    else {
      local_1d8 = local_1d8 & 0xffffffffffffff00;
      local_1e8 = &local_1d8;
      local_1e0 = (long *)0x10000000000;
      local_1ec = 0;
      if (uVar32 != 99999 && -1 < (int)uVar32) {
        local_1ec = uVar32;
      }
      FUN_02a21b90(&local_1e8,(int *)((long)param_2 + 0x14),&local_1ec);
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0xff;
      local_c0 = 0;
      uStack_b8 = 0;
      puStack_a8 = PTR_DAT_04bb2020 + 0x10;
      local_a0 = local_1e8;
      local_b0 = 0;
      uVar26 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_d8,&puStack_a8);
      if (((((uVar26 & 1) == 0) || (local_d0 == 0)) || (*(uint *)(local_d0 + 0x18) == 0)) ||
         (plVar34 = (long *)((ulong)*(uint *)(local_d0 + 0x18) + local_d0),
         *plVar34 != 0x101feff464e494d)) goto LAB_029daf30;
      uVar32 = *(uint *)((long)param_2 + 0xc);
      uVar23 = uVar32;
      if ((int)uVar32 < 0) {
LAB_029dae6c:
        iVar12 = 0;
      }
      else {
        uVar23 = uVar32 + 0xc80;
        if ((char)param_2[1] != '\0') {
          uVar23 = uVar32;
        }
        uVar32 = *(uint *)((long)plVar34 + 0x1c);
        iVar12 = uVar23 - uVar32;
        if (uVar23 < uVar32) goto LAB_029dae6c;
        uVar23 = *(uint *)(plVar34 + 3) + iVar12;
        if (uVar32 == *(uint *)(plVar34 + 3)) {
          uVar23 = 0xffffffff;
        }
      }
      uVar28 = *(uint *)((long)plVar34 + 0x14);
      puVar20 = (ulong *)*param_2;
      uVar32 = *(uint *)(param_2 + 2);
      fVar40 = (float)(int)uVar28;
      local_1d8 = puVar20[2];
      local_1d0 = (long *)puVar20[3];
      local_1e8 = (ulong *)*puVar20;
      local_1e0 = (long *)puVar20[1];
      if ((int)uVar23 < 1) {
        if (-1 < (int)uVar23) goto LAB_029db93c;
        goto LAB_029daf5c;
      }
      local_1d8 = local_1d8 & 0xffffffff00000000;
      local_1e0 = (long *)0x0;
      local_1e8 = (ulong *)(ulong)uVar23;
      local_1d0 = plVar34;
LAB_029db93c:
      uVar31 = *(int *)((long)plVar34 + 0x1c) - uVar23;
      uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
    }
    local_204 = FUN_03f0f0a0(&local_1e8);
    uVar11 = FUN_03f0f6f0(&local_1e8);
    if (plVar34 == (long *)0x0) {
      local_220 = 0xffffffff;
    }
    else {
      uVar29 = *(uint *)(plVar34 + 7);
      if ((uVar29 == 0) ||
         (puVar16 = (ushort *)((ulong)uVar29 + (long)(plVar34 + 7)), puVar16 == (ushort *)0x0)) {
        local_220 = 0;
      }
      else {
        local_220 = (uint)*puVar16;
      }
    }
    fVar38 = (float)FUN_03f0f8f0(&local_1e8,0);
    fVar37 = fVar38 * 30.0 + -0.5;
    local_21c = 0;
    if (fVar37 != (float)(int)fVar37) {
      local_21c = (uint)(0.0 <= fVar37);
    }
    local_21c = local_21c + (int)fVar37;
    fVar35 = (float)FUN_03f0f270(&local_1e8);
    fVar38 = fVar40 * fVar38;
    local_208 = 0;
    if (fVar38 != (float)(int)fVar38) {
      local_208 = (uint)(0.0 <= fVar38);
    }
    local_208 = local_208 + (int)fVar38;
    fVar37 = (float)FUN_03f0fd20(&local_1e8,0);
    plVar15 = local_1d0;
    if (local_1d0 == (long *)0x0) {
      if ((local_1e0 != (long *)0x0) && ((int)local_1d8 == *(int *)((long)local_1e0 + 0x10))) {
        lVar19 = *(long *)(*(long *)((long)local_1e0 + 0x120) + 8);
        lVar14 = *(long *)(lVar19 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar14 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar14 = lVar19 + 0x70;
          }
          lVar14 = *(long *)(lVar14 + 8);
          if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x18) != 0)) &&
             (plVar15 = (long *)((ulong)*(uint *)(lVar14 + 0x18) + lVar14),
             *plVar15 == 0x101feff464e494d)) goto LAB_029db034;
        }
      }
LAB_029db0cc:
      local_1f0 = 0xffffffff;
    }
    else {
LAB_029db034:
      uVar29 = *(uint *)((long)plVar15 + 0x3c);
      if (((uVar29 == 0) ||
          (psVar1 = (short *)((ulong)uVar29 + (long)plVar15 + 0x3c), psVar1 == (short *)0x0)) ||
         (*psVar1 == 0)) goto LAB_029db0cc;
      iVar12 = FUN_03f0fbe0(&local_1e8);
      local_1f0 = iVar12 + 1;
    }
    fVar38 = fVar37 * 30.0 + -0.5;
    fVar37 = fVar40 * fVar37;
    local_210 = 0;
    if (fVar38 != (float)(int)fVar38) {
      local_210 = (uint)(0.0 <= fVar38);
    }
    local_210 = local_210 + (int)fVar38;
    local_20c = 0;
    if (fVar37 != (float)(int)fVar37) {
      local_20c = (uint)(0.0 <= fVar37);
    }
    local_20c = local_20c + (int)fVar37;
    local_214 = FUN_03f0eae0(&local_1e8);
    local_218 = FUN_03f0ecd0(&local_1e8);
    fVar36 = (float)FUN_03f0e900(&local_1e8);
    uVar29 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar29 = uVar11;
    }
    fVar42 = fVar36 / 130.0;
    fVar41 = (fVar35 + (float)(int)(uVar29 - 1)) / (float)(int)local_214;
    uVar29 = uVar11;
    uVar18 = uVar28;
    fVar37 = fVar35;
    fVar38 = fVar36;
    if (199 < (int)uVar32) goto LAB_029db17c;
LAB_029db18c:
    uVar29 = 0;
    if (uVar32 != 99999 && -1 < (int)uVar32) {
      uVar29 = uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU);
    }
    for (lVar14 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar14 != 0;
        lVar14 = *(long *)(lVar14 + 0x10)) {
      while ((int)uVar29 < *(int *)(lVar14 + 0x20)) {
        lVar14 = *(long *)(lVar14 + 8);
        if (lVar14 == 0) goto LAB_029db204;
      }
      if ((int)uVar29 <= *(int *)(lVar14 + 0x20)) {
        uVar33 = *(undefined1 *)(lVar14 + 0x30);
        goto LAB_029db208;
      }
    }
LAB_029db204:
    uVar33 = 0;
  }
LAB_029db208:
  uVar29 = *(uint *)((long)param_2 + 0x14);
  uVar18 = 0xffffffff;
  bVar9 = false;
  iVar12 = 0;
  bVar10 = false;
  uVar30 = 2;
  uVar21 = 0xffffffff;
  switch(uVar29) {
  case 1:
    goto switchD_029db248_caseD_1;
  case 2:
    uVar30 = 3;
    break;
  case 3:
    uVar30 = 4;
    break;
  case 4:
    uVar30 = 5;
    break;
  case 5:
    uVar30 = 6;
    break;
  case 6:
    if ((int)local_1f0 < 0x5d) {
      if ((int)local_1f0 < 0x2b) {
        if ((int)local_1f0 < 0x1b) {
          if ((int)local_1f0 < 4) {
            if ((int)local_1f0 < 1) goto LAB_029db8d8;
            iVar12 = 0;
            uVar21 = 0;
            uVar18 = 3;
            bVar9 = true;
            uVar29 = 8;
            uVar30 = 7;
            bVar10 = true;
          }
          else {
            uVar21 = 3;
            iVar12 = -3;
            uVar18 = 0x1a;
            bVar9 = true;
            uVar29 = 9;
            uVar30 = 8;
            bVar10 = true;
          }
        }
        else {
          uVar21 = 0x1a;
          iVar12 = -0x1a;
          uVar18 = 0x2a;
          bVar9 = true;
          uVar29 = 10;
          uVar30 = 9;
          bVar10 = true;
        }
      }
      else {
        uVar21 = 0x2a;
        iVar12 = -0x2a;
        uVar18 = 0x5c;
        bVar9 = true;
        uVar29 = 0xb;
        uVar30 = 10;
        bVar10 = true;
      }
    }
    else {
      bVar9 = false;
      uVar21 = 0x5c;
      uVar29 = 1;
      iVar12 = -0x5c;
      uVar30 = 0xb;
      bVar10 = true;
    }
    goto switchD_029db248_caseD_1;
  case 7:
    if ((int)local_1f0 < 0x11) {
      if ((int)local_1f0 < 2) {
        if (local_1f0 != 1) {
LAB_029db8d8:
          uVar30 = 0;
          break;
        }
        iVar12 = 0;
        uVar21 = 0;
        uVar29 = 0xd;
        uVar30 = 0xc;
        uVar18 = 1;
        bVar10 = true;
        bVar9 = true;
      }
      else {
        bVar9 = true;
        iVar12 = -1;
        uVar18 = 0x10;
        uVar29 = 0xe;
        uVar30 = 0xd;
        bVar10 = true;
        uVar21 = 1;
      }
    }
    else {
      bVar9 = false;
      uVar21 = 0x10;
      uVar29 = 1;
      iVar12 = -0x10;
      uVar30 = 0xe;
      bVar10 = true;
    }
    goto switchD_029db248_caseD_1;
  case 8:
    uVar30 = 0xf;
    break;
  default:
    uVar30 = 1;
  }
  bVar10 = false;
  bVar9 = false;
  iVar12 = 0;
  uVar21 = 0xffffffff;
  uVar29 = 1;
  uVar18 = uVar21;
switchD_029db248_caseD_1:
  if (plVar34 == (long *)0x0 || (int)uVar23 < 0) {
    fVar37 = 0.0;
    uVar18 = 0xffffffff;
    goto LAB_029db4a0;
  }
  if (bVar9) {
    uVar25 = *(uint *)((long)plVar34 + 0x3c);
    if (((uVar25 != 0) &&
        (puVar16 = (ushort *)((ulong)uVar25 + (long)plVar34 + 0x3c), puVar16 != (ushort *)0x0)) &&
       (uVar18 < *puVar16)) {
      puVar16 = puVar16 + (ulong)uVar18 * 2 + 2;
      goto LAB_029db390;
    }
    iVar13 = 0;
    iVar17 = 0;
    if (bVar10) goto LAB_029db3a4;
LAB_029db44c:
    iVar17 = 0;
  }
  else {
    puVar16 = (ushort *)((long)plVar34 + 0x1c);
LAB_029db390:
    iVar13 = *(int *)puVar16;
    iVar17 = iVar13;
    if (!bVar10) goto LAB_029db44c;
LAB_029db3a4:
    iVar13 = iVar17;
    uVar18 = *(uint *)((long)plVar34 + 0x3c);
    if (uVar18 == 0) goto LAB_029db44c;
    puVar16 = (ushort *)((ulong)uVar18 + (long)plVar34 + 0x3c);
    iVar17 = 0;
    if (puVar16 != (ushort *)0x0) {
      if (*puVar16 <= uVar21) goto LAB_029db44c;
      iVar17 = *(int *)(puVar16 + (ulong)uVar21 * 2 + 2);
    }
  }
  fVar37 = ((float)(iVar13 - uVar23) / fVar40) * 30.0 + -0.5;
  uVar18 = 0;
  if (fVar37 != (float)(int)fVar37) {
    uVar18 = (uint)(0.0 <= fVar37);
  }
  uVar18 = uVar18 + (int)fVar37;
  fVar37 = (float)(uVar23 - iVar17) / (float)(uint)(iVar13 - iVar17);
LAB_029db4a0:
  local_1e8 = (ulong *)(CONCAT44(uVar23,local_1e8._0_4_) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0x2e,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0x3a,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0x54,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0x70,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0x8c,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0xa8,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0xc4,&local_1e8);
  local_1e8 = (ulong *)(CONCAT44(uVar23,(int)local_1e8) & 0xffffffffffffff00);
  local_1e0 = plVar34;
  FUN_029e69e0(param_1 + 0xe0,&local_1e8);
  if (param_1[0x36] == 0xffffffff) {
    uVar21 = 0xffffffff;
  }
  else {
    fVar38 = (float)param_1[0x31] * 30.0;
    uVar21 = 0;
    if (fVar38 != (float)(int)fVar38) {
      uVar21 = (uint)(0.0 <= fVar38);
    }
    uVar21 = uVar21 + (int)fVar38;
  }
  fVar38 = 0.0;
  if (plVar34 == (long *)0x0 || (int)uVar23 < 0) {
    fVar39 = 0.0;
    cVar8 = (char)param_1[0x30];
  }
  else {
    fVar39 = (float)param_1[0x32];
    if (fVar39 < 0.0) {
      fVar39 = (float)(int)uVar23 / fVar40;
    }
    if (0.0 <= (float)param_1[0x31]) {
      fVar38 = fVar39 / (fVar39 + (float)param_1[0x31]);
    }
    cVar8 = (char)param_1[0x30];
  }
  if (cVar8 == '\0') {
    fVar40 = fVar40 * (float)param_1[0x31];
    uVar23 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar23 = (uint)(0.0 <= fVar40);
    }
    uVar23 = uVar23 + (int)fVar40;
  }
  else {
    uVar23 = param_1[0x37];
  }
  if (param_1[0x41] == 0xffffffff) {
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
  }
  else {
    uVar26 = (ulong)*(byte *)((long)param_1 + 0x141) << 8;
    uVar25 = (uint)(byte)param_1[0x50];
    uVar27 = (ulong)*(byte *)((long)param_1 + 0x142) << 0x10;
  }
  param_1[0x19] = param_1[0x36];
  param_1[0x17] = param_1[0x35];
  param_1[0x18] = param_1[0x35];
  param_1[2] = uVar30;
  param_1[3] = uVar29;
  param_1[8] = local_220;
  param_1[9] = local_21c;
  param_1[4] = uVar18;
  param_1[0x1a] = uVar21;
  uVar29 = param_1[0x77];
  bVar10 = param_1[0x5b] != 0xffffffff;
  *param_1 = uVar32;
  *(ulong *)(param_1 + 0x1e) =
       uVar26 | uVar27 | (ulong)(byte)param_1[0x3c] | (ulong)param_1[0x41] << 0x20;
  uVar32 = 0;
  if (bVar10) {
    uVar32 = param_1[0x68];
  }
  uVar2 = 0;
  if (bVar10) {
    uVar2 = (char)param_1[0x6b];
  }
  uVar3 = 0;
  if (bVar10) {
    uVar3 = *(undefined1 *)((long)param_1 + 0x1ad);
  }
  *(undefined1 *)(param_1 + 1) = uVar33;
  param_1[6] = local_204;
  param_1[7] = uVar11;
  uVar18 = param_1[0x93];
  uVar33 = 0;
  if (uVar29 != 0xffffffff) {
    uVar33 = (char)param_1[0x86];
  }
  uVar4 = 0;
  if (uVar29 != 0xffffffff) {
    uVar4 = *(undefined1 *)((long)param_1 + 0x219);
  }
  uVar5 = 0;
  if (uVar18 != 0xffffffff) {
    uVar5 = (char)param_1[0xa2];
  }
  uVar6 = 0;
  if (uVar18 != 0xffffffff) {
    uVar6 = *(undefined1 *)((long)param_1 + 0x289);
  }
  param_1[0x1d] = uVar23;
  uVar23 = param_1[0xaf];
  param_1[0x20] = uVar25;
  uVar7 = 0;
  if (uVar23 != 0xffffffff) {
    uVar7 = (char)param_1[0xbe];
  }
  *(undefined1 *)((long)param_1 + 0x85) = uVar2;
  uVar2 = 0;
  if (uVar23 != 0xffffffff) {
    uVar2 = *(undefined1 *)((long)param_1 + 0x2f9);
  }
  *(undefined1 *)((long)param_1 + 0x86) = uVar3;
  uVar11 = param_1[0xcb];
  param_1[0x22] = param_1[0x5b];
  param_1[0x23] = uVar32;
  *(char *)(param_1 + 0x21) = (char)param_1[0x56];
  *(undefined1 *)((long)param_1 + 0x91) = uVar33;
  uVar33 = 0;
  if (uVar11 != 0xffffffff) {
    uVar33 = (char)param_1[0xda];
  }
  *(undefined1 *)((long)param_1 + 0x92) = uVar4;
  uVar3 = 0;
  if (uVar11 != 0xffffffff) {
    uVar3 = *(undefined1 *)((long)param_1 + 0x369);
  }
  param_1[0x25] = uVar29;
  uVar32 = param_1[0xe7];
  *(undefined1 *)((long)param_1 + 0x99) = uVar5;
  uVar4 = 0;
  if (uVar32 != 0xffffffff) {
    uVar4 = (char)param_1[0xf6];
  }
  *(undefined1 *)((long)param_1 + 0x9a) = uVar6;
  uVar5 = 0;
  if (uVar32 != 0xffffffff) {
    uVar5 = *(undefined1 *)((long)param_1 + 0x3d9);
  }
  param_1[0x27] = uVar18;
  *(undefined1 *)((long)param_1 + 0xa1) = uVar7;
  uVar29 = iVar12 + local_1f0;
  if ((int)local_1f0 < 1) {
    uVar29 = 0xffffffff;
  }
  param_1[0xb] = local_1f0;
  param_1[0xc] = uVar29;
  *(char *)(param_1 + 0x24) = (char)param_1[0x72];
  param_1[0xd] = local_210;
  *(undefined1 *)((long)param_1 + 0xa2) = uVar2;
  *(char *)(param_1 + 0x26) = (char)param_1[0x8e];
  param_1[0xf] = local_214;
  param_1[0x13] = uVar28;
  *(char *)(param_1 + 0x28) = (char)param_1[0xaa];
  param_1[0x10] = local_218;
  param_1[0x14] = uVar31;
  *(char *)(param_1 + 0x2a) = (char)param_1[0xc6];
  param_1[0x15] = local_208;
  param_1[0x16] = local_20c;
  param_1[0x29] = uVar23;
  *(undefined1 *)((long)param_1 + 0xa9) = uVar33;
  *(undefined1 *)((long)param_1 + 0xaa) = uVar3;
  param_1[0x2b] = uVar11;
  *(char *)(param_1 + 0x2c) = (char)param_1[0xe2];
  *(undefined1 *)((long)param_1 + 0xb1) = uVar4;
  *(undefined1 *)((long)param_1 + 0xb2) = uVar5;
  param_1[0x2d] = uVar32;
  param_1[5] = (uint)fVar37;
  param_1[10] = (uint)fVar35;
  param_1[0xe] = (uint)fVar41;
  param_1[0x11] = (uint)fVar36;
  param_1[0x12] = (uint)fVar42;
  param_1[0x1b] = (uint)fVar38;
  param_1[0x1c] = (uint)fVar39;
  return;
}

