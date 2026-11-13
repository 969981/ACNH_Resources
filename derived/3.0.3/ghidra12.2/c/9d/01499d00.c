
void FUN_01499d00(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined1 *puVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint local_16c;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  int local_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  long local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  int local_f0;
  int local_ec;
  int local_e4;
  undefined *local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  byte local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  
  FUN_015001e0(param_3);
  uVar11 = (ulong)param_2;
  if (uVar11 != 0) {
    local_b8 = 0;
    local_c8 = PTR_DAT_04bbc1a0 + 0x10;
    local_c0 = PTR_DAT_04bb2010 + 0x10;
    local_a8 = 0;
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,param_2);
    local_b0 = local_c0;
    if ((1 < (int)param_2) && ((int)param_2 < 0x39)) {
      local_148 = (undefined *)CONCAT44(local_148._4_4_,param_2);
      uVar21 = param_2;
      if (0x38 < param_2) {
        uVar21 = 0;
      }
      FUN_017ba710((&DAT_041771a4)[(int)uVar21],&local_c8);
    }
  }
  FUN_01a4fa00(param_3);
  FUN_01a4fa00(param_3);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,2);
  puVar18 = local_c8;
  local_148 = (undefined *)CONCAT44(local_148._4_4_,5);
  local_c8._0_4_ = 2;
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar5 = PTR_DAT_04bbfe68 + 0x10;
  puVar6 = PTR_DAT_04bbc1a0 + 0x10;
  puVar12 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + uVar11 * 4);
  if (0x38 < param_2) {
    puVar12 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  puVar7 = PTR_DAT_04bb5438 + 0x10;
  iVar28 = (int)local_c8;
  local_c8 = puVar18;
  do {
    local_e4 = iVar28;
    lVar23 = FUN_01a4fa00(param_3);
    iVar26 = *(int *)(lVar23 + 0x24) + 1;
    iVar32 = *(int *)(lVar23 + 0x14);
    if (iVar26 != iVar32) {
      iVar14 = *(int *)(lVar23 + 0x10);
      iVar33 = iVar14;
      do {
        local_f8 = puVar4;
        local_f0 = iVar33;
        local_ec = iVar32;
        FUN_01a50240(&local_100,param_3,local_e4,&local_f8);
        uVar24 = FUN_0277e294(&local_100);
        puVar18 = PTR_DAT_04bb43c0;
        if ((uVar24 & 1) != 0) {
          local_108 = 0;
          local_110 = local_100;
          uStack_10c = uStack_fc;
          lVar29 = *(long *)PTR_DAT_04bb43c0;
          local_118 = puVar3;
          uVar21 = FUN_0277d6c4(&local_110);
          if (*(long *)puVar18 != 0) {
            lVar29 = *(long *)(lVar29 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if ((uVar21 < *(uint *)(lVar29 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
              lVar29 = *(long *)PTR_DAT_04bc0428;
              uVar21 = FUN_0277d6c4(&local_100);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
              if (uVar21 < *(uint *)(lVar29 + 0x1d8)) {
                lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar21 * 8);
                if (lVar29 != 0) {
                  local_108 = lVar29;
                }
              }
            }
          }
          local_11c = FUN_01ae7550(&local_118);
          if (local_11c != 10) {
            if (local_11c == 0xc) {
              uVar21 = 2;
              bVar19 = true;
            }
            else if (local_11c == 0xb) {
              bVar19 = true;
              uVar21 = 1;
            }
            else {
              bVar19 = false;
              uVar21 = 0;
            }
            local_138 = 0;
            puStack_140 = PTR_DAT_04bb2010 + 0x10;
            local_128 = 0;
            local_148 = puVar6;
            local_130 = puStack_140;
            FUN_01afb480(&local_118,&local_148);
            uVar8 = (uint)local_138 + local_f0;
            iVar30 = local_138._4_4_ + local_ec;
            local_138 = CONCAT44(iVar30,uVar8);
            local_128._0_4_ = (int)local_128 + local_f0;
            local_128._4_4_ = local_128._4_4_ + local_ec;
            iVar1 = local_128._4_4_ + 1;
            uVar31 = uVar8;
            if (bVar19) {
              if (uVar21 < 2) {
                uVar21 = 1;
              }
              bVar19 = iVar1 != iVar30;
              local_16c = uVar8;
              if (uVar11 == 0) {
                if (bVar19) {
                  do {
                    uVar31 = 0;
                    do {
                      iVar15 = local_e4;
                      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
                      lVar29 = *(long *)PTR_DAT_04bb2720;
                      local_c8 = puVar5;
                      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x330) == 0)) {
                        puVar25 = &DAT_055c04a0;
                      }
                      else {
                        puVar25 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar29 + 0x338));
                        iVar22 = FUN_006bd550(*puVar25,0);
                        puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar22 != 0x758f7eaf) {
                          puVar25 = &DAT_055c04a0;
                        }
                      }
                      local_c0 = (undefined *)
                                 CONCAT44(*(undefined4 *)(puVar25 + 7),(undefined4)local_c0);
                      uVar20 = FUN_017baf44();
                      local_b8 = CONCAT71(local_b8._1_7_,uVar20) & 0xffffffffffffff01;
                      local_c8 = puVar7;
                      lVar29 = FUN_015001e0(&local_c8);
                      iVar22 = *(int *)(lVar29 + 0x20);
                      lVar29 = *(long *)PTR_DAT_04bb5ce0;
                      if (lVar29 == 0) {
                        fVar36 = 0.0;
                        fVar35 = 0.0;
                        fVar34 = 85.0;
                        fVar37 = 85.0;
                      }
                      else {
                        fVar35 = (float)*(int *)(lVar29 + 0xd88) * 5.0;
                        fVar36 = (float)*(int *)(lVar29 + 0xd8c) * 5.0;
                        fVar34 = (float)*(int *)(lVar29 + 0xd98) * 5.0 + 5.0;
                        fVar37 = (float)*(int *)(lVar29 + 0xd9c) * 5.0 + 5.0;
                      }
                      lVar29 = FUN_01a4fa00(&local_c8);
                      iVar16 = *(int *)(lVar29 + 0x14);
                      FUN_01a4fa00(&local_c8);
                      uVar2 = (iVar16 - iVar30) + 7;
                      if ((-1 < (int)uVar2) && (iVar15 - 2U < 4)) {
                        iVar16 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
                        iVar17 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
                        switch(iVar15) {
                        case 2:
                          uVar9 = uVar31 + iVar16;
                          uVar10 = local_16c;
                          break;
                        case 3:
                          uVar9 = iVar16 + ~local_16c + iVar17;
                          uVar10 = uVar31 + ((int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0))
                          ;
                          break;
                        case 4:
                          uVar9 = iVar17 + ~uVar31;
                          uVar10 = iVar22 - local_16c;
                          break;
                        case 5:
                          uVar10 = (~uVar31 - (uint)(fVar34 < 0.0)) +
                                   (int)((float)(int)fVar34 / 5.0);
                          uVar9 = local_16c;
                        }
                        if (((((int)uVar10 < 0x40) && (-1 < (int)(uVar10 | uVar2 | uVar9))) &&
                            (uVar2 < 8)) && ((int)uVar9 < 0x40)) {
                          lVar29 = param_1 + (ulong)uVar10 * 0x3000;
                          if (0x3f < uVar10) {
                            lVar29 = param_1;
                          }
                          lVar13 = lVar29 + (ulong)uVar9 * 0xc0;
                          if (0x3f < uVar9) {
                            lVar13 = lVar29;
                          }
                          puVar27 = (undefined1 *)(lVar13 + (ulong)uVar2 * 0x18);
                          *puVar27 = 1;
                          puVar27[1] = (char)local_e4;
                          *(int *)(puVar27 + 0x10) = local_f0;
                          *(int *)(puVar27 + 0x14) = local_ec;
                        }
                      }
                      uVar31 = uVar31 + 1;
                    } while (uVar21 != uVar31);
                    if ((int)local_16c < (int)local_128) {
                      local_16c = local_16c + 1;
                    }
                    else {
                      iVar30 = iVar30 + 1;
                      local_16c = (uint)local_138;
                    }
                  } while ((uVar8 != local_16c) || (iVar1 != iVar30));
                }
              }
              else {
                while (bVar19) {
                  do {
                    uVar31 = 0;
                    do {
                      iVar22 = local_e4;
                      local_e0 = PTR_DAT_04bbfe68 + 0x10;
                      uStack_d4 = *puVar12;
                      local_d8 = param_2;
                      local_d0 = FUN_017baf44();
                      local_d0 = local_d0 & 1;
                      local_e0 = PTR_DAT_04bb5438 + 0x10;
                      lVar29 = FUN_015001e0(&local_e0);
                      iVar15 = *(int *)(lVar29 + 0x20);
                      fVar35 = 0.0;
                      local_c8 = PTR_DAT_04bbc1a0 + 0x10;
                      local_c0 = PTR_DAT_04bb2010 + 0x10;
                      local_b8 = 0;
                      local_a8 = 0;
                      local_b0 = local_c0;
                      local_a0 = param_2;
                      if ((int)param_2 < 2) {
                        fVar37 = 5.0;
                        fVar36 = 5.0;
                        fVar34 = 0.0;
                      }
                      else {
                        fVar37 = 5.0;
                        fVar36 = 5.0;
                        fVar34 = 0.0;
                        if ((int)param_2 < 0x39) {
                          uVar2 = param_2;
                          if (0x38 < param_2) {
                            uVar2 = 0;
                          }
                          local_9c = param_2;
                          FUN_017ba710((&DAT_041771a4)[(int)uVar2],&local_c8);
                          fVar35 = (float)local_b8._4_4_ * 5.0;
                          fVar34 = (float)(int)local_b8 * 5.0;
                          fVar37 = (float)local_a8._4_4_ * 5.0 + 5.0;
                          fVar36 = (float)(int)local_a8 * 5.0 + 5.0;
                        }
                      }
                      lVar29 = FUN_01a4fa00(&local_e0);
                      iVar16 = *(int *)(lVar29 + 0x14);
                      FUN_01a4fa00(&local_e0);
                      uVar2 = (iVar16 - iVar30) + 7;
                      if (((int)uVar2 < 0) || (3 < iVar22 - 2U)) goto LAB_0149a0b0;
                      iVar16 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
                      switch(iVar22) {
                      case 2:
                        uVar10 = local_16c;
                        uVar9 = uVar31;
                        goto joined_r0x0149a28c;
                      case 3:
                        uVar10 = uVar31 + ((int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0));
                        uVar9 = iVar16 + ~local_16c;
joined_r0x0149a28c:
                        uVar9 = uVar9 + ((int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0));
                        break;
                      case 4:
                        uVar9 = iVar16 + ~uVar31;
                        uVar10 = iVar15 - local_16c;
                        break;
                      case 5:
                        uVar10 = (~uVar31 - (uint)(fVar36 < 0.0)) + (int)((float)(int)fVar36 / 5.0);
                        uVar9 = local_16c;
                      }
                      if (((((int)uVar10 < 0x40) && (-1 < (int)(uVar10 | uVar2 | uVar9))) &&
                          (uVar2 < 8)) && ((int)uVar9 < 0x40)) {
                        lVar29 = param_1 + (ulong)uVar10 * 0x3000;
                        if (0x3f < uVar10) {
                          lVar29 = param_1;
                        }
                        lVar13 = lVar29 + (ulong)uVar9 * 0xc0;
                        if (0x3f < uVar9) {
                          lVar13 = lVar29;
                        }
                        puVar27 = (undefined1 *)(lVar13 + (ulong)uVar2 * 0x18);
                        *puVar27 = 1;
                        puVar27[1] = (char)local_e4;
                        *(int *)(puVar27 + 0x10) = local_f0;
                        *(int *)(puVar27 + 0x14) = local_ec;
                      }
LAB_0149a0b0:
                      uVar31 = uVar31 + 1;
                    } while (uVar21 != uVar31);
                    if ((int)local_16c < (int)local_128) {
                      local_16c = local_16c + 1;
                    }
                    else {
                      iVar30 = iVar30 + 1;
                      local_16c = (uint)local_138;
                    }
                  } while (uVar8 != local_16c);
                  bVar19 = iVar1 != iVar30;
                }
              }
            }
            else {
              while (iVar1 != iVar30) {
                do {
                  if ((int)uVar31 < (int)local_128) {
                    uVar31 = uVar31 + 1;
                  }
                  else {
                    iVar30 = iVar30 + 1;
                    uVar31 = uVar8;
                  }
                } while (uVar8 != uVar31);
              }
            }
          }
        }
        if (iVar33 < *(int *)(lVar23 + 0x20)) {
          iVar33 = iVar33 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar33 = *(int *)(lVar23 + 0x10);
        }
      } while ((iVar14 != iVar33) || (iVar26 != iVar32));
    }
    iVar26 = 8;
    if (iVar28 < 8) {
      iVar26 = iVar28 + 1;
    }
    iVar28 = iVar26;
    if (iVar26 == 6) {
      return;
    }
  } while( true );
}

