
void FUN_02086b40(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int local_a0;
  int local_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  uint local_8c;
  int local_88;
  float local_84;
  
  lVar16 = *(long *)PTR_DAT_04bb3968;
  if (*(char *)(param_1 + 0x801) != '\0') {
    uVar10 = *(uint *)(param_1 + 0x560);
    uVar14 = (ulong)uVar10;
    if (*(char *)(param_1 + 0x800) == '\0') {
      if (0 < (int)uVar10) {
        uVar20 = 0;
        do {
          iVar7 = (int)uVar20;
          iVar5 = iVar7 + 1;
          uVar14 = uVar14 & 0xffffffff;
          while( true ) {
            if (uVar20 < (uVar14 & 0xffffffff)) {
              lVar11 = *(long *)(*(long *)(param_1 + 0x568) + uVar20 * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar6 = FUN_020879e8(lVar11 + 4);
            if (iVar6 != 1) break;
            uVar14 = (ulong)*(int *)(param_1 + 0x560);
            if ((long)uVar20 < (long)uVar14) {
              puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x568) + uVar20 * 8);
              *puVar18 = *(undefined8 *)(param_1 + 0x570);
              *(undefined8 **)(param_1 + 0x570) = puVar18;
              uVar14 = (ulong)*(uint *)(param_1 + 0x560);
            }
            iVar6 = (int)uVar14;
            if ((-1 < iVar7) && (iVar7 < iVar6)) {
              if (iVar5 < iVar6) {
                memmove((void *)(*(long *)(param_1 + 0x568) + uVar20 * 8),
                        (void *)(*(long *)(param_1 + 0x568) + (long)iVar5 * 8),
                        -(ulong)((uint)(iVar6 - iVar5) >> 0x1f) & 0xfffffff800000000 |
                        (ulong)(uint)(iVar6 - iVar5) << 3);
                iVar6 = *(int *)(param_1 + 0x560);
              }
              uVar14 = (ulong)(iVar6 - 1U);
              *(uint *)(param_1 + 0x560) = iVar6 - 1U;
            }
            uVar10 = (uint)uVar14;
            if ((long)(int)uVar10 <= (long)uVar20) goto LAB_02086bcc;
          }
          uVar10 = *(uint *)(param_1 + 0x560);
          uVar14 = (ulong)(int)uVar10;
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)uVar14);
      }
    }
    else {
      if (0 < (int)uVar10) {
        lVar11 = 0;
        puVar18 = *(undefined8 **)(param_1 + 0x570);
        do {
          puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x568) + lVar11 * 8);
          lVar11 = lVar11 + 1;
          *puVar17 = puVar18;
          *(undefined8 **)(param_1 + 0x570) = puVar17;
          puVar18 = puVar17;
        } while (lVar11 < *(int *)(param_1 + 0x560));
      }
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0x560) = 0;
    }
LAB_02086bcc:
    if (*(char *)(param_1 + 0x800) != '\0') {
      lVar11 = *(long *)PTR_DAT_04bb39b0;
      if (lVar11 == 0) {
        uVar14 = (ulong)(byte)*PTR_DAT_04bb32e0;
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02086d0c;
LAB_02086d78:
        if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_02086d94;
        pfVar8 = (float *)(*(long *)PTR_DAT_04bb4718 + uVar14 * 4 + 0xde8);
      }
      else {
        pbVar13 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar11 + 0x15c) != 0) {
          pbVar13 = (byte *)(lVar11 + 0x158);
        }
        uVar14 = (ulong)*pbVar13;
        if ((*pbVar13 < 8) ||
           (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (bVar4 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar14 = (ulong)bVar4, bVar4 < 8
            )))) goto LAB_02086d78;
LAB_02086d0c:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar11 = **(long **)PTR_DAT_04bb27d0;
          bVar4 = *(byte *)(lVar11 + 0x473);
          pbVar13 = PTR_DAT_04bb5038;
          if ((long)(char)bVar4 != 0xffffffffffffffff) {
            puVar9 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
            if (7 < bVar4) {
              puVar9 = (uint *)(lVar11 + 0x48);
            }
            if ((*puVar9 & 8) != 0) {
              pbVar13 = (byte *)(lVar11 + 0x471);
            }
          }
          uVar14 = (ulong)*pbVar13;
          if (*pbVar13 < 8) goto LAB_02086d78;
        }
        uVar14 = (ulong)(byte)*PTR_DAT_04bb5038;
        if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02086d78;
LAB_02086d94:
        pfVar8 = (float *)PTR_DAT_04bb3238;
      }
      local_84 = *pfVar8;
      if (((local_84 != 0.0) &&
          (local_84 != *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x230))) &&
         ((int)uVar10 < *(int *)(param_1 + 0x564))) {
        if (0 < (int)uVar10) {
          puVar18 = *(undefined8 **)(param_1 + 0x568);
          uVar14 = (ulong)uVar10;
          lVar11 = 0xffffffff;
          do {
            if (local_84 == *(float *)*puVar18) {
              if (lVar11 != 0) goto LAB_02086ec4;
              break;
            }
            lVar11 = lVar11 + -1;
            uVar14 = uVar14 - 1;
            puVar18 = puVar18 + 1;
          } while (uVar14 != 0);
        }
        local_a0 = *(int *)PTR_DAT_04bb3238;
        iVar5 = FUN_02089050(2);
        local_94 = 0;
        uStack_90 = 0;
        local_9c = 0;
        if (iVar5 != -1) {
          local_9c = iVar5;
        }
        local_8c = local_8c & 0xffffff00;
        uStack_98 = 0x5a;
        local_88 = 0x7f7fffff;
        uVar14 = FUN_020880a8(param_1,&local_a0,&local_84);
        if ((uVar14 & 1) != 0) {
          local_94 = 0;
          uStack_90 = 0;
          if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
            piVar12 = *(int **)(param_1 + 0x570);
            if (piVar12 != (int *)0x0) {
              *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)piVar12;
            }
            *piVar12 = local_a0;
            piVar12[1] = local_9c;
            *(ulong *)(piVar12 + 2) = (ulong)uStack_98;
            *(ulong *)(piVar12 + 4) = (ulong)local_8c << 0x20;
            piVar12[6] = local_88;
            if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
              *(int **)(*(long *)(param_1 + 0x568) + (long)*(int *)(param_1 + 0x560) * 8) = piVar12;
              *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
            }
          }
        }
      }
    }
LAB_02086ec4:
    lVar11 = *(long *)(param_1 + 0x2d0);
    if (lVar11 != param_1 + 0x2c8) {
      piVar12 = (int *)(lVar11 + -0x10);
      do {
        uVar10 = *(uint *)(param_1 + 0x560);
        uVar14 = (ulong)uVar10;
        if (*(int *)(param_1 + 0x564) <= (int)uVar10) break;
        iVar5 = *piVar12;
        if ((iVar5 != 0) && (iVar5 != *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x230))) {
          if (0 < (int)uVar10) {
            puVar18 = *(undefined8 **)(param_1 + 0x568);
            lVar19 = 0xffffffff;
            do {
              if (iVar5 == *(int *)*puVar18) {
                if (lVar19 != 0) goto LAB_02086ef0;
                break;
              }
              lVar19 = lVar19 + -1;
              uVar14 = uVar14 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar14 != 0);
          }
          fVar24 = (float)piVar12[1];
          pfVar8 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1de8) + 0xf0))
                                      (*(long *)PTR_DAT_04bb3968 + 0x1de8);
          fVar22 = *pfVar8;
          if (fVar24 < fVar22 || (char)piVar12[2] != '\0') {
            FUN_02089050(2);
            iVar7 = *piVar12;
            iVar6 = FUN_02089050(1);
            iVar25 = piVar12[1];
            bVar4 = *(byte *)(piVar12 + 2);
            iVar5 = 0;
            if (iVar6 != -1) {
              iVar5 = iVar6;
            }
            puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar10 = *puVar9 ^ *puVar9 << 0xb;
            uVar21 = puVar9[3];
            *puVar9 = puVar9[1];
            puVar9[1] = puVar9[2];
            puVar9[2] = uVar21;
            puVar9[3] = uVar10 >> 8 ^ uVar21 >> 0x13 ^ uVar10 ^ uVar21;
            (**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1e18) + 0xf0))
                      (*(long *)PTR_DAT_04bb3968 + 0x1e18);
            if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
              piVar12 = *(int **)(param_1 + 0x570);
              if (piVar12 != (int *)0x0) {
                *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)piVar12;
              }
              *piVar12 = iVar7;
              piVar12[1] = iVar5;
              piVar12[2] = 0x5a;
              piVar12[3] = 0;
              piVar12[4] = 0;
              piVar12[6] = iVar25;
              *(byte *)(piVar12 + 5) = bVar4 | (fVar24 < fVar22) << 1;
              if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
                *(int **)(*(long *)(param_1 + 0x568) + (long)*(int *)(param_1 + 0x560) * 8) =
                     piVar12;
                *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
              }
            }
          }
        }
LAB_02086ef0:
        lVar11 = *(long *)(lVar11 + 8);
        piVar12 = (int *)(lVar11 + -0x10);
      } while (piVar12 != (int *)(param_1 + 0x2b8));
    }
    *(undefined2 *)(param_1 + 0x800) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x560);
  if (0 < (int)uVar10) {
    uVar21 = 0;
    do {
      lVar11 = (long)(int)uVar21;
      piVar12 = *(int **)(*(long *)(param_1 + 0x568) + (long)(int)uVar21 * 8);
      iVar5 = *piVar12;
      local_a0 = iVar5;
      iVar7 = FUN_020879e8(piVar12 + 1);
      if (iVar7 == 0) {
        lVar19 = *(long *)PTR_DAT_04bb39b0;
        piVar12 = (int *)PTR_DAT_04bb3238;
        if (lVar19 == 0) {
          uVar14 = (ulong)(byte)*PTR_DAT_04bb32e0;
          if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02087184;
LAB_02087204:
          if (*(long *)PTR_DAT_04bb4718 != 0) {
            piVar12 = (int *)(*(long *)PTR_DAT_04bb4718 + uVar14 * 4 + 0xde8);
          }
        }
        else {
          pbVar13 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar19 + 0x15c) != 0) {
            pbVar13 = (byte *)(lVar19 + 0x158);
          }
          uVar14 = (ulong)*pbVar13;
          if ((*pbVar13 < 8) ||
             (((*(int *)(lVar19 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (bVar4 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar14 = (ulong)bVar4,
              bVar4 < 8)))) goto LAB_02087204;
LAB_02087184:
          if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar4 = *(byte *)(lVar19 + 0x473);
            pbVar13 = PTR_DAT_04bb5038;
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              puVar9 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
              if (7 < bVar4) {
                puVar9 = (uint *)(lVar19 + 0x48);
              }
              if ((*puVar9 & 8) != 0) {
                pbVar13 = (byte *)(lVar19 + 0x471);
              }
            }
            uVar14 = (ulong)*pbVar13;
            if (*pbVar13 < 8) goto LAB_02087204;
          }
          uVar14 = (ulong)(byte)*PTR_DAT_04bb5038;
          if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02087204;
        }
        uVar10 = *(uint *)(param_1 + 0x560);
        if (*piVar12 == **(int **)(*(long *)(param_1 + 0x568) + lVar11 * 8)) goto LAB_02087244;
        if ((int)uVar21 < (int)uVar10) {
          puVar18 = *(undefined8 **)(param_1 + 0x570);
          do {
            puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x568) + lVar11 * 8);
            lVar11 = lVar11 + 1;
            *puVar17 = puVar18;
            *(undefined8 **)(param_1 + 0x570) = puVar17;
            puVar18 = puVar17;
          } while (lVar11 < (int)(uVar21 + 1));
LAB_02087414:
          uVar10 = *(uint *)(param_1 + 0x560);
        }
LAB_02087418:
        if ((-1 < (int)uVar21) && ((int)uVar21 < (int)uVar10)) {
          uVar1 = uVar21 + 1;
          uVar3 = uVar10 - uVar1;
          if (uVar3 != 0 && (int)uVar1 <= (int)uVar10) {
            memmove((void *)(*(long *)(param_1 + 0x568) + (ulong)uVar21 * 8),
                    (void *)(*(long *)(param_1 + 0x568) + (ulong)uVar1 * 8),
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
            uVar10 = *(uint *)(param_1 + 0x560);
          }
          uVar10 = uVar10 - 1;
          *(uint *)(param_1 + 0x560) = uVar10;
        }
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x560);
LAB_02087244:
        local_84 = 0.0;
        if (uVar21 < uVar10) {
          lVar19 = *(long *)(*(long *)(param_1 + 0x568) + lVar11 * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar7 = FUN_020879e8(lVar19 + 4);
        if (iVar7 == 0) {
          bVar4 = FUN_02087ce0(param_1,&local_a0,&local_84);
        }
        else {
          for (lVar19 = *(long *)(param_1 + 0x2d0); lVar19 + -0x10 != param_1 + 0x2b8;
              lVar19 = *(long *)(lVar19 + 8)) {
            if (iVar5 == *(int *)(lVar19 + -0x10)) {
              bVar4 = *(char *)(lVar19 + -8) != '\0';
              local_84 = *(float *)(lVar19 + -0xc);
              goto LAB_02087310;
            }
          }
          bVar4 = 0;
        }
LAB_02087310:
        fVar22 = local_84;
        pfVar8 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1de8) + 0xf0))
                                    (*(long *)PTR_DAT_04bb3968 + 0x1de8);
        lVar19 = lVar11 * 8;
        fVar24 = *pfVar8;
        *(float *)(*(long *)(*(long *)(param_1 + 0x568) + lVar19) + 0x18) = local_84;
        lVar15 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
        *(byte *)(lVar15 + 0x14) = *(byte *)(lVar15 + 0x14) & 0xfe | bVar4 & 1;
        lVar15 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
        bVar2 = (fVar22 < fVar24) << 1;
        *(byte *)(lVar15 + 0x14) = *(byte *)(lVar15 + 0x14) & 0xfd | bVar2;
        lVar15 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
        if (((bVar4 & 1) != 0) || (fVar22 < fVar24)) {
          *(undefined4 *)(lVar15 + 8) = 0x5a;
          if ((iVar5 != 0) && (iVar7 = *(int *)(lVar16 + 0x196c0), iVar7 != 0)) {
            puVar18 = *(undefined8 **)(lVar16 + 0x196c8);
            lVar15 = (long)iVar7 << 3;
            do {
              if (iVar5 == *(int *)*puVar18) {
                if (((int *)*puVar18)[1] == 0x96) {
                  if (uVar21 < *(uint *)(param_1 + 0x560)) {
                    lVar11 = *(long *)(*(long *)(param_1 + 0x568) + lVar11 * 8);
                  }
                  else {
                    lVar11 = 0;
                  }
                  uVar3 = *(uint *)(param_1 + 0x55c);
                  *(undefined4 *)(lVar11 + 8) = 0x5a;
                  *(byte *)(lVar11 + 0x14) = bVar2 | bVar4 & 1;
                  puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                  uVar10 = *puVar9 ^ *puVar9 << 0xb;
                  uVar1 = puVar9[3];
                  *puVar9 = puVar9[1];
                  puVar9[1] = puVar9[2];
                  uVar10 = uVar10 >> 8 ^ uVar1 >> 0x13 ^ uVar10 ^ uVar1;
                  puVar9[2] = uVar1;
                  puVar9[3] = uVar10;
                  piVar12 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1e18) + 0xf0
                                               ))(*(long *)PTR_DAT_04bb3968 + 0x1e18);
                  iVar5 = (int)((ulong)uVar10 * 0x3c >> 0x20);
                  if ((bVar4 & 1) == 0) {
                    iVar7 = *(int *)(lVar11 + 0xc);
                    if (iVar7 < 2) {
                      iVar7 = 1;
                    }
                    fVar23 = (float)(iVar7 + -1);
                  }
                  else {
                    fVar23 = (float)iVar5 + 150.0;
                  }
                  iVar7 = *piVar12;
                  *(int *)(lVar11 + 0xc) = (int)fVar23;
                  if (fVar24 <= fVar22) {
                    iVar5 = *(int *)(lVar11 + 0x10);
                    if (iVar5 < 2) {
                      iVar5 = 1;
                    }
                    fVar22 = (float)(iVar5 + -1);
                  }
                  else {
                    fVar22 = (float)iVar5 + 150.0 +
                             (float)(int)(iVar7 - (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)));
                  }
                  *(int *)(lVar11 + 0x10) = (int)fVar22;
                  goto LAB_020870dc;
                }
                break;
              }
              puVar18 = puVar18 + 1;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
          lVar11 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
          iVar5 = *(int *)(lVar11 + 0xc);
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          *(int *)(lVar11 + 0xc) = iVar5 + -1;
          lVar11 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
          iVar5 = *(int *)(lVar11 + 0x10);
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          *(int *)(lVar11 + 0x10) = iVar5 + -1;
        }
        else {
          *(int *)(lVar15 + 0xc) = *(int *)(lVar15 + 0xc) + -1;
          lVar15 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
          *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
          lVar15 = *(long *)(*(long *)(param_1 + 0x568) + lVar19);
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + -1;
          if (*(int *)(*(long *)(*(long *)(param_1 + 0x568) + lVar19) + 8) < 1) {
            uVar10 = *(uint *)(param_1 + 0x560);
            if ((int)uVar21 < (int)uVar10) {
              puVar18 = *(undefined8 **)(param_1 + 0x570);
              do {
                puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x568) + lVar11 * 8);
                lVar11 = lVar11 + 1;
                *puVar17 = puVar18;
                *(undefined8 **)(param_1 + 0x570) = puVar17;
                puVar18 = puVar17;
              } while (lVar11 < (int)(uVar21 + 1));
              goto LAB_02087414;
            }
            goto LAB_02087418;
          }
        }
LAB_020870dc:
        uVar10 = *(uint *)(param_1 + 0x560);
        uVar21 = uVar21 + 1;
      }
    } while ((int)uVar21 < (int)uVar10);
  }
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  if (lVar16 == 0) {
    uVar14 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02087620;
LAB_0208768c:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      pfVar8 = (float *)(*(long *)PTR_DAT_04bb4718 + uVar14 * 4 + 0xde8);
      goto LAB_020876b0;
    }
  }
  else {
    pbVar13 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar16 + 0x158);
    }
    uVar14 = (ulong)*pbVar13;
    if ((*pbVar13 < 8) ||
       (((*(int *)(lVar16 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar4 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar14 = (ulong)bVar4, bVar4 < 8))))
    goto LAB_0208768c;
LAB_02087620:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar16 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar16 + 0x473);
      pbVar13 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar9 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar9 = (uint *)(lVar16 + 0x48);
        }
        if ((*puVar9 & 8) != 0) {
          pbVar13 = (byte *)(lVar16 + 0x471);
        }
      }
      uVar14 = (ulong)*pbVar13;
      if (*pbVar13 < 8) goto LAB_0208768c;
    }
    uVar14 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0208768c;
  }
  pfVar8 = (float *)PTR_DAT_04bb3238;
LAB_020876b0:
  local_84 = *pfVar8;
  if (((local_84 != 0.0) &&
      (local_84 != *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x230))) &&
     ((int)uVar10 < *(int *)(param_1 + 0x564))) {
    if (0 < (int)uVar10) {
      puVar18 = *(undefined8 **)(param_1 + 0x568);
      uVar14 = (ulong)uVar10;
      lVar16 = 0xffffffff;
      do {
        if (local_84 == *(float *)*puVar18) {
          if (lVar16 != 0) goto LAB_020877c8;
          break;
        }
        lVar16 = lVar16 + -1;
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
    }
    local_a0 = *(int *)PTR_DAT_04bb3238;
    iVar5 = FUN_02089050(2);
    local_94 = 0;
    uStack_90 = 0;
    local_9c = 0;
    if (iVar5 != -1) {
      local_9c = iVar5;
    }
    local_8c = local_8c & 0xffffff00;
    uStack_98 = 0x5a;
    local_88 = 0x7f7fffff;
    uVar14 = FUN_020880a8(param_1,&local_a0,&local_84);
    if (((uVar14 & 1) != 0) && (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564))) {
      piVar12 = *(int **)(param_1 + 0x570);
      if (piVar12 != (int *)0x0) {
        *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)piVar12;
      }
      *piVar12 = local_a0;
      piVar12[1] = local_9c;
      *(ulong *)(piVar12 + 2) = CONCAT44(local_94,uStack_98);
      *(ulong *)(piVar12 + 4) = CONCAT44(local_8c,uStack_90);
      piVar12[6] = local_88;
      if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
        *(int **)(*(long *)(param_1 + 0x568) + (long)*(int *)(param_1 + 0x560) * 8) = piVar12;
        *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
      }
    }
  }
LAB_020877c8:
  lVar16 = *(long *)(param_1 + 0x2d0);
  if (lVar16 != param_1 + 0x2c8) {
    piVar12 = (int *)(lVar16 + -0x10);
    do {
      uVar10 = *(uint *)(param_1 + 0x560);
      uVar14 = (ulong)uVar10;
      if (*(int *)(param_1 + 0x564) <= (int)uVar10) {
        return;
      }
      iVar5 = *piVar12;
      if ((iVar5 != 0) && (iVar5 != *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x230))) {
        if (0 < (int)uVar10) {
          puVar18 = *(undefined8 **)(param_1 + 0x568);
          lVar11 = 0xffffffff;
          do {
            if (iVar5 == *(int *)*puVar18) {
              if (lVar11 != 0) goto LAB_020877f4;
              break;
            }
            lVar11 = lVar11 + -1;
            uVar14 = uVar14 - 1;
            puVar18 = puVar18 + 1;
          } while (uVar14 != 0);
        }
        fVar22 = (float)piVar12[1];
        pfVar8 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1de8) + 0xf0))
                                    (*(long *)PTR_DAT_04bb3968 + 0x1de8);
        fVar24 = *pfVar8;
        if (fVar22 < fVar24 || (char)piVar12[2] != '\0') {
          FUN_02089050(2);
          iVar7 = *piVar12;
          iVar6 = FUN_02089050(1);
          iVar25 = piVar12[1];
          bVar4 = *(byte *)(piVar12 + 2);
          iVar5 = 0;
          if (iVar6 != -1) {
            iVar5 = iVar6;
          }
          uVar1 = *(uint *)(param_1 + 0x55c);
          puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar10 = *puVar9 ^ *puVar9 << 0xb;
          uVar21 = puVar9[3];
          *puVar9 = puVar9[1];
          puVar9[1] = puVar9[2];
          uVar10 = uVar10 >> 8 ^ uVar21 >> 0x13 ^ uVar10 ^ uVar21;
          puVar9[2] = uVar21;
          puVar9[3] = uVar10;
          piVar12 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1e18) + 0xf0))
                                     (*(long *)PTR_DAT_04bb3968 + 0x1e18);
          fVar23 = (float)(int)((ulong)uVar10 * 0x3c >> 0x20) + 150.0;
          iVar6 = 0;
          if (bVar4 != 0) {
            iVar6 = (int)fVar23;
          }
          fVar23 = fVar23 + (float)(int)(*piVar12 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)));
          if (fVar24 <= fVar22) {
            fVar23 = 0.0;
          }
          if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
            piVar12 = *(int **)(param_1 + 0x570);
            if (piVar12 != (int *)0x0) {
              *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)piVar12;
            }
            *piVar12 = iVar7;
            piVar12[1] = iVar5;
            piVar12[2] = 0x5a;
            piVar12[3] = iVar6;
            *(byte *)(piVar12 + 5) = bVar4 | (fVar22 < fVar24) << 1;
            piVar12[6] = iVar25;
            piVar12[4] = (int)fVar23;
            if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
              *(int **)(*(long *)(param_1 + 0x568) + (long)*(int *)(param_1 + 0x560) * 8) = piVar12;
              *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
            }
          }
        }
      }
LAB_020877f4:
      lVar16 = *(long *)(lVar16 + 8);
      piVar12 = (int *)(lVar16 + -0x10);
    } while (piVar12 != (int *)(param_1 + 0x2b8));
  }
  return;
}

