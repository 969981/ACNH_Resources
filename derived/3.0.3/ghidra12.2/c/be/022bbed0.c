
uint FUN_022bbed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  byte bVar18;
  short sVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined8 local_170;
  uint local_168;
  uint uStack_164;
  undefined *local_160;
  uint local_158;
  uint uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined *local_138;
  char *local_130;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined2 local_108;
  undefined4 local_106;
  undefined1 local_102;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined2 local_ec;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  short local_c0;
  short local_be;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  byte local_b5;
  char local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  
  local_88 = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar10 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar21 + 7);
  local_80 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb2010;
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_98 = 0;
  FUN_01a5033c(&local_a8,&local_90,0,param_2,&local_a0);
  pbVar20 = (byte *)(param_1 + 0x10);
  bVar18 = *pbVar20;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_170 = (undefined *)CONCAT71(local_170._1_7_,bVar18);
  local_130 = (char *)CONCAT44(local_130._4_4_,(float)local_98._4_4_ * 5.0 + 5.0);
  local_138 = (undefined *)CONCAT44(local_138._4_4_,(float)(int)local_98 * 5.0 + 5.0);
  lVar17 = FUN_0251b3b0(&local_170,0);
  if ((lVar17 == 0) || (*(long *)PTR_DAT_04bb27c8 == 0)) {
    uVar11 = 0;
    goto LAB_022bc2d0;
  }
  fVar22 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_138,0);
  uVar11 = 0;
  fVar22 = fVar22 - *(float *)(lVar17 + 4);
  if ((5.0 < fVar22) || (fVar22 < -5.0)) goto LAB_022bc2d0;
  local_ac = 0;
  local_b2 = 0;
  iVar6 = (int)local_98;
  iVar7 = local_98._4_4_;
  iVar3 = *(int *)(PTR_DAT_04bb2e10 + 8);
  iVar4 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
  iVar10 = iVar3;
  if (0 < iVar3) {
    iVar10 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar2 = iVar4;
  if (0 < iVar4) {
    iVar2 = 1;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
LAB_022bc148:
    local_b2 = 4;
  }
  else if ((((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) &&
            (lVar17 = *(long *)PTR_DAT_04bbbc68, lVar17 != 0)) && (*(long *)(lVar17 + 0xb0) != 0))
          && (((*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0 && (*(long *)(lVar17 + 0x488) != 0)) &&
              ((*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0 &&
               ((*(long *)(lVar17 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)))
               ))))) {
    uVar11 = FUN_0277d6c4(&local_a8);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      FUN_0124c030(&local_138,&local_a8);
      iVar12 = FUN_0123db50(&local_130,local_128);
      if (iVar12 == 5) goto LAB_022bc148;
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar19 = 0;
    puVar21 = DAT_055c1b60;
    do {
      if (*(int *)(puVar21 + -1) == -0x10e0fba8) goto LAB_022bc1a4;
      puVar21 = (undefined8 *)puVar21[1];
      sVar19 = sVar19 + 1;
    } while (puVar21 != &DAT_055c1b58);
  }
  sVar19 = -1;
LAB_022bc1a4:
  if (*(short *)PTR_DAT_04bb6298 == sVar19) {
    local_b2 = 4;
  }
  local_b1 = 0;
  local_138 = PTR_DAT_04bb2020 + 0x10;
  local_130 = "ValidatePlayerSaveFlag";
  iVar12 = FUN_0274bce0(pbVar20,&local_138);
  FUN_0124c030(auStack_e8,&local_a8);
  uVar14 = FUN_012509c0(auStack_e8,0);
  if ((iVar12 == 0) && ((uVar14 & 1) != 0)) {
LAB_022bc208:
    local_b1 = 0x80;
  }
  else {
    uVar14 = FUN_01250da8(auStack_e8,2);
    if ((uVar14 & 1) == 0) {
      iVar13 = FUN_0277d6c4(&local_e0);
      if (((((iVar13 == 0xec9a) || (iVar13 = FUN_0277d6c4(&local_e0), iVar13 == 0xec97)) ||
           (uVar14 = FUN_012509c0(auStack_e8,0), (uVar14 & 1) != 0)) && ((uStack_dc & 0x10000) != 0)
          ) || (uVar14 = FUN_012509c0(auStack_e8,0), (uVar14 & 1) == 0)) {
        iVar13 = FUN_0277d6c4(&local_e0);
        if (iVar13 == 0xec9a) {
          bVar8 = true;
        }
        else {
          iVar13 = FUN_0277d6c4(&local_e0);
          bVar8 = iVar13 == 0xec97;
        }
        if ((iVar12 != 0) && (bVar8)) {
          uVar11 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar11 = uVar11 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar11 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          uVar16 = (uint)((ulong)uVar11 * 1000 >> 0x20);
          DAT_0514cb64 = uVar11;
          if (uVar16 < 0x4b) {
            local_138 = (undefined *)0x1662;
LAB_022bc73c:
            FUN_0277d4ac(&local_138);
            FUN_012508a8(auStack_e8,&local_138);
            local_a8 = local_e0;
            uStack_a4 = uStack_dc;
          }
          else {
            if (uVar16 < 0x96) {
              local_138 = (undefined *)0x1663;
              goto LAB_022bc73c;
            }
            if (uVar16 < 200) {
              local_138 = (undefined *)0x1664;
              goto LAB_022bc73c;
            }
          }
          uVar14 = FUN_01250b88(auStack_e8);
          if ((uVar14 & 1) != 0) {
            uVar9 = FUN_01250cb0(auStack_e8);
            local_138 = (undefined *)(ulong)uVar9;
            FUN_0277d4ac(&local_138);
          }
        }
      }
      else {
        uVar11 = FUN_0122b8ec();
        if (uVar11 < 0x1e) {
          if (((iVar12 == 0) || (uVar14 = FUN_0122a1a8(), (uVar14 & 1) == 0)) ||
             ((uVar14 = FUN_01c65b60(), (uVar14 & 1) != 0 || (uVar11 = FUN_0122b8ec(), 9 < uVar11)))
             ) {
            local_138 = (undefined *)0x9c4;
          }
          else {
            iVar12 = FUN_0123db50(&local_e0,local_d8);
            if ((iVar12 == 1) || (iVar12 = FUN_0123db50(&local_e0,local_d8), iVar12 == 9)) {
              local_138 = (undefined *)0x165f;
            }
            else {
              local_138 = (undefined *)0x1660;
            }
          }
          FUN_0277d4ac(&local_138);
          FUN_012508a8(auStack_e8,&local_138);
          local_a8 = local_e0;
          uStack_a4 = uStack_dc;
        }
      }
    }
    else {
      if ((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) || (iVar12 == 0)) goto LAB_022bc208;
      if (((DAT_0547a508 & 1) == 0) && (uVar14 = FUN_01957514(), (uVar14 & 1) != 0)) {
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 2;
      }
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    iVar12 = FUN_0277d6c4(&local_e0);
    if ((((iVar12 == 0xec9a) || (iVar12 = FUN_0277d6c4(&local_e0), iVar12 == 0xec97)) ||
        (uVar14 = FUN_012509c0(auStack_e8,0), (uVar14 & 1) != 0)) && ((uStack_dc & 0x10000) != 0)) {
      FUN_01250bf0(auStack_e8);
      local_a8 = local_e0;
      uStack_a4 = uStack_dc;
    }
  }
  local_b6 = 8;
  local_b8 = *(undefined2 *)PTR_DAT_04bb6298;
  local_b5 = *pbVar20;
  if (7 < local_b5) {
    local_b5 = 0xff;
  }
  lVar17 = FUN_0251b3b0(pbVar20,0);
  if (lVar17 == 0) {
    local_bc = 0;
  }
  else {
    local_bc = *(undefined4 *)(lVar17 + 4);
  }
  local_c8 = CONCAT44(uStack_a4,local_a8);
  local_b3 = 0;
  local_b0 = 0;
  local_be = (short)((ulong)local_98 >> 0x20);
  sVar19 = (short)local_98;
  uVar11 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  uVar11 = uVar11 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar11 ^ DAT_0514cb64;
  if (uVar11 == 0) {
    uVar11 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
    uVar11 = uVar11 ^ uVar11 >> 8;
    if (uVar11 == 0) {
      uVar11 = DAT_0514cb60 ^ DAT_0514cb60 << 0xb;
      uVar11 = uVar11 ^ uVar11 >> 8;
      if (uVar11 == 0) {
        uVar11 = DAT_0514cb64 ^ DAT_0514cb64 << 0xb;
        DAT_0514cb64 = uVar11 ^ uVar11 >> 8;
        if (DAT_0514cb64 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar16 = 0;
        DAT_0514cb60 = 0;
        DAT_0514cb5c = 0;
      }
      else {
        uVar16 = 0;
        DAT_0514cb60 = 0;
        DAT_0514cb5c = DAT_0514cb64;
        DAT_0514cb64 = uVar11;
      }
    }
    else {
      uVar16 = 0;
      DAT_0514cb5c = DAT_0514cb60;
      DAT_0514cb60 = DAT_0514cb64;
      DAT_0514cb64 = uVar11;
    }
  }
  else {
    uVar16 = DAT_0514cb64;
    DAT_0514cb64 = uVar11;
  }
  local_ae = 0;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  DAT_0514cb60 = uVar16;
  local_cc = DAT_0514cb64;
  local_c0 = sVar19;
  pfVar15 = (float *)FUN_0251b3b0(pbVar20,0);
  if (pfVar15 == (float *)0x0) {
    bVar8 = false;
    local_b4 = '\0';
  }
  else {
    bVar8 = (float)(int)sVar19 * 5.0 + 5.0 <= *pfVar15;
    local_b4 = bVar8 << 3;
  }
  if ((*(byte *)(param_1 + 0x5c) >> 1 & 1) != 0) {
    uVar14 = FUN_022b8940(param_1,&local_a0,bVar8);
    if ((uVar14 & 1) == 0) {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
    }
    else if (DAT_0547a508 == 1) {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
      local_b0 = 0x10;
    }
  }
  puVar1 = puVar1 + 0x10;
  local_100 = 0xffffffffffffffff;
  local_106 = 0;
  local_102 = 0;
  local_108 = 0xff00;
  local_130 = PTR_DAT_04bbc1a0 + 0x10;
  local_f8 = 0;
  local_ec = 0xff00;
  local_f4 = 0x41200000;
  local_138 = (undefined *)CONCAT62(local_138._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
  local_128 = puVar1;
  local_120 = iVar6 + iVar10;
  iStack_11c = iVar7 + iVar2;
  local_118 = puVar1;
  local_110 = iVar6 + iVar3;
  iStack_10c = iVar7 + iVar4;
  uVar11 = FUN_022ab010(param_1,&local_138,&local_cc);
  if ((uVar11 & 1) != 0) {
    local_170 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_170);
    sVar5 = local_be;
    sVar19 = local_c0;
    local_170 = (undefined *)local_c8;
    puVar21 = (undefined8 *)(param_1 + 0x14);
    *puVar21 = 0xfffe;
    FUN_0277d4ac(puVar21);
    *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x48) = (int)sVar19;
    *(int *)(param_1 + 0x4c) = (int)sVar5;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    local_140 = 0;
    *(undefined4 *)puVar21 = (undefined4)local_170;
    *(undefined4 *)(param_1 + 0x18) = local_170._4_4_;
    *(undefined8 *)(param_1 + 0x50) = 0x800000000;
    local_150 = 0x1b00000000;
    uStack_148 = 0xffffff00000024;
    local_168 = (int)local_c0 & 0xfffffffe;
    uStack_164 = (int)local_be & 0xfffffffe;
    local_170 = puVar1;
    local_160 = puVar1;
    local_158 = local_168;
    uStack_154 = uStack_164;
    FUN_011e8d00(&local_170,1);
    if ((*(byte *)(param_1 + 0x5c) >> 1 & 1) != 0) {
      DAT_0547a508 = 1;
    }
  }
LAB_022bc2d0:
  return uVar11 & 1;
}

