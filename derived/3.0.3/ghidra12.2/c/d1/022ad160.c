
/* WARNING: Removing unreachable block (ram,0x022adfa4) */
/* WARNING: Removing unreachable block (ram,0x022adfec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_022ad160(long param_1,ulong *param_2,float *param_3,int *param_4,undefined4 *param_5,
                 float *param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  undefined **ppuVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  undefined2 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  uint *puVar31;
  long lVar32;
  uint *puVar33;
  char cVar34;
  int *piVar35;
  undefined *puVar36;
  uint uVar37;
  long lVar38;
  undefined8 *puVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  short *psVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint local_284;
  uint local_280;
  int local_25c;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined *local_240;
  uint local_238;
  uint local_234;
  undefined8 local_230;
  undefined8 local_228;
  uint *local_220;
  uint local_218;
  uint local_214;
  uint *local_210;
  int local_208;
  int local_204;
  undefined2 local_200;
  undefined4 local_1fe;
  undefined1 local_1fa;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined4 local_1ec;
  undefined1 uStack_1e5;
  undefined1 local_1e4;
  undefined1 local_1e3;
  undefined4 local_1e0;
  undefined1 local_1dc [4];
  undefined8 local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c4;
  undefined *local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined4 local_1a4;
  undefined *local_1a0;
  uint local_198;
  uint local_194;
  undefined *local_190;
  uint local_188;
  uint local_184;
  undefined *local_180;
  uint local_178;
  uint local_174;
  undefined *local_170;
  uint local_168;
  uint local_164;
  undefined *local_160;
  uint local_158;
  uint uStack_154;
  undefined *local_150;
  uint local_148;
  uint local_144;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  byte local_130;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  undefined *local_118;
  uint local_110;
  uint uStack_10c;
  undefined4 local_104;
  undefined **local_100;
  undefined2 local_f8;
  undefined2 local_f6;
  short local_f0;
  undefined1 local_ee;
  byte local_ed;
  byte local_eb;
  byte local_ea;
  byte local_e8;
  undefined1 local_e6;
  undefined4 local_e4;
  undefined *local_e0;
  undefined **local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined **local_c8;
  uint local_c0;
  uint local_bc;
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  undefined8 local_a0;
  
  puVar1 = PTR_DAT_04bc3a80;
  iVar23 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  local_a0 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_a0);
  uVar24 = FUN_0124f260(param_2,&local_a0,iVar23 != -0x17df00c3,iVar23 == -0x24a26848);
  if ((uVar24 & 1) == 0) {
LAB_022aebdc:
    uVar18 = 0;
LAB_022aebe0:
    return uVar18 & 1;
  }
  if (*(int *)(puVar1 + 0x38) == -0x17df00c3) {
    FUN_022aecd8(&local_230,&local_a0);
    local_a0 = local_230;
  }
  if (iVar23 == -0x24a26848) {
    FUN_0124c030(&local_230,&local_a0);
    iVar17 = FUN_0123db50(&local_228,local_220);
    ppuVar7 = local_228;
    if (iVar17 == 0x20) {
      local_228 = (undefined **)((ulong)local_228 & 0xffff0003ffffffff | 0x201e3300000000);
      local_a0 = (undefined **)((ulong)ppuVar7 & 0xffff0003ffffffff | 0x201e3300000000);
    }
    else {
      FUN_0124c030(&local_e0,&local_a0);
      iVar17 = FUN_0123db50(&local_d8,CONCAT44(uStack_cc,local_d0));
      if ((iVar17 - 0x18U < 7) && (*(long *)PTR_DAT_04bb30a0 != 0)) {
        local_1d8 = (undefined *)FUN_00a8c31c();
        FUN_0124f990(&local_e0,&local_1d8);
        local_a0 = local_d8;
      }
    }
  }
  FUN_0124c030(auStack_b8,&local_a0);
  iVar17 = FUN_0123db50(&local_b0,local_a8);
  if ((iVar17 == 0x21) || (iVar17 = FUN_0123db50(&local_b0,local_a8), iVar17 == 0x22)) {
    uVar18 = FUN_022af980(param_1,auStack_b8,param_3,param_4,param_5,param_6,param_7 & 1);
    goto LAB_022aebe0;
  }
  iVar17 = FUN_0123db50(&local_b0,local_a8);
  if ((iVar17 == 5) || (iVar17 = FUN_0123db50(&local_b0,local_a8), iVar17 == 5)) {
    iVar17 = 1;
LAB_022ad360:
    puVar2 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if ((local_a8 != (uint *)0x0) && (uVar18 = *local_a8, uVar18 != 0)) {
      cVar14 = *PTR_DAT_04bbbc70;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          uVar18 = *local_a8;
        }
        else {
          uVar28 = *(uint *)(puVar2 + 0x4c);
          if (-1 < (int)uVar28) {
            if ((char *)((ulong)uVar28 + (long)local_a8) == (char *)0x0) break;
            cVar34 = *(char *)((ulong)uVar28 + (long)local_a8);
            goto LAB_022ad500;
          }
          if (uVar28 != 0xffffffff) break;
        }
        puVar33 = (uint *)(ulong)uVar18;
        cVar34 = '\0';
        if ((puVar33 == (uint *)0x0) || (cVar34 = '\0', local_a8 == puVar33)) goto LAB_022ad500;
        lVar38 = 0xc;
        if (*(char *)((long)local_a8 + (10 - (long)puVar33)) != '\0') {
          lVar38 = 0x1c;
        }
        lVar38 = (long)local_a8 + (lVar38 - (long)puVar33);
        cVar34 = '\0';
        if (lVar38 == 0) goto LAB_022ad500;
        uVar24 = (ulong)*(ushort *)((long)local_a8 + (8 - (long)puVar33));
        *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar35 = (int *)(lVar38 + 4);
        while (piVar35[-1] != -0xa58ccc9) {
          piVar35 = piVar35 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_022ad4fc;
        }
        cVar34 = '\0';
        iVar19 = 0;
        if (*piVar35 != -1) {
          iVar19 = *piVar35;
        }
        *(int *)(puVar2 + 0x4c) = iVar19;
        uVar18 = *local_a8;
        if (uVar18 == 0) goto LAB_022ad500;
      } while( true );
    }
LAB_022ad4fc:
    cVar34 = '\0';
LAB_022ad500:
    bVar8 = cVar34 == '\0';
    bVar13 = true;
  }
  else {
    uVar18 = FUN_0123db50(&local_b0,local_a8);
    iVar17 = 0;
    if (uVar18 < 0x21) {
      bVar8 = false;
      bVar13 = false;
      if ((1L << ((ulong)uVar18 & 0x3f) & 0x1000006aaU) != 0) {
        iVar17 = FUN_0123db50(&local_b0,local_a8);
        if (iVar17 == 5) {
          iVar17 = 0;
          bVar13 = false;
          bVar8 = false;
        }
        else {
          iVar19 = FUN_0123db50(&local_b0,local_a8);
          iVar17 = 0;
          bVar13 = false;
          bVar8 = false;
          if (iVar19 != 5) goto LAB_022ad360;
        }
      }
    }
    else {
      bVar13 = false;
      bVar8 = false;
    }
  }
  iVar19 = FUN_0123db50(&local_b0,local_a8);
  puVar2 = PTR_DAT_04bbbc78;
  puVar1 = PTR_DAT_04bbbc70;
  if (iVar19 - 0xbU < 7) {
    if ((local_a8 != (uint *)0x0) && (uVar18 = *local_a8, uVar18 != 0)) {
      cVar14 = *PTR_DAT_04bbbc70;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          uVar18 = *local_a8;
        }
        else {
          uVar28 = *(uint *)(puVar2 + 0x4c);
          if (-1 < (int)uVar28) {
            if ((char *)((ulong)uVar28 + (long)local_a8) == (char *)0x0) break;
            cVar34 = *(char *)((ulong)uVar28 + (long)local_a8);
            goto LAB_022ad638;
          }
          if (uVar28 != 0xffffffff) break;
        }
        puVar33 = (uint *)(ulong)uVar18;
        cVar34 = '\0';
        if ((puVar33 == (uint *)0x0) || (local_a8 == puVar33)) goto LAB_022ad638;
        lVar38 = 0xc;
        if (*(char *)((long)local_a8 + (10 - (long)puVar33)) != '\0') {
          lVar38 = 0x1c;
        }
        lVar38 = (long)local_a8 + (lVar38 - (long)puVar33);
        cVar34 = '\0';
        if (lVar38 == 0) goto LAB_022ad638;
        uVar24 = (ulong)*(ushort *)((long)local_a8 + (8 - (long)puVar33));
        *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar35 = (int *)(lVar38 + 4);
        while (piVar35[-1] != -0xa58ccc9) {
          piVar35 = piVar35 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_022ad634;
        }
        cVar34 = '\0';
        iVar19 = 0;
        if (*piVar35 != -1) {
          iVar19 = *piVar35;
        }
        *(int *)(puVar2 + 0x4c) = iVar19;
        uVar18 = *local_a8;
        if (uVar18 == 0) goto LAB_022ad638;
      } while( true );
    }
LAB_022ad634:
    cVar34 = '\0';
LAB_022ad638:
    bVar9 = cVar34 != '\0';
  }
  else {
    bVar9 = false;
  }
  iVar19 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar19 == -0x17df00c3) {
    iVar20 = FUN_0123db50(&local_b0,local_a8);
    puVar2 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if (((iVar20 - 0xbU < 7) && (local_a8 != (uint *)0x0)) && (uVar18 = *local_a8, uVar18 != 0)) {
      cVar14 = *PTR_DAT_04bbbc70;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          uVar18 = *local_a8;
        }
        else {
          uVar28 = *(uint *)(puVar2 + 0x4c);
          if (-1 < (int)uVar28) {
            if (((byte *)((ulong)uVar28 + (long)local_a8) != (byte *)0x0) &&
               (1 < *(byte *)((ulong)uVar28 + (long)local_a8))) {
              FUN_0124d940(auStack_b8,2,0,0);
              local_a0 = (undefined **)CONCAT44(uStack_ac,local_b0);
            }
            break;
          }
          if (uVar28 != 0xffffffff) break;
        }
        puVar33 = (uint *)(ulong)uVar18;
        if ((puVar33 == (uint *)0x0) || (local_a8 == puVar33)) break;
        lVar38 = 0xc;
        if (*(char *)((long)local_a8 + (10 - (long)puVar33)) != '\0') {
          lVar38 = 0x1c;
        }
        lVar38 = (long)local_a8 + (lVar38 - (long)puVar33);
        if (lVar38 == 0) break;
        uVar24 = (ulong)*(ushort *)((long)local_a8 + (8 - (long)puVar33));
        *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar35 = (int *)(lVar38 + 4);
        while (piVar35[-1] != -0xa58ccc9) {
          piVar35 = piVar35 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_022ad788;
        }
        iVar20 = 0;
        if (*piVar35 != -1) {
          iVar20 = *piVar35;
        }
        *(int *)(puVar2 + 0x4c) = iVar20;
        uVar18 = *local_a8;
        if (uVar18 == 0) break;
      } while( true );
    }
  }
LAB_022ad788:
  if (bVar13) {
    bVar13 = false;
    bVar11 = true;
  }
  else {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 != -1) {
      local_230 = (undefined **)CONCAT44(local_230._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if (((*(uint *)(puVar1 + 4) & 1) != 0) &&
         (iVar20 = FUN_0123db50(&local_b0,local_a8), (iVar20 - 2U & 0xfffffff9) == 0)) {
        iVar20 = FUN_0123db50(&local_b0,local_a8);
        bVar11 = iVar20 != 6;
        bVar13 = true;
        if (!bVar11) {
          iVar17 = 1;
        }
        goto LAB_022ad810;
      }
    }
    bVar13 = false;
    bVar11 = false;
  }
LAB_022ad810:
  if (((((iVar23 == -0x24a26848) && (lVar38 = *(long *)PTR_DAT_04bbbc68, lVar38 != 0)) &&
       (*(long *)(lVar38 + 0xb0) != 0)) &&
      ((*(long *)(*(long *)(lVar38 + 0xb0) + 8) != 0 && (*(long *)(lVar38 + 0x488) != 0)))) &&
     ((*(long *)(*(long *)(lVar38 + 0x488) + 8) != 0 &&
      ((*(long *)(lVar38 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar38 + 0x2b0) + 8) != 0)))))) {
    uVar18 = FUN_0277d6c4(&local_a0);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
    if ((*(uint *)(lVar38 + 0x1d8) <= uVar18) ||
       (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_022ad8b4;
    FUN_0124c030(&local_230,&local_a0);
    iVar20 = FUN_0123db50(&local_228,local_220);
    bVar10 = iVar20 == 0x2e;
  }
  else {
LAB_022ad8b4:
    bVar10 = false;
  }
  puVar1 = PTR_DAT_04bb4778;
  uVar18 = *param_4 + 0x10000000U >> 0x1d;
  local_230 = (undefined **)CONCAT44(local_230._4_4_,uVar18);
  uVar18 = uVar18 - 1;
  if (uVar18 < 7) {
    uVar24 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2;
    local_258 = &DAT_0417a3c4 + *(int *)(&DAT_0417a3c4 + uVar24);
    iVar20 = *(int *)(&DAT_0417a434 + uVar24);
    local_250 = &DAT_0417a3e0 + *(int *)(&DAT_0417a3e0 + uVar24);
    local_25c = *(int *)(&DAT_0417a450 + uVar24);
  }
  else {
    iVar20 = 1;
    local_25c = 1;
    local_258 = &DAT_0417a20a;
    local_250 = &DAT_0417a213;
  }
  local_e4 = 0;
  local_e0 = PTR_DAT_04bbc1a0 + 0x10;
  local_d8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  local_c0 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  local_d0 = local_c0 & 0xfffffffe;
  local_c0 = local_c0 | 1;
  local_bc = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  uStack_cc = local_bc & 0xfffffffe;
  local_bc = local_bc | 1;
  local_c8 = local_d8;
  uVar24 = FUN_012246e4(*(undefined8 *)PTR_DAT_04bb4778);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar24 & 1) == 0) {
    lVar32 = *(long *)PTR_DAT_04bb43c0;
    uVar18 = FUN_0277d6c4(param_2);
    psVar45 = (short *)PTR_DAT_04bb6298;
    lVar38 = *(long *)puVar2;
    if (lVar38 == 0) {
LAB_022adb90:
      bVar15 = 0;
      goto LAB_022adb98;
    }
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if (*(uint *)(lVar32 + 0x1d8) <= uVar18) goto LAB_022adb90;
    if (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
LAB_022add18:
      bVar15 = 0;
    }
    else {
      local_220 = (uint *)0x0;
      local_228 = (undefined **)*param_2;
      local_230 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      uVar18 = FUN_0277d6c4(&local_228);
      if (*(long *)puVar2 == 0) {
LAB_022adcec:
        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x54);
        uVar18 = 0xbc;
      }
      else {
        lVar38 = *(long *)(lVar38 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
        if ((*(uint *)(lVar38 + 0x1d8) <= uVar18) ||
           (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_022adcec;
        lVar38 = *(long *)PTR_DAT_04bc0428;
        uVar18 = FUN_0277d6c4(param_2);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
        if ((*(uint *)(lVar38 + 0x1d8) <= uVar18) ||
           (puVar33 = *(uint **)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar18 * 8),
           puVar33 == (uint *)0x0)) goto LAB_022adcec;
        uVar18 = 0;
        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x54);
        uVar28 = *puVar33;
        local_220 = puVar33;
        if ((uVar28 != 0) && (puVar33 != (uint *)(ulong)uVar28)) {
          puVar31 = (uint *)((long)puVar33 - (long)(ulong)uVar28);
          uVar18 = 0;
          if (*puVar31 != 0) {
            uVar18 = puVar31[1];
            if ((uVar18 != 0) && ((ulong)(ushort)puVar31[2] != 0)) {
              lVar38 = 0xc;
              if (*(char *)((long)puVar31 + 10) != '\0') {
                lVar38 = 0x1c;
              }
              lVar38 = (long)puVar31 + lVar38 + (ulong)(ushort)puVar31[2] * 8;
              if (lVar38 != 0) {
                uVar28 = 0;
                if ((ulong)uVar18 != 0) {
                  uVar28 = (uint)((ulong)((long)puVar33 - lVar38) / (ulong)uVar18);
                }
                if (*puVar31 <= uVar28) {
                  uVar28 = 0xffffffff;
                }
                if ((uVar28 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar18 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar28 * 2),
                   uVar18 < 0xbd)) goto LAB_022adcf4;
              }
            }
            uVar18 = 0;
          }
        }
      }
LAB_022adcf4:
      local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar18);
      if (((uVar18 == (uint)local_1d8) ||
          (uVar24 = FUN_01ad6a30(&local_230,0x4f), (uVar24 & 1) != 0)) ||
         ((iVar21 = FUN_0123db50(&local_b0,local_a8), 5 < iVar21 - 0x12U &&
          (iVar21 = FUN_0123db50(&local_b0,local_a8), 8 < iVar21 - 0x23U)))) goto LAB_022add18;
      bVar15 = FUN_0124f8bc(auStack_b8);
    }
  }
  else {
    bVar15 = 1;
LAB_022adb98:
    psVar45 = (short *)PTR_DAT_04bb6298;
  }
  local_104 = 0;
  local_e6 = 0;
  pbVar29 = (byte *)(param_1 + 0x10);
  local_ed = *pbVar29;
  local_ee = 4;
  local_f0 = *psVar45;
  local_100 = local_a0;
  if (7 < local_ed) {
    local_ed = 0xff;
  }
  local_eb = local_eb & 0xf8;
  cVar14 = FUN_022aef90(param_2);
  local_ea = local_ea & 0x8f | cVar14 << 4;
  local_e8 = local_e8 & 0xfc | bVar15 & 1;
  lVar38 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar38 == 0) || (*(long *)(lVar38 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar38 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar38 + 0x488) == 0 || (*(long *)(*(long *)(lVar38 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar38 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar38 + 0x2b0) + 8) == 0))))
  goto LAB_022addbc;
  uVar18 = FUN_0277d6c4(&local_a0);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
  if (((*(uint *)(lVar38 + 0x1d8) <= uVar18) ||
      (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) ||
     (uVar24 = FUN_012246e4(*(undefined8 *)puVar1), (uVar24 & 1) == 0)) goto LAB_022addbc;
  FUN_0124c030(&local_230,&local_a0);
  iVar21 = FUN_0123db50(&local_228,local_220);
  if ((8 < iVar21 - 0x23U) && (iVar21 = FUN_0123db50(&local_228,local_220), 5 < iVar21 - 0x12U))
  goto LAB_022addbc;
  iVar21 = FUN_0123db50(&local_228,local_220);
  if (iVar21 - 0x23U < 9) {
    uVar18 = 0xff7fffff;
    uVar28 = 0x800000;
LAB_022adda4:
    local_228 = (undefined **)CONCAT44(local_228._4_4_ & uVar18 | uVar28,(undefined4)local_228);
  }
  else {
    iVar21 = FUN_0123db50(&local_228,local_220);
    if (iVar21 - 0x12U < 6) {
      uVar18 = 0xfffffeff;
      uVar28 = 0x100;
      goto LAB_022adda4;
    }
  }
  local_100 = local_228;
LAB_022addbc:
  iVar21 = FUN_0277ebd0(&local_a0);
  bVar12 = iVar21 != 0;
  local_118 = PTR_DAT_04bb2010 + 0x10;
  local_110 = local_d0;
  uStack_10c = uStack_cc;
  local_128 = PTR_DAT_04bb2018 + 0x10;
  fVar46 = (float)(int)local_d0 * 0.5;
  uVar18 = 0;
  if (fVar46 != (float)(int)fVar46) {
    uVar18 = (uint)(fVar46 < 0.0);
  }
  local_120 = (int)fVar46 - uVar18;
  fVar46 = (float)(int)uStack_cc * 0.5;
  uVar18 = 0;
  if (fVar46 != (float)(int)fVar46) {
    uVar18 = (uint)(fVar46 < 0.0);
  }
  iStack_11c = (int)fVar46 - uVar18;
  if (((DAT_0547a4a8 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0547a4a8), iVar21 != 0)) {
    DAT_0547a4a0 = 0;
    __cxa_guard_release(&DAT_0547a4a8);
  }
  if (((DAT_0547a4b8 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0547a4b8), iVar21 != 0)) {
    DAT_0547a4b0 = 0;
    __cxa_guard_release(&DAT_0547a4b8);
  }
  DAT_0547a4a0 = 0;
  DAT_0547a4b0 = 0;
  local_138 = 0;
  uVar24 = 9;
  if (bVar8 == false) {
    uVar24 = 2;
  }
  if (bVar11 == false) {
    uVar24 = 9;
  }
  lVar38 = *(long *)PTR_DAT_04bb2720;
  if (lVar38 == 0) {
    puVar39 = &DAT_055c04a0;
  }
  else {
    puVar39 = &DAT_055c04a0;
    if (*(long *)(lVar38 + 0x330) != 0) {
      puVar39 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar38 + 0x338));
      iVar21 = FUN_006bd550(*puVar39,0);
      puVar39 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar21 != 0x758f7eaf) {
        puVar39 = &DAT_055c04a0;
      }
    }
  }
  local_134 = *(undefined4 *)(puVar39 + 7);
  local_130 = FUN_017baf44();
  local_130 = local_130 & 1;
  local_140 = PTR_DAT_04bb6268 + 0x10;
  sVar5 = *psVar45;
  if (sVar5 == -1) {
    local_284 = 0;
    local_280 = 0;
  }
  else {
    puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar33 = (uint *)PTR_DAT_04bc39f8;
    }
    local_280 = *puVar33 >> 3 & 1;
    puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar33 = (uint *)PTR_DAT_04bc39f8;
    }
    local_284 = *puVar33 >> 1 & 1;
  }
  iVar21 = FUN_0277ebd0(&local_a0);
  uVar28 = uStack_10c;
  uVar18 = local_110;
  local_230 = (undefined **)CONCAT44((int)((ulong)local_230 >> 0x20),iVar21);
  fVar46 = (float)(int)local_110;
  fVar47 = (float)(int)uStack_10c;
  uVar40 = (ulong)(iVar21 != 0);
  bVar3 = false;
  if (iVar23 == -0x24a26848) {
    bVar3 = bVar10;
  }
  uVar4 = 2;
  if ((!bVar9 && !bVar13) && !bVar10) {
    uVar4 = uVar24;
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar36 = PTR_DAT_04bc3a80;
LAB_022ae0e4:
  cVar14 = local_258[uVar40];
  cVar34 = local_250[uVar40];
  uVar44 = iVar20 * cVar14 + uVar18;
  uVar37 = local_25c * cVar34 + uVar28;
  local_150 = puVar1;
  local_148 = uVar44;
  local_144 = uVar37;
  if (*(int *)(puVar36 + 0x38) == -0x17df00c3) {
    lVar38 = *(long *)PTR_DAT_04bb59d8;
    if (((*(int *)(lVar38 + 0x28) <= (int)uVar44 && (int)uVar44 <= *(int *)(lVar38 + 0x38)) &&
        (*(int *)(lVar38 + 0x2c) <= (int)uVar37)) && ((int)uVar37 <= *(int *)(lVar38 + 0x3c))) {
      lVar38 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar38 != 0) && (*(long *)(lVar38 + 0xb0) != 0)) &&
           ((*(long *)(*(long *)(lVar38 + 0xb0) + 8) != 0 &&
            ((*(long *)(lVar38 + 0x488) != 0 && (*(long *)(*(long *)(lVar38 + 0x488) + 8) != 0))))))
          && (*(long *)(lVar38 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar38 + 0x2b0) + 8) != 0)) {
        uVar22 = FUN_0277d6c4(&local_a0);
        uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
        if ((uVar22 < *(uint *)(lVar38 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
          FUN_0124c030(&local_230,&local_a0);
          iVar23 = FUN_0123db50(&local_228,local_220);
          if (iVar23 == 0x2e) {
            local_160 = PTR_DAT_04bb2010 + 0x10;
            local_158 = uVar44;
            uStack_154 = uVar37;
            uVar24 = FUN_022a8c58(&local_160);
            if ((uVar24 & 1) == 0) goto LAB_022ae39c;
          }
        }
      }
      goto LAB_022ae210;
    }
    goto LAB_022ae39c;
  }
LAB_022ae210:
  if (bVar3) {
    local_170 = PTR_DAT_04bb2010 + 0x10;
    local_168 = uVar44;
    local_164 = uVar37;
    uVar24 = FUN_022a8c58(&local_170);
    if ((uVar24 & 1) == 0) goto LAB_022ae39c;
  }
  puVar36 = PTR_DAT_04bb2010 + 0x10;
  local_180 = puVar36;
  local_178 = uVar44;
  local_174 = uVar37;
  uVar24 = FUN_022aac60(param_1,&local_180,local_280,local_284);
  if ((uVar24 & 1) == 0) goto LAB_022ae39c;
  local_190 = puVar36;
  local_188 = uVar44;
  local_184 = uVar37;
  uVar24 = FUN_022aa4c0(&local_140,&local_190,iVar20 * cVar14,local_25c * cVar34,0xfffffffe);
  if ((uVar24 & 1) == 0) goto LAB_022ae39c;
  if (!bVar9 && !bVar10) goto LAB_022ae594;
  fVar49 = (float)(int)uVar44 * 5.0 + 5.0;
  fVar48 = (float)(int)uVar37 * 5.0 + 5.0;
  iVar23 = FUN_006f0400(fVar49 - (fVar46 * 5.0 + 5.0),fVar48 - (fVar47 * 5.0 + 5.0));
  bVar13 = false;
  switch(iVar23 + 0x10000000U >> 0x1d) {
  case 0:
    local_230 = (undefined **)((ulong)local_230._4_4_ << 0x20);
    uVar24 = FUN_022af120(&local_118,&local_230);
    if ((uVar24 & 1) == 0) break;
    uVar37 = uVar37 + 2;
    local_144 = uVar37;
LAB_022ae370:
    bVar13 = true;
  default:
    goto joined_r0x022ae388;
  case 2:
    local_230 = (undefined **)CONCAT44(local_230._4_4_,1);
    uVar24 = FUN_022af120(&local_118,&local_230);
    if ((uVar24 & 1) != 0) {
      uVar44 = uVar44 + 2;
LAB_022ae36c:
      local_148 = uVar44;
      goto LAB_022ae370;
    }
    break;
  case 4:
    local_230 = (undefined **)CONCAT44(local_230._4_4_,2);
    uVar24 = FUN_022af120(&local_118,&local_230);
    if ((uVar24 & 1) != 0) {
      uVar37 = uVar37 - 2;
      local_144 = uVar37;
      goto LAB_022ae370;
    }
    break;
  case 6:
    local_230 = (undefined **)CONCAT44(local_230._4_4_,3);
    uVar24 = FUN_022af120(&local_118,&local_230);
    if ((uVar24 & 1) != 0) {
      uVar44 = uVar44 - 2;
      goto LAB_022ae36c;
    }
  }
  bVar13 = false;
joined_r0x022ae388:
  if ((uVar44 == uVar18) && (uVar37 == uVar28)) goto LAB_022ae39c;
  if (!bVar13) {
    fVar49 = *param_3 - fVar49;
    fVar48 = param_3[2] - fVar48;
    if (fVar48 * fVar48 + fVar49 * fVar49 < 100.0) {
      local_228 = (undefined **)((ulong)local_228 & 0xffffffff00000000);
      local_230 = (undefined **)0x0;
      local_1d8._4_4_ = (undefined4)((ulong)local_1d8 >> 0x20);
      local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0xc);
      local_230 = (undefined **)0x1000;
      uVar24 = FUN_00977f70(&local_128,&local_230);
      if ((((((uVar24 & 1) != 0) || (uVar24 = FUN_00977f00(&local_128), (uVar24 & 1) != 0)) ||
           (uVar24 = FUN_009781c0(&local_128), (uVar24 & 1) != 0)) ||
          (uVar24 = FUN_00977d30(&local_128), (uVar24 & 1) != 0)) ||
         (((*(long *)PTR_DAT_04bb27c8 != 0 &&
           (lVar38 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar38 != 0)) &&
          (uVar24 = FUN_009721a0(lVar38,&local_e0,0), (uVar24 & 1) != 0)))) goto LAB_022ae39c;
      uVar41 = local_d0;
      uVar22 = local_bc + 1;
      if (uVar22 != uStack_cc) {
        lVar38 = *(long *)PTR_DAT_04bb27c8;
        uVar42 = uStack_cc;
        uVar43 = local_d0;
        uVar27 = local_d0;
        do {
          local_228 = (undefined **)CONCAT44(uVar42,uVar43);
          local_230 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          if ((lVar38 != 0) && (-1 < (int)uVar43)) {
            lVar32 = *(long *)(lVar38 + 0xa8);
            if ((lVar32 != 0) && (-1 < (int)uVar42)) {
              if ((uVar43 < *(uint *)(lVar32 + 0x38)) && (uVar42 < *(uint *)(lVar32 + 0x3c))) {
                uVar6 = uVar43 + *(uint *)(lVar32 + 0x38) * uVar42;
                if (uVar6 < *(uint *)(lVar32 + 0x68)) {
                  if (*(long *)(lVar32 + 0x70) != 0) {
                    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,3);
                    if ((*(uint *)(*(long *)(lVar32 + 0x70) + (long)(int)uVar6 * 4) >> 3 & 1) != 0)
                    {
                      uVar24 = FUN_009765e0(&local_230);
                      if ((uVar24 & 1) != 0) goto LAB_022ae39c;
                      lVar38 = *(long *)PTR_DAT_04bb27c8;
                      uVar27 = local_d0;
                    }
                  }
                }
              }
            }
          }
          if ((int)uVar43 < (int)local_c0) {
            uVar43 = uVar43 + 1;
          }
          else {
            uVar42 = uVar42 + 1;
            uVar43 = uVar27;
          }
        } while (uVar41 != uVar43 || uVar22 != uVar42);
      }
    }
    goto LAB_022ae594;
  }
  local_1a0 = PTR_DAT_04bb2010 + 0x10;
  local_198 = uVar44;
  local_194 = uVar37;
  uVar24 = FUN_022aac60(param_1,&local_1a0,local_280,local_284);
  if ((uVar24 & 1) != 0) {
    uVar22 = uVar37;
    uVar41 = uVar44;
    do {
      local_228 = (undefined **)CONCAT44(uVar22,uVar41);
      local_230 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      uVar24 = FUN_01a4f798(&local_140,0,&local_230);
      if ((uVar24 & 1) == 0) goto LAB_022ae39c;
      FUN_01a50240(&local_1d8,&local_140,0,&local_230);
      if ((short)local_1d8 != -2) goto LAB_022ae39c;
      if ((int)uVar41 < (int)(uVar44 + 1)) {
        uVar41 = uVar41 + 1;
      }
      else {
        uVar22 = uVar22 + 1;
        uVar41 = uVar44;
      }
    } while ((uVar44 != uVar41) || (uVar37 + 2 != uVar22));
    uVar24 = FUN_00978150(&local_128);
    if (((uVar24 & 1) != 0) ||
       ((uVar24 = FUN_00977f00(&local_128), (uVar24 & 1) != 0 ||
        (uVar24 = FUN_009781c0(&local_128), (uVar24 & 1) != 0)))) goto LAB_022ae39c;
    uVar24 = FUN_00977d30(&local_128);
    uVar22 = local_d0;
    if ((uVar24 & 1) != 0) goto LAB_022ae39c;
    uVar41 = local_bc + 1;
    if (uVar41 != uStack_cc) {
      bVar13 = false;
      uVar42 = uStack_cc;
      uVar43 = local_d0;
      do {
        local_1d0 = (undefined *)CONCAT44(uVar42,uVar43);
        local_1d8 = PTR_DAT_04bb2010 + 0x10;
        if ((bVar13) || (uVar24 = FUN_00976320(&local_1d8), (uVar24 & 1) != 0)) {
          bVar13 = true;
        }
        else {
          puVar25 = (undefined2 *)FUN_01a5190c(&local_140,0,&local_1d8,0);
          local_1a8 = *puVar25;
          local_1a6 = *(undefined1 *)(puVar25 + 1);
          local_1a5 = *(undefined1 *)((long)puVar25 + 3);
          local_1a4 = *(undefined4 *)(puVar25 + 2);
          uVar24 = FUN_0277d9a8(&local_1a8);
          if ((uVar24 & 1) != 0) {
            FUN_01ad5d04(&local_230,&local_1a8);
            uVar24 = FUN_01ae59b0(&local_230);
            if ((uVar24 & 1) != 0) {
              local_1ac = FUN_0277ebd0(&local_1a8);
              bVar13 = local_1ac != 0;
              goto LAB_022ae85c;
            }
          }
          bVar13 = false;
        }
LAB_022ae85c:
        if ((int)uVar43 < (int)local_c0) {
          uVar43 = uVar43 + 1;
        }
        else {
          uVar42 = uVar42 + 1;
          uVar43 = local_d0;
        }
      } while (uVar22 != uVar43 || uVar41 != uVar42);
      if (bVar13) goto LAB_022ae39c;
    }
LAB_022ae594:
    puVar36 = PTR_DAT_04bc3a80;
    iVar23 = uVar44 + 1;
    iVar21 = uVar37 + 1;
    local_1d0 = PTR_DAT_04bb2010 + 0x10;
    sVar5 = *(short *)PTR_DAT_04bb6298;
    local_1d8 = puVar2;
    local_1c8 = uVar44;
    local_1c4 = uVar37;
    local_1c0 = local_1d0;
    local_1b8 = iVar23;
    local_1b4 = iVar21;
    if (sVar5 != -1) {
      local_230 = (undefined **)CONCAT44(local_230._4_4_,3);
      puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar33 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar33 >> 3 & 1) == 0) goto LAB_022ae67c;
      uVar24 = FUN_01675930(&local_1d8,0);
      uVar22 = local_1c8;
      if ((uVar24 & 1) != 0) {
        if (bVar9) {
          local_218 = local_1c8;
          local_214 = local_1c4;
          local_220 = (uint *)(PTR_DAT_04bb2010 + 0x10);
          uVar41 = local_1b4 + 1;
          local_230 = (undefined **)&local_1d0;
          local_228 = &local_1c0;
          if (uVar41 != local_1c4) {
            do {
              uVar24 = FUN_0097cff0(&local_220);
              if ((uVar24 & 1) == 0) goto LAB_022ae788;
              if ((int)local_218 < *(int *)(local_228 + 1)) {
                local_218 = local_218 + 1;
              }
              else {
                local_214 = local_214 + 1;
                local_218 = *(uint *)(local_230 + 1);
              }
            } while (uVar22 != local_218 || uVar41 != local_214);
          }
          goto LAB_022ae39c;
        }
        goto LAB_022ae794;
      }
      goto LAB_022ae3a0;
    }
LAB_022ae67c:
    uVar24 = FUN_022af310(&local_1d8);
    uVar22 = local_1c8;
    if ((uVar24 & 1) == 0) goto LAB_022ae3a0;
    bVar13 = (bool)(bVar9 ^ 1);
    if (*(int *)(puVar36 + 0x38) == -0x17df00c3) {
      bVar13 = true;
    }
    if (!bVar13) {
      local_218 = local_1c8;
      local_214 = local_1c4;
      local_220 = (uint *)(PTR_DAT_04bb2010 + 0x10);
      uVar41 = local_1b4 + 1;
      local_230 = (undefined **)&local_1d0;
      local_228 = &local_1c0;
      if (uVar41 != local_1c4) {
        do {
          uVar24 = FUN_00976070(&local_220);
          if ((uVar24 & 1) == 0) goto LAB_022ae788;
          if ((int)local_218 < *(int *)(local_228 + 1)) {
            local_218 = local_218 + 1;
          }
          else {
            local_214 = local_214 + 1;
            local_218 = *(uint *)(local_230 + 1);
          }
        } while (uVar22 != local_218 || uVar41 != local_214);
      }
      goto LAB_022ae39c;
    }
    goto LAB_022ae794;
  }
LAB_022ae39c:
  puVar36 = PTR_DAT_04bc3a80;
  goto LAB_022ae3a0;
LAB_022ae788:
  puVar36 = PTR_DAT_04bc3a80;
LAB_022ae794:
  if (iVar17 != 0 || bVar11 != false) {
    if (iVar19 == -0x17df00c3) {
      uVar24 = FUN_022a7140(&local_150,0,bVar8);
      if ((uVar24 & 1) != 0) goto LAB_022ae7d8;
      iVar26 = 1;
    }
    else {
      iVar26 = iVar17;
    }
    uVar24 = FUN_022a7140(&local_150,iVar26,bVar8);
    if ((uVar24 & 1) == 0) goto LAB_022ae3a0;
  }
LAB_022ae7d8:
  if (bVar9 || (bVar11 & (bVar8 ^ 1U)) != 0) {
    local_230 = (undefined **)CONCAT44(local_230._4_4_,(float)(int)uVar44 * 5.0 + 5.0);
    local_228 = (undefined **)CONCAT44(local_228._4_4_,(float)(int)uVar37 * 5.0 + 5.0);
    uVar24 = FUN_0252b6b0(0x40a00000,&local_230,pbVar29,1,1,0,1);
    if ((uVar24 & 1) == 0) {
      puVar30 = (undefined4 *)PTR_DAT_04bb3238;
      if (((ulong)*pbVar29 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar30 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar29 * 4 + 0xde8);
      }
      uVar24 = FUN_01735670(0x40a00000,0xbf800000,&local_230,*puVar30,*puVar30,1,1,0,1,0,0,1);
      if ((uVar24 & 1) == 0) goto LAB_022ae978;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 2;
    }
  }
  else {
LAB_022ae978:
    uVar24 = FUN_022a9384(param_1,&local_150);
    if ((uVar24 & 1) == 0) {
      local_1dc[0] = 0xff;
      local_1e0 = 0;
      uVar24 = FUN_022a6bb0(param_3,&local_d8,&local_150,0,local_1dc,&local_1e0);
      if ((uVar24 & 1) != 0) {
        local_f8 = (undefined2)uVar44;
        local_f6 = (undefined2)uVar37;
        local_1f0 = 0;
        local_228 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        local_220 = (uint *)(PTR_DAT_04bb2010 + 0x10);
        local_200 = 0xff00;
        local_1fe = 0;
        local_1fa = 0;
        local_1f8 = 0xffffffffffffffff;
        local_1ec = 0x41200000;
        local_1e4 = 0;
        local_1e3 = 0xff;
        local_230 = (undefined **)CONCAT62(local_230._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
        uStack_1e5 = 1;
        if (bVar8 == false && bVar11 == true) {
          local_218 = uVar44 - 2;
          local_214 = uVar37 - 2;
          bVar12 = false;
          iVar23 = uVar44 + 3;
          iVar21 = uVar37 + 3;
        }
        else {
          local_214 = uVar37;
          local_218 = uVar44;
        }
        local_210 = local_220;
        local_208 = iVar23;
        local_204 = iVar21;
        iVar23 = FUN_0123db50(&local_b0,local_a8);
        iVar21 = FUN_0123db50(&local_b0,local_a8);
        if ((iVar21 - 0x12U < 6) || (iVar23 - 0x23U < 9)) {
          bVar16 = FUN_0122ad50(&local_150);
          bVar15 = 0;
          if (((bVar16 ^ (local_e8 & 1) == 0) & 1) == 0) {
            bVar15 = 2;
          }
          local_e8 = bVar15 | local_e8 & 0xfd;
        }
        if (bVar12) {
          uVar24 = FUN_022af440(param_1,&local_230,&local_104);
        }
        else {
          uVar24 = FUN_022ab010(param_1,&local_230,&local_104);
        }
        if ((uVar24 & 1) != 0) {
          local_240 = PTR_DAT_04bb2010 + 0x10;
          local_238 = uVar44;
          local_234 = uVar37;
          FUN_022ab224(param_1,4,&local_a0,&local_240,0);
          if (param_6 != (float *)0x0) {
            *param_6 = (float)(int)uVar44 * 5.0 + 5.0;
            param_6[2] = (float)(int)uVar37 * 5.0 + 5.0;
            fVar46 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_6,0);
            param_6[1] = fVar46;
          }
          uVar18 = 1;
          goto LAB_022aebe0;
        }
      }
    }
  }
LAB_022ae3a0:
  uVar40 = uVar40 + 1;
  if (uVar4 <= uVar40) goto LAB_022aebdc;
  goto LAB_022ae0e4;
}

