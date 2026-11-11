
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00656ec0(long *param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  size_t __n;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  float *pfVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint *puVar24;
  long lVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  undefined1 uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  undefined4 *puVar38;
  uint uVar39;
  uint *in_x16;
  uint *puVar40;
  uint *in_x17;
  long lVar41;
  long lVar42;
  long lVar43;
  void *pvVar44;
  void *pvVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  fVar56 = DAT_0413f4b0;
  uVar14 = _DAT_0413f3c8;
  fVar55 = DAT_0413f3c4;
  fVar49 = DAT_0413f3c0;
  bVar7 = *(byte *)((long)param_2 + 0xc);
  bVar8 = *(byte *)((long)param_1 + 0xc);
  uVar18 = (ulong)param_3;
  if (((uint)bVar8 == (uint)bVar7) &&
     ((uint)*(byte *)((long)param_1 + 0xd) == (uint)*(byte *)((long)param_2 + 0xd))) {
    if (bVar7 == 8) {
LAB_00657030:
      uVar21 = 4;
      goto LAB_006574ac;
    }
    uVar21 = (uint)*(byte *)((long)param_1 + 0xd) * (uint)(byte)(&DAT_04146cb8)[bVar7] + 3;
  }
  else {
    uVar21 = (uint)bVar7;
    uVar33 = (uint)bVar8;
    if (((uVar21 - 3 | bVar8 - 3) & 0xff) < 2) {
      if (uVar33 == 8) goto LAB_00657030;
      uVar21 = (uint)*(byte *)((long)param_1 + 0xd) * (uint)(byte)(&DAT_04146cb8)[bVar8] + 3;
    }
    else {
      uVar39 = (uint)bVar7;
      if ((uVar33 != uVar21) ||
         ((uint)*(byte *)((long)param_1 + 0xd) < (uint)*(byte *)((long)param_2 + 0xd))) {
        switch(uVar33) {
        case 2:
          goto code_r0x00657040;
        case 3:
        case 4:
          if (1 < uVar39 - 7) {
            if (uVar39 != 2) {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar18 = (ulong)bVar7;
            if (bVar7 != *(byte *)((long)param_2 + 0xd)) {
              return;
            }
            if (bVar7 == 0) {
              return;
            }
            lVar31 = *param_1;
            lVar25 = *param_2;
            lVar42 = param_2[1];
            uVar21 = 0;
            lVar41 = param_1[1];
            puVar28 = (undefined1 *)(lVar31 + 8);
            do {
              if (uVar18 - 1 < 7) {
                lVar43 = 0;
              }
              else {
                lVar43 = 0;
                puVar12 = puVar28;
                do {
                  puVar5 = (undefined1 *)(lVar25 + lVar43);
                  lVar43 = lVar43 + 8;
                  *puVar5 = puVar12[-8];
                  puVar5[1] = puVar12[-6];
                  puVar5[2] = puVar12[-4];
                  puVar5[3] = puVar12[-2];
                  puVar5[4] = *puVar12;
                  puVar5[5] = puVar12[2];
                  puVar5[6] = puVar12[4];
                  puVar1 = puVar12 + 6;
                  puVar12 = puVar12 + 0x10;
                  puVar5[7] = *puVar1;
                } while (uVar18 - (uVar18 & 7) != lVar43);
              }
              if ((bVar7 & 7) != 0) {
                lVar19 = -(uVar18 & 7);
                do {
                  lVar19 = lVar19 + 1;
                  *(char *)(lVar25 + lVar43) = (char)*(undefined2 *)(lVar31 + lVar43 * 2);
                  lVar43 = lVar43 + 1;
                } while (lVar19 != 0);
              }
              uVar21 = uVar21 + 1;
              lVar25 = lVar25 + (int)lVar42;
              lVar31 = lVar31 + (int)lVar41;
              puVar28 = puVar28 + (int)lVar41;
            } while (uVar21 != param_3);
            return;
          }
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            return;
          }
          if (*(char *)((long)param_2 + 0xd) != '\x04') {
            return;
          }
          if (uVar33 != 3) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          lVar25 = param_1[1];
          uVar21 = *(uint *)(param_2 + 1);
          puVar24 = (uint *)*param_2;
          pbVar29 = (byte *)(*param_1 + 4);
          do {
            pbVar3 = pbVar29 + -4;
            puVar16 = (ushort *)(pbVar29 + -2);
            bVar7 = *pbVar29;
            puVar17 = (ushort *)(pbVar29 + 2);
            pbVar29 = pbVar29 + (long)(int)lVar25 * 2;
            *puVar24 = (uint)*pbVar3 | (*puVar16 & 0xff) << 8 | (uint)bVar7 << 0x10 |
                       (uint)*puVar17 << 0x18;
            puVar24 = (uint *)((long)puVar24 + ((long)((ulong)uVar21 << 0x20) >> 0x21));
            uVar33 = (int)uVar18 - 1;
            uVar18 = (ulong)uVar33;
          } while (uVar33 != 0);
          return;
        default:
          if ((uVar39 == 10) && (uVar33 == 0xb)) {
            if (*(char *)((long)param_1 + 0xd) == '\x01') {
              if ((int)param_3 < 1) {
                return;
              }
              bVar7 = *(byte *)((long)param_2 + 0xd);
              uVar18 = (ulong)bVar7;
              if (bVar7 == 0) {
                return;
              }
              uVar33 = *(uint *)(param_2 + 1);
              uVar39 = *(uint *)(param_1 + 1);
              lVar25 = *param_2;
              lVar31 = *param_1;
              uVar21 = 0;
              do {
                if (uVar18 - 1 < 7) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = 0;
                  lVar42 = 0x10;
                  do {
                    puVar13 = (undefined4 *)(lVar31 + lVar42);
                    puVar23 = (undefined4 *)(lVar25 + lVar42);
                    lVar42 = lVar42 + 0x20;
                    puVar23[-4] = puVar13[-4];
                    puVar23[-3] = puVar13[-3];
                    puVar23[-2] = puVar13[-2];
                    puVar23[-1] = puVar13[-1];
                    *puVar23 = *puVar13;
                    puVar23[1] = puVar13[1];
                    puVar23[2] = puVar13[2];
                    lVar41 = lVar41 + 8;
                    puVar23[3] = puVar13[3];
                  } while (uVar18 - (uVar18 & 7) != lVar41);
                }
                if ((bVar7 & 7) != 0) {
                  lVar41 = lVar41 << 2;
                  lVar42 = -(uVar18 & 7);
                  do {
                    lVar42 = lVar42 + 1;
                    *(undefined4 *)(lVar25 + lVar41) = *(undefined4 *)(lVar31 + lVar41);
                    lVar41 = lVar41 + 4;
                  } while (lVar42 != 0);
                }
                uVar21 = uVar21 + 1;
                lVar25 = lVar25 + ((long)((ulong)uVar33 << 0x20) >> 0x22) * 4;
                lVar31 = lVar31 + ((long)((ulong)uVar39 << 0x20) >> 0x22) * 4;
              } while (uVar21 != param_3);
              return;
            }
LAB_00657da4:
            FUN_004426d0(auStack_280,auStack_270,0x200);
            uVar14 = FUN_0043ac90(auStack_280,"Cannot convert vertex format from ");
            uVar14 = FUN_0043ad00(uVar14,*(undefined1 *)((long)param_1 + 0xc));
            uVar14 = FUN_0043ac90(uVar14,&DAT_040bf28b);
            FUN_0043ad00(uVar14,*(undefined1 *)((long)param_2 + 0xc));
            FUN_004221e0(0xabba4523,auStack_270,
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Utils/VertexBufferUtil/hkMeshVertexBufferUtil.cpp"
                         ,0x70f);
            FUN_00442760(auStack_280);
            return;
          }
          if (uVar33 != 8) {
            if ((uVar33 == 6) && (*(char *)((long)param_1 + 0xd) == '\x01')) {
              if (uVar21 == 8) {
                iVar32 = (int)param_1[1];
                lVar31 = *param_1;
                puVar13 = (undefined4 *)*param_2;
                lVar25 = param_2[1];
                if ((iVar32 != 4) || ((int)lVar25 != 4)) {
                  if (iVar32 * param_3 == 0) {
                    return;
                  }
                  lVar42 = 0;
                  do {
                    puVar23 = (undefined4 *)(lVar31 + lVar42);
                    lVar42 = lVar42 + iVar32;
                    *puVar13 = *puVar23;
                    puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar25);
                  } while ((int)(iVar32 * param_3) != lVar42);
                  return;
                }
LAB_00657ca8:
                FUN_0043a3b0(puVar13,lVar31,param_3 << 2);
                return;
              }
              if ((uVar21 == 10) && (*(char *)((long)param_1 + 0xe) == '\x03')) {
                if ((int)param_3 < 1) {
                  return;
                }
                puVar24 = (uint *)*param_1;
                uVar21 = (int)param_2[1] >> 2;
                auVar51 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x1f0);
                auVar52 = NEON_ext(auVar51,auVar51,8,1);
                uVar33 = (int)param_1[1] >> 2;
                pfVar27 = (float *)*param_2;
                auVar51 = NEON_ext(auVar52,auVar51,8,1);
                do {
                  uVar39 = *puVar24;
                  puVar24 = (uint *)((long)puVar24 +
                                    (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar33 << 2));
                  auVar53._0_8_ = CONCAT44(uVar39 >> 8,uVar39) & 0xff000000ff;
                  auVar53._8_4_ = uVar39 >> 0x10 & 0xff;
                  uVar10 = (int)uVar18 - 1;
                  uVar18 = (ulong)uVar10;
                  auVar53._12_4_ = uVar39 >> 0x18;
                  auVar52 = NEON_scvtf(auVar53,4);
                  pfVar27[2] = auVar51._8_4_ * auVar52._8_4_;
                  pfVar27[3] = auVar51._12_4_ * auVar52._12_4_;
                  *pfVar27 = auVar51._0_4_ * auVar52._0_4_;
                  pfVar27[1] = auVar51._4_4_ * auVar52._4_4_;
                  pfVar27 = (float *)((long)pfVar27 +
                                     (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar21 << 2));
                } while (uVar10 != 0);
                return;
              }
            }
            goto LAB_00657da4;
          }
          if (*(char *)((long)param_1 + 0xd) != '\x04') {
            if (*(char *)((long)param_1 + 0xd) == '\x01') {
              if (uVar39 == 10) {
                if ((int)param_3 < 1) {
                  return;
                }
                if (bVar7 != 10) {
                  return;
                }
                uVar21 = (int)param_2[1] >> 2;
                uVar33 = (int)param_1[1] >> 2;
                pfVar27 = (float *)*param_2;
                puVar24 = (uint *)*param_1;
                auVar51 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x1f0);
                auVar52 = NEON_ext(auVar51,auVar51,8,1);
                auVar51 = NEON_ext(auVar52,auVar51,8,1);
                do {
                  uVar39 = *puVar24;
                  puVar24 = (uint *)((long)puVar24 +
                                    (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar33 << 2));
                  auVar54._0_8_ = CONCAT44(uVar39 >> 8,uVar39) & 0xff000000ff;
                  auVar54._8_4_ = uVar39 >> 0x10 & 0xff;
                  uVar10 = (int)uVar18 - 1;
                  uVar18 = (ulong)uVar10;
                  auVar54._12_4_ = uVar39 >> 0x18;
                  auVar52 = NEON_scvtf(auVar54,4);
                  pfVar27[2] = auVar51._8_4_ * auVar52._8_4_;
                  pfVar27[3] = auVar51._12_4_ * auVar52._12_4_;
                  *pfVar27 = auVar51._0_4_ * auVar52._0_4_;
                  pfVar27[1] = auVar51._4_4_ * auVar52._4_4_;
                  pfVar27 = (float *)((long)pfVar27 +
                                     (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar21 << 2));
                } while (uVar10 != 0);
                return;
              }
              if (bVar7 == 6) {
                iVar32 = (int)param_1[1];
                lVar31 = *param_1;
                puVar13 = (undefined4 *)*param_2;
                lVar25 = param_2[1];
                if ((iVar32 != 4) || ((int)lVar25 != 4)) {
                  if (iVar32 * param_3 == 0) {
                    return;
                  }
                  lVar42 = 0;
                  do {
                    puVar23 = (undefined4 *)(lVar31 + lVar42);
                    lVar42 = lVar42 + iVar32;
                    *puVar13 = *puVar23;
                    puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar25);
                  } while ((int)(iVar32 * param_3) != lVar42);
                  return;
                }
                goto LAB_00657ca8;
              }
            }
            goto LAB_00657da4;
          }
          if (uVar39 != 2) goto LAB_00657da4;
LAB_00658970:
          bVar7 = *(byte *)((long)param_1 + 0xd);
          uVar21 = (uint)bVar7;
          if (uVar21 != *(byte *)((long)param_2 + 0xd)) {
            return;
          }
          if (1 < *(byte *)((long)param_1 + 0xc) - 7) {
            return;
          }
          if (*(char *)((long)param_2 + 0xc) != '\x02') {
            return;
          }
          puVar24 = (uint *)*param_2;
          puVar13 = (undefined4 *)*param_1;
          if (uVar21 - 1 < 4) {
            lVar25 = (long)(int)param_1[1];
            lVar31 = (long)(int)param_2[1];
            switch(uVar21) {
            case 1:
              if (0 < (int)param_3) {
                uVar21 = param_3 & 3;
                if (2 < param_3 - 1) {
                  iVar32 = uVar21 - param_3;
                  do {
                    *(char *)puVar24 = (char)*puVar13;
                    puVar23 = (undefined4 *)((long)puVar13 + lVar25 + lVar25);
                    *(undefined1 *)((long)puVar24 + lVar31) =
                         (char)*(undefined4 *)((long)puVar13 + lVar25);
                    puVar13 = (undefined4 *)((long)puVar23 + lVar25);
                    puVar28 = (undefined1 *)((long)puVar24 + lVar31) + lVar31;
                    *puVar28 = (char)*puVar23;
                    puVar28[lVar31] = (char)*puVar13;
                    puVar13 = (undefined4 *)((long)puVar13 + lVar25);
                    puVar24 = (uint *)(puVar28 + lVar31 + lVar31);
                    iVar32 = iVar32 + 4;
                  } while (iVar32 != 0);
                }
                if (uVar21 != 0) {
                  iVar32 = -uVar21;
                  do {
                    *(char *)puVar24 = (char)*puVar13;
                    puVar13 = (undefined4 *)((long)puVar13 + lVar25);
                    puVar24 = (uint *)((long)puVar24 + lVar31);
                    iVar32 = iVar32 + 1;
                  } while (iVar32 != 0);
                }
              }
              break;
            case 2:
              if (0 < (int)param_3) {
                if (param_3 != 1) {
                  iVar32 = (param_3 & 1) - param_3;
                  do {
                    uVar6 = *puVar13;
                    *(char *)puVar24 = (char)uVar6;
                    *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
                    uVar6 = *(undefined4 *)((long)puVar13 + lVar25);
                    puVar28 = (undefined1 *)((long)puVar24 + lVar31);
                    *puVar28 = (char)uVar6;
                    puVar28[1] = (char)((uint)uVar6 >> 8);
                    puVar13 = (undefined4 *)((long)puVar13 + lVar25 + lVar25);
                    puVar24 = (uint *)(puVar28 + lVar31);
                    iVar32 = iVar32 + 2;
                  } while (iVar32 != 0);
                }
                if ((param_3 & 1) != 0) {
                  uVar6 = *puVar13;
                  *(char *)puVar24 = (char)uVar6;
                  *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
                  return;
                }
              }
              break;
            case 3:
              if ((int)param_3 < 1) {
                return;
              }
              if (param_3 != 1) {
                iVar32 = (param_3 & 1) - param_3;
                do {
                  uVar6 = *puVar13;
                  *(char *)puVar24 = (char)uVar6;
                  *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
                  *(char *)((long)puVar24 + 2) = (char)((uint)uVar6 >> 0x10);
                  uVar6 = *(undefined4 *)((long)puVar13 + lVar25);
                  puVar28 = (undefined1 *)((long)puVar24 + lVar31);
                  *puVar28 = (char)uVar6;
                  puVar28[1] = (char)((uint)uVar6 >> 8);
                  puVar28[2] = (char)((uint)uVar6 >> 0x10);
                  puVar13 = (undefined4 *)((long)puVar13 + lVar25 + lVar25);
                  puVar24 = (uint *)(puVar28 + lVar31);
                  iVar32 = iVar32 + 2;
                } while (iVar32 != 0);
              }
              goto joined_r0x00658cb4;
            case 4:
              if (0 < (int)param_3) {
                puVar28 = (undefined1 *)((long)puVar24 + 1);
                do {
                  uVar6 = *puVar13;
                  puVar28[-1] = (char)uVar6;
                  puVar28[1] = (char)((uint)uVar6 >> 0x10);
                  *puVar28 = (char)((uint)uVar6 >> 8);
                  puVar28[2] = (char)((uint)uVar6 >> 0x18);
                  puVar13 = (undefined4 *)((long)puVar13 + lVar25);
                  puVar28 = puVar28 + lVar31;
                  uVar21 = (int)uVar18 - 1;
                  uVar18 = (ulong)uVar21;
                } while (uVar21 != 0);
              }
            }
          }
          else {
            if ((int)param_3 < 1) {
              return;
            }
            uVar21 = (uint)(bVar7 >> 2);
            bVar8 = bVar7 & 3;
            if (uVar21 != 0) {
              bVar7 = bVar7 >> 2;
              if (bVar8 == 3) {
                uVar33 = 0;
                do {
                  puVar22 = puVar24;
                  puVar23 = puVar13;
                  if (uVar21 != 1) {
                    iVar32 = (bVar7 & 1) - uVar21;
                    do {
                      puVar36 = puVar22;
                      uVar6 = *puVar23;
                      *(char *)puVar36 = (char)uVar6;
                      *(char *)((long)puVar36 + 1) = (char)((uint)uVar6 >> 8);
                      *(char *)((long)puVar36 + 2) = (char)((uint)uVar6 >> 0x10);
                      *(char *)((long)puVar36 + 3) = (char)((uint)uVar6 >> 0x18);
                      uVar6 = puVar23[1];
                      *(char *)(puVar36 + 1) = (char)uVar6;
                      *(char *)((long)puVar36 + 5) = (char)((uint)uVar6 >> 8);
                      *(char *)((long)puVar36 + 6) = (char)((uint)uVar6 >> 0x10);
                      *(char *)((long)puVar36 + 7) = (char)((uint)uVar6 >> 0x18);
                      puVar23 = puVar23 + 2;
                      puVar22 = puVar36 + 2;
                      iVar32 = iVar32 + 2;
                    } while (iVar32 != 0);
                    in_x16 = puVar36 + 1;
                  }
                  puVar36 = puVar22;
                  puVar38 = puVar23;
                  if ((bVar7 & 1) != 0) {
                    puVar38 = puVar23 + 1;
                    uVar6 = *puVar23;
                    *(char *)puVar22 = (char)uVar6;
                    *(char *)((long)puVar22 + 1) = (char)((uint)uVar6 >> 8);
                    *(char *)((long)puVar22 + 2) = (char)((uint)uVar6 >> 0x10);
                    *(char *)((long)puVar22 + 3) = (char)((uint)uVar6 >> 0x18);
                    puVar36 = puVar22 + 1;
                    in_x16 = puVar22;
                  }
                  uVar6 = *puVar38;
                  uVar33 = uVar33 + 1;
                  *(char *)puVar36 = (char)uVar6;
                  *(char *)((long)in_x16 + 5) = (char)((uint)uVar6 >> 8);
                  *(char *)((long)in_x16 + 6) = (char)((uint)uVar6 >> 0x10);
                } while (uVar33 != param_3);
                return;
              }
              uVar33 = 0;
              do {
                while (puVar23 = puVar13, uVar21 == 1) {
                  puVar22 = puVar24;
                  if ((bVar7 & 1) == 0) goto LAB_00658cd8;
LAB_00658d6c:
                  puVar38 = puVar23 + 1;
                  uVar6 = *puVar23;
                  *(char *)puVar22 = (char)uVar6;
                  *(char *)((long)puVar22 + 1) = (char)((uint)uVar6 >> 8);
                  *(char *)((long)puVar22 + 2) = (char)((uint)uVar6 >> 0x10);
                  *(char *)((long)puVar22 + 3) = (char)((uint)uVar6 >> 0x18);
                  puVar36 = puVar22 + 1;
                  if (bVar8 == 1) goto LAB_00658d9c;
LAB_00658ce0:
                  if (bVar8 == 2) {
                    uVar6 = *puVar38;
                    *(char *)puVar36 = (char)uVar6;
                    *(char *)((long)puVar22 + 5) = (char)((uint)uVar6 >> 8);
                  }
                  uVar33 = uVar33 + 1;
                  in_x17 = puVar22;
                  if (uVar33 == param_3) {
                    return;
                  }
                }
                puVar22 = puVar24;
                iVar32 = (bVar7 & 1) - uVar21;
                do {
                  puVar36 = puVar22;
                  uVar6 = *puVar23;
                  *(char *)puVar36 = (char)uVar6;
                  *(char *)((long)puVar36 + 1) = (char)((uint)uVar6 >> 8);
                  *(char *)((long)puVar36 + 2) = (char)((uint)uVar6 >> 0x10);
                  *(char *)((long)puVar36 + 3) = (char)((uint)uVar6 >> 0x18);
                  uVar6 = puVar23[1];
                  *(char *)(puVar36 + 1) = (char)uVar6;
                  *(char *)((long)puVar36 + 5) = (char)((uint)uVar6 >> 8);
                  *(char *)((long)puVar36 + 6) = (char)((uint)uVar6 >> 0x10);
                  *(char *)((long)puVar36 + 7) = (char)((uint)uVar6 >> 0x18);
                  puVar23 = puVar23 + 2;
                  puVar22 = puVar36 + 2;
                  iVar32 = iVar32 + 2;
                } while (iVar32 != 0);
                in_x17 = puVar36 + 1;
                if ((bVar7 & 1) != 0) goto LAB_00658d6c;
LAB_00658cd8:
                puVar36 = puVar22;
                puVar38 = puVar23;
                puVar22 = in_x17;
                if (bVar8 != 1) goto LAB_00658ce0;
LAB_00658d9c:
                *(char *)puVar36 = (char)*puVar38;
                uVar33 = uVar33 + 1;
                in_x17 = puVar22;
                if (uVar33 == param_3) {
                  return;
                }
              } while( true );
            }
            if (bVar8 != 3) {
              do {
                if (bVar8 == 1) {
                  uVar30 = (undefined1)*puVar13;
                  puVar22 = puVar24;
LAB_00658de4:
                  *(undefined1 *)puVar22 = uVar30;
                }
                else if (bVar8 == 2) {
                  uVar6 = *puVar13;
                  *(char *)puVar24 = (char)uVar6;
                  uVar30 = (undefined1)((uint)uVar6 >> 8);
                  puVar22 = (uint *)((long)puVar24 + 1);
                  goto LAB_00658de4;
                }
                uVar21 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar21;
                if (uVar21 == 0) {
                  return;
                }
              } while( true );
            }
            if (param_3 != 1) {
              iVar32 = (param_3 & 1) - param_3;
              do {
                uVar6 = *puVar13;
                *(char *)puVar24 = (char)uVar6;
                *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
                *(char *)((long)puVar24 + 2) = (char)((uint)uVar6 >> 0x10);
                uVar6 = *puVar13;
                *(char *)puVar24 = (char)uVar6;
                iVar32 = iVar32 + 2;
                *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
                *(char *)((long)puVar24 + 2) = (char)((uint)uVar6 >> 0x10);
              } while (iVar32 != 0);
            }
joined_r0x00658cb4:
            if ((param_3 & 1) != 0) {
              uVar6 = *puVar13;
              *(char *)puVar24 = (char)uVar6;
              *(char *)((long)puVar24 + 1) = (char)((uint)uVar6 >> 8);
              *(char *)((long)puVar24 + 2) = (char)((uint)uVar6 >> 0x10);
              return;
            }
          }
          return;
        case 7:
          switch(uVar39) {
          case 2:
            goto LAB_00658970;
          case 3:
            if (*(char *)((long)param_1 + 0xd) != '\x04') {
              return;
            }
            if (*(char *)((long)param_2 + 0xd) != '\x04') {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            uVar21 = (int)param_2[1] >> 1;
            lVar25 = param_1[1];
            puVar13 = (undefined4 *)*param_1;
            puVar17 = (ushort *)(*param_2 + 4);
            do {
              uVar6 = *puVar13;
              puVar13 = (undefined4 *)((long)puVar13 + (long)(int)lVar25);
              puVar17[-2] = (ushort)uVar6 & 0xff;
              puVar17[-1] = (ushort)((uint)uVar6 >> 8) & 0xff;
              *puVar17 = (ushort)((uint)uVar6 >> 0x10) & 0xff;
              puVar17[1] = (ushort)(byte)((uint)uVar6 >> 0x18);
              uVar33 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar33;
              puVar17 = (ushort *)
                        ((long)puVar17 +
                        (-(ulong)(uVar21 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar21 << 1));
            } while (uVar33 != 0);
            return;
          default:
            return;
          case 8:
            if (*(char *)((long)param_1 + 0xd) != *(char *)((long)param_2 + 0xd)) {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            if (*(char *)((long)param_1 + 0xd) != '\x04') {
              return;
            }
            puVar28 = (undefined1 *)(*param_1 + 3);
            lVar25 = param_2[1];
            lVar31 = param_1[1];
            puVar12 = (undefined1 *)(*param_2 + 1);
            do {
              puVar12[-1] = puVar28[-3];
              *puVar12 = puVar28[-2];
              puVar12[1] = puVar28[-1];
              puVar12[2] = *puVar28;
              uVar21 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar21;
              puVar28 = puVar28 + (int)lVar31;
              puVar12 = puVar12 + (int)lVar25;
            } while (uVar21 != 0);
            return;
          case 10:
            if (*(char *)((long)param_1 + 0xd) != *(char *)((long)param_2 + 0xd)) {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            if (*(char *)((long)param_1 + 0xd) != '\x04') {
              return;
            }
            uVar21 = (int)param_2[1] >> 2;
            lVar25 = param_1[1];
            puVar26 = (undefined8 *)*param_2;
            puVar28 = (undefined1 *)(*param_1 + 3);
            do {
              auVar50._1_3_ = 0;
              auVar50[0] = puVar28[-3];
              auVar50[4] = puVar28[-2];
              auVar50._5_3_ = 0;
              auVar50[8] = puVar28[-1];
              uVar30 = *puVar28;
              puVar28 = puVar28 + (int)lVar25;
              auVar50._9_3_ = 0;
              auVar50[0xc] = uVar30;
              auVar50._13_3_ = 0;
              auVar51 = NEON_scvtf(auVar50,4);
              uVar33 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar33;
              puVar26[1] = auVar51._8_8_;
              *puVar26 = auVar51._0_8_;
              puVar26 = (undefined8 *)
                        ((long)puVar26 +
                        (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2));
            } while (uVar33 != 0);
            return;
          }
        case 10:
          switch(uVar39) {
          case 2:
            goto switchD_0065729c_caseD_2;
          default:
            return;
          case 8:
            if (*(char *)((long)param_1 + 0xd) != '\x04') {
              return;
            }
            if (*(char *)((long)param_2 + 0xd) != '\x01') {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            auVar51._4_4_ = DAT_0413f3c4;
            auVar51._0_4_ = DAT_0413f3c0;
            auVar51._8_8_ = _DAT_0413f3c8;
            uVar21 = (int)param_2[1] >> 2;
            uVar33 = (int)param_1[1] >> 2;
            pfVar27 = (float *)*param_1;
            puVar24 = (uint *)*param_2;
            do {
              fVar56 = *pfVar27;
              pfVar15 = pfVar27 + 1;
              pfVar2 = pfVar27 + 2;
              pfVar11 = pfVar27 + 3;
              pfVar27 = (float *)((long)pfVar27 +
                                 (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2
                                 ));
              uVar39 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar39;
              auVar52._0_4_ = fVar49 * fVar56;
              auVar52._4_4_ = fVar55 * *pfVar15;
              auVar52._8_4_ = (float)uVar14 * *pfVar2;
              auVar52._12_4_ = (float)((ulong)uVar14 >> 0x20) * *pfVar11;
              auVar52 = NEON_fmax(auVar52,ZEXT816(0),4);
              auVar52 = NEON_fmin(auVar51,auVar52,4);
              *puVar24 = (int)(auVar52._12_4_ + 8388608.0) << 0x18 |
                         (uint)(auVar52._0_4_ + 8388608.0) & 0xff |
                         ((uint)(auVar52._4_4_ + 8388608.0) & 0xff) << 8 |
                         ((uint)(auVar52._8_4_ + 8388608.0) & 0xff) << 0x10;
              puVar24 = (uint *)((long)puVar24 +
                                (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2)
                                );
            } while (uVar39 != 0);
            return;
          case 10:
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar47 = (ulong)bVar7;
            if (*(byte *)((long)param_2 + 0xd) < bVar7) {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            pvVar45 = (void *)*param_2;
            lVar25 = (long)((ulong)*(uint *)(param_2 + 1) << 0x20) >> 0x22;
            uVar21 = (uint)*(byte *)((long)param_2 + 0xd);
            if (bVar7 != 0) {
              lVar31 = *param_1;
              uVar46 = uVar47 & 7;
              lVar42 = (long)((ulong)*(uint *)(param_1 + 1) << 0x20) >> 0x22;
              if (bVar7 < uVar21) {
                uVar48 = 0;
                pvVar44 = pvVar45;
                do {
                  if (uVar47 - 1 < 7) {
                    lVar43 = 0;
                  }
                  else {
                    lVar43 = 0;
                    lVar41 = 0x10;
                    do {
                      puVar13 = (undefined4 *)(lVar31 + lVar41);
                      puVar23 = (undefined4 *)((long)pvVar44 + lVar41);
                      lVar41 = lVar41 + 0x20;
                      puVar23[-4] = puVar13[-4];
                      puVar23[-3] = puVar13[-3];
                      puVar23[-2] = puVar13[-2];
                      puVar23[-1] = puVar13[-1];
                      *puVar23 = *puVar13;
                      puVar23[1] = puVar13[1];
                      puVar23[2] = puVar13[2];
                      lVar43 = lVar43 + 8;
                      puVar23[3] = puVar13[3];
                    } while (uVar47 - uVar46 != lVar43);
                  }
                  if ((bVar7 & 7) != 0) {
                    lVar43 = lVar43 << 2;
                    lVar41 = -uVar46;
                    do {
                      lVar41 = lVar41 + 1;
                      *(undefined4 *)((long)pvVar44 + lVar43) = *(undefined4 *)(lVar31 + lVar43);
                      lVar43 = lVar43 + 4;
                    } while (lVar41 != 0);
                  }
                  memset((void *)((long)pvVar45 + (uVar47 + uVar48 * lVar25) * 4),0,
                         (ulong)(uVar21 + ~(uint)bVar7) * 4 + 4);
                  pvVar44 = (void *)((long)pvVar44 + lVar25 * 4);
                  uVar48 = uVar48 + 1;
                  lVar31 = lVar31 + lVar42 * 4;
                } while (uVar48 != uVar18);
                return;
              }
              uVar48 = 0;
              do {
                if (uVar47 - 1 < 7) {
                  lVar43 = 0;
                }
                else {
                  lVar43 = 0;
                  lVar41 = 0x10;
                  do {
                    puVar13 = (undefined4 *)(lVar31 + lVar41);
                    puVar23 = (undefined4 *)((long)pvVar45 + lVar41);
                    lVar41 = lVar41 + 0x20;
                    puVar23[-4] = puVar13[-4];
                    puVar23[-3] = puVar13[-3];
                    puVar23[-2] = puVar13[-2];
                    puVar23[-1] = puVar13[-1];
                    *puVar23 = *puVar13;
                    puVar23[1] = puVar13[1];
                    puVar23[2] = puVar13[2];
                    lVar43 = lVar43 + 8;
                    puVar23[3] = puVar13[3];
                  } while (uVar47 - uVar46 != lVar43);
                }
                if ((bVar7 & 7) != 0) {
                  lVar43 = lVar43 << 2;
                  lVar41 = -uVar46;
                  do {
                    lVar41 = lVar41 + 1;
                    *(undefined4 *)((long)pvVar45 + lVar43) = *(undefined4 *)(lVar31 + lVar43);
                    lVar43 = lVar43 + 4;
                  } while (lVar41 != 0);
                }
                uVar48 = uVar48 + 1;
                pvVar45 = (void *)((long)pvVar45 + lVar25 * 4);
                lVar31 = lVar31 + lVar42 * 4;
              } while (uVar48 != uVar18);
              return;
            }
            if (uVar21 == 0) {
              return;
            }
            __n = (ulong)(uVar21 + ~(uint)bVar7) * 4 + 4;
            if (uVar18 - 1 < 3) {
              lVar31 = 0;
            }
            else {
              lVar31 = 0;
              pvVar44 = pvVar45;
              do {
                memset(pvVar44,0,__n);
                memset((void *)((long)pvVar44 + lVar25 * 4),0,__n);
                memset((void *)((long)pvVar44 + lVar25 * 8),0,__n);
                memset((void *)((long)pvVar44 + lVar25 * 0xc),0,__n);
                lVar31 = lVar31 + 4;
                pvVar44 = (void *)((long)pvVar44 + lVar25 * 0x10);
              } while (uVar18 - (uVar18 & 3) != lVar31);
            }
            if ((param_3 & 3) == 0) {
              return;
            }
            pvVar45 = (void *)((long)pvVar45 + lVar31 * lVar25 * 4);
            lVar31 = -(uVar18 & 3);
            do {
              memset(pvVar45,0,__n);
              pvVar45 = (void *)((long)pvVar45 + lVar25 * 4);
              lVar31 = lVar31 + 1;
            } while (lVar31 != 0);
            return;
          case 0xb:
            if (*(char *)((long)param_1 + 0xd) != '\x03') {
              return;
            }
            if (*(char *)((long)param_2 + 0xd) != '\x01') {
              return;
            }
            if ((int)param_3 < 1) {
              return;
            }
            uVar21 = (int)param_2[1] >> 2;
            uVar33 = (int)param_1[1] >> 2;
            puVar13 = (undefined4 *)(*param_1 + 8);
            puVar23 = (undefined4 *)(*param_2 + 8);
            do {
              puVar23[-2] = puVar13[-2];
              puVar23[-1] = puVar13[-1];
              *puVar23 = *puVar13;
              puVar23[1] = 0;
              uVar39 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar39;
              puVar23 = (undefined4 *)
                        ((long)puVar23 +
                        (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2));
              puVar13 = (undefined4 *)
                        ((long)puVar13 +
                        (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2));
            } while (uVar39 != 0);
            return;
          }
        }
      }
      if (uVar39 == 8) goto LAB_00657030;
      uVar21 = (uint)*(byte *)((long)param_2 + 0xd) * (uint)(byte)(&DAT_04146cb8)[bVar7] + 3;
    }
  }
  uVar21 = uVar21 & 0x1fffc;
LAB_006574ac:
  FUN_00655d80(*param_1,(int)param_1[1],*param_2,(int)param_2[1],uVar21);
  return;
switchD_0065729c_caseD_2:
  bVar7 = *(byte *)((long)param_1 + 0xd);
  uVar47 = (ulong)bVar7;
  bVar8 = *(byte *)((long)param_2 + 0xd);
  uVar18 = (ulong)bVar8;
  lVar41 = (long)(int)param_1[1];
  lVar42 = (long)(int)param_2[1];
  lVar31 = *param_1;
  lVar25 = *param_2;
  if ((uint)bVar7 == (uint)bVar8) {
    if ((int)param_3 < 1) {
      return;
    }
    if (bVar7 == 0) {
      return;
    }
    uVar21 = 0;
    pfVar27 = (float *)(lVar31 + 8);
    do {
      if (uVar47 - 1 < 3) {
        lVar43 = 0;
      }
      else {
        lVar43 = 0;
        pfVar15 = pfVar27;
        do {
          puVar28 = (undefined1 *)(lVar25 + lVar43);
          *puVar28 = (char)(int)(fVar49 * pfVar15[-2]);
          lVar43 = lVar43 + 4;
          puVar28[1] = (char)(int)(fVar49 * pfVar15[-1]);
          puVar28[2] = (char)(int)(fVar49 * *pfVar15);
          pfVar2 = pfVar15 + 1;
          pfVar15 = pfVar15 + 4;
          puVar28[3] = (char)(int)(fVar49 * *pfVar2);
        } while (uVar47 - (uVar47 & 3) != lVar43);
      }
      if ((bVar7 & 3) != 0) {
        lVar19 = -(uVar47 & 3);
        do {
          lVar19 = lVar19 + 1;
          *(char *)(lVar25 + lVar43) = (char)(int)(fVar49 * *(float *)(lVar31 + lVar43 * 4));
          lVar43 = lVar43 + 1;
        } while (lVar19 != 0);
      }
      uVar21 = uVar21 + 1;
      lVar25 = lVar25 + lVar42;
      lVar31 = lVar31 + lVar41;
      pfVar27 = (float *)((long)pfVar27 + lVar41);
    } while (uVar21 != param_3);
    return;
  }
  uVar21 = (uint)bVar8;
  if (*(char *)((long)param_1 + 0xe) == '\a') {
    cVar9 = *(char *)((long)param_2 + 0xe);
    if (cVar9 == '\b') {
      if ((int)param_3 < 1) {
        return;
      }
      if (bVar8 - 1 != (uint)bVar7) {
        return;
      }
      if (uVar21 == 0) {
        return;
      }
      uVar21 = 0;
      pfVar27 = (float *)(lVar31 + 8);
      do {
        if (uVar18 - 1 < 3) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          pfVar15 = pfVar27;
          do {
            puVar28 = (undefined1 *)(lVar25 + lVar43);
            *puVar28 = (char)(int)(fVar49 * pfVar15[-2]);
            lVar43 = lVar43 + 4;
            puVar28[1] = (char)(int)(fVar49 * pfVar15[-1]);
            puVar28[2] = (char)(int)(fVar49 * *pfVar15);
            pfVar2 = pfVar15 + 1;
            pfVar15 = pfVar15 + 4;
            puVar28[3] = (char)(int)(fVar49 * *pfVar2);
          } while (uVar18 - (uVar18 & 3) != lVar43);
        }
        if ((bVar8 & 3) != 0) {
          lVar19 = -(uVar18 & 3);
          do {
            lVar19 = lVar19 + 1;
            *(char *)(lVar25 + lVar43) = (char)(int)(fVar49 * *(float *)(lVar31 + lVar43 * 4));
            lVar43 = lVar43 + 1;
          } while (lVar19 != 0);
        }
        uVar21 = uVar21 + 1;
        lVar25 = lVar25 + lVar42;
        lVar31 = lVar31 + lVar41;
        pfVar27 = (float *)((long)pfVar27 + lVar41);
      } while (uVar21 != param_3);
      return;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0xe) == '\b') goto LAB_00658094;
    cVar9 = *(char *)((long)param_2 + 0xe);
  }
  if (cVar9 != '\a') {
    return;
  }
LAB_00658094:
  if ((int)param_3 < 1) {
    return;
  }
  if (bVar7 - 1 != uVar21) {
    return;
  }
  if (uVar21 != 0) {
    uVar33 = 0;
    pfVar27 = (float *)(lVar31 + 4);
    do {
      fVar55 = 0.0;
      if (uVar21 == 1) {
        lVar43 = 0;
      }
      else {
        lVar43 = 0;
        pfVar15 = pfVar27;
        do {
          fVar56 = pfVar15[-1];
          puVar28 = (undefined1 *)(lVar25 + lVar43);
          *puVar28 = (char)(int)(fVar49 * fVar56);
          fVar55 = fVar55 + fVar49 * fVar56 + fVar49 * *pfVar15;
          lVar43 = lVar43 + 2;
          puVar28[1] = (char)(int)(fVar49 * *pfVar15);
          pfVar15 = pfVar15 + 2;
        } while (uVar18 - (uVar18 & 1) != lVar43);
      }
      if ((bVar8 & 1) != 0) {
        fVar56 = fVar49 * *(float *)(lVar31 + lVar43 * 4);
        fVar55 = fVar55 + fVar56;
        *(char *)(lVar25 + lVar43) = (char)(int)fVar56;
      }
      uVar33 = uVar33 + 1;
      lVar31 = lVar31 + lVar41;
      pfVar27 = (float *)((long)pfVar27 + lVar41);
      *(char *)(lVar25 + uVar18) = (char)(int)(fVar49 - fVar55);
      lVar25 = lVar25 + lVar42;
    } while (uVar33 != param_3);
    return;
  }
  uVar21 = param_3 & 3;
  uVar30 = (undefined1)(int)DAT_0413f3c0;
  if (2 < param_3 - 1) {
    iVar32 = uVar21 - param_3;
    lVar31 = lVar25;
    do {
      lVar25 = lVar31 + lVar42 * 4;
      iVar32 = iVar32 + 4;
      *(undefined1 *)(lVar31 + uVar18) = uVar30;
      *(undefined1 *)(lVar31 + lVar42 + uVar18) = uVar30;
      *(undefined1 *)(lVar31 + lVar42 * 2 + uVar18) = uVar30;
      *(undefined1 *)(lVar31 + lVar42 * 3 + uVar18) = uVar30;
      lVar31 = lVar25;
    } while (iVar32 != 0);
  }
  if (uVar21 == 0) {
    return;
  }
  puVar28 = (undefined1 *)(lVar25 + uVar18);
  iVar32 = -uVar21;
  do {
    *puVar28 = uVar30;
    puVar28 = puVar28 + lVar42;
    iVar32 = iVar32 + 1;
  } while (iVar32 != 0);
  return;
code_r0x00657040:
  switch(uVar21 - 3) {
  case 0:
    if (0 < (int)param_3) {
      bVar7 = *(byte *)((long)param_1 + 0xd);
      uVar18 = (ulong)bVar7;
      if ((bVar7 == *(byte *)((long)param_2 + 0xd)) && (bVar7 != 0)) {
        lVar25 = *param_2;
        lVar31 = *param_1;
        lVar42 = param_2[1];
        uVar21 = 0;
        lVar41 = param_1[1];
        puVar17 = (ushort *)(lVar25 + 8);
        do {
          if (uVar18 - 1 < 7) {
            lVar43 = 0;
          }
          else {
            lVar43 = 0;
            puVar16 = puVar17;
            do {
              pbVar29 = (byte *)(lVar31 + lVar43);
              lVar43 = lVar43 + 8;
              puVar16[-4] = (ushort)*pbVar29;
              puVar16[-3] = (ushort)pbVar29[1];
              puVar16[-2] = (ushort)pbVar29[2];
              puVar16[-1] = (ushort)pbVar29[3];
              *puVar16 = (ushort)pbVar29[4];
              puVar16[1] = (ushort)pbVar29[5];
              puVar16[2] = (ushort)pbVar29[6];
              puVar16[3] = (ushort)pbVar29[7];
              puVar16 = puVar16 + 8;
            } while (uVar18 - (uVar18 & 7) != lVar43);
          }
          if ((bVar7 & 7) != 0) {
            lVar19 = -(uVar18 & 7);
            do {
              lVar19 = lVar19 + 1;
              *(ushort *)(lVar25 + lVar43 * 2) = (ushort)*(byte *)(lVar31 + lVar43);
              lVar43 = lVar43 + 1;
            } while (lVar19 != 0);
          }
          uVar21 = uVar21 + 1;
          lVar25 = lVar25 + (int)lVar42;
          lVar31 = lVar31 + (int)lVar41;
          puVar17 = (ushort *)((long)puVar17 + (long)(int)lVar42);
        } while (uVar21 != param_3);
      }
    }
    break;
  case 1:
    if (0 < (int)param_3) {
      bVar7 = *(byte *)((long)param_1 + 0xd);
      uVar18 = (ulong)bVar7;
      bVar8 = *(byte *)((long)param_2 + 0xd);
      uVar47 = (ulong)bVar8;
      if (bVar7 <= bVar8) {
        lVar31 = *param_1;
        lVar25 = *param_2;
        uVar46 = uVar18 - 1;
        lVar42 = (long)(int)param_2[1];
        uVar21 = (uint)bVar7;
        uVar33 = (uint)bVar8;
        lVar41 = (long)(int)param_1[1];
        if (uVar21 == 0) {
          if (uVar33 > uVar21) {
            uVar21 = 0;
            lVar43 = lVar25 + 0xe;
            do {
              uVar48 = uVar18;
              if ((bVar8 & 7) != 0) {
                lVar19 = -((ulong)uVar33 & 7);
                do {
                  lVar19 = lVar19 + 1;
                  *(ushort *)(lVar25 + uVar48 * 2) = (ushort)*(byte *)(lVar31 + uVar46);
                  uVar48 = uVar48 + 1;
                } while (lVar19 != 0);
              }
              if (6 < ~uVar18 + uVar47) {
                lVar20 = uVar47 - uVar48;
                lVar19 = lVar43;
                do {
                  puVar17 = (ushort *)(lVar19 + uVar48 * 2);
                  lVar19 = lVar19 + 0x10;
                  puVar17[-7] = (ushort)*(byte *)(lVar31 + uVar46);
                  lVar20 = lVar20 + -8;
                  puVar17[-6] = (ushort)*(byte *)(lVar31 + uVar46);
                  puVar17[-5] = (ushort)*(byte *)(lVar31 + uVar46);
                  puVar17[-4] = (ushort)*(byte *)(lVar31 + uVar46);
                  puVar17[-3] = (ushort)*(byte *)(lVar31 + uVar46);
                  puVar17[-2] = (ushort)*(byte *)(lVar31 + uVar46);
                  puVar17[-1] = (ushort)*(byte *)(lVar31 + uVar46);
                  *puVar17 = (ushort)*(byte *)(lVar31 + uVar46);
                } while (lVar20 != 0);
              }
              uVar21 = uVar21 + 1;
              lVar25 = lVar25 + lVar42;
              lVar31 = lVar31 + lVar41;
              lVar43 = lVar43 + lVar42;
            } while (uVar21 != param_3);
          }
        }
        else if (uVar33 <= uVar21) {
          uVar21 = 0;
          puVar17 = (ushort *)(lVar25 + 8);
          do {
            if (uVar46 < 7) {
              lVar43 = 0;
            }
            else {
              lVar43 = 0;
              puVar16 = puVar17;
              do {
                pbVar29 = (byte *)(lVar31 + lVar43);
                lVar43 = lVar43 + 8;
                puVar16[-4] = (ushort)*pbVar29;
                puVar16[-3] = (ushort)pbVar29[1];
                puVar16[-2] = (ushort)pbVar29[2];
                puVar16[-1] = (ushort)pbVar29[3];
                *puVar16 = (ushort)pbVar29[4];
                puVar16[1] = (ushort)pbVar29[5];
                puVar16[2] = (ushort)pbVar29[6];
                puVar16[3] = (ushort)pbVar29[7];
                puVar16 = puVar16 + 8;
              } while (uVar18 - (uVar18 & 7) != lVar43);
            }
            if ((bVar7 & 7) != 0) {
              lVar19 = -(uVar18 & 7);
              do {
                lVar19 = lVar19 + 1;
                *(ushort *)(lVar25 + lVar43 * 2) = (ushort)*(byte *)(lVar31 + lVar43);
                lVar43 = lVar43 + 1;
              } while (lVar19 != 0);
            }
            uVar21 = uVar21 + 1;
            lVar25 = lVar25 + lVar42;
            lVar31 = lVar31 + lVar41;
            puVar17 = (ushort *)((long)puVar17 + lVar42);
          } while (uVar21 != param_3);
        }
        else {
          uVar39 = 0;
          puVar17 = (ushort *)(lVar25 + 8);
          lVar43 = lVar25 + 0xe;
          do {
            if (uVar46 < 7) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              puVar16 = puVar17;
              do {
                pbVar29 = (byte *)(lVar31 + lVar19);
                lVar19 = lVar19 + 8;
                puVar16[-4] = (ushort)*pbVar29;
                puVar16[-3] = (ushort)pbVar29[1];
                puVar16[-2] = (ushort)pbVar29[2];
                puVar16[-1] = (ushort)pbVar29[3];
                *puVar16 = (ushort)pbVar29[4];
                puVar16[1] = (ushort)pbVar29[5];
                puVar16[2] = (ushort)pbVar29[6];
                puVar16[3] = (ushort)pbVar29[7];
                puVar16 = puVar16 + 8;
              } while (uVar18 - (uVar18 & 7) != lVar19);
            }
            if ((bVar7 & 7) != 0) {
              lVar20 = -(uVar18 & 7);
              do {
                lVar20 = lVar20 + 1;
                *(ushort *)(lVar25 + lVar19 * 2) = (ushort)*(byte *)(lVar31 + lVar19);
                lVar19 = lVar19 + 1;
              } while (lVar20 != 0);
            }
            uVar48 = uVar18;
            if ((uVar33 - uVar21 & 7) != 0) {
              lVar19 = -((ulong)(uVar33 - uVar21) & 7);
              do {
                lVar19 = lVar19 + 1;
                *(ushort *)(lVar25 + uVar48 * 2) = (ushort)*(byte *)(lVar31 + uVar46);
                uVar48 = uVar48 + 1;
              } while (lVar19 != 0);
            }
            if (6 < ~uVar18 + uVar47) {
              lVar20 = uVar47 - uVar48;
              lVar19 = lVar43;
              do {
                puVar16 = (ushort *)(lVar19 + uVar48 * 2);
                lVar19 = lVar19 + 0x10;
                puVar16[-7] = (ushort)*(byte *)(lVar31 + uVar46);
                lVar20 = lVar20 + -8;
                puVar16[-6] = (ushort)*(byte *)(lVar31 + uVar46);
                puVar16[-5] = (ushort)*(byte *)(lVar31 + uVar46);
                puVar16[-4] = (ushort)*(byte *)(lVar31 + uVar46);
                puVar16[-3] = (ushort)*(byte *)(lVar31 + uVar46);
                puVar16[-2] = (ushort)*(byte *)(lVar31 + uVar46);
                puVar16[-1] = (ushort)*(byte *)(lVar31 + uVar46);
                *puVar16 = (ushort)*(byte *)(lVar31 + uVar46);
              } while (lVar20 != 0);
            }
            uVar39 = uVar39 + 1;
            lVar25 = lVar25 + lVar42;
            lVar31 = lVar31 + lVar41;
            puVar17 = (ushort *)((long)puVar17 + lVar42);
            lVar43 = lVar43 + lVar42;
          } while (uVar39 != param_3);
        }
      }
    }
    break;
  case 4:
  case 5:
    bVar7 = *(byte *)((long)param_1 + 0xd);
    uVar21 = (uint)bVar7;
    if (uVar21 != *(byte *)((long)param_2 + 0xd)) {
      return;
    }
    puVar22 = (uint *)*param_2;
    puVar24 = (uint *)*param_1;
    if (uVar21 - 1 < 4) {
      lVar25 = (long)(int)param_1[1];
      lVar31 = (long)(int)param_2[1];
      switch(uVar21) {
      case 1:
        if (0 < (int)param_3) {
          uVar21 = param_3 & 3;
          if (2 < param_3 - 1) {
            iVar32 = uVar21 - param_3;
            do {
              *puVar22 = (uint)(byte)*puVar24;
              pbVar29 = (byte *)((long)puVar24 + lVar25) + lVar25;
              *(uint *)((long)puVar22 + lVar31) = (uint)*(byte *)((long)puVar24 + lVar25);
              puVar22 = (uint *)((long)puVar22 + lVar31 + lVar31);
              *puVar22 = (uint)*pbVar29;
              puVar22 = (uint *)((long)puVar22 + lVar31);
              *puVar22 = (uint)pbVar29[lVar25];
              puVar24 = (uint *)(pbVar29 + lVar25 + lVar25);
              puVar22 = (uint *)((long)puVar22 + lVar31);
              iVar32 = iVar32 + 4;
            } while (iVar32 != 0);
          }
          if (uVar21 != 0) {
            iVar32 = -uVar21;
            do {
              *puVar22 = (uint)(byte)*puVar24;
              puVar24 = (uint *)((long)puVar24 + lVar25);
              puVar22 = (uint *)((long)puVar22 + lVar31);
              iVar32 = iVar32 + 1;
            } while (iVar32 != 0);
          }
        }
        break;
      case 2:
        if ((int)param_3 < 1) {
          return;
        }
        if (param_3 != 1) {
          iVar32 = (param_3 & 1) - param_3;
          do {
            puVar17 = (ushort *)((long)puVar24 + lVar25);
            *puVar22 = (uint)(ushort)*puVar24;
            puVar24 = (uint *)((long)puVar17 + lVar25);
            *(uint *)((long)puVar22 + lVar31) = (uint)*puVar17;
            puVar22 = (uint *)((long)puVar22 + lVar31 + lVar31);
            iVar32 = iVar32 + 2;
          } while (iVar32 != 0);
        }
        goto joined_r0x00658908;
      case 3:
        if (0 < (int)param_3) {
          puVar28 = (undefined1 *)((long)puVar24 + 2);
          do {
            puVar4 = (undefined2 *)(puVar28 + -2);
            uVar30 = *puVar28;
            puVar28 = puVar28 + lVar25;
            *puVar22 = (uint)CONCAT12(uVar30,*puVar4);
            puVar22 = (uint *)((long)puVar22 + lVar31);
            uVar21 = (int)uVar18 - 1;
            uVar18 = (ulong)uVar21;
          } while (uVar21 != 0);
        }
        break;
      case 4:
        if (0 < (int)param_3) {
          lVar42 = (long)puVar24 + 3;
          do {
            *puVar22 = *(uint *)(lVar42 + -3);
            puVar22 = (uint *)((long)puVar22 + lVar31);
            uVar21 = (int)uVar18 - 1;
            uVar18 = (ulong)uVar21;
            lVar42 = lVar42 + lVar25;
          } while (uVar21 != 0);
        }
      }
    }
    else {
      if ((int)param_3 < 1) {
        return;
      }
      uVar21 = (uint)(bVar7 >> 2);
      bVar8 = bVar7 & 3;
      if (uVar21 != 0) {
        bVar7 = bVar7 >> 2;
        if (bVar8 == 3) {
          uVar33 = 0;
          do {
            puVar34 = puVar22;
            puVar36 = puVar24;
            if (uVar21 != 1) {
              iVar32 = (bVar7 & 1) - uVar21;
              do {
                puVar35 = puVar36;
                *puVar34 = *puVar35;
                puVar34[1] = puVar35[1];
                puVar36 = puVar35 + 2;
                puVar34 = puVar34 + 2;
                iVar32 = iVar32 + 2;
              } while (iVar32 != 0);
              in_x16 = puVar35 + 1;
            }
            puVar35 = puVar34;
            puVar37 = puVar36;
            puVar40 = in_x16;
            if ((bVar7 & 1) != 0) {
              puVar37 = puVar36 + 1;
              puVar35 = puVar34 + 1;
              *puVar34 = *puVar36;
              puVar40 = puVar36;
            }
            in_x16 = (uint *)(ulong)*(byte *)((long)puVar40 + 6);
            uVar33 = uVar33 + 1;
            *puVar35 = (uint)CONCAT12(*(byte *)((long)puVar40 + 6),
                                      CONCAT11(*(undefined1 *)((long)puVar40 + 5),(char)*puVar37));
          } while (uVar33 != param_3);
          return;
        }
        uVar33 = 0;
        do {
          puVar34 = puVar22;
          puVar36 = puVar24;
          if (uVar21 == 1) {
            if ((bVar7 & 1) == 0) goto LAB_0065878c;
LAB_006587e0:
            puVar37 = puVar36 + 1;
            puVar35 = puVar34 + 1;
            *puVar34 = *puVar36;
            in_x17 = puVar36;
            if (bVar8 == 1) goto LAB_006587fc;
LAB_00658794:
            if (bVar8 == 2) {
              pbVar29 = (byte *)((long)in_x17 + 5);
              in_x17 = (uint *)(ulong)*pbVar29;
              uVar39 = (uint)CONCAT11(*pbVar29,(char)*puVar37);
              goto LAB_00658800;
            }
          }
          else {
            iVar32 = (bVar7 & 1) - uVar21;
            do {
              puVar35 = puVar36;
              *puVar34 = *puVar35;
              puVar34[1] = puVar35[1];
              puVar36 = puVar35 + 2;
              puVar34 = puVar34 + 2;
              iVar32 = iVar32 + 2;
            } while (iVar32 != 0);
            in_x17 = puVar35 + 1;
            if ((bVar7 & 1) != 0) goto LAB_006587e0;
LAB_0065878c:
            puVar35 = puVar34;
            puVar37 = puVar36;
            if (bVar8 != 1) goto LAB_00658794;
LAB_006587fc:
            uVar39 = (uint)(byte)*puVar37;
LAB_00658800:
            *puVar35 = uVar39;
          }
          uVar33 = uVar33 + 1;
          if (uVar33 == param_3) {
            return;
          }
        } while( true );
      }
      if (bVar8 == 3) {
        do {
          uVar21 = (int)uVar18 - 1;
          uVar18 = (ulong)uVar21;
          *puVar22 = (uint)(uint3)*puVar24;
        } while (uVar21 != 0);
        return;
      }
      if (bVar8 == 1) {
        uVar21 = param_3 & 3;
        if (2 < param_3 - 1) {
          iVar32 = uVar21 - param_3;
          do {
            *puVar22 = (uint)(byte)*puVar24;
            *puVar22 = (uint)(byte)*puVar24;
            *puVar22 = (uint)(byte)*puVar24;
            iVar32 = iVar32 + 4;
            *puVar22 = (uint)(byte)*puVar24;
          } while (iVar32 != 0);
        }
        if (uVar21 == 0) {
          return;
        }
        iVar32 = -uVar21;
        do {
          iVar32 = iVar32 + 1;
          *puVar22 = (uint)(byte)*puVar24;
        } while (iVar32 != 0);
        return;
      }
      if (bVar8 != 2) {
        return;
      }
      if (param_3 != 1) {
        iVar32 = (param_3 & 1) - param_3;
        do {
          *puVar22 = (uint)(ushort)*puVar24;
          iVar32 = iVar32 + 2;
          *puVar22 = (uint)(ushort)*puVar24;
        } while (iVar32 != 0);
      }
joined_r0x00658908:
      if ((param_3 & 1) != 0) {
        *puVar22 = (uint)(ushort)*puVar24;
      }
    }
    break;
  case 7:
    bVar7 = *(byte *)((long)param_1 + 0xd);
    bVar8 = *(byte *)((long)param_2 + 0xd);
    uVar18 = (ulong)bVar8;
    lVar41 = (long)(int)param_1[1];
    lVar42 = (long)(int)param_2[1];
    lVar31 = *param_1;
    lVar25 = *param_2;
    uVar21 = (uint)bVar7;
    if ((uint)bVar7 == (uint)bVar8) {
      if ((int)param_3 < 1) {
        return;
      }
      if (uVar21 == 0) {
        return;
      }
      uVar33 = 0;
      pfVar27 = (float *)(lVar25 + 4);
      do {
        if (uVar21 == 1) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          pfVar15 = pfVar27;
          do {
            pbVar29 = (byte *)(lVar31 + lVar43);
            lVar43 = lVar43 + 2;
            bVar8 = *pbVar29;
            uVar14 = NEON_scvtf((ulong)CONCAT14(bVar8,(uint)bVar8),4);
            pfVar15[-1] = fVar56 * (float)uVar14;
            bVar8 = pbVar29[1];
            uVar14 = NEON_scvtf((ulong)CONCAT14(bVar8,(uint)bVar8),4);
            *pfVar15 = fVar56 * (float)uVar14;
            pfVar15 = pfVar15 + 2;
          } while ((ulong)bVar7 - ((ulong)bVar7 & 1) != lVar43);
        }
        if ((bVar7 & 1) != 0) {
          uVar14 = NEON_scvtf((ulong)CONCAT14(*(byte *)(lVar31 + lVar43),
                                              (uint)*(byte *)(lVar31 + lVar43)),4);
          *(float *)(lVar25 + lVar43 * 4) = fVar56 * (float)uVar14;
        }
        uVar33 = uVar33 + 1;
        lVar25 = lVar25 + lVar42;
        lVar31 = lVar31 + lVar41;
        pfVar27 = (float *)((long)pfVar27 + lVar42);
      } while (uVar33 != param_3);
      return;
    }
    uVar33 = (uint)bVar8;
    if (*(char *)((long)param_1 + 0xe) == '\a') {
      cVar9 = *(char *)((long)param_2 + 0xe);
      if (cVar9 == '\b') {
        if ((int)param_3 < 1) {
          return;
        }
        if (bVar8 - 1 != (uint)bVar7) {
          return;
        }
        if (uVar33 == 0) {
          return;
        }
        uVar21 = 0;
        pfVar27 = (float *)(lVar25 + 4);
        do {
          if (uVar33 == 1) {
            lVar43 = 0;
          }
          else {
            lVar43 = 0;
            pfVar15 = pfVar27;
            do {
              pbVar29 = (byte *)(lVar31 + lVar43);
              lVar43 = lVar43 + 2;
              bVar7 = *pbVar29;
              uVar14 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
              pfVar15[-1] = fVar56 * (float)uVar14;
              bVar7 = pbVar29[1];
              uVar14 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
              *pfVar15 = fVar56 * (float)uVar14;
              pfVar15 = pfVar15 + 2;
            } while (uVar18 - (uVar18 & 1) != lVar43);
          }
          if ((bVar8 & 1) != 0) {
            uVar14 = NEON_scvtf((ulong)CONCAT14(*(byte *)(lVar31 + lVar43),
                                                (uint)*(byte *)(lVar31 + lVar43)),4);
            *(float *)(lVar25 + lVar43 * 4) = fVar56 * (float)uVar14;
          }
          uVar21 = uVar21 + 1;
          lVar25 = lVar25 + lVar42;
          lVar31 = lVar31 + lVar41;
          pfVar27 = (float *)((long)pfVar27 + lVar42);
        } while (uVar21 != param_3);
        return;
      }
LAB_006582f8:
      if (cVar9 != '\a') {
        return;
      }
    }
    else if (*(char *)((long)param_1 + 0xe) != '\b') {
      cVar9 = *(char *)((long)param_2 + 0xe);
      goto LAB_006582f8;
    }
    if ((0 < (int)param_3) && (uVar21 - 1 == uVar33)) {
      if (uVar33 == 0) {
        fVar49 = DAT_0413f4b0 * DAT_0413f3c0;
        uVar21 = param_3 & 3;
        if (2 < param_3 - 1) {
          lVar41 = uVar18 * 4;
          iVar32 = uVar21 - param_3;
          lVar31 = lVar25;
          do {
            lVar25 = lVar31 + lVar42 * 4;
            iVar32 = iVar32 + 4;
            *(float *)(lVar31 + lVar41) = fVar49;
            *(float *)(lVar31 + lVar41 + lVar42) = fVar49;
            *(float *)(lVar31 + lVar41 + lVar42 * 2) = fVar49;
            *(float *)(lVar31 + lVar41 + lVar42 * 3) = fVar49;
            lVar31 = lVar25;
          } while (iVar32 != 0);
        }
        if (uVar21 != 0) {
          pfVar27 = (float *)(lVar25 + uVar18 * 4);
          iVar32 = -uVar21;
          do {
            *pfVar27 = fVar49;
            pfVar27 = (float *)((long)pfVar27 + lVar42);
            iVar32 = iVar32 + 1;
          } while (iVar32 != 0);
        }
      }
      else {
        uVar21 = 0;
        pfVar27 = (float *)(lVar25 + 4);
        do {
          if (uVar33 == 1) {
            lVar43 = 0;
            fVar55 = 0.0;
          }
          else {
            fVar55 = 0.0;
            lVar43 = 0;
            pfVar15 = pfVar27;
            do {
              pbVar29 = (byte *)(lVar31 + lVar43);
              lVar43 = lVar43 + 2;
              bVar7 = *pbVar29;
              uVar14 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
              pfVar15[-1] = fVar56 * (float)uVar14;
              bVar7 = pbVar29[1];
              uVar57 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
              fVar55 = fVar55 + (float)uVar14 + (float)uVar57;
              *pfVar15 = fVar56 * (float)uVar57;
              pfVar15 = pfVar15 + 2;
            } while (uVar18 - (uVar18 & 1) != lVar43);
          }
          if ((bVar8 & 1) != 0) {
            uVar14 = NEON_scvtf((ulong)CONCAT14(*(byte *)(lVar31 + lVar43),
                                                (uint)*(byte *)(lVar31 + lVar43)),4);
            fVar55 = fVar55 + (float)uVar14;
            *(float *)(lVar25 + lVar43 * 4) = fVar56 * (float)uVar14;
          }
          uVar21 = uVar21 + 1;
          *(float *)(lVar25 + uVar18 * 4) = fVar56 * (fVar49 - fVar55);
          lVar25 = lVar25 + lVar42;
          lVar31 = lVar31 + lVar41;
          pfVar27 = (float *)((long)pfVar27 + lVar42);
        } while (uVar21 != param_3);
      }
    }
  }
  return;
}

