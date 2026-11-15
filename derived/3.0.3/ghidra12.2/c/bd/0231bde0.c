
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0231bde0(long param_1,ulong param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  short *psVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined1 auStack_188 [88];
  undefined1 auStack_130 [88];
  undefined1 local_d8;
  undefined4 local_cc;
  uint local_90;
  undefined4 local_8c;
  undefined2 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c;
  
  puVar9 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x17cf) >> 4 & 1) == 0) {
    return 0;
  }
  pbVar3 = (byte *)(param_1 + 0x1804);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar13 = &DAT_054f08d0;
      if (iVar11 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar13 = &DAT_054f08d0;
    }
  }
  else {
    puVar13 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  puVar23 = PTR_DAT_04bb39b0;
  local_1e0 = (long *)CONCAT44(local_1e0._4_4_,1);
  if ((*puVar13 >> 1 & 1) == 0) {
LAB_0231bf38:
    *(undefined4 *)(param_1 + 0x17ec) = 0xffffffff;
    lVar18 = *(long *)puVar9;
    if (lVar18 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar13 = &DAT_054f08d0;
        if (iVar11 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar13 = &DAT_054f08d0;
      }
    }
    else {
      puVar13 = (uint *)(lVar18 + 0x200);
    }
    local_1e0 = (long *)CONCAT44(local_1e0._4_4_,1);
    *puVar13 = *puVar13 & 0xfffffffd;
  }
  else if (-1 < *(int *)(param_1 + 0x17ec)) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0x15c) != 0)) {
      pbVar5 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar18 + 0x158);
      }
      bVar21 = *pbVar1;
      bVar20 = *pbVar5;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      if (bVar20 != bVar21) goto LAB_0231bf38;
    }
    FUN_02507c6c(&local_90,1,1,1,0);
    puVar23 = PTR_DAT_04bb5038;
    uVar17 = local_90 & 0xff;
    local_1f8 = (undefined *)CONCAT44(local_8c,(undefined4)local_1f8);
    uVar4 = 0xff;
    if ((local_90 & 0xff) < 8) {
      uVar4 = (undefined1)local_90;
    }
    local_1f8 = (undefined *)CONCAT71(local_1f8._1_7_,uVar4);
    local_1f0 = (char *)CONCAT62(local_1f0._2_6_,uStack_88);
    if ((local_90 & 0xff) < 8) {
      bVar10 = true;
      puVar2 = PTR_DAT_04bb3780 + 0x10;
      do {
        local_74[0] = (undefined1)uVar17;
        if (7 < *pbVar1 || *pbVar1 != uVar17) {
          lVar18 = *(long *)puVar9;
          if (lVar18 == 0) {
            local_78 = *(undefined4 *)PTR_DAT_04bb3238;
            local_7c = *(undefined4 *)(param_1 + 0x230);
            psVar19 = &DAT_054f0c08;
            if ((DAT_054f0c70 & 1) == 0) {
              iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
              if (iVar11 == 0) {
                psVar19 = &DAT_054f0c08;
              }
              else {
                DAT_054f0c68 = 1;
                DAT_054f0c6c = 0;
                DAT_054f0c1c._0_4_ = 0;
                DAT_054f0c1c._4_4_ = 0;
                DAT_054f0c24._0_4_ = 0;
                DAT_054f0c24._4_4_ = 0;
                DAT_054f0c2c._0_4_ = 0;
                DAT_054f0c2c._4_4_ = 0;
                _DAT_054f0c44 = 0;
                DAT_054f0c34._0_4_ = 0;
                DAT_054f0c34._4_4_ = 0;
                DAT_054f0c3c._0_4_ = 0;
                DAT_054f0c3c._4_4_ = 0;
                _DAT_054f0c08 = 0;
                _DAT_054f0c10 = 1;
                DAT_054f0c14._0_4_ = 0;
                DAT_054f0c14._4_4_ = 0;
                DAT_054f0c48 = 0;
                DAT_054f0c50 = 0;
                DAT_054f0c58 = 0;
                DAT_054f0c60 = 0;
                __cxa_guard_release(&DAT_054f0c70);
                psVar19 = &DAT_054f0c08;
              }
            }
          }
          else {
            lVar22 = lVar18 + (ulong)uVar17 * 4;
            local_78 = *(undefined4 *)(lVar22 + 0xde8);
            local_7c = *(undefined4 *)(param_1 + 0x230);
            psVar19 = (short *)(lVar18 + (ulong)uVar17 * 0xd0 +
                                (ulong)(*(uint *)(lVar22 + 0xd68) & 1) * 0x68 + 0x6e8);
          }
          bVar8 = bVar10;
          if (((((char)psVar19[0x32] == '\0') || (*psVar19 != *(short *)PTR_DAT_04bb6298)) ||
              (0x148 < *(uint *)(psVar19 + 2))) || (*(uint *)(psVar19 + 2) != 0x42)) {
            plVar14 = *(long **)(param_1 + 0x60);
            if ((plVar14 == (long *)0x0) && (plVar14 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
              iVar11 = __cxa_guard_acquire(&DAT_052461c0);
              if (iVar11 == 0) {
                plVar14 = &DAT_05240280;
              }
              else {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
                plVar14 = &DAT_05240280;
              }
            }
            uVar15 = (**(code **)(*plVar14 + 0x100))();
            if ((uVar15 & 1) == 0) {
              FUN_0071c8d0(&local_1e0,&local_78,&local_7c,0);
              plVar14 = local_1e0;
              if (local_1e0 != (long *)0x0) {
                if (((*PTR_DAT_04bb3778 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar11 != 0)) {
                  *(undefined **)PTR_DAT_04bb3770 = puVar2;
                  __cxa_guard_release(PTR_DAT_04bb3778);
                }
                uVar15 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
                if ((uVar15 & 1) == 0) {
                  local_1d8._0_2_ = (ushort)(byte)local_1d8;
                }
              }
              bVar8 = false;
              if (local_1e0 != (long *)0x0) {
                if ((byte)local_1d8 != '\0') {
                  if (local_1d8._1_1_ != '\0') {
                    uVar15 = FUN_0255594c(local_74,local_7c,0);
                    bVar8 = false;
                    if ((uVar15 & 1) != 0) {
                      local_70 = 0x42;
                      lVar22 = local_1e0[0xe];
                      local_6c = 0;
                      lVar18 = 0;
                      if (lVar22 != 0) {
                        local_6c = 0;
                        if (*(uint *)(lVar22 + 0x280) < 0x149) {
                          local_6c = *(uint *)(lVar22 + 0x280);
                        }
                        lVar18 = lVar22 + 0x278;
                      }
                      bVar8 = bVar10;
                      if (local_6c != 0x42) {
                        local_6c = 0x42;
                        local_1e0[0x318] = local_1e0[0x328];
                        local_1e0[0x318] = 0;
                        local_1e0[0x319] = local_1e0[0x329];
                        local_1e0[0x319] = 0;
                        local_1e0[0x31a] = local_1e0[0x32a];
                        local_1e0[0x31a] = 0;
                        *(short *)(local_1e0 + 0x31b) = (short)local_1e0[0x32b];
                        local_1e0[0x314] = local_1e0[0x324];
                        local_1e0[0x314] = 0;
                        local_1e0[0x315] = local_1e0[0x325];
                        local_1e0[0x315] = 0;
                        local_1e0[0x316] = local_1e0[0x326];
                        local_1e0[0x316] = 0;
                        local_1e0[0x317] = local_1e0[0x327];
                        local_1e0[0x317] = 0;
                        local_1e0[0x310] = local_1e0[800];
                        local_1e0[0x310] = 0;
                        local_1e0[0x311] = local_1e0[0x321];
                        local_1e0[0x311] = 0;
                        local_1e0[0x312] = local_1e0[0x322];
                        local_1e0[0x312] = 0;
                        local_1e0[0x313] = local_1e0[0x323];
                        local_1e0[0x313] = 0;
                        local_1e0[0x30c] = local_1e0[0x31c];
                        local_1e0[0x30d] = local_1e0[0x31d];
                        local_1e0[0x30e] = local_1e0[0x31e];
                        local_1e0[0x30f] = local_1e0[799];
                        FUN_03ebb160(lVar18,0x42);
                      }
                    }
                  }
                }
              }
            }
          }
          bVar10 = bVar8;
          uVar17 = (uint)(byte)local_1f8;
          if (7 < uVar17) goto LAB_0231c4f8;
        }
        uVar15 = (ulong)uVar17;
        do {
          if (uVar15 == 7) goto LAB_0231c4f8;
          uVar15 = uVar15 + 1;
          uVar16 = FUN_02507924(&local_1f8,puVar23 + uVar15);
        } while ((uVar16 & 1) == 0);
        bVar20 = puVar23[uVar15];
        uVar17 = (uint)bVar20;
        if (7 < uVar17) goto LAB_0231c4f8;
        local_1f8 = (undefined *)CONCAT71(local_1f8._1_7_,bVar20);
      } while( true );
    }
    if (-1 < *(char *)(param_1 + 0x17ce)) {
      return 0;
    }
LAB_0231c508:
    FUN_02918030(*(undefined4 *)(param_1 + 0x17ec),pbVar1,PTR_DAT_04bb7ab0);
    puVar9 = PTR_DAT_04bc39e0;
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0) {
      return 0;
    }
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      return 0;
    }
    if ((*(int *)(PTR_DAT_04bc3a88 + 0x38) != 0x5fbb6b26) &&
       (*(int *)(PTR_DAT_04bc3a88 + 0x38) != -0x74938232)) {
      return 0;
    }
    if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') && (**(char **)(PTR_DAT_04bc39e0 + 8) == '\0'))
    {
      return 0;
    }
    *(undefined4 *)(PTR_DAT_04bc39e0 + 0xc4) = 0;
    *(undefined8 *)(puVar9 + 0xbc) = 0xc0a00000;
    return 0;
  }
  lVar18 = *(long *)puVar23;
  if (((lVar18 != 0) && (*(int *)(lVar18 + 0x15c) != 0)) && (*(int *)(lVar18 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar18 + 0x158);
    }
    bVar21 = *(byte *)(param_1 + 0x1ee8);
    bVar20 = *pbVar1;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if (bVar20 != bVar21) {
      return 0;
    }
  }
  if (-1 < *(int *)(param_1 + 0x17ec)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x17ce) >> 6 & 1) == 0) {
    return 0;
  }
  puVar13 = (uint *)FUN_0251ad2c();
  local_1e0._0_4_ = 1;
  if ((*puVar13 >> 1 & 1) != 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    local_1e0._0_4_ = 0xd;
    local_90 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar17 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      local_90 = 0;
      if (uVar17 < 0x149) {
        local_90 = uVar17;
      }
    }
    if ((local_90 != 0xd) &&
       (uVar15 = FUN_02555c84(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230),1),
       (uVar15 & 1) == 0)) {
      return 0;
    }
  }
  puVar6 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4c8);
  }
  iVar11 = FUN_02917c70(puVar6 + 0x4f,0);
  if (iVar11 < 0) {
    return 0;
  }
  local_80 = 0;
  uVar15 = FUN_029173f4(&local_90,iVar11);
  puVar9 = PTR_DAT_04bb27d0;
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  local_1e0 = (long *)CONCAT44(local_1e0._4_4_,0xd);
  uVar17 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar17 = 0;
    if (uVar7 < 0x149) {
      uVar17 = uVar7;
    }
  }
  local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,uVar17);
  if ((uVar17 == 0xd) && (local_90 != 0)) {
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    FUN_023bacf4(param_1,&local_80,0,1);
    return 0;
  }
  if (iVar11 == 0) {
    uVar15 = FUN_016cf9f0(0);
    if ((uVar15 & 1) != 0) {
      puVar13 = (uint *)FUN_0251ad2c();
      local_1e0 = (long *)CONCAT44(local_1e0._4_4_,0xb);
      if (((*puVar13 >> 0xb & 1) == 0) &&
         ((*(long *)PTR_DAT_04bb4938 == 0 || (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) == 0)))) {
        FUN_0257a010(&local_1e0);
        FUN_006e43a0(auStack_130,PTR_PTR_04bb2238);
        puVar23 = PTR_DAT_04bb2020 + 0x10;
        local_1f0 = "System_HotelRoomVisit";
        local_1f8 = puVar23;
        FUN_006e43a0(&local_1e0,&local_1f8);
        local_1f0 = "LeaveRoom";
        goto LAB_0231c8a8;
      }
    }
  }
  else if ((iVar11 == 1) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254)) {
    uVar15 = FUN_01dbf2ac(*(undefined8 *)PTR_DAT_04bb27d0);
    puVar23 = PTR_DAT_04bb2020;
    if (((uVar15 & 1) == 0) && (*(byte *)(**(long **)puVar9 + 0x476) < 2)) {
      local_1e0 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_1d8 = "HotelIsCompletedEditTutorialAnyone";
      uVar15 = FUN_0273f0a0(&local_1e0);
      if ((uVar15 & 1) != 0) goto LAB_0231c6dc;
    }
    FUN_0257a010(&local_1e0);
    FUN_006e43a0(auStack_130,PTR_PTR_04bb2238);
    puVar23 = puVar23 + 0x10;
    local_1f0 = "System_HotelRoomVisit";
    local_1f8 = puVar23;
    FUN_006e43a0(&local_1e0,&local_1f8);
    local_1f0 = "ProhibitEnter";
LAB_0231c8a8:
    local_1f8 = puVar23;
    FUN_006e43a0(auStack_188,&local_1f8);
    local_d8 = 0;
    local_cc = 0xc;
    FUN_024480f0(param_1,&local_1e0);
    return 0;
  }
LAB_0231c6dc:
  *(int *)(param_1 + 0x17ec) = iVar11;
  puVar13 = (uint *)FUN_0251ad2c();
  *puVar13 = *puVar13 | 2;
  local_1d0 = 0;
  local_1e8 = 0x100;
  local_1e0 = (long *)0x0;
  local_1d8 = (char *)0x0;
  local_1f8 = (undefined *)0x0;
  local_1f0 = (char *)0x0;
  switch(local_90) {
  case 1:
  case 3:
    bVar10 = local_90 == 3;
    local_1d0._0_1_ = 1;
    goto LAB_0231c780;
  case 2:
  case 4:
    bVar10 = local_90 == 4;
    local_1d0._0_1_ = 0;
LAB_0231c780:
    local_1d8 = (char *)CONCAT44(local_80,local_84);
    local_1d0 = CONCAT11(bVar10,(undefined1)local_1d0);
    FUN_024558f0(param_1,&local_1e0);
    return 1;
  case 5:
    local_1e8 = 0;
    break;
  case 6:
    local_1e8 = 1;
    break;
  case 7:
    local_1e8 = 0x101;
    break;
  default:
    FUN_02372704(param_1,0xf,0,1);
    if ((*(uint *)(param_1 + 0x17cc) >> 0x17 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x17f8) = 0;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x800000;
      pbVar3[0] = 0;
      pbVar3[1] = 1;
      *(undefined4 *)(param_1 + 0x1800) = 0x3c;
    }
    return 1;
  }
  local_1f0 = (char *)CONCAT44(local_80,local_84);
  FUN_02452aa0(param_1,&local_1f8);
  return 1;
LAB_0231c4f8:
  if (-1 < *(char *)(param_1 + 0x17ce)) {
    return 0;
  }
  if (!bVar10) {
    if (*(char *)(param_1 + 0x1805) == '\0') {
      return 0;
    }
    uVar12 = (**(code **)(*(long *)(param_1 + 0x17f0) + (ulong)*pbVar3 * 8))(param_1 + 0x17f0);
    *(undefined4 *)(param_1 + 0x17f8) = uVar12;
    return 0;
  }
  goto LAB_0231c508;
}

