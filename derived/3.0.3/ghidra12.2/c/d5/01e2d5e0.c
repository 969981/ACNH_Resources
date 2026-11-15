
/* WARNING: Removing unreachable block (ram,0x01e2dd4c) */
/* WARNING: Removing unreachable block (ram,0x01e2dd50) */

void FUN_01e2d5e0(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined6 uVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 ****ppppuVar22;
  uint *puVar23;
  int *piVar24;
  ushort uVar25;
  int iVar26;
  ulong uVar27;
  undefined8 *****pppppuVar28;
  uint *puVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  byte bStack_194;
  undefined1 uStack_193;
  undefined2 uStack_192;
  int local_190;
  undefined1 local_18c;
  undefined1 uStack_18b;
  undefined8 *****local_188;
  undefined8 *****pppppuStack_180;
  undefined4 local_178;
  undefined8 *****local_170 [3];
  undefined8 *****local_158 [3];
  undefined8 *****local_140 [3];
  undefined8 *****local_128 [3];
  undefined8 *****local_110 [3];
  undefined8 ****local_f8 [3];
  undefined8 ***local_e0 [3];
  undefined8 **local_c8 [3];
  undefined8 *local_b0 [3];
  undefined8 local_98 [3];
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  int iStack_6c;
  
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    FUN_01e27720();
    if ((param_2 & 1) == 0) {
      if (DAT_053fee41 != '\0') {
        DAT_053fe979 = 0;
        DAT_053fe968 = 0;
        DAT_053fe970 = 0;
      }
      if (DAT_053ff9e1 != '\0') {
        DAT_053ff519 = 0;
        DAT_053ff508 = 0;
        DAT_053ff510 = 0;
      }
      if (DAT_05400581 != '\0') {
        DAT_054000b9 = 0;
        DAT_054000a8 = 0;
        DAT_054000b0 = 0;
      }
      if (DAT_05401121 != '\0') {
        DAT_05400c59 = 0;
        DAT_05400c48 = 0;
        DAT_05400c50 = 0;
      }
      if (DAT_05401cc1 != '\0') {
        DAT_054017f9 = 0;
        DAT_054017e8 = 0;
        DAT_054017f0 = 0;
      }
      if (DAT_05402861 != '\0') {
        DAT_05402399 = 0;
        DAT_05402388 = 0;
        DAT_05402390 = 0;
      }
      if (DAT_05403401 != '\0') {
        DAT_05402f39 = 0;
        DAT_05402f28 = 0;
        DAT_05402f30 = 0;
      }
      if (DAT_05403fa1 != '\0') {
        DAT_05403ad9 = 0;
        DAT_05403ac8 = 0;
        DAT_05403ad0 = 0;
      }
      if (DAT_05404b41 != '\0') {
        DAT_05404679 = 0;
        DAT_05404668 = 0;
        DAT_05404670 = 0;
      }
      if (DAT_054056e1 != '\0') {
        DAT_05405219 = 0;
        DAT_05405208 = 0;
        DAT_05405210 = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x57e) = 0;
      *(undefined1 *)(param_1 + 0x57c) = 1;
      *(undefined1 *)(param_1 + 0x208) = 1;
      *(undefined1 *)(param_1 + 0x234) = 0;
      *(undefined8 *)(param_1 + 0x20c) = 0;
      *(undefined8 *)(param_1 + 0x214) = 0;
      *(undefined8 *)(param_1 + 0x21c) = 0;
      *(undefined8 *)(param_1 + 0x224) = 0;
      *(undefined8 *)(param_1 + 0x22c) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined1 *)(param_1 + 0x260) = 0;
      *(undefined1 *)(param_1 + 0x28c) = 0;
      *(undefined8 *)(param_1 + 0x264) = 0;
      *(undefined8 *)(param_1 + 0x26c) = 0;
      *(undefined8 *)(param_1 + 0x274) = 0;
      *(undefined8 *)(param_1 + 0x27c) = 0;
      *(undefined8 *)(param_1 + 0x284) = 0;
      *(undefined1 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined1 *)(param_1 + 0x2e4) = 0;
      *(undefined8 *)(param_1 + 0x2dc) = 0;
      *(undefined8 *)(param_1 + 0x2d4) = 0;
      *(undefined8 *)(param_1 + 0x2cc) = 0;
      *(undefined8 *)(param_1 + 0x2c4) = 0;
      *(undefined8 *)(param_1 + 700) = 0;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x300) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined1 *)(param_1 + 0x310) = 0;
      *(undefined1 *)(param_1 + 0x33c) = 0;
      *(undefined8 *)(param_1 + 0x334) = 0;
      *(undefined8 *)(param_1 + 0x32c) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0;
      *(undefined8 *)(param_1 + 0x31c) = 0;
      *(undefined8 *)(param_1 + 0x314) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      *(undefined8 *)(param_1 + 0x348) = 0;
      *(undefined8 *)(param_1 + 0x350) = 0;
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined1 *)(param_1 + 0x368) = 0;
      *(undefined8 *)(param_1 + 0x36c) = 0;
      *(undefined8 *)(param_1 + 0x374) = 0;
      *(undefined8 *)(param_1 + 0x37c) = 0;
      *(undefined8 *)(param_1 + 900) = 0;
      *(undefined8 *)(param_1 + 0x38c) = 0;
      *(undefined1 *)(param_1 + 0x394) = 0;
      *(undefined1 *)(param_1 + 0x3c0) = 0;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      *(undefined8 *)(param_1 + 0x398) = 0;
      *(undefined1 *)(param_1 + 0x3ec) = 0;
      *(undefined8 *)(param_1 + 0x3e4) = 0;
      *(undefined8 *)(param_1 + 0x3dc) = 0;
      *(undefined8 *)(param_1 + 0x3d4) = 0;
      *(undefined8 *)(param_1 + 0x3cc) = 0;
      *(undefined8 *)(param_1 + 0x3c4) = 0;
      *(undefined8 *)(param_1 + 0x410) = 0;
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined8 *)(param_1 + 0x400) = 0;
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      *(undefined8 *)(param_1 + 0x3f0) = 0;
    }
    local_80 = 0;
    FUN_01e2e494((long)&local_80 + 4,&local_80);
    iVar26 = 0;
    iVar19 = 0;
    do {
      if ((&DAT_05454358)[(long)iVar19 * 0x2d8] != '\0') {
        lVar3 = (long)iVar19;
        if ((&DAT_054543c4)[lVar3 * 0x2d8] == '\0') {
          if ((int)(&DAT_05454398)[lVar3 * 0xb6] < 1) {
            piVar24 = (int *)PTR_DAT_04bc2808;
          }
          else {
            iVar20 = (&DAT_05454398)[lVar3 * 0xb6] + (&DAT_05454394)[lVar3 * 0xb6] + -1;
            iVar13 = 0;
            if ((int)(&DAT_05454390)[lVar3 * 0xb6] <= iVar20) {
              iVar13 = (&DAT_05454390)[lVar3 * 0xb6];
            }
            piVar24 = (int *)((&DAT_05454388)[lVar3 * 0x5b] + (long)(iVar20 - iVar13) * 0x10 + 4);
          }
        }
        else {
          piVar24 = &DAT_054543c0 + lVar3 * 0xb6;
        }
        iVar13 = *piVar24;
        local_1a0._0_1_ = (byte)iVar13;
        local_1a0._1_1_ = (char)((uint)iVar13 >> 8);
        local_1a0._2_1_ = (char)((uint)iVar13 >> 0x10);
        local_1a0._3_1_ = (byte)((uint)iVar13 >> 0x18);
        if (iVar13 == 0) {
          iVar26 = iVar26 + 1;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0x11);
    lVar3 = param_1 + 0x580;
    iVar26 = local_80._4_4_ + iVar26;
    if (5 < iVar26) {
      FUN_0208d480(lVar3,param_2 & 1);
    }
    puVar5 = PTR_DAT_04bb4760;
    puVar1 = PTR_DAT_04bb4718;
    uVar12 = 0;
    if ((*(long *)PTR_DAT_04bb4718 == 0) ||
       (uVar12 = *(ushort *)(*(long *)PTR_DAT_04bb4718 + 0x11c8), uVar12 != 0xffff)) {
      local_1a0._0_1_ = 7;
      local_1a0._1_1_ = '\0';
      local_1a0._2_1_ = '\0';
      local_1a0._3_1_ = '\0';
      uVar10 = 0;
      puVar23 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar12 & 0xffffffffU) * 8);
      if (0xff < uVar12) {
        puVar23 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar23 >> 7 & 1) != 0) {
        iVar19 = 0;
        do {
          if (((&DAT_053fee41)[(long)iVar19 * 0xba0] != '\0') &&
             (uVar11 = FUN_0219e890(&DAT_053fe348 + (long)iVar19 * 0xba0), (uVar11 & 1) != 0)) {
            local_1a0._0_1_ = (&DAT_053fee40)[(long)iVar19 * 0xba0];
            local_1a0._1_1_ = (char)(byte)local_1a0 >> 7;
            uVar9 = CONCAT13(local_1a0._1_1_,CONCAT12(local_1a0._1_1_,(short)(char)(byte)local_1a0))
            ;
            lVar32 = *(long *)puVar5 + (ulong)uVar9 * 0x15;
            if (0x6c < uVar9) {
              lVar32 = *(long *)puVar5;
            }
            uVar12 = (ushort)*(byte *)(lVar32 + 4) | (*(byte *)(lVar32 + 5) & 3) << 8;
            if (0x1ff < uVar12) {
              uVar12 = uVar12 | 0xfc00;
            }
            uVar25 = 0;
            if (*(long *)puVar1 != 0) {
              uVar25 = *(ushort *)(*(long *)puVar1 + 0x11c8);
            }
            local_1a0._2_1_ = local_1a0._1_1_;
            local_1a0._3_1_ = local_1a0._1_1_;
            if (uVar12 == uVar25) {
              uVar10 = uVar10 | 1 << (ulong)((byte)local_1a0 & 0x1f) & 0xffffU;
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != 10);
      }
    }
    else {
      uVar10 = 0;
    }
    iVar19 = 0;
    iVar13 = 10;
    if ((param_2 & 1) != 0) {
      iVar13 = 1;
    }
    do {
      iVar20 = 0;
      iVar14 = 0;
      local_190 = 0;
      local_1a0._0_1_ = (byte)&local_1a0;
      local_1a0._1_1_ = (char)((ulong)&local_1a0 >> 8);
      local_1a0._2_1_ = (char)((ulong)&local_1a0 >> 0x10);
      local_1a0._3_1_ = (byte)((ulong)&local_1a0 >> 0x18);
      local_1a0._4_1_ = (byte)((ulong)&local_1a0 >> 0x20);
      bStack_194 = local_1a0._4_1_;
      local_1a0._5_1_ = (undefined1)((ulong)&local_1a0 >> 0x28);
      uStack_193 = local_1a0._5_1_;
      local_1a0._6_2_ = (undefined2)((ulong)&local_1a0 >> 0x30);
      uStack_192 = local_1a0._6_2_;
      local_198 = SUB84(&local_1a0,0);
      local_98[0] = 0;
      local_178 = 10;
      local_188 = local_170;
      local_170[0] = local_158;
      local_158[0] = local_140;
      local_140[0] = local_128;
      local_128[0] = local_110;
      local_110[0] = local_f8;
      local_f8[0] = local_e0;
      local_e0[0] = local_c8;
      local_c8[0] = local_b0;
      local_b0[0] = local_98;
      do {
        pppppuVar6 = local_188;
        if ((&DAT_053fee41)[(long)iVar14 * 0xba0] != '\0' && iVar20 < 10) {
          if (local_188 != (undefined8 *****)0x0) {
            local_188 = (undefined8 *****)*local_188;
          }
          *pppppuVar6 = (undefined8 ****)(&DAT_053fe348 + (long)iVar14 * 0xba0);
          ppppuVar22 = (undefined8 ****)
                       CONCAT26(local_1a0._6_2_,
                                CONCAT15(local_1a0._5_1_,
                                         CONCAT14(local_1a0._4_1_,
                                                  CONCAT13(local_1a0._3_1_,
                                                           CONCAT12(local_1a0._2_1_,
                                                                    CONCAT11(local_1a0._1_1_,
                                                                             (byte)local_1a0))))));
          pppppuVar28 = pppppuVar6 + 1;
          *pppppuVar28 = (undefined8 ****)0x0;
          local_1a0._0_1_ = (byte)pppppuVar28;
          local_1a0._1_1_ = (char)((ulong)pppppuVar28 >> 8);
          local_1a0._2_1_ = (char)((ulong)pppppuVar28 >> 0x10);
          local_1a0._3_1_ = (byte)((ulong)pppppuVar28 >> 0x18);
          local_1a0._4_1_ = (byte)((ulong)pppppuVar28 >> 0x20);
          local_1a0._5_1_ = (undefined1)((ulong)pppppuVar28 >> 0x28);
          local_1a0._6_2_ = (undefined2)((ulong)pppppuVar28 >> 0x30);
          pppppuVar6[2] = (undefined8 ****)&local_1a0;
          *pppppuVar28 = ppppuVar22;
          if (ppppuVar22 != (undefined8 ****)0x0) {
            ppppuVar22[1] = pppppuVar28;
          }
          iVar20 = local_190 + 1;
          local_190 = iVar20;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 10);
      pppppuStack_180 = local_170;
      uVar9 = nn::os::GetSystemTick();
      local_78 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      uStack_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 2;
      local_70 = (uStack_74 ^ uStack_74 >> 0x1e) * 0x6c078965 + 3;
      iStack_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 4;
      FUN_038aaa70(&local_1a0,&local_78);
      lVar32 = CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT14(bStack_194,local_198)));
      plVar15 = (long *)(lVar32 + -8);
      ppppuVar22 = (undefined8 ****)&local_198;
      if (plVar15 != &uStack_1a8) {
        do {
          if (iVar19 == 0 && (param_2 & 1) == 0) {
            *(undefined8 *)(*plVar15 + 0x54c) = 0;
          }
          lVar16 = *plVar15;
          if ((1 << (ulong)(*(byte *)(lVar16 + 0xaf8) & 0x1f) & uVar10) == 0) {
            FUN_01e2b514(param_1,lVar16 + 0x508,iVar19 == iVar13 + -1,1,0);
          }
          else {
            iVar20 = *(int *)(lVar16 + 0x550);
            uStack_1a8._4_4_ = 1;
            iVar14 = *(int *)(lVar16 + 0x548);
            if (iVar20 < iVar14) {
LAB_01e2dd04:
              *(int *)(lVar16 + 0x550) = iVar20 + 1;
              iVar20 = *(int *)(lVar16 + 0x54c) + iVar20;
              iVar2 = 0;
              if (iVar14 <= iVar20) {
                iVar2 = iVar14;
              }
              puVar21 = (undefined8 *)(*(long *)(lVar16 + 0x540) + (long)(iVar20 - iVar2) * 0x14);
              *puVar21 = 0;
              puVar21[1] = 1;
              *(undefined2 *)(puVar21 + 2) = 0;
            }
            else {
              if (0 < iVar20) {
                *(int *)(lVar16 + 0x550) = iVar20 + -1;
                iVar2 = 0;
                if (*(int *)(lVar16 + 0x54c) + 1 < iVar14) {
                  iVar2 = *(int *)(lVar16 + 0x54c) + 1;
                }
                *(int *)(lVar16 + 0x54c) = iVar2;
                iVar20 = iVar20 + -1;
              }
              if (iVar20 < iVar14) goto LAB_01e2dd04;
            }
            if (iVar19 == iVar13 + -1) {
              local_78 = 1;
              FUN_021dafb0(lVar16 + 0x514,&local_78,0,0,0,1);
            }
          }
          lVar32 = *(long *)(lVar32 + 8);
          plVar15 = (long *)(lVar32 + -8);
        } while (plVar15 != &uStack_1a8);
      }
      do {
        ppppuVar17 = (undefined8 ****)*ppppuVar22;
        ppppuVar22 = ppppuVar17 + 1;
      } while (ppppuVar17 != (undefined8 ****)&local_1a0);
      iVar19 = iVar19 + 1;
    } while (iVar19 != iVar13);
    if (5 < iVar26) {
      FUN_0208e490(lVar3,param_2 & 1,local_80._4_4_);
    }
    iVar19 = 0;
    do {
      bVar8 = local_1a0._4_1_;
      if ((&DAT_053fee41)[(long)iVar19 * 0xba0] != '\0') {
        puVar1 = &DAT_053fe850 + (long)iVar19 * 0xba0;
        if ((param_2 & 1) == 0) {
          FUN_01e2bfe0(param_1,puVar1);
        }
        else {
          local_1a0._0_1_ = 2;
          local_1a0._1_1_ = 0;
          local_1a0._2_1_ = 0;
          local_1a0._3_1_ = 0;
          FUN_01e2d0a0(param_1,puVar1,&local_1a0,1,0);
        }
        lVar32 = (long)iVar19;
        FUN_01e37c08(puVar1,*(ushort *)(param_1 + 0x74) >>
                            (ulong)((byte)(&DAT_053fee40)[lVar32 * 0xba0] & 0x1f) & 1);
        iVar26 = (&DAT_053fe898)[lVar32 * 0x2e8];
        if (iVar26 < 1) {
          if (DAT_0538ea6c == 0) goto LAB_01e2ded4;
LAB_01e2deac:
          lVar16 = (long)iVar19 * 0xba0;
          bVar8 = (&DAT_053fea30)[lVar16];
          (&DAT_053fea2c)[(long)iVar19 * 0x2e8] = 0;
          bVar8 = bVar8 & 0xfe;
          (&DAT_053fea30)[lVar16] = bVar8;
        }
        else {
          lVar16 = (long)iVar19;
          iVar20 = iVar26 + (&DAT_053fe894)[lVar16 * 0x2e8] + -1;
          iVar13 = 0;
          if ((int)(&DAT_053fe890)[lVar16 * 0x2e8] <= iVar20) {
            iVar13 = (&DAT_053fe890)[lVar16 * 0x2e8];
          }
          if (*(int *)((&DAT_053fe888)[lVar16 * 0x174] + (long)(iVar20 - iVar13) * 0x14 + 8) != 0)
          goto LAB_01e2deac;
LAB_01e2ded4:
          local_1a0._0_1_ = 0;
          local_1a0._1_1_ = 0;
          local_1a0._2_1_ = 0;
          local_1a0._3_1_ = 0;
          uVar11 = FUN_0220f914(&local_1a0);
          (&DAT_053fea2c)[(long)iVar19 * 0x2e8] =
               CONCAT13(local_1a0._3_1_,
                        CONCAT12(local_1a0._2_1_,CONCAT11(local_1a0._1_1_,(byte)local_1a0)));
          puVar1 = PTR_DAT_04bc1568;
          iVar26 = (&DAT_053fe898)[lVar32 * 0x2e8];
          if (iVar26 < 1) {
            local_78 = 0;
          }
          else {
            lVar16 = (long)iVar19;
            local_78 = 0;
            iVar13 = iVar26 + (&DAT_053fe894)[lVar16 * 0x2e8] + -1;
            iVar26 = 0;
            if ((int)(&DAT_053fe890)[lVar16 * 0x2e8] <= iVar13) {
              iVar26 = (&DAT_053fe890)[lVar16 * 0x2e8];
            }
            puVar23 = (uint *)((&DAT_053fe888)[lVar16 * 0x174] + (long)(iVar13 - iVar26) * 0x14);
            if ((char)puVar23[4] == '\0') {
              local_78 = *puVar23;
            }
          }
          if (DAT_053e0208 == 0) {
LAB_01e2e020:
            puVar23 = &DAT_053dcef0;
            uVar10 = DAT_053dcef0;
          }
          else {
            if ((int)*(uint *)(DAT_053e0208 + 0x16ac8) < 1) {
              if ((((*(long *)(DAT_053e0208 + 0x169b8) != 0) &&
                   (puVar23 = *(uint **)(*(long *)(DAT_053e0208 + 0x169b8) + 8),
                   puVar23 != (uint *)0x0)) &&
                  ((*(uint *)(DAT_053e0208 + 0x169d0) <= local_78 ||
                   (*(char *)(*(long *)(DAT_053e0208 + 0x169d8) + (long)(int)local_78) != '\0'))))
                 && (((local_78 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                iVar26 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  iVar26 = 0x1c;
                }
                puVar23 = (uint *)((ulong)(puVar23[1] * local_78 + (uint)(ushort)puVar23[2] * 8 +
                                          iVar26) + (long)puVar23);
                if (puVar23 != (uint *)0x0) goto LAB_01e2dfa0;
              }
              goto LAB_01e2e020;
            }
            if (*(uint *)(DAT_053e0208 + 0x16ac8) <= local_78) goto LAB_01e2e020;
            uVar10 = local_78;
            if (*(uint *)(DAT_053e0208 + 0x16ab8) <= local_78) {
              uVar10 = 0;
            }
            puVar23 = *(uint **)(*(long *)(DAT_053e0208 + 0x16ac0) + (ulong)uVar10 * 8);
            if (puVar23 == (uint *)0x0) goto LAB_01e2e020;
LAB_01e2dfa0:
            uVar10 = *puVar23;
          }
          if (uVar10 != 0) {
            cVar18 = DAT_0538d1a8;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *PTR_DAT_04bc1560 = 1;
                *(undefined8 *)puVar1 = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar10 = *(uint *)(puVar1 + 0x50);
                if (-1 < (int)uVar10) {
                  if ((byte *)((ulong)uVar10 + (long)puVar23) != (byte *)0x0) {
                    bVar8 = *(byte *)((ulong)uVar10 + (long)puVar23);
                    goto LAB_01e2e134;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)*puVar23;
              bVar8 = 2;
              if ((*puVar23 == 0) || (puVar23 == puVar29)) goto LAB_01e2e134;
              lVar16 = 0xc;
              if (*(char *)((long)puVar23 + (10 - (long)puVar29)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar23 + (lVar16 - (long)puVar29);
              if (lVar16 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar29));
              *(undefined4 *)(puVar1 + 0x50) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar24 = (int *)(lVar16 + 4);
              while (piVar24[-1] != 0x67850558) {
                piVar24 = piVar24 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_01e2e130;
              }
              iVar26 = 0;
              if (*piVar24 != -1) {
                iVar26 = *piVar24;
              }
              *(int *)(puVar1 + 0x50) = iVar26;
              if (*puVar23 == 0) break;
            } while( true );
          }
LAB_01e2e130:
          bVar8 = 2;
LAB_01e2e134:
          if (1 < bVar8) {
            bVar8 = 2;
          }
          if ((uVar11 & 1) == 0) {
LAB_01e2e1e8:
            lVar16 = (long)iVar19 * 0xba0;
            bVar8 = (&DAT_053fea30)[lVar16] & 0xfe;
          }
          else {
            uVar10 = FUN_00a86724(DAT_04da7238);
            if ((uVar10 & 0xfffffffe) != 6) {
              uVar11 = FUN_021ded20();
              if ((uVar11 & 1) != 0) {
                bVar7 = (&DAT_053fe858)[(long)iVar19 * 0xba0];
                if (((bVar7 < 0x23) &&
                    ((byte)(&DAT_053fe859)[(long)iVar19 * 0xba0] <= (byte)PTR_DAT_04bc27f0[bVar7]))
                   && (((uint)(&DAT_053e6eb8)[bVar7] >>
                        (ulong)((byte)(&DAT_053fe859)[(long)iVar19 * 0xba0] & 0x1f) & 1) != 0)) {
                  if (bVar7 == 0xd) {
                    local_78 = 3;
                  }
                  else {
                    bVar7 = FUN_020fd7d8();
                    if (bVar7 < 8) {
                      local_78 = *(uint *)(&DAT_04058920 + (long)(char)bVar7 * 4);
                    }
                    else {
                      local_78 = 1;
                    }
                  }
                }
                else {
                  local_78 = 1;
                }
                if (local_78 != 3) {
                  if (bVar8 == 0) {
                    puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                    uVar10 = *puVar23 ^ *puVar23 << 0xb;
                    uVar9 = puVar23[3];
                    *puVar23 = puVar23[1];
                    puVar23[1] = puVar23[2];
                    uVar10 = uVar10 >> 8 ^ uVar9 >> 0x13 ^ uVar10 ^ uVar9;
                    puVar23[2] = uVar9;
                    puVar23[3] = uVar10;
                    bVar8 = (&DAT_053fe858)[(long)iVar19 * 0xba0];
                    if (((bVar8 < 0x23) &&
                        ((byte)(&DAT_053fe859)[(long)iVar19 * 0xba0] <=
                         (byte)PTR_DAT_04bc27f0[bVar8])) &&
                       (((uint)(&DAT_053e6eb8)[bVar8] >>
                         (ulong)((byte)(&DAT_053fe859)[(long)iVar19 * 0xba0] & 0x1f) & 1) != 0)) {
                      if (bVar8 == 0xd) {
                        uStack_1a8._4_4_ = 3;
                      }
                      else {
                        bVar8 = FUN_020fd7d8(&DAT_053fe858 + (long)iVar19 * 0xba0);
                        if (7 < bVar8) goto LAB_01e2e430;
                        uStack_1a8._4_4_ = *(uint *)(&DAT_04058920 + (long)(char)bVar8 * 4);
                      }
                    }
                    else {
LAB_01e2e430:
                      uStack_1a8._4_4_ = 1;
                    }
                    uVar11 = (ulong)uStack_1a8._4_4_;
                    if (3 < uStack_1a8._4_4_) {
                      uVar11 = 0;
                    }
                    if ((int)(&DAT_04101d10)[uVar11] <= (int)((ulong)uVar10 * 100 >> 0x20))
                    goto LAB_01e2e164;
                  }
                  else if (bVar8 == 1) goto LAB_01e2e164;
                }
              }
              goto LAB_01e2e1e8;
            }
LAB_01e2e164:
            lVar16 = (long)iVar19 * 0xba0;
            bVar8 = (&DAT_053fea30)[lVar16] | 1;
          }
          (&DAT_053fea30)[lVar16] = bVar8;
          iVar26 = (&DAT_053fe898)[lVar32 * 0x2e8];
        }
        local_1a0._2_1_ = 0;
        if (iVar26 < 1) {
          local_1a0._1_1_ = 0;
          piVar24 = &DAT_0538ea6c;
        }
        else {
          lVar16 = (long)iVar19;
          iVar13 = 0;
          iVar20 = iVar26 + (&DAT_053fe894)[lVar16 * 0x2e8] + -1;
          iVar26 = 0;
          if ((int)(&DAT_053fe890)[lVar16 * 0x2e8] <= iVar20) {
            iVar26 = (&DAT_053fe890)[lVar16 * 0x2e8];
          }
          piVar24 = (int *)((&DAT_053fe888)[lVar16 * 0x174] + (long)(iVar20 - iVar26) * 0x14);
          if ((char)piVar24[4] == '\0') {
            iVar13 = *piVar24;
          }
          piVar24 = piVar24 + 2;
          local_1a0._1_1_ = (char)(iVar13 << 2);
        }
        lVar16 = (long)iVar19;
        uVar31 = (&DAT_053fe874)[lVar16 * 0x174];
        lVar30 = (&DAT_053fe87c)[lVar16 * 0x174];
        local_1a0._6_2_ = (undefined2)uVar31;
        local_198 = (undefined4)((ulong)uVar31 >> 0x10);
        bStack_194 = (byte)((ulong)uVar31 >> 0x30);
        uStack_193 = (undefined1)((ulong)uVar31 >> 0x38);
        local_78 = (&DAT_053fea2c)[lVar16 * 0x2e8];
        uStack_192 = (undefined2)lVar30;
        local_190 = (int)((ulong)lVar30 >> 0x10);
        local_18c = (undefined1)((ulong)lVar30 >> 0x30);
        uStack_18b = (undefined1)((ulong)lVar30 >> 0x38);
        local_1a0._0_1_ = (byte)(&DAT_053fe870)[lVar16 * 0x2e8];
        bVar7 = (byte)*piVar24 & 3 | (byte)((local_78 & 3) << 2) | (bVar8 & 1) << 4;
        local_1a0._3_1_ = bVar7 | 0xc0;
        uVar4 = (undefined6)((ulong)uVar31 >> 0x10);
        lVar16 = param_1 + 0x78 + (ulong)(uint)(int)(char)(&DAT_053fee40)[lVar32 * 0xba0] * 0x28;
        if (9 < (uint)(int)(char)(&DAT_053fee40)[lVar32 * 0xba0]) {
          lVar16 = param_1 + 0x78;
        }
        bVar8 = local_1a0._4_1_ | 0x3f;
        if ((*(ulong *)(lVar16 + 8) !=
             (CONCAT26(local_1a0._6_2_,
                       CONCAT15(local_1a0._5_1_,
                                CONCAT14(local_1a0._4_1_,
                                         CONCAT13(bVar7,(uint3)CONCAT11(local_1a0._1_1_,
                                                                        (byte)local_1a0))))) |
             0x3fc0000000) || *(long *)(lVar16 + 0x10) != CONCAT26(uStack_192,uVar4)) ||
            *(long *)(lVar16 + 0x16) != lVar30) {
          *(ulong *)(lVar16 + 8) =
               CONCAT26(local_1a0._6_2_,
                        CONCAT15(local_1a0._5_1_,
                                 CONCAT14(local_1a0._4_1_,
                                          CONCAT13(bVar7,(uint3)CONCAT11(local_1a0._1_1_,
                                                                         (byte)local_1a0))))) |
               0x3fc0000000;
          *(ulong *)(lVar16 + 0x10) = CONCAT26(uStack_192,uVar4);
          *(long *)(lVar16 + 0x16) = lVar30;
        }
      }
      local_1a0._4_1_ = bVar8;
      iVar19 = iVar19 + 1;
    } while (iVar19 != 10);
    FUN_0208c014(lVar3,1);
  }
  return;
}

