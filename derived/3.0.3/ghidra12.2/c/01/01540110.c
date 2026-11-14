
void FUN_01540110(uint *param_1,undefined2 *param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  long *plVar27;
  uint *puVar28;
  ulong uVar29;
  bool bVar30;
  uint uVar31;
  undefined *puVar32;
  byte *pbVar33;
  byte *pbVar34;
  undefined *puVar35;
  uint uVar36;
  long lVar37;
  uint *puVar38;
  undefined1 uVar39;
  long lVar40;
  undefined8 *puVar41;
  long *plVar42;
  ulong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint local_174;
  uint local_160;
  undefined *local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  uint local_144;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  uint local_108;
  undefined1 local_104;
  byte local_103;
  undefined1 local_102;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  uint local_d0;
  uint uStack_cc;
  long local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  
  local_148 = *param_2;
  *(undefined2 *)param_1 = local_148;
  local_146 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 2) = local_146;
  local_145 = *(undefined1 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 3) = local_145;
  local_144 = *(uint *)(param_2 + 2);
  param_1[1] = local_144;
  param_1[2] = *(uint *)(param_2 + 4);
  param_1[3] = *(uint *)(param_2 + 6);
  param_1[4] = *(uint *)(param_2 + 8);
  puVar12 = PTR_DAT_04bc0510;
  local_140 = 0;
  local_150 = PTR_DAT_04bc0510 + 0x10;
  param_1[5] = *(uint *)(param_2 + 10);
  param_1[6] = *(uint *)(param_2 + 0xc);
  puVar35 = PTR_DAT_04bb43c0;
  lVar40 = *(long *)PTR_DAT_04bb43c0;
  uVar20 = FUN_0277d6c4(&local_148);
  if (*(long *)puVar35 != 0) {
    lVar40 = *(long *)(lVar40 + 0x57e58);
    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
    if ((uVar20 < *(uint *)(lVar40 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
      lVar40 = *(long *)PTR_DAT_04bc0428;
      uVar20 = FUN_0277d6c4(param_1);
      uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
      if (uVar20 < *(uint *)(lVar40 + 0x1d8)) {
        lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8);
        if (lVar40 != 0) {
          local_140 = lVar40;
        }
      }
    }
  }
  local_138._0_4_ = 10;
  local_100._0_4_ = FUN_01ae7550(&local_150);
  if ((int)local_100 == (uint)local_138) {
    return;
  }
  local_138._0_4_ = 0xb;
  local_100._0_4_ = FUN_01ae7550(&local_150);
  if ((int)local_100 == (uint)local_138) {
    return;
  }
  local_138._0_4_ = 0xc;
  local_100._0_4_ = FUN_01ae7550(&local_150);
  if ((int)local_100 == (uint)local_138) {
    return;
  }
  local_138._0_4_ = 0xe;
  local_100._0_4_ = FUN_01ae7550(&local_150);
  if ((int)local_100 != (uint)local_138) {
    local_138._0_4_ = 0xd;
    iVar21 = FUN_01ae7550(&local_150);
    local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar21);
    if (iVar21 == (uint)local_138) {
      lVar40 = *(long *)PTR_DAT_04bb2720;
      if (lVar40 == 0) {
        puVar41 = &DAT_055c04a0;
      }
      else {
        puVar41 = &DAT_055c04a0;
        if (*(long *)(lVar40 + 0x330) != 0) {
          puVar41 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
          iVar21 = FUN_006bd550(*puVar41,0);
          puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar21 != 0x758f7eaf) {
            puVar41 = &DAT_055c04a0;
          }
        }
      }
      FUN_017baf44(*(undefined4 *)(puVar41 + 7));
      local_d8 = puVar12 + 0x10;
      local_c8 = 0;
      lVar40 = *(long *)puVar35;
      local_d0 = *param_1;
      uStack_cc = param_1[1];
      local_b8 = param_1[5] + 0x20000000 >> 0x1e;
      uVar20 = param_1[5] + 0xa0000000 >> 0x1e;
      iVar21 = (int)((float)(int)(float)param_1[2] / 5.0) - (uint)((float)param_1[2] < 0.0);
      iVar22 = (int)((float)(int)(float)param_1[4] / 5.0) - (uint)((float)param_1[4] < 0.0);
      uVar24 = FUN_0277d6c4(&local_d0);
      if (*(long *)puVar35 != 0) {
        lVar40 = *(long *)(lVar40 + 0x57e58);
        uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
        if ((uVar24 < *(uint *)(lVar40 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
          lVar40 = *(long *)PTR_DAT_04bc0428;
          uVar24 = FUN_0277d6c4(param_1);
          uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
          if (uVar24 < *(uint *)(lVar40 + 0x1d8)) {
            lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar24 * 8);
            if (lVar40 != 0) {
              local_c8 = lVar40;
            }
          }
        }
      }
      local_f0 = 0;
      local_100 = PTR_DAT_04bbc1a0 + 0x10;
      local_f8 = (uint *)(PTR_DAT_04bb2010 + 0x10);
      local_e0 = 0;
      local_e8 = local_f8;
      FUN_01afb7fc(&local_d8,&local_100,uVar20);
      puVar12 = PTR_DAT_04bb32e0;
      puVar35 = PTR_DAT_04bb2e10;
      iVar25 = -1;
      uVar24 = 1;
      do {
        uVar26 = *(uint *)(puVar35 + 8);
        uVar36 = *(uint *)(puVar35 + 0xc);
        if (uVar24 != 1) {
          fVar44 = SQRT((float)uVar24);
          uVar31 = (uint)fVar44;
          if (fVar44 != (float)(int)fVar44) {
            uVar31 = uVar31 + 1;
          }
          uVar4 = uVar31 & 0xfffffffe;
          uVar8 = uVar31 >> 1;
          iVar23 = iVar25 + (uVar31 | 1) * (uVar31 | 1);
          if (uVar31 < 2) {
            uVar4 = 1;
          }
          iVar9 = 0;
          if (uVar4 != 0) {
            iVar9 = iVar23 / (int)uVar4;
          }
          uVar31 = uVar8;
          if ((int)(uVar4 * 4) <= iVar23) {
            uVar31 = 0;
          }
          iVar9 = iVar23 - iVar9 * uVar4;
          uVar10 = iVar9 - uVar8;
          uVar11 = uVar8 - iVar9;
          uVar5 = uVar10;
          if ((int)(uVar4 * 4) <= iVar23) {
            uVar5 = 0;
          }
          if (iVar23 < (int)(uVar4 * 3)) {
            uVar5 = -uVar8;
            uVar31 = uVar10;
          }
          if (iVar23 < (int)(uVar4 * 2)) {
            uVar31 = -uVar8;
            uVar5 = uVar11;
          }
          if (iVar23 < (int)uVar4) {
            uVar31 = uVar11;
            uVar5 = uVar8;
          }
          uVar4 = uVar5;
          switch(local_b8) {
          case 0:
            break;
          case 1:
            uVar4 = uVar31;
            uVar31 = -uVar5;
            break;
          case 2:
            uVar4 = -uVar5;
            uVar31 = -uVar31;
            break;
          case 3:
            uVar4 = -uVar31;
            uVar31 = uVar5;
            break;
          default:
            goto switchD_01541710_default;
          }
          uVar36 = uVar31;
          uVar26 = uVar4;
        }
switchD_01541710_default:
        local_108 = local_b8;
        local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
        local_138 = *(uint **)param_1;
        local_102 = 0;
        local_120 = (uint *)CONCAT44(6,uVar20);
        local_104 = 1;
        fVar44 = ((float)(int)(uVar26 + iVar21) * 5.0 + 2.5) -
                 ((float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0 + -2.5);
        fVar46 = ((float)(int)(uVar36 + iVar22) * 5.0 + 2.5) -
                 ((float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
        local_128 = (undefined *)
                    CONCAT44((int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0),
                             (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0));
        lVar40 = *(long *)PTR_DAT_04bb39b0;
        pbVar33 = puVar12;
        if (lVar40 == 0) {
          if (7 < (byte)*puVar12) goto LAB_01541874;
LAB_015418f0:
          local_103 = *pbVar33;
          if (7 < local_103) {
            local_103 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar40 + 0x15c) != 0) {
            pbVar33 = (byte *)(lVar40 + 0x158);
          }
          if ((*pbVar33 < 8) ||
             (((*(int *)(lVar40 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
          goto LAB_015418f0;
LAB_01541874:
          pbVar33 = PTR_DAT_04bb5038;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_015418f0;
          lVar40 = **(long **)PTR_DAT_04bb27d0;
          bVar7 = *(byte *)(lVar40 + 0x473);
          pbVar34 = PTR_DAT_04bb5038;
          if ((long)(char)bVar7 != 0xffffffffffffffff) {
            puVar28 = (uint *)(lVar40 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
            if (7 < bVar7) {
              puVar28 = (uint *)(lVar40 + 0x48);
            }
            if ((*puVar28 & 8) != 0) {
              pbVar34 = (byte *)(lVar40 + 0x471);
            }
          }
          local_103 = *pbVar34;
          if (7 < local_103) goto LAB_015418f0;
        }
        if (7 < local_103) {
          local_103 = 0xff;
        }
        local_118 = local_130;
        local_110 = iVar21;
        iStack_10c = iVar22;
        iVar23 = FUN_0148e51c(param_1 + 0x5e,&local_138);
        if (iVar23 == 9) {
          param_1[0x5c] = 9;
          goto LAB_01541938;
        }
        iVar25 = iVar25 + -1;
        uVar24 = uVar24 + 1;
        if (iVar25 == -0x1a) {
LAB_01541938:
          if (param_1[0x5c] == 9) {
            return;
          }
          uVar20 = FUN_01543958(param_1);
          param_1[0x5c] = uVar20;
          return;
        }
      } while( true );
    }
    uVar20 = param_1[5] + 0x10000000 >> 0x1d;
    local_138 = (uint *)CONCAT44(local_138._4_4_,uVar20);
    if ((uVar20 & 1) == 0) {
      lVar37 = *(long *)puVar35;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      uVar20 = FUN_0277d6c4(param_1);
      lVar40 = *(long *)puVar35;
      if (lVar40 == 0) {
LAB_01541b10:
        bVar14 = false;
        iVar21 = 2;
      }
      else {
        lVar37 = *(long *)(lVar37 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar20) ||
           (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar20 * 8) == 0)) goto LAB_01541b10;
        local_138 = (uint *)(puVar12 + 0x10);
        local_128 = (undefined *)0x0;
        local_130 = *(uint **)param_1;
        uVar20 = FUN_0277d6c4(&local_130);
        if (*(long *)puVar35 != 0) {
          lVar40 = *(long *)(lVar40 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar40 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            lVar40 = *(long *)PTR_DAT_04bc0428;
            uVar20 = FUN_0277d6c4(param_1);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
            if (uVar20 < *(uint *)(lVar40 + 0x1d8)) {
              puVar32 = *(undefined **)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8);
              if (puVar32 != (undefined *)0x0) {
                local_128 = puVar32;
              }
            }
          }
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,0x1b);
        iVar21 = FUN_01aee3b4(&local_138);
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar21);
        bVar14 = iVar21 == (int)local_100;
        iVar21 = 1;
        if (!bVar14) {
          iVar21 = 2;
        }
      }
      uVar26 = param_1[5] + 0x20000000 >> 0x1e;
      uVar43 = (ulong)((float)(param_1[5] + 0x10000000 >> 0x1d) * 45.0 * 11930465.0);
      local_b0 = uVar26;
      FUN_01543c10(0x41200000,param_1,param_1 + 8);
      uVar20 = param_1[0xc];
      uVar24 = param_1[0xd];
      *(undefined1 *)(param_1 + 0x12) = 1;
      if (bVar14) {
        if (local_b0 == 1) {
LAB_01541b98:
          uVar24 = uVar24 + 1;
        }
        else if (local_b0 == 3) {
          uVar20 = uVar20 + 1;
        }
        else if (local_b0 == 2) {
          uVar20 = uVar20 + 1;
          goto LAB_01541b98;
        }
        param_1[0xc] = uVar20;
        param_1[0xd] = uVar24;
        param_1[0x10] = uVar20;
        param_1[0x11] = uVar24;
        *(undefined1 *)(param_1 + 0x12) = 1;
        uVar36 = uVar20;
        uVar31 = uVar24;
      }
      else {
        uVar36 = param_1[0x10];
        uVar31 = param_1[0x11];
      }
      iVar22 = iVar21 + -1;
      pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar43 >> 0x19 & 0x7f) * 0x10);
      fVar44 = (float)((uint)uVar43 >> 1 & 0xffffff) * 5.9604645e-08;
      fVar45 = *pfVar3 + fVar44 * pfVar3[1];
      fVar46 = pfVar3[2] + fVar44 * pfVar3[3];
      fVar44 = 0.0;
      fVar47 = fVar45 * 0.0;
      fVar46 = fVar46 + fVar46;
      fVar50 = fVar47 * fVar46;
      fVar53 = fVar45 * (fVar45 + fVar45);
      fVar46 = fVar45 * fVar46;
      fVar56 = fVar47 * (fVar47 + fVar47);
      fVar48 = (1.0 - fVar53) - fVar56;
      fVar49 = fVar56 - fVar46;
      fVar53 = (1.0 - fVar56) - fVar53;
      fVar59 = ((fVar45 + fVar45) * fVar47 + fVar50) * 0.0;
      fVar54 = (float)iVar21 * 0.5 * 5.0 + -2.5;
      fVar56 = fVar56 + fVar46;
      fVar55 = ((float)(int)uVar36 * 5.0 + 5.0 + (float)(int)uVar20 * 5.0) * 0.5;
      fVar46 = (fVar45 * (fVar47 + fVar47) - fVar50) * 0.0;
      fVar51 = ((float)(int)uVar31 * 5.0 + 5.0 + (float)(int)uVar24 * 5.0) * 0.5;
      fVar57 = fVar46 + fVar48 * 5.0 + fVar56 * 0.0;
      fVar52 = fVar59 + fVar49 * 5.0 + fVar53 * 0.0;
      fVar59 = fVar59 + fVar49 * -5.0 + fVar53 * 0.0;
      fVar56 = fVar46 + fVar48 * -5.0 + fVar56 * 0.0;
      fVar58 = (fVar55 + fVar57) - fVar54;
      fVar47 = (fVar51 + fVar52) - fVar54;
      fVar45 = (fVar55 + fVar56) - fVar54;
      fVar50 = (fVar55 + fVar57 + fVar57) - fVar54;
      fVar53 = (fVar51 + fVar52 + fVar52) - fVar54;
      fVar48 = (fVar51 + fVar59) - fVar54;
      fVar49 = (fVar55 + fVar56 + fVar56) - fVar54;
      fVar46 = (fVar51 + fVar59 + fVar59) - fVar54;
      uVar20 = (int)((float)(int)fVar58 / 5.0) - (uint)(fVar58 < 0.0);
      uVar24 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      uVar36 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
      uVar31 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
      uVar4 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
      puVar28 = param_1 + 0x34;
      *puVar28 = uVar31 + iVar22;
      param_1[0x18] = uVar20;
      param_1[0x19] = uVar36;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      *(undefined1 *)(param_1 + 0x36) = 1;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      *(undefined1 *)(param_1 + 0x42) = 1;
      param_1[0x24] = uVar24;
      param_1[0x25] = uVar4;
      param_1[0x1c] = uVar20 + iVar22;
      param_1[0x1d] = uVar36 + iVar22;
      uVar20 = (int)((float)(int)fVar53 / 5.0) - (uint)(fVar53 < 0.0);
      param_1[0x28] = uVar24 + iVar22;
      param_1[0x29] = uVar4 + iVar22;
      param_1[0x30] = uVar31;
      param_1[0x31] = uVar20;
      param_1[0x35] = uVar20 + iVar22;
      uVar24 = (int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0);
      puVar38 = param_1 + 0x40;
      *puVar38 = uVar24 + iVar22;
      uVar36 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
      param_1[0x3c] = uVar24;
      param_1[0x3d] = uVar36;
      param_1[0x41] = uVar36 + iVar22;
      if (bVar14) {
        if ((uVar26 | 2) == 2) {
          iVar21 = (int)((float)(int)((float)param_1[2] + -2.5) / 5.0) -
                   (uint)((float)param_1[2] + -2.5 < 0.0);
          fVar49 = ((float)(int)uVar31 * 5.0 + (float)(int)(uVar31 + iVar22) * 5.0 + 5.0) * 0.5;
          fVar45 = ((float)iVar21 * 5.0 + (float)(iVar21 + 1) * 5.0 + 5.0) * 0.5;
          fVar48 = 0.0;
          fVar46 = ((float)(int)uVar24 * 5.0 + (float)(int)(uVar24 + iVar22) * 5.0 + 5.0) * 0.5;
          fVar47 = 0.0;
        }
        else {
          fVar49 = 0.0;
          fVar44 = ((float)(int)uVar36 * 5.0 + (float)(int)(uVar36 + iVar22) * 5.0 + 5.0) * 0.5;
          iVar21 = (int)((float)(int)((float)param_1[4] + -2.5) / 5.0) -
                   (uint)((float)param_1[4] + -2.5 < 0.0);
          fVar48 = ((float)(int)uVar20 * 5.0 + (float)(int)(uVar20 + iVar22) * 5.0 + 5.0) * 0.5;
          fVar47 = ((float)iVar21 * 5.0 + (float)(iVar21 + 1) * 5.0 + 5.0) * 0.5;
          fVar46 = 0.0;
          fVar45 = 0.0;
        }
        if (10.0 < SQRT((fVar49 - fVar45) * (fVar49 - fVar45) + 0.0 +
                        (fVar48 - fVar47) * (fVar48 - fVar47))) {
          param_1[0x30] = 0;
          param_1[0x31] = 0;
          puVar28[0] = 0;
          puVar28[1] = 0;
          *(undefined1 *)(param_1 + 0x36) = 0;
        }
        if (10.0 < SQRT((fVar46 - fVar45) * (fVar46 - fVar45) + 0.0 +
                        (fVar44 - fVar47) * (fVar44 - fVar47))) {
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          puVar38[0] = 0;
          puVar38[1] = 0;
          *(undefined1 *)(param_1 + 0x42) = 0;
        }
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        *(undefined1 *)(param_1 + 0x4e) = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
      }
      else {
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        *(undefined1 *)(param_1 + 0x4e) = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
        local_100 = PTR_DAT_04bbfe68 + 0x10;
        local_f8 = (uint *)((ulong)local_f8 & 0xffffffff00000000);
        lVar40 = *(long *)PTR_DAT_04bb2720;
        if (lVar40 == 0) {
          puVar41 = &DAT_055c04a0;
        }
        else {
          puVar41 = &DAT_055c04a0;
          if (*(long *)(lVar40 + 0x330) != 0) {
            puVar41 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
            iVar21 = FUN_006bd550(*puVar41,0);
            puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar21 != 0x758f7eaf) {
              puVar41 = &DAT_055c04a0;
            }
          }
        }
        local_f8 = (uint *)CONCAT44(*(undefined4 *)(puVar41 + 7),(undefined4)local_f8);
        uVar19 = FUN_017baf44();
        local_138 = param_1 + 10;
        local_130 = param_1 + 0xe;
        local_f0 = CONCAT71(local_f0._1_7_,uVar19) & 0xffffffffffffff01;
        uVar20 = param_1[0xc];
        local_120 = *(uint **)(param_1 + 0xc);
        local_100 = PTR_DAT_04bb3140 + 0x10;
        uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
        local_128 = PTR_DAT_04bb2010 + 0x10;
        uVar19 = PTR_DAT_04bb37e0[2];
        uVar24 = param_1[0x11];
        uVar39 = PTR_DAT_04bb37e0[3];
        local_b8 = *(uint *)PTR_DAT_04bb37e0;
        local_b4 = *(uint *)(PTR_DAT_04bb37e0 + 4);
        local_174 = *(uint *)PTR_DAT_04bb3238;
        if (uVar24 + 1 != param_1[0xd]) {
          uVar26 = local_174;
          do {
            puVar28 = (uint *)FUN_01a5190c(&local_100,0,&local_128,0);
            local_c0 = *puVar28;
            local_bc = puVar28[1];
            puVar28 = (uint *)FUN_014fbd50(&local_100,0,&local_128);
            uVar36 = *puVar28;
            lVar37 = *(long *)puVar35;
            uVar31 = FUN_0277d6c4(&local_c0);
            lVar40 = *(long *)puVar35;
            if (lVar40 == 0) goto LAB_015437d4;
            lVar37 = *(long *)(lVar37 + 0x57e58);
            uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
            if ((*(uint *)(lVar37 + 0x1d8) <= uVar31) ||
               (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar31 * 8) == 0))
            goto LAB_015437d4;
            local_c8 = 0;
            local_d0 = local_c0;
            uStack_cc = local_bc;
            local_d8 = puVar12 + 0x10;
            uVar31 = FUN_0277d6c4(&local_d0);
            if (*(long *)puVar35 != 0) {
              lVar40 = *(long *)(lVar40 + 0x57e58);
              uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
              if ((uVar31 < *(uint *)(lVar40 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar31 * 8) != 0)) {
                lVar40 = *(long *)PTR_DAT_04bc0428;
                uVar31 = FUN_0277d6c4(&local_c0);
                uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
                if (uVar31 < *(uint *)(lVar40 + 0x1d8)) {
                  lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar31 * 8);
                  if (lVar40 != 0) {
                    local_c8 = lVar40;
                  }
                }
              }
            }
            local_ac = FUN_01ae7550(&local_d8);
            if ((5 < local_ac - 1U) || (uVar36 == 0)) goto LAB_015437d4;
            if ((short)local_b8 == -2) {
              local_b8 = local_c0;
              local_b4 = local_bc;
              local_174 = uVar36;
            }
            else {
              uVar29 = FUN_0277d7b4(&local_b8,&local_c0);
              if (((uVar29 & 1) == 0) || (uVar26 != uVar36)) goto LAB_015437d4;
            }
            if ((int)local_120 < (int)local_130[2]) {
              uVar31 = (int)local_120 + 1;
              uVar4 = local_120._4_4_;
            }
            else {
              uVar31 = local_138[2];
              uVar4 = local_120._4_4_ + 1;
              local_120 = (uint *)((ulong)uVar4 << 0x20);
            }
            local_120 = (uint *)CONCAT44(local_120._4_4_,uVar31);
            uVar26 = uVar36;
          } while ((uVar20 != uVar31) || (uVar24 + 1 != uVar4));
          uVar19 = local_b8._2_1_;
          uVar39 = local_b8._3_1_;
          uVar6 = (short)local_b8;
        }
        lVar40 = *(long *)puVar35;
        local_130 = (uint *)CONCAT44(local_b4,CONCAT13(uVar39,CONCAT12(uVar19,uVar6)));
        local_128 = (undefined *)0x0;
        pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar43 >> 0x18 & 0xff) * 0x10);
        fVar44 = (float)((uint)uVar43 & 0xffffff) * 5.9604645e-08;
        fVar46 = *pfVar3;
        fVar45 = pfVar3[1];
        fVar47 = pfVar3[2];
        fVar48 = pfVar3[3];
        local_138 = (uint *)(puVar12 + 0x10);
        uVar20 = FUN_0277d6c4(&local_130);
        if (*(long *)puVar35 != 0) {
          lVar40 = *(long *)(lVar40 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar40 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            lVar40 = *(long *)PTR_DAT_04bc0428;
            uVar20 = FUN_0277d6c4(&local_b8);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
            if (uVar20 < *(uint *)(lVar40 + 0x1d8)) {
              puVar35 = *(undefined **)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8);
              if (puVar35 != (undefined *)0x0) {
                local_128 = puVar35;
              }
            }
          }
        }
        iVar21 = FUN_01aee3b4(&local_138);
        puVar35 = PTR_DAT_04bb27c0;
        fVar55 = fVar55 + (fVar46 + fVar44 * fVar45) * 10.0;
        fVar51 = fVar51 + (fVar47 + fVar44 * fVar48) * 10.0;
        if (iVar21 == 2) {
          fVar46 = (fVar52 + fVar51) - fVar54;
          fVar44 = (fVar57 + fVar55) - fVar54;
          fVar47 = (fVar59 + fVar51) - fVar54;
          lVar40 = *(long *)PTR_DAT_04bb27c0;
          fVar45 = (fVar56 + fVar55) - fVar54;
          if (lVar40 != 0) {
            if ((((local_174 == 0) ||
                 (plVar42 = *(long **)(*(long *)(*(long *)(lVar40 + 0x1c0) + 8) +
                                      (ulong)(local_174 >> 0x14) * 8), plVar42 == (long *)0x0)) ||
                ((*(uint *)(plVar42 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar42 + 0x46) != local_174)) {
              plVar42 = (long *)0x0;
            }
            if ((*(int *)(lVar40 + 0x288) == 1) || (*(int *)(lVar40 + 0x288) == -1)) {
              plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar40 = *(long *)puVar35;
              iVar21 = (**(code **)(*plVar27 + 0x60))();
              if (iVar21 < 0x11) {
                uVar20 = 1;
              }
              else {
                uVar20 = *(uint *)(lVar40 + 0x5e8);
                if (4 < uVar20) goto LAB_01543514;
                uVar20 = 0x1aU >> (ulong)(uVar20 & 0x1f) & 1;
              }
            }
            else {
LAB_01543514:
              uVar20 = 0;
            }
            if (plVar42 != (long *)0x0) {
              lVar40 = plVar42[0x2a];
              uVar24 = *(uint *)(plVar42 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar21 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar26 = (**(code **)(*plVar42 + 0x20))(plVar42,PTR_DAT_04bb5920);
              if ((((int)lVar40 == 1) && ((uVar20 & uVar26) != 0)) && ((uVar24 >> 4 & 1) != 0)) {
                uVar31 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
                uVar20 = uVar31 + iVar22;
                local_138 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
                uVar4 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
                local_128 = (undefined *)0x0;
                local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
                local_118 = (uint *)0x0;
                uVar8 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
                uVar24 = uVar8 + iVar22;
                uVar5 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
                uVar26 = uVar4 + iVar22;
                uVar36 = uVar5 + iVar22;
                local_120 = local_130;
                FUN_01470a84(plVar42,&local_138);
                bVar15 = uVar26 == local_118._4_4_;
                bVar14 = ((((int)(uint)local_128 <= (int)uVar31 &&
                           (int)uVar20 <= (int)(uint)local_118) &&
                          (int)local_128._4_4_ <= (int)uVar4) && (int)(uVar26 - local_118._4_4_) < 0
                         ) != ((((int)(uint)local_128 <= (int)uVar31 &&
                                (int)uVar20 <= (int)(uint)local_118) &&
                               (int)local_128._4_4_ <= (int)uVar4) &&
                              SBORROW4(uVar26,local_118._4_4_));
                bVar16 = (uint)local_128 == uVar8;
                bVar30 = (((((int)(uint)local_128 <= (int)uVar31 &&
                            (int)uVar20 <= (int)(uint)local_118) &&
                           (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) &&
                         (int)((uint)local_128 - uVar8) < 0) !=
                         (((((int)(uint)local_128 <= (int)uVar31 &&
                            (int)uVar20 <= (int)(uint)local_118) &&
                           (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) &&
                         SBORROW4((uint)local_128,uVar8));
                bVar17 = uVar24 == (uint)local_118;
                bVar1 = ((((((int)(uint)local_128 <= (int)uVar31 &&
                            (int)uVar20 <= (int)(uint)local_118) &&
                           (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                         bVar30) && (int)(uVar24 - (uint)local_118) < 0) !=
                        ((((((int)(uint)local_128 <= (int)uVar31 &&
                            (int)uVar20 <= (int)(uint)local_118) &&
                           (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                         bVar30) && SBORROW4(uVar24,(uint)local_118));
                bVar18 = local_128._4_4_ == uVar5;
                bVar2 = (((((((int)(uint)local_128 <= (int)uVar31 &&
                             (int)uVar20 <= (int)(uint)local_118) &&
                            (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                          bVar30) && bVar17 || bVar1) && (int)(local_128._4_4_ - uVar5) < 0) !=
                        (((((((int)(uint)local_128 <= (int)uVar31 &&
                             (int)uVar20 <= (int)(uint)local_118) &&
                            (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                          bVar30) && bVar17 || bVar1) && SBORROW4(local_128._4_4_,uVar5));
                if ((((((((int)(uint)local_128 <= (int)uVar31 && (int)uVar20 <= (int)(uint)local_118
                         ) && (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                      bVar30) && bVar17 || bVar1) && bVar18 || bVar2) && uVar36 == local_118._4_4_
                    || ((((((((int)(uint)local_128 <= (int)uVar31 &&
                             (int)uVar20 <= (int)(uint)local_118) &&
                            (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                          bVar30) && bVar17 || bVar1) && bVar18 || bVar2) &&
                       (int)(uVar36 - local_118._4_4_) < 0) !=
                       ((((((((int)(uint)local_128 <= (int)uVar31 &&
                             (int)uVar20 <= (int)(uint)local_118) &&
                            (int)local_128._4_4_ <= (int)uVar4) && bVar15 || bVar14) && bVar16 ||
                          bVar30) && bVar17 || bVar1) && bVar18 || bVar2) &&
                       SBORROW4(uVar36,local_118._4_4_))) {
                  puVar28 = param_1 + 0x5a;
                  param_1[0x48] = uVar31;
                  param_1[0x49] = uVar4;
                  param_1[0x4c] = uVar20;
                  param_1[0x4d] = uVar26;
                  *(undefined1 *)(param_1 + 0x4e) = 1;
                  param_1[0x54] = uVar8;
                  param_1[0x55] = uVar5;
                  param_1[0x58] = uVar24;
                  param_1[0x59] = uVar36;
                }
                else {
                  uVar20 = (int)((float)(int)(fVar55 - fVar54) / 5.0) -
                           (uint)(fVar55 - fVar54 < 0.0);
                  if ((((int)uVar20 < (int)(uint)local_128) ||
                      ((int)(uint)local_118 < (int)(uVar20 + iVar22))) ||
                     ((uVar24 = (int)((float)(int)(fVar51 - fVar54) / 5.0) -
                                (uint)(fVar51 - fVar54 < 0.0), (int)uVar24 < (int)local_128._4_4_ ||
                      ((int)local_118._4_4_ < (int)(uVar24 + iVar22))))) goto LAB_015437d4;
                  puVar28 = param_1 + 0x4e;
                  param_1[0x48] = uVar20;
                  param_1[0x49] = uVar24;
                  param_1[0x4c] = uVar20 + iVar22;
                  param_1[0x4d] = uVar24 + iVar22;
                }
                *(undefined1 *)puVar28 = 1;
              }
            }
          }
        }
        else {
          lVar40 = *(long *)PTR_DAT_04bb27c0;
          if (lVar40 != 0) {
            if (((local_174 == 0) ||
                (plVar42 = *(long **)(*(long *)(*(long *)(lVar40 + 0x1c0) + 8) +
                                     (ulong)(local_174 >> 0x14) * 8), plVar42 == (long *)0x0)) ||
               (((*(uint *)(plVar42 + 0x49) >> 1 & 1) != 0 ||
                (*(uint *)(plVar42 + 0x46) != local_174)))) {
              plVar42 = (long *)0x0;
            }
            if ((*(int *)(lVar40 + 0x288) == 1) || (*(int *)(lVar40 + 0x288) == -1)) {
              plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar40 = *(long *)puVar35;
              iVar21 = (**(code **)(*plVar27 + 0x60))();
              if (iVar21 < 0x11) {
                uVar20 = 1;
              }
              else {
                uVar20 = *(uint *)(lVar40 + 0x5e8);
                if (4 < uVar20) goto LAB_0154351c;
                uVar20 = 0x1aU >> (ulong)(uVar20 & 0x1f) & 1;
              }
            }
            else {
LAB_0154351c:
              uVar20 = 0;
            }
            if (plVar42 != (long *)0x0) {
              lVar40 = plVar42[0x2a];
              uVar24 = *(uint *)(plVar42 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar21 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar26 = (**(code **)(*plVar42 + 0x20))(plVar42,PTR_DAT_04bb5920);
              if ((((int)lVar40 == 1) && ((uVar20 & uVar26) != 0)) && ((uVar24 >> 4 & 1) != 0)) {
                local_118 = (uint *)0x0;
                local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
                local_138 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
                local_128 = (undefined *)0x0;
                uVar26 = (int)((float)(int)(fVar55 - fVar54) / 5.0) - (uint)(fVar55 - fVar54 < 0.0);
                uVar36 = (int)((float)(int)(fVar51 - fVar54) / 5.0) - (uint)(fVar51 - fVar54 < 0.0);
                uVar20 = uVar26 + iVar22;
                uVar24 = uVar36 + iVar22;
                local_120 = local_130;
                FUN_01470a84(plVar42,&local_138);
                if ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118) &&
                    (int)local_128._4_4_ <= (int)uVar36) && uVar24 == local_118._4_4_ ||
                    ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118)
                     && (int)local_128._4_4_ <= (int)uVar36) && (int)(uVar24 - local_118._4_4_) < 0)
                    != ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118
                         ) && (int)local_128._4_4_ <= (int)uVar36) &&
                       SBORROW4(uVar24,local_118._4_4_))) {
                  param_1[0x48] = uVar26;
                  param_1[0x49] = uVar36;
                  param_1[0x4c] = uVar20;
                  param_1[0x4d] = uVar24;
                  *(undefined1 *)(param_1 + 0x4e) = 1;
                }
              }
            }
          }
        }
      }
LAB_015437d4:
      if ((char)param_1[0x6a] != '\0') {
        FUN_015459a0(param_1,1);
        goto LAB_015437f8;
      }
    }
    else {
      if (((DAT_05215880 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_05215880), iVar21 != 0)) {
        DAT_05215878 = 14.142136;
        __cxa_guard_release(&DAT_05215880);
      }
      lVar37 = *(long *)puVar35;
      uVar20 = FUN_0277d6c4(param_1);
      lVar40 = *(long *)puVar35;
      if (lVar40 == 0) {
LAB_01541bac:
        bVar14 = false;
        iVar21 = 2;
      }
      else {
        lVar37 = *(long *)(lVar37 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar20) ||
           (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar20 * 8) == 0)) goto LAB_01541bac;
        local_138 = (uint *)(puVar12 + 0x10);
        local_128 = (undefined *)0x0;
        local_130 = *(uint **)param_1;
        uVar20 = FUN_0277d6c4(&local_130);
        if (*(long *)puVar35 != 0) {
          lVar40 = *(long *)(lVar40 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar40 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            lVar40 = *(long *)PTR_DAT_04bc0428;
            uVar20 = FUN_0277d6c4(param_1);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
            if (uVar20 < *(uint *)(lVar40 + 0x1d8)) {
              puVar32 = *(undefined **)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8);
              if (puVar32 != (undefined *)0x0) {
                local_128 = puVar32;
              }
            }
          }
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,0x1b);
        iVar21 = FUN_01aee3b4(&local_138);
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar21);
        bVar14 = iVar21 == (int)local_100;
        iVar21 = 1;
        if (!bVar14) {
          iVar21 = 2;
        }
      }
      local_b0 = param_1[5] + 0x10000000 >> 0x1d;
      lVar40 = (long)((float)local_b0 * 45.0 * 11930465.0);
      FUN_01543c10(DAT_05215878,param_1,param_1 + 8);
      *(undefined1 *)(param_1 + 0x12) = 1;
      uVar20 = param_1[0xc];
      uVar24 = param_1[0xd];
      if (bVar14) {
        if (local_b0 == 3) {
LAB_01541c30:
          uVar24 = uVar24 + 1;
        }
        else if (local_b0 == 7) {
          uVar20 = uVar20 + 1;
        }
        else if (local_b0 == 5) {
          uVar20 = uVar20 + 1;
          goto LAB_01541c30;
        }
        param_1[0xc] = uVar20;
        param_1[0xd] = uVar24;
        param_1[0x10] = uVar20;
        param_1[0x11] = uVar24;
        *(undefined1 *)(param_1 + 0x12) = 1;
        uVar26 = uVar20;
        uVar36 = uVar24;
      }
      else {
        uVar26 = param_1[0x10];
        uVar36 = param_1[0x11];
      }
      iVar22 = iVar21 + -1;
      pfVar3 = (float *)(PTR_DAT_04bb2d00 + (lVar40 + 0xe0000000U >> 0x19 & 0x7f) * 0x10);
      fVar44 = (float)((uint)lVar40 >> 1 & 0xffffff) * 5.9604645e-08;
      fVar47 = *pfVar3 + fVar44 * pfVar3[1];
      fVar46 = pfVar3[2] + fVar44 * pfVar3[3];
      fVar44 = fVar47 * 0.0;
      fVar46 = fVar46 + fVar46;
      fVar51 = ((float)(int)uVar26 * 5.0 + 5.0 + (float)(int)uVar20 * 5.0) * 0.5;
      fVar45 = fVar47 * (fVar47 + fVar47);
      fVar54 = fVar44 * fVar46;
      fVar46 = fVar47 * fVar46;
      fVar50 = (float)iVar21 * 0.5 * 5.0 + -2.5;
      fVar49 = fVar44 * (fVar44 + fVar44);
      fVar55 = (1.0 - fVar45) - fVar49;
      fVar57 = fVar49 + fVar46;
      fVar46 = fVar49 - fVar46;
      fVar48 = ((fVar47 + fVar47) * fVar44 + fVar54) * 0.0;
      fVar45 = (1.0 - fVar49) - fVar45;
      fVar44 = (fVar47 * (fVar44 + fVar44) - fVar54) * 0.0;
      fVar47 = fVar44 + fVar55 * -5.0 + fVar57 * 0.0;
      fVar49 = fVar44 + fVar55 * 0.0 + fVar57 * -5.0;
      fVar44 = fVar48 + fVar46 * -5.0 + fVar45 * 0.0;
      fVar55 = (fVar51 + fVar47) - fVar50;
      fVar57 = (fVar51 + fVar49) - fVar50;
      fVar54 = ((float)(int)uVar36 * 5.0 + 5.0 + (float)(int)uVar24 * 5.0) * 0.5;
      fVar46 = fVar48 + fVar46 * 0.0 + fVar45 * -5.0;
      fVar48 = (fVar51 + fVar47 + fVar47) - fVar50;
      fVar49 = (fVar51 + fVar49 + fVar49) - fVar50;
      fVar45 = (fVar54 + fVar44) - fVar50;
      fVar47 = (fVar54 + fVar46) - fVar50;
      fVar44 = (fVar54 + fVar44 + fVar44) - fVar50;
      fVar46 = (fVar54 + fVar46 + fVar46) - fVar50;
      uVar20 = (int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0);
      uVar24 = (int)((float)(int)fVar57 / 5.0) - (uint)(fVar57 < 0.0);
      uVar26 = (int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0);
      uVar36 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      uVar31 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
      puVar28 = param_1 + 0x34;
      *puVar28 = uVar26 + iVar22;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      *(undefined1 *)(param_1 + 0x36) = 1;
      param_1[0x24] = uVar20;
      param_1[0x25] = uVar36;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      *(undefined1 *)(param_1 + 0x42) = 1;
      param_1[0x18] = uVar24;
      param_1[0x19] = uVar31;
      uVar4 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
      param_1[0x1c] = uVar24 + iVar22;
      param_1[0x1d] = uVar31 + iVar22;
      param_1[0x30] = uVar26;
      param_1[0x31] = uVar4;
      param_1[0x35] = uVar4 + iVar22;
      param_1[0x28] = uVar20 + iVar22;
      param_1[0x29] = uVar36 + iVar22;
      uVar20 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
      uVar24 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
      param_1[0x3c] = uVar20;
      param_1[0x3d] = uVar24;
      puVar38 = param_1 + 0x40;
      *puVar38 = uVar20 + iVar22;
      param_1[0x41] = uVar24 + iVar22;
      if (bVar14) {
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        puVar28[0] = 0;
        puVar28[1] = 0;
        *(undefined1 *)(param_1 + 0x36) = 0;
        puVar38[0] = 0;
        puVar38[1] = 0;
        *(undefined1 *)(param_1 + 0x42) = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        *(undefined1 *)(param_1 + 0x4e) = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
      }
      else {
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        *(undefined1 *)(param_1 + 0x4e) = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        lVar40 = *(long *)PTR_DAT_04bb2720;
        *(undefined1 *)(param_1 + 0x5a) = 0;
        local_f8 = (uint *)((ulong)local_f8 & 0xffffffff00000000);
        if (lVar40 == 0) {
          puVar41 = &DAT_055c04a0;
        }
        else {
          puVar41 = &DAT_055c04a0;
          if (*(long *)(lVar40 + 0x330) != 0) {
            puVar41 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
            iVar21 = FUN_006bd550(*puVar41,0);
            puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar21 != 0x758f7eaf) {
              puVar41 = &DAT_055c04a0;
            }
          }
        }
        local_f8 = (uint *)CONCAT44(*(undefined4 *)(puVar41 + 7),(undefined4)local_f8);
        uVar19 = FUN_017baf44();
        local_138 = param_1 + 10;
        local_130 = param_1 + 0xe;
        local_100 = PTR_DAT_04bb3140 + 0x10;
        local_f0 = CONCAT71(local_f0._1_7_,uVar19) & 0xffffffffffffff01;
        uVar20 = param_1[0xc];
        local_120 = *(uint **)(param_1 + 0xc);
        local_160 = *(uint *)PTR_DAT_04bb3238;
        local_128 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = *(uint *)PTR_DAT_04bb37e0;
        local_b4 = *(uint *)(PTR_DAT_04bb37e0 + 4);
        uVar24 = param_1[0x11];
        if (uVar24 + 1 != param_1[0xd]) {
          uVar26 = local_160;
          do {
            puVar28 = (uint *)FUN_01a5190c(&local_100,0,&local_128,0);
            local_c0 = *puVar28;
            local_bc = puVar28[1];
            puVar28 = (uint *)FUN_014fbd50(&local_100,0,&local_128);
            uVar36 = *puVar28;
            lVar40 = *(long *)puVar35;
            uVar31 = FUN_0277d6c4(&local_c0);
            lVar37 = *(long *)puVar35;
            if (lVar37 == 0) goto LAB_01543000;
            lVar40 = *(long *)(lVar40 + 0x57e58);
            uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
            if ((*(uint *)(lVar40 + 0x1d8) <= uVar31) ||
               (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar31 * 8) == 0))
            goto LAB_01543000;
            local_c8 = 0;
            local_d0 = local_c0;
            uStack_cc = local_bc;
            local_d8 = puVar12 + 0x10;
            uVar31 = FUN_0277d6c4(&local_d0);
            if (*(long *)puVar35 != 0) {
              lVar40 = *(long *)(lVar37 + 0x57e58);
              uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
              if ((uVar31 < *(uint *)(lVar40 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar31 * 8) != 0)) {
                lVar40 = *(long *)PTR_DAT_04bc0428;
                uVar31 = FUN_0277d6c4(&local_c0);
                uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
                if (uVar31 < *(uint *)(lVar40 + 0x1d8)) {
                  lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar31 * 8);
                  if (lVar40 != 0) {
                    local_c8 = lVar40;
                  }
                }
              }
            }
            local_ac = FUN_01ae7550(&local_d8);
            if ((5 < local_ac - 1U) || (uVar36 == 0)) goto LAB_01543000;
            if ((short)local_b8 == -2) {
              local_b8 = local_c0;
              local_b4 = local_bc;
              local_160 = uVar36;
            }
            else {
              uVar43 = FUN_0277d7b4(&local_b8,&local_c0);
              if (((uVar43 & 1) == 0) || (uVar26 != uVar36)) goto LAB_01543000;
            }
            if ((int)local_120 < (int)local_130[2]) {
              uVar31 = (int)local_120 + 1;
              uVar4 = local_120._4_4_;
            }
            else {
              uVar31 = local_138[2];
              uVar4 = local_120._4_4_ + 1;
              local_120 = (uint *)((ulong)uVar4 << 0x20);
            }
            local_120 = (uint *)CONCAT44(local_120._4_4_,uVar31);
            uVar26 = uVar36;
          } while ((uVar20 != uVar31) || (uVar24 + 1 != uVar4));
        }
        puVar35 = PTR_DAT_04bb27c0;
        uVar43 = (ulong)((float)(param_1[5] + 0x10000000 >> 0x1d) * 45.0 * 11930465.0);
        pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar43 >> 0x18 & 0xff) * 0x10);
        fVar44 = (float)((uint)uVar43 & 0xffffff) * 5.9604645e-08;
        lVar40 = *(long *)PTR_DAT_04bb27c0;
        fVar46 = (fVar51 + DAT_05215878 * (*pfVar3 + fVar44 * pfVar3[1])) - fVar50;
        fVar50 = (fVar54 + DAT_05215878 * (pfVar3[2] + fVar44 * pfVar3[3])) - fVar50;
        if (lVar40 != 0) {
          if ((((local_160 == 0) ||
               (plVar42 = *(long **)(*(long *)(*(long *)(lVar40 + 0x1c0) + 8) +
                                    (ulong)(local_160 >> 0x14) * 8), plVar42 == (long *)0x0)) ||
              ((*(uint *)(plVar42 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar42 + 0x46) != local_160)) {
            plVar42 = (long *)0x0;
          }
          if ((*(int *)(lVar40 + 0x288) == 1) || (*(int *)(lVar40 + 0x288) == -1)) {
            plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar40 = *(long *)puVar35;
            iVar21 = (**(code **)(*plVar27 + 0x60))();
            if (iVar21 < 0x11) {
              uVar20 = 1;
            }
            else {
              if (4 < *(uint *)(lVar40 + 0x5e8)) goto LAB_01543428;
              uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar40 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01543428:
            uVar20 = 0;
          }
          if (plVar42 != (long *)0x0) {
            lVar40 = plVar42[0x2a];
            uVar24 = *(uint *)(plVar42 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar21 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar26 = (**(code **)(*plVar42 + 0x20))(plVar42,PTR_DAT_04bb5920);
            if ((((int)lVar40 == 1) && ((uVar20 & uVar26) != 0)) && ((uVar24 >> 4 & 1) != 0)) {
              local_118 = (uint *)0x0;
              local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
              local_138 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
              local_128 = (undefined *)0x0;
              uVar26 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
              uVar36 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
              uVar20 = uVar26 + iVar22;
              uVar24 = uVar36 + iVar22;
              local_120 = local_130;
              FUN_01470a84(plVar42,&local_138);
              if ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118) &&
                  (int)local_128._4_4_ <= (int)uVar36) && uVar24 == local_118._4_4_ ||
                  ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118) &&
                   (int)local_128._4_4_ <= (int)uVar36) && (int)(uVar24 - local_118._4_4_) < 0) !=
                  ((((int)(uint)local_128 <= (int)uVar26 && (int)uVar20 <= (int)(uint)local_118) &&
                   (int)local_128._4_4_ <= (int)uVar36) && SBORROW4(uVar24,local_118._4_4_))) {
                param_1[0x48] = uVar26;
                param_1[0x49] = uVar36;
                param_1[0x4c] = uVar20;
                param_1[0x4d] = uVar24;
                *(undefined1 *)(param_1 + 0x4e) = 1;
              }
            }
          }
        }
      }
LAB_01543000:
      *(undefined1 *)(param_1 + 0x6a) = 0;
    }
    FUN_01543d80(param_1,1);
LAB_015437f8:
    if (param_1[0x5c] == 9) {
      return;
    }
    if ((char)param_1[0x6a] == '\0') {
      FUN_01543d80(param_1,0);
      return;
    }
    FUN_015459a0(param_1,0);
    return;
  }
  uVar20 = param_1[5] + 0x10000000 >> 0x1d;
  local_138 = (uint *)CONCAT44(local_138._4_4_,uVar20);
  if ((uVar20 & 1) != 0) {
    if (((DAT_05215890 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_05215890), iVar21 != 0)) {
      DAT_05215888 = 0x41624630;
      __cxa_guard_release(&DAT_05215890);
    }
    uVar20 = (uint)(long)((float)(param_1[5] + 0x10000000 >> 0x1d) * 45.0 * 11930465.0);
    FUN_01543c10(0,param_1,param_1 + 8);
    uVar13 = DAT_05215888;
    *(undefined1 *)(param_1 + 0x12) = 1;
    FUN_01543c10(uVar13,param_1,param_1 + 0x14);
    puVar32 = PTR_DAT_04bb2d00;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    pfVar3 = (float *)(puVar32 + (ulong)(uVar20 + 0xe0000000 >> 0x19) * 0x10);
    fVar44 = (float)(uVar20 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar45 = *pfVar3 + fVar44 * pfVar3[1];
    fVar46 = pfVar3[2];
    fVar47 = pfVar3[3];
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)(param_1 + 0x42) = 1;
    *(undefined1 *)(param_1 + 0x36) = 1;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    *(undefined1 *)(param_1 + 0x6a) = 0;
    fVar46 = fVar46 + fVar44 * fVar47;
    fVar48 = fVar45 * 0.0;
    fVar46 = fVar46 + fVar46;
    fVar51 = fVar45 * (fVar45 + fVar45);
    fVar54 = fVar48 * fVar46;
    fVar46 = fVar45 * fVar46;
    fVar49 = fVar48 * (fVar48 + fVar48);
    fVar50 = (1.0 - fVar51) - fVar49;
    fVar57 = fVar49 + fVar46;
    fVar46 = fVar49 - fVar46;
    fVar47 = ((float)(int)param_1[0x18] * 5.0 + (float)(int)param_1[0x1c] * 5.0 + 5.0) * 0.5;
    fVar44 = ((float)(int)param_1[0x19] * 5.0 + (float)(int)param_1[0x1d] * 5.0 + 5.0) * 0.5;
    fVar51 = (1.0 - fVar49) - fVar51;
    fVar49 = (fVar45 * (fVar48 + fVar48) - fVar54) * 0.0;
    fVar45 = ((fVar45 + fVar45) * fVar48 + fVar54) * 0.0;
    fVar59 = fVar49 + fVar50 * 0.0 + fVar57 * -5.0;
    fVar54 = fVar49 + fVar50 * -5.0 + fVar57 * 0.0;
    fVar48 = fVar45 + fVar46 * 0.0 + fVar51 * -5.0;
    fVar49 = fVar45 + fVar46 * -5.0 + fVar51 * 0.0;
    fVar45 = fVar47 + fVar59 + -2.5;
    fVar57 = fVar47 + fVar54 + -2.5;
    fVar51 = fVar44 + fVar48 + -2.5;
    fVar55 = fVar44 + fVar49 + -2.5;
    fVar50 = fVar47 + fVar59 + fVar59 + -2.5;
    fVar46 = fVar47 + fVar54 + fVar54 + -2.5;
    fVar47 = fVar44 + fVar48 + fVar48 + -2.5;
    fVar44 = fVar44 + fVar49 + fVar49 + -2.5;
    uVar20 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
    uVar24 = (int)((float)(int)fVar57 / 5.0) - (uint)(fVar57 < 0.0);
    uVar26 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
    param_1[0x24] = uVar20;
    param_1[0x25] = uVar26;
    uVar36 = (int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0);
    param_1[0x28] = uVar20 + 1;
    param_1[0x29] = uVar26 + 1;
    param_1[0x30] = uVar24;
    param_1[0x31] = uVar36;
    param_1[0x34] = uVar24 + 1;
    param_1[0x35] = uVar36 + 1;
    uVar20 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
    param_1[0x40] = uVar20 + 1;
    uVar24 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
    param_1[0x3c] = uVar20;
    param_1[0x3d] = uVar24;
    param_1[0x41] = uVar24 + 1;
    uVar20 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
    param_1[0x48] = uVar20;
    param_1[0x4c] = uVar20 + 1;
    uVar20 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
    param_1[0x49] = uVar20;
    param_1[0x4d] = uVar20 + 1;
LAB_015409c4:
    lVar40 = *(long *)PTR_DAT_04bb2720;
    if (lVar40 == 0) {
      puVar41 = &DAT_055c04a0;
    }
    else {
      puVar41 = &DAT_055c04a0;
      if (*(long *)(lVar40 + 0x330) != 0) {
        puVar41 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
        iVar21 = FUN_006bd550(*puVar41,0);
        puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar21 != 0x758f7eaf) {
          puVar41 = &DAT_055c04a0;
        }
      }
    }
    FUN_017baf44(*(undefined4 *)(puVar41 + 7));
    local_d0 = *param_1;
    uStack_cc = param_1[1];
    lVar40 = *(long *)puVar35;
    local_d8 = puVar12 + 0x10;
    local_c8 = 0;
    uVar20 = FUN_0277d6c4(&local_d0);
    if (*(long *)puVar35 != 0) {
      lVar40 = *(long *)(lVar40 + 0x57e58);
      uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
      if ((uVar20 < *(uint *)(lVar40 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
        lVar40 = *(long *)PTR_DAT_04bc0428;
        uVar20 = FUN_0277d6c4(param_1);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
        if (uVar20 < *(uint *)(lVar40 + 0x1d8)) {
          lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar20 * 8);
          if (lVar40 != 0) {
            local_c8 = lVar40;
          }
        }
      }
    }
    uVar20 = param_1[5] + 0xa0000000 >> 0x1e;
    uVar43 = (ulong)((float)(param_1[5] + 0x10000000 >> 0x1d) * 45.0 * 11930465.0);
    pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar43 >> 0x18 & 0xff) * 0x10);
    fVar44 = (float)((uint)uVar43 & 0xffffff) * 5.9604645e-08;
    fVar46 = (*pfVar3 + fVar44 * pfVar3[1]) * 7.071068;
    fVar44 = (pfVar3[2] + fVar44 * pfVar3[3]) * 7.071068;
    local_f0 = 0;
    local_100 = PTR_DAT_04bbc1a0 + 0x10;
    puVar28 = (uint *)(PTR_DAT_04bb2010 + 0x10);
    local_e0 = 0;
    local_f8 = puVar28;
    local_e8 = puVar28;
    FUN_01afb7fc(&local_d8,&local_100,uVar20);
    puVar35 = PTR_DAT_04bb32e0;
    fVar45 = 0.0;
    fVar47 = 0.0;
    uVar24 = param_1[5] + 0x10000000 >> 0x1d;
    uVar26 = uVar24 - 1;
    if ((uVar26 < 7) && ((0x55U >> (ulong)(uVar26 & 0x1f) & 1) != 0)) {
      uVar43 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar26 << 2;
      fVar45 = *(float *)(&DAT_04175b00 + uVar43) * (float)(((int)local_e0 - (int)local_f0) + 1) *
               5.0;
      fVar47 = *(float *)(&DAT_04175b1c + uVar43) * (float)((local_e0._4_4_ - local_f0._4_4_) + 1) *
               5.0;
    }
    bVar30 = false;
    local_138._0_4_ = uVar24;
    bVar14 = true;
    do {
      if (bVar30) {
        uVar20 = param_1[5] + 0x60000000 >> 0x1e;
        FUN_01afb7fc(&local_d8,&local_100,uVar20);
        local_138._0_4_ = param_1[5] + 0x10000000 >> 0x1d;
        uVar24 = (uint)local_138 - 1;
        if ((uVar24 < 7) && ((0x55U >> (ulong)(uVar24 & 0x1f) & 1) != 0)) {
          uVar43 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2;
          fVar45 = *(float *)(&DAT_04175b00 + uVar43) * (float)(((int)local_e0 - (int)local_f0) + 1)
                   * 5.0;
          fVar47 = *(float *)(&DAT_04175b1c + uVar43) *
                   (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 5.0;
        }
      }
      uVar24 = 0;
      iVar21 = 0;
      do {
        lVar40 = (long)iVar21;
        if ((char)param_1[lVar40 * 0xc + 0x12] != '\0') {
          local_102 = 0;
          local_104 = 0;
          local_138._0_4_ = *param_1;
          local_138._4_4_ = param_1[1];
          fVar48 = -0.0;
          if (uVar24 != 0) {
            fVar48 = fVar45 - fVar46;
          }
          fVar49 = -0.0;
          if (uVar24 != 0) {
            fVar49 = fVar47 - fVar44;
          }
          fVar50 = (fVar48 + fVar46 * 0.0 +
                             ((float)(int)param_1[lVar40 * 0xc + 0xc] * 5.0 +
                             (float)(int)param_1[lVar40 * 0xc + 0x10] * 5.0 + 5.0) * 0.5) -
                   ((float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0 + -2.5);
          fVar51 = (fVar49 + fVar44 * 0.0 +
                             ((float)(int)param_1[lVar40 * 0xc + 0xd] * 5.0 +
                             (float)(int)param_1[lVar40 * 0xc + 0x11] * 5.0 + 5.0) * 0.5) -
                   ((float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
          local_110 = (int)((float)(int)(float)param_1[2] / 5.0) - (uint)((float)param_1[2] < 0.0);
          iStack_10c = (int)((float)(int)(float)param_1[4] / 5.0) - (uint)((float)param_1[4] < 0.0);
          local_120 = (uint *)CONCAT44(7,uVar20);
          local_128 = (undefined *)
                      CONCAT44((int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0),
                               (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0));
          local_108 = param_1[5] + 0x20000000 >> 0x1e;
          lVar37 = *(long *)PTR_DAT_04bb39b0;
          pbVar33 = puVar35;
          if (lVar37 == 0) {
            if (7 < (byte)*puVar35) goto LAB_0154107c;
LAB_015410f4:
            local_103 = *pbVar33;
            if (7 < local_103) {
              local_103 = 0xff;
            }
          }
          else {
            if (*(int *)(lVar37 + 0x15c) != 0) {
              pbVar33 = (byte *)(lVar37 + 0x158);
            }
            if ((*pbVar33 < 8) ||
               (((*(int *)(lVar37 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
            goto LAB_015410f4;
LAB_0154107c:
            pbVar33 = PTR_DAT_04bb5038;
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_015410f4;
            lVar37 = **(long **)PTR_DAT_04bb27d0;
            bVar7 = *(byte *)(lVar37 + 0x473);
            pbVar34 = PTR_DAT_04bb5038;
            if ((long)(char)bVar7 != 0xffffffffffffffff) {
              puVar38 = (uint *)(lVar37 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
              if (7 < bVar7) {
                puVar38 = (uint *)(lVar37 + 0x48);
              }
              if ((*puVar38 & 8) != 0) {
                pbVar34 = (byte *)(lVar37 + 0x471);
              }
            }
            local_103 = *pbVar34;
            if (7 < local_103) goto LAB_015410f4;
          }
          if (7 < local_103) {
            local_103 = 0xff;
          }
          local_130 = puVar28;
          local_118 = puVar28;
          iVar22 = FUN_0148e51c(param_1 + 0x5e,&local_138);
          if (iVar22 == 9) goto LAB_01542300;
          if ((char)param_1[lVar40 * 0xc + 0x12] != '\0') {
            uVar26 = param_1[lVar40 * 0xc + 0xc] - param_1[0x18];
            uVar36 = -uVar26;
            if (-1 < (int)uVar26) {
              uVar36 = uVar26;
            }
            if (1 < uVar36) {
              if ((int)uVar26 < 0) {
                uVar26 = uVar26 + 1;
              }
              uVar26 = (int)uVar26 >> 1;
            }
            uVar36 = param_1[lVar40 * 0xc + 0xd] - param_1[0x19];
            uVar31 = -uVar36;
            if (-1 < (int)uVar36) {
              uVar31 = uVar36;
            }
            if (1 < uVar31) {
              if ((int)uVar36 < 0) {
                uVar36 = uVar36 + 1;
              }
              uVar36 = (int)uVar36 >> 1;
            }
            fVar48 = (fVar48 + fVar46 + ((float)(int)param_1[lVar40 * 0xc + 0xc] * 5.0 +
                                        (float)(int)param_1[lVar40 * 0xc + 0x10] * 5.0 + 5.0) * 0.5)
                     - ((float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0 + -2.5);
            local_138._0_4_ = *param_1;
            local_138._4_4_ = param_1[1];
            local_102 = 0;
            local_104 = 0;
            fVar49 = (fVar49 + fVar44 + ((float)(int)param_1[lVar40 * 0xc + 0xd] * 5.0 +
                                        (float)(int)param_1[lVar40 * 0xc + 0x11] * 5.0 + 5.0) * 0.5)
                     - ((float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
            local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
            if (4 < uVar24) {
              uVar36 = 0;
              uVar26 = 0;
            }
            local_110 = (int)((float)(int)(float)param_1[2] / 5.0) - (uint)((float)param_1[2] < 0.0)
            ;
            iStack_10c = (int)((float)(int)(float)param_1[4] / 5.0) -
                         (uint)((float)param_1[4] < 0.0);
            local_120 = (uint *)CONCAT44(7,uVar20);
            local_108 = param_1[5] + 0x20000000 >> 0x1e;
            local_128 = (undefined *)
                        CONCAT44((uVar36 - (fVar49 < 0.0)) + (int)((float)(int)fVar49 / 5.0),
                                 (uVar26 - (fVar48 < 0.0)) + (int)((float)(int)fVar48 / 5.0));
            lVar40 = *(long *)PTR_DAT_04bb39b0;
            pbVar33 = puVar35;
            if (lVar40 == 0) {
              if (7 < (byte)*puVar35) goto LAB_01541348;
LAB_01540e60:
              local_103 = *pbVar33;
              if (7 < local_103) {
                local_103 = 0xff;
              }
            }
            else {
              if (*(int *)(lVar40 + 0x15c) != 0) {
                pbVar33 = (byte *)(lVar40 + 0x158);
              }
              if ((*pbVar33 < 8) ||
                 (((*(int *)(lVar40 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
              goto LAB_01540e60;
LAB_01541348:
              pbVar33 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01540e60;
              lVar40 = **(long **)PTR_DAT_04bb27d0;
              bVar7 = *(byte *)(lVar40 + 0x473);
              pbVar34 = PTR_DAT_04bb5038;
              if ((long)(char)bVar7 != 0xffffffffffffffff) {
                puVar38 = (uint *)(lVar40 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
                if (7 < bVar7) {
                  puVar38 = (uint *)(lVar40 + 0x48);
                }
                if ((*puVar38 & 8) != 0) {
                  pbVar34 = (byte *)(lVar40 + 0x471);
                }
              }
              local_103 = *pbVar34;
              if (7 < local_103) goto LAB_01540e60;
            }
            if (7 < local_103) {
              local_103 = 0xff;
            }
            local_118 = local_130;
            iVar22 = FUN_0148e51c(param_1 + 0x5e,&local_138);
            if (iVar22 == 9) goto LAB_01542300;
          }
        }
        uVar24 = uVar24 + 1;
        iVar21 = iVar21 + 1;
      } while (uVar24 != 7);
      bVar30 = true;
      bVar1 = !bVar14;
      bVar14 = false;
      if (bVar1) {
        return;
      }
    } while( true );
  }
  *(undefined1 *)(param_1 + 0x6a) = 1;
  uVar43 = (ulong)((float)uVar20 * 45.0 * 11930465.0);
  FUN_01543c10(0,param_1);
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_01543c10(0x41200000,param_1,param_1 + 0x14);
  puVar32 = PTR_DAT_04bb2d00;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  pfVar3 = (float *)(puVar32 + (uVar43 >> 0x19 & 0x7f) * 0x10);
  fVar44 = (float)((uint)uVar43 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar45 = *pfVar3 + fVar44 * pfVar3[1];
  fVar46 = pfVar3[2];
  fVar47 = pfVar3[3];
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  fVar46 = fVar46 + fVar44 * fVar47;
  fVar44 = fVar45 * 0.0;
  fVar46 = fVar46 + fVar46;
  fVar51 = fVar45 * (fVar45 + fVar45);
  fVar48 = fVar44 * (fVar44 + fVar44);
  fVar47 = fVar44 * fVar46;
  fVar46 = fVar45 * fVar46;
  fVar54 = (1.0 - fVar51) - fVar48;
  fVar51 = (1.0 - fVar48) - fVar51;
  fVar50 = fVar48 + fVar46;
  fVar48 = fVar48 - fVar46;
  fVar57 = (fVar45 * (fVar44 + fVar44) - fVar47) * 0.0;
  fVar46 = ((fVar45 + fVar45) * fVar44 + fVar47) * 0.0;
  fVar44 = ((float)(int)param_1[0x18] * 5.0 + (float)(int)param_1[0x1c] * 5.0 + 5.0) * 0.5;
  fVar47 = fVar57 + fVar54 * 5.0 + fVar50 * 0.0;
  fVar49 = fVar46 + fVar48 * 5.0 + fVar51 * 0.0;
  fVar51 = fVar46 + fVar48 * -5.0 + fVar51 * 0.0;
  fVar48 = fVar57 + fVar54 * -5.0 + fVar50 * 0.0;
  fVar45 = ((float)(int)param_1[0x19] * 5.0 + (float)(int)param_1[0x1d] * 5.0 + 5.0) * 0.5;
  fVar46 = fVar44 + fVar47 + -2.5;
  fVar57 = fVar44 + fVar48 + -2.5;
  fVar50 = fVar45 + fVar49 + -2.5;
  fVar54 = fVar45 + fVar51 + -2.5;
  fVar47 = fVar44 + fVar47 + fVar47 + -2.5;
  fVar44 = fVar44 + fVar48 + fVar48 + -2.5;
  fVar48 = fVar45 + fVar49 + fVar49 + -2.5;
  fVar45 = fVar45 + fVar51 + fVar51 + -2.5;
  uVar20 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
  uVar24 = (int)((float)(int)fVar57 / 5.0) - (uint)(fVar57 < 0.0);
  uVar26 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
  param_1[0x24] = uVar20;
  param_1[0x25] = uVar26;
  uVar36 = (int)((float)(int)fVar54 / 5.0) - (uint)(fVar54 < 0.0);
  param_1[0x28] = uVar20 + 1;
  param_1[0x29] = uVar26 + 1;
  param_1[0x30] = uVar24;
  param_1[0x31] = uVar36;
  param_1[0x34] = uVar24 + 1;
  param_1[0x35] = uVar36 + 1;
  uVar20 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
  param_1[0x40] = uVar20 + 1;
  uVar24 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
  param_1[0x3c] = uVar20;
  param_1[0x3d] = uVar24;
  param_1[0x41] = uVar24 + 1;
  uVar20 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
  param_1[0x48] = uVar20;
  uVar24 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
  param_1[0x49] = uVar24;
  param_1[0x4c] = uVar20 + 1;
  param_1[0x4d] = uVar24 + 1;
  if ((char)param_1[0x6a] == '\0') goto LAB_015409c4;
  lVar40 = *(long *)PTR_DAT_04bb2720;
  if (lVar40 == 0) {
    puVar41 = &DAT_055c04a0;
  }
  else {
    puVar41 = &DAT_055c04a0;
    if (*(long *)(lVar40 + 0x330) != 0) {
      puVar41 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
      iVar21 = FUN_006bd550(*puVar41,0);
      puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar21 != 0x758f7eaf) {
        puVar41 = &DAT_055c04a0;
      }
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar41 + 7));
  lVar40 = *(long *)puVar35;
  local_c8 = 0;
  uVar20 = param_1[5] + 0xa0000000 >> 0x1e;
  uVar43 = (ulong)((float)(param_1[5] + 0x10000000 >> 0x1d) * 45.0 * 11930465.0);
  pfVar3 = (float *)(puVar32 + (uVar43 >> 0x18 & 0xff) * 0x10);
  fVar44 = (float)((uint)uVar43 & 0xffffff) * 5.9604645e-08;
  fVar46 = *pfVar3;
  fVar47 = pfVar3[1];
  fVar45 = pfVar3[2];
  fVar48 = pfVar3[3];
  local_d8 = puVar12 + 0x10;
  local_d0 = *param_1;
  uStack_cc = param_1[1];
  uVar24 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar35 != 0) {
    lVar40 = *(long *)(lVar40 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar40 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar40 = *(long *)PTR_DAT_04bc0428;
      uVar24 = FUN_0277d6c4(param_1);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
      if (uVar24 < *(uint *)(lVar40 + 0x1d8)) {
        lVar40 = *(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar24 * 8);
        if (lVar40 != 0) {
          local_c8 = lVar40;
        }
      }
    }
  }
  fVar47 = (fVar46 + fVar44 * fVar47) * 5.0;
  fVar46 = (fVar45 + fVar44 * fVar48) * 5.0;
  local_f0 = 0;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  puVar28 = (uint *)(PTR_DAT_04bb2010 + 0x10);
  local_e0 = 0;
  local_f8 = puVar28;
  local_e8 = puVar28;
  FUN_01afb7fc(&local_d8,&local_100,uVar20);
  puVar35 = PTR_DAT_04bb32e0;
  fVar45 = 0.0;
  fVar44 = 0.0;
  uVar24 = param_1[5] + 0x20000000 >> 0x1e;
  switch(uVar24) {
  case 0:
    fVar44 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5;
    goto LAB_01541c78;
  case 1:
    fVar45 = (float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0;
    break;
  case 2:
    fVar44 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * -0.5;
LAB_01541c78:
    fVar44 = fVar44 * 5.0;
    break;
  case 3:
    fVar45 = (float)(((int)local_e0 - (int)local_f0) + 1) * -0.5 * 5.0;
  }
  bVar30 = false;
  local_138._0_4_ = uVar24;
  bVar14 = true;
  do {
    if (!bVar30) goto switchD_01541d2c_default;
    uVar20 = param_1[5] + 0x60000000 >> 0x1e;
    FUN_01afb7fc(&local_d8,&local_100,uVar20);
    local_138._0_4_ = param_1[5] + 0x20000000 >> 0x1e;
    switch((uint)local_138) {
    case 0:
      fVar44 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5;
      break;
    case 1:
      fVar45 = (float)(((int)local_e0 - (int)local_f0) + 1) * 0.5;
      goto LAB_01541db0;
    case 2:
      fVar44 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * -0.5;
      break;
    case 3:
      fVar45 = (float)(((int)local_e0 - (int)local_f0) + 1) * -0.5;
LAB_01541db0:
      fVar45 = fVar45 * 5.0;
      fVar44 = 0.0;
    default:
      goto switchD_01541d2c_default;
    }
    fVar44 = fVar44 * 5.0;
    fVar45 = 0.0;
switchD_01541d2c_default:
    iVar22 = 0;
    iVar21 = 0;
    do {
      if ((char)param_1[(long)iVar21 * 0xc + 0x12] != '\0') {
        fVar48 = -0.0;
        if (iVar22 != 0) {
          fVar48 = fVar45 - fVar47;
        }
        fVar49 = -0.0;
        if (iVar22 != 0) {
          fVar49 = fVar44 - fVar46;
        }
        local_138._0_4_ = *param_1;
        local_138._4_4_ = param_1[1];
        local_102 = 0;
        local_104 = 0;
        lVar40 = (long)iVar21;
        fVar50 = (fVar48 + fVar47 * 0.0 +
                           ((float)(int)param_1[lVar40 * 0xc + 0xc] * 5.0 +
                           (float)(int)param_1[lVar40 * 0xc + 0x10] * 5.0 + 5.0) * 0.5) -
                 ((float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0 + -2.5);
        fVar51 = (fVar49 + fVar46 * 0.0 +
                           ((float)(int)param_1[lVar40 * 0xc + 0xd] * 5.0 +
                           (float)(int)param_1[lVar40 * 0xc + 0x11] * 5.0 + 5.0) * 0.5) -
                 ((float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
        local_110 = (int)((float)(int)(float)param_1[2] / 5.0) - (uint)((float)param_1[2] < 0.0);
        iStack_10c = (int)((float)(int)(float)param_1[4] / 5.0) - (uint)((float)param_1[4] < 0.0);
        local_120 = (uint *)CONCAT44(7,uVar20);
        local_128 = (undefined *)
                    CONCAT44((int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0),
                             (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0));
        local_108 = param_1[5] + 0x20000000 >> 0x1e;
        lVar37 = *(long *)PTR_DAT_04bb39b0;
        pbVar33 = puVar35;
        if (lVar37 == 0) {
          if (7 < (byte)*puVar35) goto LAB_01542008;
LAB_01542080:
          local_103 = *pbVar33;
          if (7 < local_103) {
            local_103 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar37 + 0x15c) != 0) {
            pbVar33 = (byte *)(lVar37 + 0x158);
          }
          if ((*pbVar33 < 8) ||
             (((*(int *)(lVar37 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
          goto LAB_01542080;
LAB_01542008:
          pbVar33 = PTR_DAT_04bb5038;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01542080;
          lVar37 = **(long **)PTR_DAT_04bb27d0;
          bVar7 = *(byte *)(lVar37 + 0x473);
          pbVar34 = PTR_DAT_04bb5038;
          if ((long)(char)bVar7 != 0xffffffffffffffff) {
            puVar38 = (uint *)(lVar37 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
            if (7 < bVar7) {
              puVar38 = (uint *)(lVar37 + 0x48);
            }
            if ((*puVar38 & 8) != 0) {
              pbVar34 = (byte *)(lVar37 + 0x471);
            }
          }
          local_103 = *pbVar34;
          if (7 < local_103) goto LAB_01542080;
        }
        if (7 < local_103) {
          local_103 = 0xff;
        }
        local_130 = puVar28;
        local_118 = puVar28;
        iVar25 = FUN_0148e51c(param_1 + 0x5e,&local_138);
        if (iVar25 == 9) {
LAB_01542300:
          param_1[0x5c] = 9;
          return;
        }
        if ((char)param_1[(long)iVar21 * 0xc + 0x12] != '\0') {
          fVar48 = (fVar48 + fVar47 + ((float)(int)param_1[lVar40 * 0xc + 0xc] * 5.0 +
                                      (float)(int)param_1[lVar40 * 0xc + 0x10] * 5.0 + 5.0) * 0.5) -
                   ((float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0 + -2.5);
          local_138._0_4_ = *param_1;
          local_138._4_4_ = param_1[1];
          local_102 = 0;
          local_104 = 0;
          fVar49 = (fVar49 + fVar46 + ((float)(int)param_1[lVar40 * 0xc + 0xd] * 5.0 +
                                      (float)(int)param_1[lVar40 * 0xc + 0x11] * 5.0 + 5.0) * 0.5) -
                   ((float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
          local_130 = (uint *)(PTR_DAT_04bb2010 + 0x10);
          local_110 = (int)((float)(int)(float)param_1[2] / 5.0) - (uint)((float)param_1[2] < 0.0);
          iStack_10c = (int)((float)(int)(float)param_1[4] / 5.0) - (uint)((float)param_1[4] < 0.0);
          local_120 = (uint *)CONCAT44(7,uVar20);
          local_128 = (undefined *)
                      CONCAT44((int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0),
                               (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0));
          local_108 = param_1[5] + 0x20000000 >> 0x1e;
          lVar40 = *(long *)PTR_DAT_04bb39b0;
          pbVar33 = puVar35;
          if (lVar40 == 0) {
            if (7 < (byte)*puVar35) goto LAB_01542278;
LAB_01541de0:
            local_103 = *pbVar33;
            if (7 < local_103) {
              local_103 = 0xff;
            }
          }
          else {
            if (*(int *)(lVar40 + 0x15c) != 0) {
              pbVar33 = (byte *)(lVar40 + 0x158);
            }
            if ((*pbVar33 < 8) ||
               (((*(int *)(lVar40 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
            goto LAB_01541de0;
LAB_01542278:
            pbVar33 = PTR_DAT_04bb5038;
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01541de0;
            lVar40 = **(long **)PTR_DAT_04bb27d0;
            bVar7 = *(byte *)(lVar40 + 0x473);
            pbVar34 = PTR_DAT_04bb5038;
            if ((long)(char)bVar7 != 0xffffffffffffffff) {
              puVar38 = (uint *)(lVar40 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
              if (7 < bVar7) {
                puVar38 = (uint *)(lVar40 + 0x48);
              }
              if ((*puVar38 & 8) != 0) {
                pbVar34 = (byte *)(lVar40 + 0x471);
              }
            }
            local_103 = *pbVar34;
            if (7 < local_103) goto LAB_01541de0;
          }
          if (7 < local_103) {
            local_103 = 0xff;
          }
          local_118 = local_130;
          iVar25 = FUN_0148e51c(param_1 + 0x5e,&local_138);
          if (iVar25 == 9) goto LAB_01542300;
        }
      }
      iVar22 = iVar22 + -1;
      iVar21 = iVar21 + 1;
    } while (iVar22 != -7);
    bVar30 = true;
    bVar1 = !bVar14;
    bVar14 = false;
    if (bVar1) {
      return;
    }
  } while( true );
}

