
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_02065bd0(long *param_1,int *param_2,uint *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  long lVar12;
  char cVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  int iVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  uint local_1fc;
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined8 *******local_1e0;
  undefined8 *******local_1d0;
  undefined8 *******local_1c8;
  undefined8 *******local_1c0;
  undefined8 *******local_1b8;
  undefined8 *******local_1b0;
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined8 *******local_198;
  undefined8 *******local_190;
  undefined8 *******local_188;
  undefined8 *******local_180;
  undefined8 *******local_178;
  undefined8 *******local_170;
  undefined8 *******local_168;
  undefined8 ******local_160;
  undefined8 *****local_158;
  undefined8 ****local_150;
  undefined8 ***local_148;
  undefined8 **local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128 [21];
  ulong local_80 [2];
  long local_68;
  
  puVar6 = PTR_DAT_04bc1578;
  local_1f0 = 0;
  local_1e8 = (undefined8 *)0x0;
  local_1d0 = &local_1c8;
  local_1c8 = &local_1c0;
  local_1e0 = &local_1d0;
  local_1c0 = &local_1b8;
  local_1b8 = &local_1b0;
  local_130 = 0;
  local_1b0 = &local_1a8;
  local_1a8 = &local_1a0;
  local_1a0 = &local_198;
  local_198 = &local_190;
  local_190 = &local_188;
  local_188 = &local_180;
  local_180 = &local_178;
  local_178 = &local_170;
  local_170 = &local_168;
  local_168 = &local_160;
  local_160 = &local_158;
  local_158 = &local_150;
  local_150 = &local_148;
  local_148 = &local_140;
  local_140 = &local_138;
  local_138 = &local_130;
  if (local_128 != (undefined8 *)0x0) {
    local_1f0 = 0x1500000000;
    local_1e8 = local_128;
  }
  if (*param_2 != 0) {
    puVar18 = *(undefined8 **)(param_2 + 2);
    local_1fc = 0xffffffff;
    fVar23 = 3.4028235e+38;
    puVar1 = puVar18 + *param_2;
    do {
      pppppppuVar15 = local_1e0;
      ppppppuVar20 = (undefined8 ******)*puVar18;
      uVar14 = *(uint *)((long)ppppppuVar20 + 0x4c);
      if (uVar14 == 0xffffffff) {
        uVar14 = 0;
        if (*(int *)(ppppppuVar20 + 10) != -1) {
          uVar14 = *(int *)(ppppppuVar20 + 10) + 10;
        }
      }
      uVar3 = *(uint *)((long)ppppppuVar20 + 0xc);
      puVar11 = (uint *)((long)(param_1 + 0x2f) + (ulong)uVar3 * 8 * 4);
      if (0x14 < uVar3) {
        puVar11 = (uint *)(param_1 + 0x2f);
      }
      uVar7 = local_1f0._4_4_;
      if (*puVar11 <= uVar14) {
        lVar21 = 0;
        if (_SUB_00000018 != 0) goto LAB_02065d4c;
LAB_02065dbc:
        if (uVar3 != 4) {
LAB_02065fb0:
          lVar8 = DAT_053e0208;
          if (DAT_053e0208 == 0) {
LAB_02066080:
            puVar11 = &DAT_053dce00;
            if (DAT_053dce00 == 0) goto LAB_02066184;
LAB_02066090:
            cVar13 = DAT_0538d24c;
            do {
              puVar5 = PTR_DAT_04bc1570;
              if (cVar13 == '\0') {
                cVar13 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                *(undefined4 *)(puVar6 + 0x68) = 0xffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar14 = *(uint *)(puVar6 + 0x2c);
                if (-1 < (int)uVar14) {
                  if (((byte *)((ulong)uVar14 + (long)puVar11) == (byte *)0x0) ||
                     (bVar4 = *(byte *)((ulong)uVar14 + (long)puVar11), uVar14 = (uint)bVar4,
                     3 < bVar4)) goto LAB_02066184;
                  goto LAB_02066188;
                }
                if (uVar14 != 0xffffffff) goto LAB_02066184;
              }
              puVar17 = (uint *)(ulong)*puVar11;
              uVar14 = 0;
              if ((*puVar11 == 0) || (puVar11 == puVar17)) goto LAB_02066188;
              lVar9 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar11 + (lVar9 - (long)puVar17);
              if (lVar9 == 0) goto LAB_02066184;
              uVar19 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
              *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
              uVar14 = 0;
              if (uVar19 == 0) goto LAB_02066188;
              piVar10 = (int *)(lVar9 + 4);
              while (piVar10[-1] != -0x2947dcfb) {
                piVar10 = piVar10 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) {
                  uVar14 = 0;
                  goto LAB_02066188;
                }
              }
              iVar16 = 0;
              if (*piVar10 != -1) {
                iVar16 = *piVar10;
              }
              *(int *)(puVar6 + 0x2c) = iVar16;
            } while (*puVar11 != 0);
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)((long)ppppppuVar20 + 0xc);
            if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
              if ((((*(long *)(DAT_053e0208 + 0x16b90) != 0) &&
                   (puVar11 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8),
                   puVar11 != (uint *)0x0)) &&
                  ((*(uint *)(DAT_053e0208 + 0x16ba8) <= uVar14 ||
                   (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar14) != '\0')))) &&
                 (((uVar14 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
                iVar16 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  iVar16 = 0x1c;
                }
                puVar11 = (uint *)((ulong)(puVar11[1] * uVar14 + (uint)(ushort)puVar11[2] * 8 +
                                          iVar16) + (long)puVar11);
                if (puVar11 != (uint *)0x0) goto LAB_02066000;
              }
              goto LAB_02066080;
            }
            if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar14) goto LAB_02066080;
            if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar14) {
              uVar14 = 0;
            }
            puVar11 = *(uint **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar14 * 8);
            if (puVar11 == (uint *)0x0) goto LAB_02066080;
LAB_02066000:
            if (*puVar11 != 0) goto LAB_02066090;
LAB_02066184:
            uVar14 = 0;
          }
LAB_02066188:
          local_68 = CONCAT44(local_68._4_4_,uVar14);
          if (uVar14 == 3) {
            uVar14 = 0;
          }
          else {
            plVar2 = param_1 + 3 + (ulong)uVar14 * 4;
            if (2 < uVar14) {
              plVar2 = param_1 + 3;
            }
            fVar22 = *(float *)((long)plVar2 + 0xc);
            piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x1cc8) + 0xf0))(lVar8 + 0x1cc8);
            uVar14 = (int)fVar22 - *piVar10;
            uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
          }
          fVar22 = *(float *)(ppppppuVar20 + 0xc);
          uVar3 = *(uint *)(lVar21 + 0x10);
          if ((int)uVar14 <= (int)*(uint *)(lVar21 + 0x10)) {
            uVar3 = uVar14;
          }
          if (uVar3 == local_1fc) {
            if ((fVar22 < 0.0) || (fVar22 == fVar23)) {
              if ((int)local_1f0 < (int)local_1f0._4_4_) {
                if (local_1e0 != (undefined8 *******)0x0) {
                  local_1e0 = (undefined8 *******)*local_1e0;
                }
                *pppppppuVar15 = ppppppuVar20;
                if ((int)local_1f0 < (int)local_1f0._4_4_) {
                  local_1e8[(int)local_1f0] = pppppppuVar15;
                  local_1f0 = CONCAT44(local_1f0._4_4_,(int)local_1f0 + 1);
                }
              }
              if (0.0 <= fVar22) goto LAB_02066378;
            }
            else if (fVar22 < fVar23) {
              if (0 < (int)local_1f0) {
                lVar21 = 0;
                do {
                  local_1e0 = (undefined8 *******)local_1e8[lVar21];
                  lVar21 = lVar21 + 1;
                  *local_1e0 = pppppppuVar15;
                  pppppppuVar15 = local_1e0;
                } while (lVar21 < (int)local_1f0);
              }
              pppppppuVar15 = local_1e0;
              local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
              if (uVar7 != 0) {
                if (local_1e0 != (undefined8 *******)0x0) {
                  local_1e0 = (undefined8 *******)*local_1e0;
                }
                *pppppppuVar15 = ppppppuVar20;
                if (uVar7 != 0) {
                  *local_1e8 = pppppppuVar15;
                  local_1f0 = CONCAT44(uVar7,1);
                  fVar23 = fVar22;
                  goto LAB_02065cf0;
                }
              }
LAB_02066378:
              fVar23 = fVar22;
            }
          }
          else if ((int)local_1fc < (int)uVar3) {
            if (0 < (int)local_1f0) {
              lVar21 = 0;
              do {
                local_1e0 = (undefined8 *******)local_1e8[lVar21];
                lVar21 = lVar21 + 1;
                *local_1e0 = pppppppuVar15;
                pppppppuVar15 = local_1e0;
              } while (lVar21 < (int)local_1f0);
            }
            pppppppuVar15 = local_1e0;
            local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
            if (uVar7 != 0) {
              if (local_1e0 != (undefined8 *******)0x0) {
                local_1e0 = (undefined8 *******)*local_1e0;
              }
              *pppppppuVar15 = ppppppuVar20;
              if (uVar7 != 0) {
                *local_1e8 = pppppppuVar15;
                local_1f0 = CONCAT44(uVar7,1);
              }
            }
            if (0.0 <= fVar22) {
              fVar23 = fVar22;
            }
            local_1fc = uVar3;
          }
          goto LAB_02065cf0;
        }
LAB_02066404:
        if (0 < (int)local_1f0) {
          lVar21 = 0;
          do {
            local_1e0 = (undefined8 *******)local_1e8[lVar21];
            lVar21 = lVar21 + 1;
            *local_1e0 = pppppppuVar15;
            pppppppuVar15 = local_1e0;
          } while (lVar21 < (int)local_1f0);
        }
        local_1f0 = 0;
        if (uVar7 == 0) {
          return 0;
        }
        *local_1e0 = ppppppuVar20;
        local_1f0._0_4_ = 0;
        iVar16 = (int)local_1f0;
        if (uVar7 != 0) {
          *local_1e8 = local_1e0;
          iVar16 = 1;
          local_1f0 = CONCAT44(uVar7,1);
        }
        goto LAB_02066388;
      }
      lVar21 = *(long *)(*(long *)(puVar11 + 2) + (long)(int)uVar14 * 8);
      if (*(short *)(lVar21 + 0x18) == 0) goto LAB_02065dbc;
LAB_02065d4c:
      if (DAT_053e0208 == 0) {
LAB_02065e34:
        puVar11 = &DAT_053dce00;
        uVar14 = DAT_053dce00;
      }
      else {
        uVar14 = *(uint *)((long)ppppppuVar20 + 0xc);
        if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
          if ((((*(long *)(DAT_053e0208 + 0x16b90) != 0) &&
               (puVar11 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8), puVar11 != (uint *)0x0)
               ) && ((*(uint *)(DAT_053e0208 + 0x16ba8) <= uVar14 ||
                     (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar14) != '\0'))))
             && (((uVar14 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
            iVar16 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              iVar16 = 0x1c;
            }
            puVar11 = (uint *)((ulong)(puVar11[1] * uVar14 + (uint)(ushort)puVar11[2] * 8 + iVar16)
                              + (long)puVar11);
            if (puVar11 != (uint *)0x0) goto LAB_02065da0;
          }
          goto LAB_02065e34;
        }
        if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar14) goto LAB_02065e34;
        if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar14) {
          uVar14 = 0;
        }
        puVar11 = *(uint **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar14 * 8);
        if (puVar11 == (uint *)0x0) goto LAB_02065e34;
LAB_02065da0:
        uVar14 = *puVar11;
      }
      if (uVar14 != 0) {
        cVar13 = DAT_0538d24c;
        do {
          puVar5 = PTR_DAT_04bc1570;
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x68) = 0xffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar14 = *(uint *)(puVar6 + 0x1c);
            if (-1 < (int)uVar14) {
              if ((byte *)((ulong)uVar14 + (long)puVar11) != (byte *)0x0) {
                uVar19 = (ulong)*(byte *)((ulong)uVar14 + (long)puVar11);
                goto LAB_02065f34;
              }
              break;
            }
            if (uVar14 != 0xffffffff) break;
          }
          uVar19 = 1;
          lVar8 = (long)puVar11 - (ulong)*puVar11;
          if ((*puVar11 == 0) || (lVar8 == 0)) goto LAB_02065f34;
          lVar9 = 0xc;
          if (*(char *)(lVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          if (lVar9 + lVar8 == 0) break;
          uVar19 = (ulong)*(ushort *)(lVar8 + 8);
          *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
          if (uVar19 == 0) break;
          piVar10 = (int *)(lVar9 + lVar8 + 4);
          while (piVar10[-1] != -0x5f262d62) {
            piVar10 = piVar10 + 2;
            uVar19 = uVar19 - 1;
            if (uVar19 == 0) goto LAB_02065f30;
          }
          iVar16 = 0;
          if (*piVar10 != -1) {
            iVar16 = *piVar10;
          }
          *(int *)(puVar6 + 0x1c) = iVar16;
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_02065f30:
      uVar19 = 1;
LAB_02065f34:
      local_80[0] = *(ulong *)(lVar21 + 0x18);
      if ((local_80[0] & 0xffff) != 0) {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
        local_68 = lVar8 + uVar19 * 0x3c;
        local_80[0] = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      lVar12 = *(long *)PTR_DAT_04bb32e8;
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar12 + 0x4060));
      if (lVar8 <= lVar9) {
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar12 + 0x4060));
        if (lVar9 == lVar8) goto LAB_02065cf0;
        if (*(int *)((long)ppppppuVar20 + 0xc) == 4) goto LAB_02066404;
        goto LAB_02065fb0;
      }
LAB_02065cf0:
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
    iVar16 = (int)local_1f0;
LAB_02066388:
    if (0 < iVar16) {
      lVar21 = (**(code **)(*param_1 + 0x20))();
      lVar21 = *(long *)(lVar21 + 8);
      uVar14 = *(uint *)(lVar21 + 0x288);
      *(undefined4 *)(lVar21 + 0x288) = *(undefined4 *)(lVar21 + 0x28c);
      uVar14 = uVar14 ^ uVar14 << 0xb;
      *(undefined4 *)(lVar21 + 0x28c) = *(undefined4 *)(lVar21 + 0x290);
      uVar3 = *(uint *)(lVar21 + 0x294);
      *(uint *)(lVar21 + 0x290) = uVar3;
      uVar14 = uVar14 >> 8 ^ uVar3 >> 0x13 ^ uVar14 ^ uVar3;
      *(uint *)(lVar21 + 0x294) = uVar14;
      lVar21 = *(long *)local_1e8[(long)((local_1f0 & 0xffffffff) * (ulong)uVar14) >> 0x20];
      if (param_3 == (uint *)0x0) {
        return lVar21;
      }
      if (lVar21 == 0) {
        return 0;
      }
      *param_3 = local_1fc;
      return lVar21;
    }
  }
  return 0;
}

