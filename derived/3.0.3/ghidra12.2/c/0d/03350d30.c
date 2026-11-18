
void FUN_03350d30(long param_1)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  ulong uVar21;
  short sVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [8];
  
  lVar14 = *(long *)(param_1 + 0x310);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(param_1 + 0x318);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(param_1 + 800);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(param_1 + 0x328);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(param_1 + 0x330);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(param_1 + 0x338);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  lVar14 = param_1 + 0x438;
  **(undefined2 **)(param_1 + 0x440) = 0;
  lVar16 = DAT_05355a60;
  if (*(int *)(*(long *)(param_1 + 0x430) + 0xc) == 0) {
    fVar31 = *(float *)(param_1 + 0x134c);
    if (*(int *)(param_1 + 0x1368) != 1) {
      fVar31 = 0.0;
    }
    fVar30 = (*(float *)(param_1 + 0x1318) - *(float *)(param_1 + 0x1324)) + 0.0;
    fVar31 = ((*(float *)(param_1 + 0x131c) - fVar31) - *(float *)(param_1 + 0x1328)) -
             *(float *)(param_1 + 0x134c) * (float)-*(int *)(param_1 + 0x12f8);
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x12f8);
    fVar30 = 0.0;
    uVar25 = uVar13;
    if ((int)uVar13 < 2) {
      uVar25 = 1;
    }
    uVar24 = uVar25 - 1;
    if ((int)(uVar13 + 6) < (int)uVar25) {
      fVar31 = 0.0;
      uVar25 = uVar24;
    }
    else {
      iVar6 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf4);
      iVar7 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf8);
      lVar3 = param_1 + 0xa98;
      if (uVar24 == 0) {
        iVar27 = 0;
      }
      else {
        uVar21 = (ulong)(uVar25 - 2);
        if (0x1f7 < uVar25) {
          uVar21 = 0;
        }
        iVar27 = *(int *)(lVar3 + uVar21 * 4) + 1;
      }
      fVar31 = 0.0;
      fVar34 = 0.0;
      fVar33 = 0.0;
      uVar21 = 0;
      iVar26 = 0;
      iVar17 = 0;
      bVar1 = iVar6 <= iVar27 && iVar27 <= iVar7;
      bVar10 = true;
      fVar29 = 0.0;
      sVar23 = 0;
      do {
        if (bVar10) {
          fVar29 = 0.0;
          iVar17 = 0;
          if (((int)uVar24 < 0) || (*(int *)(param_1 + 0x1270) <= (int)uVar24)) {
            fVar33 = 0.0;
            fVar34 = 0.0;
            iVar26 = 0;
          }
          else {
            if (uVar24 == 0) {
              iVar17 = 1;
            }
            else {
              uVar18 = (ulong)(uVar24 - 1);
              if (0x1f6 < uVar24) {
                uVar18 = 0;
              }
              iVar17 = -*(int *)(lVar3 + uVar18 * 4);
            }
            uVar18 = (ulong)uVar24;
            fVar33 = 0.0;
            if (0x1f5 < uVar24) {
              uVar18 = 0;
            }
            fVar34 = 0.0;
            iVar26 = 0;
            iVar17 = *(int *)(lVar3 + uVar18 * 4) + iVar17;
          }
        }
        sVar8 = *(short *)(*(long *)(lVar16 + 0x468) + (long)iVar27 * 2);
        sVar22 = sVar8;
        if ((sVar8 != 0 && sVar8 != 10) &&
           (sVar22 = 0x25cf, *(int *)(*(long *)(lVar16 + 0x20) + 0x156c) != 1)) {
          sVar22 = sVar8;
        }
        if ((uVar24 == *(uint *)(param_1 + 0x1300)) && (iVar26 == *(int *)(param_1 + 0x1304))) {
          fVar31 = *(float *)(param_1 + 0x134c);
          if (*(int *)(param_1 + 0x1368) != 1) {
            fVar31 = 0.0;
          }
          fVar30 = fVar34 + (*(float *)(param_1 + 0x1318) - *(float *)(param_1 + 0x1324));
          fVar31 = ((*(float *)(param_1 + 0x131c) - fVar31) - *(float *)(param_1 + 0x1328)) -
                   *(float *)(param_1 + 0x134c) * (float)(int)(uVar24 - uVar13);
        }
        fVar32 = fVar29;
        if (iVar26 < iVar17) {
          if (iVar6 == iVar27) {
            bVar1 = true;
            fVar33 = fVar34;
          }
          fVar32 = fVar34;
          if (iVar7 != iVar27) {
            fVar32 = fVar29;
          }
          bVar10 = false;
          if (iVar7 != iVar27) {
            bVar10 = bVar1;
          }
          bVar1 = bVar10;
          if (sVar22 != 10) {
            fVar28 = (float)FUN_03361770(lVar3,sVar23,sVar22);
            fVar28 = fVar28 + *(float *)(param_1 + 0x12b8);
            fVar29 = 0.0;
            if (0.0 < fVar28) {
              (**(code **)(*(long *)(param_1 + 0x438) + 0x18))(lVar14);
              lVar15 = *(long *)(param_1 + 0x440);
              lVar19 = 0;
              do {
                if (*(short *)(lVar15 + lVar19 * 2) == 0) goto LAB_033510ec;
                lVar5 = lVar15 + lVar19 * 2;
                if (*(short *)(lVar5 + 2) == 0) {
                  lVar19 = lVar19 + 1;
                  goto LAB_033510ec;
                }
                if (*(short *)(lVar5 + 4) == 0) {
                  lVar19 = lVar19 + 2;
                  goto LAB_033510ec;
                }
                lVar19 = lVar19 + 3;
              } while (lVar19 != 0x80001);
              lVar19 = 0;
LAB_033510ec:
              if ((int)lVar19 < *(int *)(param_1 + 0x448) + -1) {
                psVar2 = (short *)(lVar15 + (long)(int)lVar19 * 2);
                *psVar2 = sVar22;
                psVar2[1] = 0;
              }
              fVar29 = fVar28;
            }
            fVar34 = fVar34 + fVar29;
          }
          if ((*(int *)(param_1 + 0x1368) == 2) &&
             (lVar19 = *(long *)(DAT_05355a60 + 0x20), lVar19 != 0)) {
            bVar10 = -1 < *(int *)(lVar19 + 0x1430) && *(int *)(lVar19 + 0x1430) == iVar27;
            if (-1 < *(int *)(lVar19 + 0x1434)) {
              bVar10 = *(int *)(lVar19 + 0x1434) == iVar27 || bVar10;
            }
            bVar9 = bVar10;
            if (*(int *)(lVar19 + 0x1438) == iVar27) {
              bVar9 = true;
            }
            if (-1 < *(int *)(lVar19 + 0x1438)) {
              bVar10 = bVar9;
            }
            bVar9 = bVar10;
            if (*(int *)(lVar19 + 0x143c) == iVar27) {
              bVar9 = true;
            }
            if (-1 < *(int *)(lVar19 + 0x143c)) {
              bVar10 = bVar9;
            }
            bVar9 = bVar10;
            if (*(int *)(lVar19 + 0x1440) == iVar27) {
              bVar9 = true;
            }
            if (-1 < *(int *)(lVar19 + 0x1440)) {
              bVar10 = bVar9;
            }
            bVar9 = bVar10;
            if (*(int *)(lVar19 + 0x1444) == iVar27) {
              bVar9 = true;
            }
            iVar11 = *(int *)(lVar19 + 0x144c);
            if (-1 < *(int *)(lVar19 + 0x1444)) {
              bVar10 = bVar9;
            }
            bVar9 = bVar10;
            if (*(int *)(lVar19 + 0x1448) == iVar27) {
              bVar9 = true;
            }
            if (-1 < *(int *)(lVar19 + 0x1448)) {
              bVar10 = bVar9;
            }
            if (((iVar11 == iVar27 && iVar11 != -1) && (iVar11 != iVar27 || -2 < iVar11)) ||
               (bVar10)) {
              bVar10 = false;
              uVar18 = 0xffffffffffffffcc;
              puVar20 = &DAT_0418dd04;
              do {
                if (puVar20[-2] < 0x2011) {
                  bVar10 = (bool)(uVar18 < 0xb2 | bVar10);
                }
                uVar4 = uVar18 + 1;
                uVar18 = uVar18 + 2;
                if (*puVar20 < 0x2011) {
                  bVar10 = (bool)(uVar4 < 0xb2 | bVar10);
                }
                puVar20 = puVar20 + 4;
              } while (uVar18 != 0xb2);
              if (bVar10) {
                if (*(char *)(param_1 + 0x12b0) == '\0') {
                  if (sVar23 == 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = (**(code **)(**(long **)(param_1 + 0x12a0) + 0xb0))
                                       (*(long **)(param_1 + 0x12a0),sVar23,0x2010);
                  }
                  iVar12 = (**(code **)(**(long **)(param_1 + 0x12a0) + 0x80))
                                     (*(long **)(param_1 + 0x12a0),0x2010);
                  fVar29 = *(float *)(param_1 + 0x1284) * (float)(iVar12 + iVar11);
                }
                else {
                  fVar29 = *(float *)(param_1 + 0x1298);
                }
              }
              else {
                fVar29 = *(float *)(param_1 + 0x1284) * 41.0;
              }
              fVar29 = fVar29 + *(float *)(param_1 + 0x12b8);
              if (fVar29 <= 0.0) {
                fVar34 = fVar34 + 0.0;
              }
              else {
                (**(code **)(*(long *)(param_1 + 0x438) + 0x18))(lVar14);
                lVar19 = *(long *)(param_1 + 0x440);
                uVar18 = 0;
                do {
                  if (*(short *)(lVar19 + uVar18 * 2) == 0) goto LAB_0335146c;
                  lVar15 = lVar19 + uVar18 * 2;
                  if (*(short *)(lVar15 + 2) == 0) {
                    uVar18 = uVar18 + 1;
                    goto LAB_0335146c;
                  }
                  if (*(short *)(lVar15 + 4) == 0) {
                    uVar18 = uVar18 + 2;
                    goto LAB_0335146c;
                  }
                  uVar18 = uVar18 + 3;
                } while (uVar18 != 0x80001);
                uVar18 = 0;
LAB_0335146c:
                if ((int)uVar18 < *(int *)(param_1 + 0x448) + -1) {
                  *(undefined4 *)
                   (lVar19 + (-(uVar18 >> 0x1f & 1) & 0xfffffffe00000000 |
                             (uVar18 & 0xffffffff) << 1)) = 0x2010;
                }
                fVar34 = fVar34 + fVar29;
              }
              iVar27 = iVar27 + 1;
              iVar26 = iVar26 + 1;
              sVar23 = 0x2010;
              goto joined_r0x033510d8;
            }
          }
          iVar27 = iVar27 + 1;
          iVar26 = iVar26 + 1;
          if (iVar26 == iVar17) goto LAB_033511e4;
LAB_03350f14:
          bVar10 = false;
        }
        else {
joined_r0x033510d8:
          sVar22 = sVar23;
          if (iVar26 != iVar17) goto LAB_03350f14;
LAB_033511e4:
          if (bVar1) {
            fVar32 = fVar34;
          }
          if (fVar33 != fVar32) {
            uVar18 = uVar21;
            if (5 < (uint)uVar21) {
              uVar18 = 0;
            }
            lVar19 = *(long *)(param_1 + 0x310 + uVar18 * 8);
            if (lVar19 != 0) {
              uVar21 = (ulong)((uint)uVar21 + 1);
              *(float *)(lVar19 + 0x30) = fVar33;
              *(undefined4 *)(lVar19 + 0x38) = 0;
              *(float *)(lVar19 + 0x50) = fVar32 - fVar33;
              *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 0x11;
            }
          }
          (**(code **)(*(long *)(param_1 + 0x438) + 0x18))(lVar14);
          lVar19 = *(long *)(param_1 + 0x440);
          uVar18 = 0;
          do {
            if (*(short *)(lVar19 + uVar18 * 2) == 0) goto LAB_0335128c;
            lVar15 = lVar19 + uVar18 * 2;
            if (*(short *)(lVar15 + 2) == 0) {
              uVar18 = uVar18 + 1;
              goto LAB_0335128c;
            }
            if (*(short *)(lVar15 + 4) == 0) {
              uVar18 = uVar18 + 2;
              goto LAB_0335128c;
            }
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
          uVar18 = 0;
LAB_0335128c:
          if ((int)uVar18 < *(int *)(param_1 + 0x448) + -1) {
            *(undefined4 *)
             (lVar19 + (-(uVar18 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar18 & 0xffffffff) << 1)) =
                 10;
          }
          if ((uVar24 == *(uint *)(param_1 + 0x1300)) && (iVar17 == *(int *)(param_1 + 0x1304))) {
            fVar31 = *(float *)(param_1 + 0x134c);
            if (*(int *)(param_1 + 0x1368) != 1) {
              fVar31 = 0.0;
            }
            fVar30 = fVar34 + (*(float *)(param_1 + 0x1318) - *(float *)(param_1 + 0x1324));
            fVar31 = ((*(float *)(param_1 + 0x131c) - fVar31) - *(float *)(param_1 + 0x1328)) -
                     *(float *)(param_1 + 0x134c) *
                     (float)(int)(uVar24 - *(int *)(param_1 + 0x12f8));
          }
          uVar25 = uVar24 + 1;
          if (((int)uVar24 < -1) || (*(int *)(param_1 + 0x1270) <= (int)uVar25)) break;
          bVar10 = true;
          uVar24 = uVar25;
        }
        uVar13 = *(uint *)(param_1 + 0x12f8);
        uVar25 = uVar24;
        fVar29 = fVar32;
        sVar23 = sVar22;
      } while ((int)uVar24 < (int)(uVar13 + 6));
    }
    if ((*(uint *)(param_1 + 0x1300) == uVar25) && (*(int *)(param_1 + 0x1304) == 0)) {
      fVar31 = *(float *)(param_1 + 0x134c);
      if (*(int *)(param_1 + 0x1368) != 1) {
        fVar31 = 0.0;
      }
      fVar30 = (*(float *)(param_1 + 0x1318) - *(float *)(param_1 + 0x1324)) + 0.0;
      fVar31 = ((*(float *)(param_1 + 0x131c) - fVar31) - *(float *)(param_1 + 0x1328)) -
               *(float *)(param_1 + 0x134c) * (float)(int)(uVar25 - *(int *)(param_1 + 0x12f8));
    }
    if (((*(char *)(param_1 + 0x360) != '\0') && (*(long *)(param_1 + 0x368) != 0)) &&
       (lVar16 = *(long *)(*(long *)(param_1 + 0x368) + 0x10), lVar16 != 0)) {
      if (*PTR_DAT_04c4b988 == '\0') {
        lVar16 = *(long *)(*(long *)(lVar16 + 0xf0) + 0x18);
      }
      else {
        local_b0 = PTR_DAT_04bc8e68 + 0x10;
        puStack_a8 = PTR_DAT_04c4b988;
        lVar16 = FUN_032cb8e0(auStack_98,&local_b0,*(undefined8 *)(lVar16 + 0xf0));
      }
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe | (fVar31 != 0.0 || fVar30 != 0.0);
    }
  }
  local_b8 = *(undefined8 *)(param_1 + 0x308);
  (**(code **)(*(long *)(param_1 + 0x438) + 0x18))(lVar14);
  puStack_a8 = *(undefined **)(param_1 + 0x440);
  local_b0 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_b8,&local_b0);
  if ((*(char *)(param_1 + 0x360) != '\0') && (*(long *)(param_1 + 0x368) != 0)) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x368) + 0x10);
    if (*PTR_DAT_04c4b988 == '\0') {
      lVar14 = *(long *)(*(long *)(lVar14 + 0xf0) + 0x18);
    }
    else {
      local_b0 = PTR_DAT_04bc8e68 + 0x10;
      puStack_a8 = PTR_DAT_04c4b988;
      lVar14 = FUN_032cb8e0(auStack_98,&local_b0,*(undefined8 *)(lVar14 + 0xf0));
    }
    *(float *)(lVar14 + 0x30) = fVar30;
    *(float *)(lVar14 + 0x34) = fVar31;
    *(undefined4 *)(lVar14 + 0x38) = 0;
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
  }
  return;
}

