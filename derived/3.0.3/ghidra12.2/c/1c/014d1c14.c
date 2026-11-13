
/* WARNING: Removing unreachable block (ram,0x014d201c) */
/* WARNING: Removing unreachable block (ram,0x014d31b8) */

undefined8 FUN_014d1c14(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint *puVar1;
  undefined *puVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lVar22;
  int iVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  float extraout_s0_01;
  float fVar25;
  float fVar26;
  undefined4 local_3c4;
  uint local_3c0 [2];
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a4;
  undefined *local_238;
  int local_230;
  int local_22c;
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  int local_1e8;
  undefined1 local_1e4;
  
  if ((((*(uint *)(param_4 + 0x5f0) >> 8 & 1) != 0) && ((*(uint *)(param_4 + 0x5e8) >> 8 & 1) != 0))
     && (sVar9 = *(short *)PTR_DAT_04bb6298, sVar9 != -1)) {
    local_200._0_4_ = 0x1b;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
    if (0xff < (uint)(int)sVar9) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x1b & 1) != 0) &&
        (local_3c0[0] = *(uint *)(param_4 + 0x378), local_3c0[0] - 3 < 3)) &&
       (*(long *)PTR_DAT_04bb7ff8 != 0)) {
      FUN_02ef6cf0(*(long *)PTR_DAT_04bb7ff8,param_4 + 0x5d0,1);
    }
  }
  if (*(int *)(param_4 + 0xe74) == 0) {
    return 0;
  }
  if ((*(int *)(param_4 + 0x378) - 3U < 3) &&
     (local_200._0_4_ = *(uint *)(param_4 + 0x3c0), (uint)local_200 < 0x16)) {
    uVar15 = 1 << (ulong)((uint)local_200 & 0x1f);
    if ((uVar15 & 0x3b0001) == 0) {
      if ((uVar15 & 0x30) == 0) {
        if ((uint)local_200 == 2) {
          FUN_014ce120(param_4);
          param_2 = *(float *)(param_4 + 0xa3c);
          iVar14 = (int)((float)(int)*(float *)(param_4 + 0xaf8) / 5.0) -
                   (uint)(*(float *)(param_4 + 0xaf8) < 0.0);
          iVar23 = (int)((float)(int)*(float *)(param_4 + 0xb00) / 5.0) -
                   (uint)(*(float *)(param_4 + 0xb00) < 0.0);
          iVar10 = (int)((float)(int)param_2 / 5.0) - (uint)(param_2 < 0.0);
          param_3 = (float)(int)*(float *)(param_4 + 0xa44) / 5.0;
          iVar11 = (int)param_3 - (uint)(*(float *)(param_4 + 0xa44) < 0.0);
          iVar13 = iVar14;
          if (iVar10 <= iVar14) {
            iVar13 = iVar10;
          }
          if (iVar14 <= iVar10) {
            iVar14 = iVar10;
          }
          *(int *)(param_4 + 0xb10) = iVar13;
          iVar10 = iVar23;
          if (iVar11 <= iVar23) {
            iVar10 = iVar11;
          }
          if (iVar23 <= iVar11) {
            iVar23 = iVar11;
          }
          *(int *)(param_4 + 0xb14) = iVar10;
          *(int *)(param_4 + 0xb20) = (iVar14 - iVar13) + 1;
          *(int *)(param_4 + 0xb24) = (iVar23 - iVar10) + 1;
        }
        goto LAB_014d1e20;
      }
      FUN_014ce120(param_4);
      param_2 = *(float *)(param_4 + 0xa44);
      *(uint *)(param_4 + 0xb10) =
           (int)((float)(int)*(float *)(param_4 + 0xa3c) / 5.0) -
           (uint)(*(float *)(param_4 + 0xa3c) < 0.0);
      param_3 = (float)(int)param_2 / 5.0;
      *(uint *)(param_4 + 0xb14) = (int)param_3 - (uint)(param_2 < 0.0);
    }
    else {
      FUN_014ce120(param_4);
      FUN_014cef20(param_4);
    }
    local_200._0_4_ = 4;
    if (*(int *)(param_4 + 0x378) == 4) {
      FUN_014cd664(local_3c0);
      uVar15 = local_3c0[0] + 0x20000000 >> 0x1e;
      iVar13 = uVar15 + 2;
      if (2 < uVar15 - 1) {
        iVar13 = 2;
      }
      *(int *)(param_4 + 0xb28) = iVar13;
    }
  }
LAB_014d1e20:
  pbVar16 = (byte *)0x0;
  if (-1 < *(int *)(param_4 + 0xe5c)) {
    return 0;
  }
  if (-1 < *(int *)(param_4 + 0xe58)) {
    return 0;
  }
  iVar13 = *(int *)(param_4 + 0x378);
  puVar1 = (uint *)(param_4 + 0x5d4);
  local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar13);
  if (2 < iVar13 - 3U) goto LAB_014d2e24;
  local_200._0_4_ = 0;
  iVar23 = (uint)local_200;
  iVar14 = *(int *)(param_4 + 0x3c0);
  if (iVar14 == 0) {
    if ((*(int *)(param_4 + 0xb58) != 0) && (*(int *)(param_4 + 0xb58) != 5)) {
      *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 1;
    }
    if ((((*(uint *)(param_4 + 0x5ec) >> 2 & 1) == 0) ||
        ((*(uint *)(param_4 + 0x5e4) >> 2 & 1) == 0)) &&
       (((*(uint *)(param_4 + 0x5ec) & 1) == 0 || ((*(uint *)(param_4 + 0x5e4) & 1) == 0)))) {
      local_200._0_4_ = 0;
      lVar17 = param_4 + 0xb40;
      if ((((*(int *)(param_4 + 0xb58) != 0) && (*(int *)(param_4 + 0xb58) != 0)) &&
          (pbVar16 = (byte *)FUN_014ecb48(lVar17), ((ulong)pbVar16 & 1) != 0)) &&
         ((*(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 2,
          (*(uint *)(param_4 + 0x5ec) >> 1 & 1) != 0 &&
          (local_200._0_4_ = 1, (*(uint *)(param_4 + 0x5e4) >> 1 & 1) != 0)))) {
        FUN_014ca720(param_4);
        return 1;
      }
      if (((*(uint *)(param_4 + 0x5ec) >> 5 & 1) != 0) &&
         (local_200 = (undefined *)CONCAT44(local_200._4_4_,5),
         (*(uint *)(param_4 + 0x5e4) >> 5 & 1) != 0)) {
        if ((*(int *)(param_4 + 0xb58) == 5) &&
           (lVar17 = FUN_014bac20(param_4 + 0xbd0), lVar17 != 0)) {
          FUN_02b8233c(lVar17,0);
        }
        uVar20 = 2;
        goto LAB_014d28fc;
      }
      local_200 = (undefined *)CONCAT44(local_200._4_4_,5);
      if (((*(int *)(param_4 + 0xb58) != 0) &&
          (local_200 = (undefined *)CONCAT44(local_200._4_4_,*(uint *)(param_4 + 0xb28)),
          *(uint *)(param_4 + 0xb28) < 2)) &&
         (local_200 = (undefined *)CONCAT44(local_200._4_4_,0xb),
         (*(uint *)(param_4 + 0x5ec) >> 0xb & 1) != 0)) {
        pbVar16 = (byte *)FUN_014e7014(&local_200);
        if ((*(uint *)(param_4 + 0xb58) & 0xfffffffe) != 4) {
          local_218 = 0;
          local_228 = PTR_DAT_04bbc1a0 + 0x10;
          puVar2 = PTR_DAT_04bb2010 + 0x10;
          local_208 = 0;
          local_220 = puVar2;
          local_210 = puVar2;
          pbVar16 = (byte *)FUN_014ef9f0(lVar17,&local_228);
          iVar13 = local_208._4_4_ + 1;
          if (iVar13 != local_218._4_4_) {
            iVar10 = (int)local_218;
            fVar26 = 3.4028235e+38;
            iVar14 = local_218._4_4_;
            iVar23 = (int)local_218;
            do {
              local_238 = puVar2;
              local_230 = iVar23;
              local_22c = iVar14;
              FUN_014e7014(local_3c0);
              local_3c4 = 1;
              pbVar16 = (byte *)FUN_014cb6a0(param_4,local_3c0,&local_238,&local_3c4,0,0);
              if (((ulong)pbVar16 & 1) != 0) {
                pbVar16 = (byte *)FUN_014e8b30(local_3c0);
                fVar24 = *(float *)(param_4 + 0xa3c) - extraout_s0_00;
                fVar25 = *(float *)(param_4 + 0xa44) - param_3;
                fVar24 = fVar25 * fVar25 + fVar24 * fVar24;
                if (fVar24 < fVar26) {
                  pbVar16 = (byte *)FUN_014e70e0(&local_200,local_3c0);
                  fVar26 = fVar24;
                }
              }
              if (iVar23 < (int)local_208) {
                iVar23 = iVar23 + 1;
              }
              else {
                iVar14 = iVar14 + 1;
                iVar23 = (int)local_218;
              }
            } while ((iVar10 != iVar23) || (iVar13 != iVar14));
          }
        }
        if (local_1e8 != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 4;
          pbVar16 = (byte *)FUN_014d3868(puVar1,0xb);
          if (((ulong)pbVar16 & 1) != 0) {
            iVar13 = FUN_014eb660(lVar17);
            iVar14 = FUN_014d3f18(iVar13 != 1);
            iVar13 = 0;
            if (iVar14 != -1) {
              iVar13 = iVar14;
            }
            *(int *)(param_4 + 0xb2c) = iVar13;
            pbVar16 = (byte *)FUN_014d3f18(1);
            if (iVar13 == (int)pbVar16) {
              pbVar16 = (byte *)FUN_014e8b30(&local_200);
              *(undefined4 *)(param_4 + 0xb34) = 0;
              *(float *)(param_4 + 0xb30) = extraout_s0_01 - *(float *)(param_4 + 0xa3c);
              *(float *)(param_4 + 0xb38) = param_3 - *(float *)(param_4 + 0xa44);
            }
            lVar17 = *(long *)PTR_DAT_04bbbc38;
            if (((lVar17 == 0) || (*(int *)(lVar17 + 0xc) != 3)) ||
               (1 < *(int *)(lVar17 + 0x10) - 5U)) {
              iVar13 = *(int *)(param_4 + 0xb2c);
              local_3b8 = 0;
              local_3b0 = 0x7fc00000;
              local_3a4 = 0;
              iVar14 = FUN_014d3f18(1);
              local_3c0[0] = 0x12;
              if (iVar13 == iVar14) {
                local_3c0[0] = 0x13;
              }
              pbVar16 = (byte *)FUN_014ca580(param_4,local_3c0);
            }
          }
        }
      }
      if ((*(int *)(param_4 + 0xb58) != 0) &&
         (pbVar16 = (byte *)FUN_014cc2ec(pbVar16), ((ulong)pbVar16 & 1) != 0)) {
        uVar18 = FUN_014ca770(param_4);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x40;
          uVar18 = FUN_014d3868(puVar1,0x14);
          if (((uVar18 & 1) != 0) && (uVar18 = FUN_014ca7fc(param_4), (uVar18 & 1) != 0)) {
            return 1;
          }
        }
        uVar18 = FUN_014cbf30(param_4);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x80;
          uVar18 = FUN_014d3868(puVar1,0x15);
          if ((uVar18 & 1) != 0) {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0xb);
            if (*(int *)(param_4 + 0x378) != 0xb) {
              FUN_03ebb160(param_4 + 0x370);
              uVar20 = 0x1c;
              goto LAB_014d3750;
            }
          }
        }
        uVar18 = FUN_014cbcd0(param_4);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x20;
          uVar18 = FUN_014d3868(puVar1,0x16);
          if ((uVar18 & 1) != 0) {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0xc);
            if (*(int *)(param_4 + 0x378) != 0xc) goto LAB_014d2e18;
          }
        }
        uVar18 = FUN_014cbd68(param_4);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x100;
          uVar18 = FUN_014d3868(puVar1,0x29);
          if (((uVar18 & 1) != 0) && (uVar18 = FUN_014cbdb8(param_4), (uVar18 & 1) != 0)) {
            return 1;
          }
        }
        if (((*(int *)(param_4 + 0xb58) != 0) && ((*(byte *)(param_4 + 0xa2d) >> 2 & 1) != 0)) &&
           (*(int *)(param_4 + 0xb58) == 4)) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x200;
          uVar18 = FUN_014d3868(puVar1,0x1c);
          if ((uVar18 & 1) != 0) {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0xf);
            if (*(int *)(param_4 + 0x378) != 0xf) goto LAB_014d2e18;
          }
        }
        if (((*(int *)(param_4 + 0xb58) != 0) && ((*(byte *)(param_4 + 0xa2d) >> 3 & 1) != 0)) &&
           (*(int *)(param_4 + 0xb58) == 5)) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x400;
          uVar18 = FUN_014d3868(puVar1,0x1d);
          if ((uVar18 & 1) != 0) {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0x10);
            if (*(int *)(param_4 + 0x378) != 0x10) goto LAB_014d2e18;
          }
        }
        pbVar16 = (byte *)FUN_014cc174(param_4);
        if (((ulong)pbVar16 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x2000;
          pbVar16 = (byte *)FUN_014d3868(puVar1,0x24);
          if ((((ulong)pbVar16 & 1) != 0) &&
             (pbVar16 = (byte *)FUN_014cc218(param_4), ((ulong)pbVar16 & 1) != 0)) {
            uVar20 = 0x1d;
            goto LAB_014d3750;
          }
        }
      }
      goto LAB_014d2e24;
    }
    local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
    lVar17 = (long)local_200;
    local_200._0_4_ = 1;
    iVar13 = (uint)local_200;
    local_200 = (undefined *)lVar17;
  }
  else {
    if (iVar14 != 1) {
      local_200._0_4_ = 4;
      if (iVar14 != 4) {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,2);
        if (iVar14 == 2) {
          pbVar16 = (byte *)FUN_014d38d0(puVar1,5);
          if ((((ulong)pbVar16 & 1) != 0) &&
             (pbVar16 = (byte *)FUN_014ca860(param_4), ((ulong)pbVar16 & 1) != 0)) {
            return 1;
          }
          goto LAB_014d2e24;
        }
        local_200 = (undefined *)CONCAT44(local_200._4_4_,5);
        if (iVar14 != 5) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0x10);
          if (iVar14 == 0x10) {
            uVar6 = *(uint *)(param_4 + 0xb10);
            local_228 = PTR_DAT_04bb2010 + 0x10;
            uVar7 = *(uint *)(param_4 + 0xb14);
            uVar15 = -(uVar6 & 1);
            if (-1 < (int)uVar6) {
              uVar15 = uVar6 & 1;
            }
            uVar4 = -(uVar7 & 1);
            if (-1 < (int)uVar7) {
              uVar4 = uVar7 & 1;
            }
            local_220 = (undefined *)CONCAT44(uVar7 - uVar4,uVar6 - uVar15);
            FUN_01a4f4bc(&local_200);
            local_200 = PTR_DAT_04bb3140 + 0x10;
            plVar19 = (long *)FUN_01a5190c(&local_200,0,param_4 + 0xb08,0);
            local_238 = (undefined *)*plVar19;
            uVar18 = FUN_0277db54(&local_238);
            if ((uVar18 & 1) == 0) {
              bVar12 = false;
            }
            else {
              FUN_0124c030(local_3c0,&local_238);
              iVar13 = FUN_0123db50(&local_3b8,CONCAT44(uStack_3ac,local_3b0));
              bVar12 = iVar13 == 0x2d;
            }
            uVar18 = FUN_022beacc(&local_228);
            if ((uVar18 & 1) != 0) {
              FUN_0137d59c(&local_200,&local_228);
              uVar15 = FUN_009788f0(&local_200);
              if (!bVar12 && (uVar15 & 1) == 0) {
                *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 1;
              }
            }
            uVar18 = FUN_014d3868(puVar1,0x1f);
            if ((uVar18 & 1) != 0) {
              uVar20 = 0x11;
              goto LAB_014d28fc;
            }
            uVar18 = FUN_014d3868(puVar1,0x21);
            if ((uVar18 & 1) != 0) {
              local_200 = (undefined *)CONCAT44(local_200._4_4_,0x12);
              if (*(int *)(param_4 + 0x378) != 0x12) {
LAB_014d2c4c:
                FUN_03ebb160(param_4 + 0x370);
              }
LAB_014d2c54:
              uVar20 = 0x1b;
              goto LAB_014d3750;
            }
            if (bVar12) {
              *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 2;
              uVar18 = FUN_014d395c(puVar1,1);
              if ((uVar18 & 1) != 0) {
                uVar20 = 0x12;
                goto LAB_014d28fc;
              }
            }
LAB_014d2dd4:
            pbVar16 = (byte *)FUN_014d3868(puVar1,0x12);
            if (((ulong)pbVar16 & 1) != 0) {
              local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
              if (*(int *)(param_4 + 0x3c0) != 0) {
                FUN_03ebb160(param_4 + 0x3b8);
              }
              local_200 = (undefined *)CONCAT44(local_200._4_4_,8);
              if (*(int *)(param_4 + 0x378) == 8) {
                return 1;
              }
LAB_014d2e18:
              FUN_03ebb160(param_4 + 0x370);
              return 1;
            }
          }
          else {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0x11);
            if (iVar14 == 0x11) {
              pbVar16 = (byte *)FUN_014d38d0(puVar1,0x1f);
              if (((ulong)pbVar16 & 1) != 0) {
                iVar13 = 0x10;
LAB_014d2c10:
                local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar13);
                if (iVar14 == iVar13) {
                  return 1;
                }
                goto LAB_014d29c0;
              }
            }
            else {
              local_200 = (undefined *)CONCAT44(local_200._4_4_,0x13);
              if (iVar14 == 0x13) {
                *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 1;
                uVar18 = FUN_014d3868(puVar1,0x22);
                if ((uVar18 & 1) != 0) {
                  iVar13 = 0x14;
                  goto LAB_014d2c10;
                }
                uVar18 = FUN_014d3868(puVar1,0x23);
                if ((uVar18 & 1) != 0) {
                  local_200 = (undefined *)CONCAT44(local_200._4_4_,0x13);
                  if (iVar13 != 0x13) goto LAB_014d2c4c;
                  goto LAB_014d2c54;
                }
                uVar18 = FUN_0097b460(param_4 + 0xb08);
                if ((uVar18 & 1) == 0) {
                  iVar13 = FUN_01318a10(param_4 + 0xb08,0);
                  local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar13);
                  if (iVar13 != 0) goto LAB_014d2db0;
                }
                else {
LAB_014d2db0:
                  *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 2;
                }
                uVar18 = FUN_014d3868(puVar1,1);
                if ((uVar18 & 1) != 0) {
                  uVar20 = 0x15;
                  goto LAB_014d28fc;
                }
                goto LAB_014d2dd4;
              }
              local_200 = (undefined *)CONCAT44(local_200._4_4_,0x14);
              if (iVar14 == 0x14) {
                *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 1;
              }
            }
          }
          goto LAB_014d2e24;
        }
        uVar18 = FUN_014f3780(param_4 + 0x700);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 2;
        }
        uVar18 = FUN_014d38d0(puVar1,6);
        if ((uVar18 & 1) != 0) {
          FUN_014cbbfc(param_4);
          return 1;
        }
        uVar18 = FUN_014d38d0(puVar1,7);
        if ((uVar18 & 1) != 0) {
          FUN_014cbc84(param_4);
          return 1;
        }
        pbVar16 = (byte *)FUN_014f3780(param_4 + 0x700);
        if ((((ulong)pbVar16 & 1) != 0) &&
           (pbVar16 = (byte *)FUN_014d3868(puVar1,8), ((ulong)pbVar16 & 1) != 0)) {
          uVar20 = 9;
          goto LAB_014d28fc;
        }
        local_200 = (undefined *)CONCAT44(local_200._4_4_,4);
        if (((*(int *)(param_4 + 0x378) != 4) ||
            (pbVar16 = (byte *)FUN_014cc2ec(), ((ulong)pbVar16 & 1) == 0)) ||
           ((*(float *)(param_4 + 0xae8) == 0.0 &&
            ((*(float *)(param_4 + 0xaec) == 0.0 && (*(float *)(param_4 + 0xaf0) == 0.0))))))
        goto LAB_014d2e24;
        uVar18 = FUN_014d395c(puVar1,0x10);
        if (((uVar18 & 1) != 0) && (uVar18 = FUN_014cbe28(param_4), (uVar18 & 1) != 0))
        goto LAB_014d2a28;
        pbVar16 = (byte *)FUN_014d395c(puVar1,0x11);
        if ((((ulong)pbVar16 & 1) == 0) ||
           (pbVar16 = (byte *)FUN_014cbe28(param_4), ((ulong)pbVar16 & 1) == 0)) goto LAB_014d2e24;
        bVar8 = *(byte *)(param_4 + 0xa2c);
LAB_014d33c4:
        if ((bVar8 >> 6 & 1) == 0) {
          return 1;
        }
        *(undefined8 *)(param_4 + 0xe68) = 1;
        *(undefined1 *)(param_4 + 0xe72) = 0;
        *(undefined2 *)(param_4 + 0xe70) = 1;
LAB_014d30f4:
        *(undefined4 *)(param_4 + 0xe74) = 1;
        return 1;
      }
      uVar18 = FUN_014d395c(puVar1,2);
      if ((uVar18 & 1) == 0) {
        FUN_014ca328(param_4);
        return 1;
      }
      pbVar16 = (byte *)FUN_014d3868(puVar1,3);
      if (((ulong)pbVar16 & 1) != 0) {
        FUN_014ca6c8(param_4);
        return 1;
      }
      local_200 = (undefined *)CONCAT44(local_200._4_4_,4);
      if (((iVar13 == 4) && (pbVar16 = (byte *)FUN_014cc2ec(), ((ulong)pbVar16 & 1) != 0)) &&
         ((*(float *)(param_4 + 0xae8) != 0.0 ||
          ((*(float *)(param_4 + 0xaec) != 0.0 || (*(float *)(param_4 + 0xaf0) != 0.0)))))) {
        uVar18 = FUN_014d395c(puVar1,0x10);
        if (((uVar18 & 1) == 0) || (uVar18 = FUN_014cbe28(param_4), (uVar18 & 1) == 0)) {
          pbVar16 = (byte *)FUN_014d395c(puVar1,0x11);
          if ((((ulong)pbVar16 & 1) != 0) &&
             (pbVar16 = (byte *)FUN_014cbe28(param_4), ((ulong)pbVar16 & 1) != 0)) {
            if ((*(byte *)(param_4 + 0xa2c) >> 6 & 1) == 0) {
              return 1;
            }
            *(undefined8 *)(param_4 + 0xe68) = 1;
            goto LAB_014d3278;
          }
          goto LAB_014d2e24;
        }
LAB_014d2a28:
        bVar8 = *(byte *)(param_4 + 0xa2c);
LAB_014d3268:
        if ((bVar8 >> 6 & 1) == 0) {
          return 1;
        }
        *(undefined8 *)(param_4 + 0xe68) = 2;
LAB_014d3278:
        *(undefined1 *)(param_4 + 0xe72) = 0;
        *(undefined2 *)(param_4 + 0xe70) = 1;
        *(undefined4 *)(param_4 + 0xe74) = 1;
        return 1;
      }
LAB_014d2e24:
      uVar18 = FUN_014cc2ec(pbVar16);
      if ((uVar18 & 1) == 0) {
        return 0;
      }
      uVar20 = (undefined4)((ulong)local_200 >> 0x20);
      iVar13 = *(int *)(param_4 + 0x3c0);
      if (iVar13 != 0) {
        if ((iVar13 == 4) || (local_3c0[0] = 5, iVar13 == 5)) {
          pbVar16 = (byte *)(param_4 + 0xa2c);
          if ((*pbVar16 >> 6 & 1) == 0) {
            return 0;
          }
          local_200 = (undefined *)CONCAT44(uVar20,4);
          if (*(int *)(param_4 + 0x378) != 4) {
            return 0;
          }
          uVar18 = FUN_014d395c(puVar1,0xd);
          if ((uVar18 & 1) == 0) {
            uVar18 = FUN_014d395c(puVar1,0xc);
            if ((uVar18 & 1) == 0) {
              return 0;
            }
            if ((*pbVar16 >> 6 & 1) == 0) {
              return 1;
            }
            *(undefined1 *)(param_4 + 0xe72) = 0;
            goto LAB_014d3394;
          }
          if ((*pbVar16 >> 6 & 1) == 0) {
            return 1;
          }
          *(undefined8 *)(param_4 + 0xe68) = 1;
          *(undefined1 *)(param_4 + 0xe72) = 0;
LAB_014d30f0:
          *(undefined2 *)(param_4 + 0xe70) = 0;
          goto LAB_014d30f4;
        }
        local_200 = (undefined *)CONCAT44(uVar20,0x10);
        if (iVar13 == 0x10) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x800;
          uVar18 = FUN_014d3868(puVar1,9);
          if ((uVar18 & 1) == 0) {
            uVar18 = FUN_014d3868(puVar1,0x1e);
            if ((uVar18 & 1) != 0) {
              uVar18 = FUN_014cbf7c(param_4);
              if ((uVar18 & 1) == 0) {
                local_200 = (undefined *)((ulong)local_200._4_4_ << 0x20);
              }
              else {
                local_200 = (undefined *)CONCAT44(local_200._4_4_,0x13);
              }
              if (*(int *)(param_4 + 0x3c0) != (uint)local_200) goto LAB_014d373c;
            }
LAB_014d36c4:
            uVar18 = FUN_014d3868(puVar1,0x25);
            if ((uVar18 & 1) == 0) {
LAB_014d36ec:
              uVar18 = FUN_014d3868(puVar1,0x26);
              if ((uVar18 & 1) == 0) {
                return 0;
              }
              local_200 = (undefined *)CONCAT44(local_200._4_4_,0x15);
              if (*(int *)(param_4 + 0x378) == 0x15) {
                return 0;
              }
              goto LAB_014d37f4;
            }
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0x14);
            if (*(int *)(param_4 + 0x378) == 0x14) goto LAB_014d36ec;
LAB_014d3774:
            FUN_03ebb160(param_4 + 0x370);
            uVar20 = *(undefined4 *)PTR_DAT_04bb37e0;
            local_1f8 = CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,
                                 *(undefined4 *)(PTR_DAT_04bb37e0 + 4));
            uVar21 = 0xb;
LAB_014d3820:
            local_1f0 = 0;
            local_200 = (undefined *)CONCAT44(uVar20,uVar21);
            FUN_02ef3e18(&local_200);
            return 1;
          }
          local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
        }
        else {
          local_200 = (undefined *)CONCAT44(uVar20,0x13);
          if (iVar13 != 0x13) {
            return 0;
          }
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x1000;
          uVar18 = FUN_014d3868(puVar1,9);
          if (((uVar18 & 1) == 0) && (uVar18 = FUN_014d3868(puVar1,0x1e), (uVar18 & 1) == 0))
          goto LAB_014d36c4;
          local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
        }
LAB_014d373c:
        FUN_03ebb160(param_4 + 0x3b8);
        uVar20 = 0x1a;
LAB_014d3750:
        local_1f8 = 0;
        local_1e4 = 0;
        local_1f0 = 0x7fc00000;
        local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar20);
        FUN_014ca580(param_4,&local_200);
        return 1;
      }
      uVar15 = *(uint *)(param_4 + 0x378);
      lVar17 = param_4 + 0x370;
      local_200 = (undefined *)CONCAT44(uVar20,uVar15);
      if (((0x15 < uVar15) || ((1 << (ulong)(uVar15 & 0x1f) & 0x3fdfc0U) == 0)) &&
         ((lVar22 = *(long *)PTR_DAT_04bbbc38, lVar22 == 0 ||
          ((*(int *)(lVar22 + 0xc) != 3 || (1 < *(int *)(lVar22 + 0x10) - 5U)))))) {
        uVar18 = FUN_014d3868(puVar1,0x12);
        if ((uVar18 & 1) != 0) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,8);
          if (uVar15 != 8) goto LAB_014d36a4;
        }
        uVar18 = FUN_014d3868(puVar1,0x13);
        if ((uVar18 & 1) != 0) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,9);
          if (uVar15 != 9) goto LAB_014d36a4;
        }
        uVar18 = FUN_014d3868(puVar1,0x26);
        if ((uVar18 & 1) != 0) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0x15);
          if (uVar15 != 0x15) {
LAB_014d37f4:
            FUN_03ebb160(param_4 + 0x370);
            uVar20 = *(undefined4 *)PTR_DAT_04bb37e0;
            uVar21 = 0xc;
            local_1f8 = CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,
                                 *(undefined4 *)(PTR_DAT_04bb37e0 + 4));
            goto LAB_014d3820;
          }
        }
        uVar18 = FUN_014d3868(puVar1,0x1b);
        if ((uVar18 & 1) != 0) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0xe);
          FUN_03ebb160(param_4 + 0x3b8);
          uVar20 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_1f8 = CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,*(undefined4 *)(PTR_DAT_04bb37e0 + 4)
                              );
          uVar21 = 3;
          goto LAB_014d3820;
        }
        uVar18 = FUN_014d3868(puVar1,0x25);
        if ((uVar18 & 1) != 0) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0x14);
          if (uVar15 != 0x14) goto LAB_014d3774;
        }
      }
      if (((*(uint *)(param_4 + 0x5ec) >> 10 & 1) == 0) ||
         ((*(uint *)(param_4 + 0x5e4) >> 10 & 1) == 0)) {
LAB_014d2ff0:
        pbVar16 = (byte *)(param_4 + 0xa2c);
        if (((*pbVar16 >> 6 & 1) != 0) && (local_200._0_4_ = 4, uVar15 == 4)) {
          uVar18 = FUN_014d395c(puVar1,0xd);
          if ((uVar18 & 1) != 0) {
            if ((*pbVar16 >> 6 & 1) == 0) {
              return 1;
            }
            *(undefined8 *)(param_4 + 0xe68) = 1;
            *(undefined1 *)(param_4 + 0xe72) = 1;
            goto LAB_014d30f0;
          }
          uVar18 = FUN_014d395c(puVar1,0xc);
          if ((uVar18 & 1) != 0) {
            if ((*pbVar16 >> 6 & 1) == 0) {
              return 1;
            }
            *(undefined1 *)(param_4 + 0xe72) = 1;
LAB_014d3394:
            *(undefined8 *)(param_4 + 0xe68) = 2;
            *(undefined2 *)(param_4 + 0xe70) = 0;
            *(undefined4 *)(param_4 + 0xe74) = 1;
            return 1;
          }
        }
        local_200 = (undefined *)CONCAT44(local_200._4_4_,6);
        pbVar16 = (byte *)(param_4 + 0xa2c);
        if ((((*pbVar16 >> 6 & 1) != 0) &&
            (local_200 = (undefined *)CONCAT44(local_200._4_4_,4), uVar15 == 4)) &&
           ((*(float *)(param_4 + 0xae8) != 0.0 ||
            ((*(float *)(param_4 + 0xaec) != 0.0 || (*(float *)(param_4 + 0xaf0) != 0.0)))))) {
          uVar18 = FUN_014d395c(puVar1,0x10);
          if (((uVar18 & 1) != 0) && (uVar18 = FUN_014cbe28(param_4), (uVar18 & 1) != 0)) {
            bVar8 = *pbVar16;
            goto LAB_014d3268;
          }
          uVar18 = FUN_014d395c(puVar1,0x11);
          if (((uVar18 & 1) != 0) && (uVar18 = FUN_014cbe28(param_4), (uVar18 & 1) != 0)) {
            bVar8 = *pbVar16;
            goto LAB_014d33c4;
          }
        }
        bVar8 = *(byte *)(param_4 + 0xa2d);
        if ((bVar8 >> 4 & 1) != 0) {
          iVar13 = *(int *)(param_4 + 0x368);
          if (iVar13 == 3) {
LAB_014d3424:
            iVar13 = 0;
          }
          else {
            iVar14 = 3;
            if (iVar13 < 3) {
              iVar14 = iVar13 + 1;
            }
            iVar13 = 3;
            if (iVar14 < 3) {
              iVar13 = iVar14 + 1;
            }
            if ((bVar8 & 0x10) != 0) {
              iVar13 = iVar14;
            }
            if ((bVar8 >> 5 & 1) == 0) {
              if (2 < iVar13) goto LAB_014d3424;
              iVar13 = iVar13 + 1;
            }
            if (iVar13 == 3) goto LAB_014d3424;
          }
          local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar13);
          if (iVar13 == 1) {
            *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x800;
            uVar18 = FUN_014d3868(puVar1,0x1e);
            if ((uVar18 & 1) != 0) {
              local_200 = (undefined *)CONCAT44(local_200._4_4_,0x10);
              if (*(int *)(param_4 + 0x3c0) != 0x10) goto LAB_014d373c;
            }
          }
        }
        uVar18 = FUN_014cbf7c(param_4);
        if ((uVar18 & 1) != 0) {
          *(ushort *)(param_4 + 0xa2a) = *(ushort *)(param_4 + 0xa2a) | 0x1000;
          uVar18 = FUN_014d3868(puVar1,0x1e);
          if ((uVar18 & 1) != 0) {
            local_200 = (undefined *)CONCAT44(local_200._4_4_,0x13);
            if (*(int *)(param_4 + 0x3c0) != 0x13) goto LAB_014d373c;
          }
        }
        if (((*(uint *)(param_4 + 0x5f0) >> 10 & 1) != 0) &&
           (local_200._0_4_ = 0x2a, (*(uint *)(param_4 + 0x5e8) >> 10 & 1) != 0)) {
          uVar18 = FUN_033ff8d0(param_4 + 0x5d0);
          if (((uVar18 & 1) != 0) && (*(long *)PTR_DAT_04bb9a68 != 0)) {
            FUN_016b8158();
            return 1;
          }
          uVar18 = FUN_033ff6f0(param_4 + 0x5d0);
          if (((uVar18 & 1) != 0) && (*(long *)PTR_DAT_04bb2800 != 0)) {
            FUN_0206ff58();
            return 1;
          }
        }
        local_200 = (undefined *)CONCAT44(local_200._4_4_,0x27);
        if (((*(uint *)(param_4 + 0x5f0) >> 7 & 1) != 0) &&
           (local_200 = (undefined *)CONCAT44(local_200._4_4_,0x27),
           (*(uint *)(param_4 + 0x5e8) >> 7 & 1) != 0)) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0x1b);
          uVar18 = FUN_0290cbcc(&local_200);
          if (((uVar18 & 1) != 0) && (uVar18 = FUN_014c9540(param_4,4), (uVar18 & 1) != 0)) {
            uVar20 = 0x23;
            goto LAB_014d3750;
          }
        }
        uVar18 = FUN_014d3868(puVar1,9);
        if ((uVar18 & 1) == 0) {
          return 0;
        }
        if (*(uint *)(param_4 + 0xb28) < 2) {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,0x1b);
          uVar18 = FUN_0290cbcc(&local_200);
          if (((uVar18 & 1) == 0) || (uVar18 = FUN_014c9540(param_4,3), (uVar18 & 1) == 0)) {
            FUN_014c9d60(param_4);
            return 1;
          }
          uVar20 = 0x22;
          goto LAB_014d3750;
        }
        local_200._0_4_ = 3;
        if (*(int *)(param_4 + 0x378) == 3) {
          return 0;
        }
      }
      else {
        if (((*(byte *)(param_4 + 0xa2c) >> 6 & 1) != 0) && (uVar15 == 3)) {
          local_200._0_4_ = 4;
          FUN_03ebb160(lVar17);
          uVar20 = *(undefined4 *)(param_4 + 0xb28);
          lVar17 = FUN_014c9440(param_4);
          pbVar16 = (byte *)(**(code **)(*(long *)(lVar17 + 0x7a8) + 0xf0))(lVar17 + 0x7a8);
          bVar8 = *pbVar16;
          iVar13 = FUN_014cda0c();
          uVar15 = (uint)bVar8;
          iVar13 = iVar13 - uVar15;
          *(undefined4 *)(param_4 + 0xe64) = 0;
          *(undefined4 *)(param_4 + 0xe60) = uVar20;
          goto LAB_014d3688;
        }
        if ((*(char *)(param_4 + 0xa2c) < '\0') && (uVar15 == 4)) {
          local_200._0_4_ = 5;
        }
        else {
          local_200 = (undefined *)CONCAT44(local_200._4_4_,7);
          if ((*(char *)(param_4 + 0xa2c) < '\0') &&
             (local_200 = (undefined *)CONCAT44(local_200._4_4_,3), uVar15 != 3)) {
LAB_014d36a4:
            FUN_03ebb160(lVar17);
            return 1;
          }
          if (((*(byte *)(param_4 + 0xa2c) >> 6 & 1) == 0) || (uVar15 != 4)) goto LAB_014d2ff0;
          local_200._0_4_ = 3;
        }
      }
      FUN_03ebb160(lVar17);
      uVar20 = *(undefined4 *)(param_4 + 0xb28);
      lVar17 = FUN_014c9440(param_4);
      pbVar16 = (byte *)(**(code **)(*(long *)(lVar17 + 0x7a8) + 0xf0))(lVar17 + 0x7a8);
      bVar8 = *pbVar16;
      uVar15 = (uint)bVar8;
      iVar13 = FUN_014cda0c();
      *(undefined4 *)(param_4 + 0xe60) = uVar20;
      iVar13 = iVar13 - (uint)bVar8;
      *(undefined4 *)(param_4 + 0xe64) = 1;
LAB_014d3688:
      *(uint *)(param_4 + 0xe5c) = uVar15;
      *(int *)(param_4 + 0xe54) = iVar13;
      *(int *)(param_4 + 0xe58) = iVar13;
      return 1;
    }
    local_200._0_4_ = 0;
    if (((((*(uint *)(param_4 + 0x5ec) & 1) != 0) &&
         (local_200._0_4_ = 0, (*(uint *)(param_4 + 0x5dc) & 1) == 0)) &&
        (local_200._0_4_ = 0, (*puVar1 & 1) != 0)) &&
       ((local_200._0_4_ = 4, iVar13 != 4 && (uVar18 = FUN_014ca258(param_4), (uVar18 & 1) != 0))))
    {
      return 1;
    }
    lVar17 = FUN_014c9440(param_4);
    pbVar16 = (byte *)(**(code **)(*(long *)(lVar17 + 0x3b0) + 0xf0))(lVar17 + 0x3b0);
    local_200 = (undefined *)CONCAT44(local_200._4_4_,2);
    if ((((uint)*pbVar16 < *(uint *)(param_4 + 0x5fc)) ||
        (pbVar16 = (byte *)FUN_014d395c(puVar1,4), ((ulong)pbVar16 & 1) != 0)) &&
       (*(int *)(param_4 + 0xb58) != 0)) {
      lVar17 = param_4 + 0xb40;
      pbVar16 = (byte *)FUN_014ee438(lVar17);
      uVar15 = *(uint *)(param_4 + 0xb28);
      if (uVar15 - 2 < 6) {
        local_3c0[0] = (&DAT_041757a0)[(int)(uVar15 - 2)];
      }
      else {
        local_3c0[0] = 0;
      }
      pfVar3 = (float *)(param_4 + 0x408);
      pfVar5 = pfVar3 + (ulong)local_3c0[0] * 0x10;
      if (6 < local_3c0[0]) {
        pfVar5 = pfVar3;
      }
      if (((*pfVar5 <= pfVar5[3]) && (pfVar5[1] <= pfVar5[4])) && (pfVar5[2] <= pfVar5[5])) {
        pfVar5 = pfVar3 + (ulong)local_3c0[0] * 0x10;
        if (6 < local_3c0[0]) {
          pfVar5 = pfVar3;
        }
        if ((((extraout_s0 < (float)(int)pfVar5[10] * 5.0) ||
             ((float)(int)pfVar5[0xe] * 5.0 + 5.0 <= extraout_s0)) ||
            ((param_3 < (float)(int)pfVar5[0xb] * 5.0 ||
             ((float)(int)pfVar5[0xf] * 5.0 + 5.0 <= param_3)))) &&
           (((local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar15), 1 < uVar15 ||
             (*(int *)(param_4 + 0xb58) != 3)) ||
            ((*(float *)(param_4 + 0x588) <= *(float *)(param_4 + 0x594) &&
             (((*(float *)(param_4 + 0x58c) <= *(float *)(param_4 + 0x598) &&
               (*(float *)(param_4 + 0x590) <= *(float *)(param_4 + 0x59c))) &&
              ((extraout_s0 < (float)*(int *)(param_4 + 0x5b0) * 5.0 ||
               ((((float)*(int *)(param_4 + 0x5c0) * 5.0 + 5.0 <= extraout_s0 ||
                 (param_3 < (float)*(int *)(param_4 + 0x5b4) * 5.0)) ||
                ((float)*(int *)(param_4 + 0x5c4) * 5.0 + 5.0 <= param_3))))))))))))
        goto LAB_014d2904;
      }
      local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar15);
      if (*(int *)(param_4 + 0x378) == 4) {
        *(float *)(param_4 + 0xa40) = param_2;
      }
      *(float *)(param_4 + 0xa3c) = extraout_s0;
      *(float *)(param_4 + 0xa44) = param_3;
      if ((*(int *)(param_4 + 0xb58) == 0) ||
         (pbVar16 = (byte *)FUN_014e9718(lVar17), ((ulong)pbVar16 & 1) == 0)) goto LAB_014d2904;
      FUN_014e70e0(param_4 + 0x720,lVar17);
      FUN_014e9900(param_4 + 0x720,param_4 + 0x740,param_4 + 0xa3c,0);
      uVar20 = 4;
      *(undefined4 *)(param_4 + 0x714) = *(undefined4 *)(param_4 + 0xa3c);
      *(undefined4 *)(param_4 + 0x718) = *(undefined4 *)(param_4 + 0xa40);
      *(undefined4 *)(param_4 + 0x71c) = *(undefined4 *)(param_4 + 0xa44);
      *(undefined4 *)(param_4 + 0x708) = *(undefined4 *)(param_4 + 0xa3c);
      *(undefined4 *)(param_4 + 0x70c) = *(undefined4 *)(param_4 + 0xa40);
      *(undefined4 *)(param_4 + 0x710) = *(undefined4 *)(param_4 + 0xa44);
LAB_014d28fc:
      local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar20);
    }
    else {
LAB_014d2904:
      if ((((*(uint *)(param_4 + 0x5ec) >> 2 & 1) != 0) &&
          (local_200 = (undefined *)CONCAT44(local_200._4_4_,2),
          (*(uint *)(param_4 + 0x5dc) >> 2 & 1) != 0)) ||
         ((uVar18 = (ulong)local_200._4_4_, (*(uint *)(param_4 + 0x5ec) & 1) != 0 &&
          (local_200 = (undefined *)(uVar18 << 0x20), (*(uint *)(param_4 + 0x5dc) & 1) != 0))))
      goto LAB_014d2e24;
      local_200 = (undefined *)(uVar18 << 0x20);
    }
    iVar23 = *(int *)(param_4 + 0x3c0);
    iVar13 = (uint)local_200;
  }
  if (iVar23 == iVar13) {
    return 1;
  }
LAB_014d29c0:
  FUN_03ebb160(param_4 + 0x3b8);
  return 1;
}

