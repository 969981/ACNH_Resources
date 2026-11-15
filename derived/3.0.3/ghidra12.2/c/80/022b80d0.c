
bool FUN_022b80d0(float param_1,long param_2,undefined1 param_3,undefined4 param_4,long *param_5,
                 short param_6,long param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  char cVar23;
  short sVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar30;
  ulong local_178;
  undefined *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  undefined2 local_118;
  undefined4 local_116;
  undefined1 local_112;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined2 local_a0;
  undefined2 local_9e;
  short local_98;
  undefined1 local_96;
  byte local_95;
  char local_94;
  byte local_93;
  byte local_8f;
  undefined1 local_8e;
  undefined4 local_8c;
  
  puVar21 = PTR_DAT_04bb43c0;
  lVar27 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(param_5);
  lVar26 = *(long *)puVar21;
  if (lVar26 == 0) {
    return false;
  }
  lVar27 = *(long *)(lVar27 + 0x57e58);
  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
  if (*(uint *)(lVar27 + 0x1d8) <= uVar12) {
    return false;
  }
  if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
    return false;
  }
  local_8c = 0;
  local_138 = (undefined *)0x0;
  uVar12 = param_8 ^ 1;
  local_148 = PTR_DAT_04bc0510 + 0x10;
  local_94 = -((byte)uVar12 & 1);
  local_140 = (undefined *)*param_5;
  uVar13 = FUN_0277d6c4(&local_140);
  if (*(long *)puVar21 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(param_5);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if (uVar13 < *(uint *)(lVar26 + 0x1d8)) {
        puVar21 = *(undefined **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8);
        if (puVar21 != (undefined *)0x0) {
          local_138 = puVar21;
        }
      }
    }
  }
  uVar16 = FUN_01ae59b0(&local_148);
  if ((uVar16 & 1) == 0) {
    local_93 = 0;
    local_96 = 0x10;
    local_a8 = (undefined *)*param_5;
  }
  else {
    local_96 = 0x11;
    FUN_01afc110(&local_148,1);
    local_b8 = local_140;
    puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar25 = puVar17[3];
    uVar13 = *puVar17 ^ *puVar17 << 0xb;
    *puVar17 = puVar17[1];
    puVar17[1] = puVar17[2];
    puVar17[2] = uVar25;
    puVar17[3] = uVar13 >> 8 ^ uVar25 >> 0x13 ^ uVar13 ^ uVar25;
    FUN_01a4c66c(&local_c8,&local_b8);
    local_93 = local_93 & 0xf8;
    local_a8 = local_b8;
  }
  local_a0 = (undefined2)*(undefined4 *)(param_7 + 8);
  local_9e = (undefined2)*(undefined4 *)(param_7 + 0xc);
  local_95 = *(byte *)(param_2 + 0x10);
  if (7 < local_95) {
    local_95 = 0xff;
  }
  local_ac = param_4;
  local_98 = param_6;
  local_8e = param_3;
  if (((DAT_0547a4d0 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_0547a4d0), iVar14 != 0)) {
    DAT_0547a4c8 = 0;
    DAT_0547a4c0 = 0;
    __cxa_guard_release(&DAT_0547a4d0);
  }
  if (((DAT_0547a4e8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_0547a4e8), iVar14 != 0)) {
    DAT_0547a4e0 = 0;
    DAT_0547a4d8 = 0;
    __cxa_guard_release(&DAT_0547a4e8);
  }
  puVar21 = PTR_DAT_04bbbf90;
  DAT_0547a4c8 = 0;
  DAT_0547a4c0 = 0;
  DAT_0547a4d8 = 0;
  sVar24 = *(short *)PTR_DAT_04bb6298;
  DAT_0547a4e0 = 0;
  if (sVar24 != -1) {
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x11);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar24 * 8);
    if (0xff < (uint)(int)sVar24) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar17 >> 0x11 & 1) != 0) {
      local_178 = 0;
      bVar10 = true;
      goto LAB_022b8478;
    }
  }
  bVar10 = DAT_055c1b60 == &DAT_055c1b58;
  puVar19 = DAT_055c1b60 + -8;
  if ((param_6 != 0) && (puVar19 != &DAT_055c1b18)) {
    puVar19 = DAT_055c1b60;
    sVar24 = param_6;
    do {
      puVar19 = (undefined8 *)puVar19[1];
      sVar24 = sVar24 + -1;
      bVar10 = puVar19 == &DAT_055c1b58;
    } while (!bVar10 && sVar24 != 0);
    puVar19 = puVar19 + -8;
  }
  puVar22 = &DAT_055c04a0;
  if (!bVar10) {
    puVar22 = puVar19;
  }
  local_178 = 0;
  do {
    uVar13 = (uint)local_178;
    piVar3 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + local_178 * 4);
    if (0x38 < uVar13) {
      piVar3 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar3 == *(int *)(puVar22 + 7)) goto LAB_022b846c;
    uVar25 = 0x39;
    if ((int)uVar13 < 0x39) {
      uVar25 = uVar13 + 1;
    }
    local_178 = (ulong)uVar25;
  } while (uVar25 != 0x39);
  local_178 = 0;
LAB_022b846c:
  bVar10 = false;
LAB_022b8478:
  puVar19 = DAT_055c1b60 + -8;
  if (puVar19 != &DAT_055c1b18) {
    sVar24 = 0;
    puVar22 = DAT_055c1b60;
    do {
      if (*(int *)(puVar19 + 7) == 0x6622bd46) goto LAB_022b84b8;
      puVar22 = (undefined8 *)puVar22[1];
      sVar24 = sVar24 + 1;
      puVar19 = puVar22 + -8;
    } while (puVar22 != &DAT_055c1b58);
  }
  sVar24 = -1;
LAB_022b84b8:
  iVar28 = *(int *)(param_7 + 8);
  iVar30 = *(int *)(param_7 + 0xc);
  local_b8 = (undefined *)0xea61;
  FUN_0277d4ac(&local_b8);
  FUN_0124c030(&local_148,&local_b8);
  iVar14 = FUN_0123db50(&local_140,local_138);
  puVar8 = PTR_DAT_04bb6268;
  uVar16 = 0;
  puVar1 = &DAT_041746a8;
  if (iVar14 != 5) {
    puVar1 = &DAT_041746c0;
  }
  pfVar4 = (float *)(puVar1 + (((ulong)uVar12 & 1) << 2 | ((ulong)uVar12 & 1) << 3));
  local_c0 = pfVar4[2] + (float)iVar30 * 5.0 + 5.0;
  bVar9 = true;
  fStack_c4 = pfVar4[1] + param_1;
  local_c8 = *pfVar4 + (float)iVar28 * 5.0 + 5.0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar5 = (undefined4 *)((long)(puVar21 + 8) + local_178 * 4);
  if (0x38 < (uint)local_178) {
    puVar5 = (undefined4 *)(puVar21 + 8);
  }
  puVar21 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    iVar14 = -(&DAT_04057ba0)[uVar16];
    if ((param_8 & 1) != 0) {
      iVar14 = (&DAT_04057ba0)[uVar16];
    }
    iVar6 = (&DAT_04058580)[uVar16];
    iVar28 = *(int *)(param_7 + 8);
    iVar30 = *(int *)(param_7 + 0xc);
    lVar26 = *(long *)PTR_DAT_04bb27c8;
    if (sVar24 == param_6) {
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x90) == 0)) {
        uVar29 = 0xc3fa0000;
      }
      else {
        local_b8 = (undefined *)((ulong)local_b8 & 0xffffffffffffff00);
        sVar7 = *(short *)PTR_DAT_04bb6298;
        if (sVar7 == -1) {
          uVar29 = 7;
        }
        else {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
          puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
          if (0xff < (uint)(int)sVar7) {
            puVar17 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar29 = 7;
          if ((*puVar17 & 2) != 0) {
            uVar29 = 5;
          }
        }
        local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar29);
        uVar29 = FUN_00962700(*(long *)(lVar26 + 0x90),&local_c8,&local_148,0,&local_b8);
      }
    }
    else {
      uVar29 = FUN_0093a950(lVar26 + 0x28,&local_c8,0);
    }
    iVar28 = iVar28 + iVar14;
    iVar30 = iVar30 + iVar6;
    local_d8 = puVar1;
    local_d0 = iVar28;
    iStack_cc = iVar30;
    uVar18 = FUN_022aa8c0(uVar29,&local_d8,sVar24 == param_6);
    if ((uVar18 & 1) != 0) {
      if (bVar10) {
        local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
        lVar26 = *(long *)PTR_DAT_04bb2720;
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x330) == 0)) {
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
          iVar15 = FUN_006bd550(*puVar19,0);
          puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar15 != 0x758f7eaf) {
            puVar19 = &DAT_055c04a0;
          }
        }
        local_140 = (undefined *)CONCAT44(*(undefined4 *)(puVar19 + 7),(undefined4)local_140);
        uVar11 = FUN_017baf44();
        ppuVar20 = &local_e8;
        uVar18 = CONCAT71(local_138._1_7_,uVar11);
        local_e8 = PTR_DAT_04bb2010 + 0x10;
        local_e0 = iVar28;
        iStack_dc = iVar30;
        local_148 = puVar8;
      }
      else {
        local_140 = (undefined *)CONCAT44(*puVar5,(uint)local_178);
        uVar11 = FUN_017baf44();
        ppuVar20 = &local_f8;
        uVar18 = CONCAT71(local_138._1_7_,uVar11);
        local_f8 = PTR_DAT_04bb2010 + 0x10;
        local_f0 = iVar28;
        iStack_ec = iVar30;
        local_148 = PTR_DAT_04bb6268;
      }
      local_148 = local_148 + 0x10;
      local_138 = (undefined *)(uVar18 & 0xffffffffffffff01);
      uVar18 = FUN_022aa6c0(&local_148,ppuVar20,iVar14,iVar6);
      if ((uVar18 & 1) != 0) {
        local_118 = 0xff00;
        cVar23 = (char)iVar14;
        if (cVar23 < -7) {
          cVar23 = -8;
        }
        local_116 = 0;
        iVar14 = (int)(char)iVar6;
        local_112 = 0;
        local_108 = 0;
        local_110 = 0xffffffffffffffff;
        local_104 = 0x41200000;
        local_148 = (undefined *)CONCAT62(local_148._2_6_,param_6);
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        if ('\x06' < cVar23) {
          cVar23 = '\a';
        }
        if (iVar14 < -7) {
          iVar14 = -8;
        }
        local_100 = 0;
        local_fc = 0;
        if (6 < iVar14) {
          iVar14 = 7;
        }
        iStack_11c = iVar30 + 1;
        local_8f = (cVar23 + 8U | (byte)(iVar14 << 4)) ^ 0x80;
        local_fb = 0xff;
        local_120 = iVar28 + 1;
        local_140 = puVar21;
        local_138 = puVar2;
        local_130 = iVar28;
        iStack_12c = iVar30;
        local_128 = puVar2;
        uVar18 = FUN_022ab010(param_2,&local_148,&local_ac);
        if ((uVar18 & 1) != 0) {
          local_150 = *(undefined4 *)(param_7 + 8);
          uStack_14c = *(undefined4 *)(param_7 + 0xc);
          local_158 = puVar2;
          FUN_022ab224(param_2,local_96,param_5,&local_158,0);
          return bVar9;
        }
      }
    }
    bVar9 = uVar16 < 7;
    uVar16 = uVar16 + 1;
    if (uVar16 == 8) {
      return bVar9;
    }
  } while( true );
}

