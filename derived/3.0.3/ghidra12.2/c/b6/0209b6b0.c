
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0209b6b0(long param_1,int *param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  int iVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 ******ppppppuVar19;
  long lVar20;
  float fVar21;
  float fVar22;
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
  
  puVar5 = PTR_DAT_04bc1578;
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
    puVar17 = *(undefined8 **)(param_2 + 2);
    local_1fc = 0xffffffff;
    fVar22 = 3.4028235e+38;
    puVar1 = puVar17 + *param_2;
    do {
      pppppppuVar14 = local_1e0;
      ppppppuVar19 = (undefined8 ******)*puVar17;
      uVar13 = *(uint *)((long)ppppppuVar19 + 0x4c);
      if (uVar13 == 0xffffffff) {
        uVar13 = 0;
        if (*(int *)(ppppppuVar19 + 10) != -1) {
          uVar13 = *(int *)(ppppppuVar19 + 10) + 10;
        }
      }
      uVar2 = *(uint *)((long)ppppppuVar19 + 0xc);
      puVar10 = (uint *)(param_1 + 0x180) + (ulong)uVar2 * 8;
      if (0x14 < uVar2) {
        puVar10 = (uint *)(param_1 + 0x180);
      }
      uVar6 = local_1f0._4_4_;
      if (*puVar10 <= uVar13) {
        lVar20 = 0;
        if (_SUB_00000018 != 0) goto LAB_0209b82c;
LAB_0209b89c:
        if (uVar2 != 4) {
LAB_0209ba90:
          lVar7 = DAT_053e0208;
          if (DAT_053e0208 == 0) {
LAB_0209bb60:
            puVar10 = &DAT_053dce00;
            if (DAT_053dce00 == 0) goto LAB_0209bc64;
LAB_0209bb70:
            cVar12 = DAT_0538d24c;
            do {
              puVar4 = PTR_DAT_04bc1570;
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x68) = 0xffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar13 = *(uint *)(puVar5 + 0x2c);
                if (-1 < (int)uVar13) {
                  if (((byte *)((ulong)uVar13 + (long)puVar10) == (byte *)0x0) ||
                     (bVar3 = *(byte *)((ulong)uVar13 + (long)puVar10), uVar13 = (uint)bVar3,
                     3 < bVar3)) goto LAB_0209bc64;
                  goto LAB_0209bc68;
                }
                if (uVar13 != 0xffffffff) goto LAB_0209bc64;
              }
              puVar16 = (uint *)(ulong)*puVar10;
              uVar13 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar16)) goto LAB_0209bc68;
              lVar8 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar16)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar10 + (lVar8 - (long)puVar16);
              if (lVar8 == 0) goto LAB_0209bc64;
              uVar18 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar16));
              *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
              uVar13 = 0;
              if (uVar18 == 0) goto LAB_0209bc68;
              piVar9 = (int *)(lVar8 + 4);
              while (piVar9[-1] != -0x2947dcfb) {
                piVar9 = piVar9 + 2;
                uVar18 = uVar18 - 1;
                if (uVar18 == 0) {
                  uVar13 = 0;
                  goto LAB_0209bc68;
                }
              }
              iVar15 = 0;
              if (*piVar9 != -1) {
                iVar15 = *piVar9;
              }
              *(int *)(puVar5 + 0x2c) = iVar15;
            } while (*puVar10 != 0);
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)((long)ppppppuVar19 + 0xc);
            if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
              if ((((*(long *)(DAT_053e0208 + 0x16b90) != 0) &&
                   (puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8),
                   puVar10 != (uint *)0x0)) &&
                  ((*(uint *)(DAT_053e0208 + 0x16ba8) <= uVar13 ||
                   (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar13) != '\0')))) &&
                 (((uVar13 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
                iVar15 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  iVar15 = 0x1c;
                }
                puVar10 = (uint *)((ulong)(puVar10[1] * uVar13 + (uint)(ushort)puVar10[2] * 8 +
                                          iVar15) + (long)puVar10);
                if (puVar10 != (uint *)0x0) goto LAB_0209bae0;
              }
              goto LAB_0209bb60;
            }
            if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar13) goto LAB_0209bb60;
            if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar13) {
              uVar13 = 0;
            }
            puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar13 * 8);
            if (puVar10 == (uint *)0x0) goto LAB_0209bb60;
LAB_0209bae0:
            if (*puVar10 != 0) goto LAB_0209bb70;
LAB_0209bc64:
            uVar13 = 0;
          }
LAB_0209bc68:
          local_68 = CONCAT44(local_68._4_4_,uVar13);
          if (uVar13 == 3) {
            uVar13 = 0;
          }
          else {
            lVar8 = param_1 + 0x20 + (ulong)uVar13 * 0x20;
            if (2 < uVar13) {
              lVar8 = param_1 + 0x20;
            }
            fVar21 = *(float *)(lVar8 + 0xc);
            piVar9 = (int *)(**(code **)(*(long *)(lVar7 + 0x1cc8) + 0xf0))(lVar7 + 0x1cc8);
            uVar13 = (int)fVar21 - *piVar9;
            uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          }
          fVar21 = *(float *)(ppppppuVar19 + 0xc);
          uVar2 = *(uint *)(lVar20 + 0x10);
          if ((int)uVar13 <= (int)*(uint *)(lVar20 + 0x10)) {
            uVar2 = uVar13;
          }
          if (uVar2 == local_1fc) {
            if ((fVar21 < 0.0) || (fVar21 == fVar22)) {
              if ((int)(uint)local_1f0 < (int)local_1f0._4_4_) {
                if (local_1e0 != (undefined8 *******)0x0) {
                  local_1e0 = (undefined8 *******)*local_1e0;
                }
                *pppppppuVar14 = ppppppuVar19;
                if ((int)(uint)local_1f0 < (int)local_1f0._4_4_) {
                  local_1e8[(int)(uint)local_1f0] = pppppppuVar14;
                  local_1f0 = CONCAT44(local_1f0._4_4_,(uint)local_1f0 + 1);
                }
              }
              if (0.0 <= fVar21) goto LAB_0209be58;
            }
            else if (fVar21 < fVar22) {
              if (0 < (int)(uint)local_1f0) {
                lVar20 = 0;
                do {
                  local_1e0 = (undefined8 *******)local_1e8[lVar20];
                  lVar20 = lVar20 + 1;
                  *local_1e0 = pppppppuVar14;
                  pppppppuVar14 = local_1e0;
                } while (lVar20 < (int)(uint)local_1f0);
              }
              pppppppuVar14 = local_1e0;
              local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
              if (uVar6 != 0) {
                if (local_1e0 != (undefined8 *******)0x0) {
                  local_1e0 = (undefined8 *******)*local_1e0;
                }
                *pppppppuVar14 = ppppppuVar19;
                if (uVar6 != 0) {
                  *local_1e8 = pppppppuVar14;
                  local_1f0 = CONCAT44(uVar6,1);
                  fVar22 = fVar21;
                  goto LAB_0209b7d0;
                }
              }
LAB_0209be58:
              fVar22 = fVar21;
            }
          }
          else if ((int)local_1fc < (int)uVar2) {
            if (0 < (int)(uint)local_1f0) {
              lVar20 = 0;
              do {
                local_1e0 = (undefined8 *******)local_1e8[lVar20];
                lVar20 = lVar20 + 1;
                *local_1e0 = pppppppuVar14;
                pppppppuVar14 = local_1e0;
              } while (lVar20 < (int)(uint)local_1f0);
            }
            pppppppuVar14 = local_1e0;
            local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
            if (uVar6 != 0) {
              if (local_1e0 != (undefined8 *******)0x0) {
                local_1e0 = (undefined8 *******)*local_1e0;
              }
              *pppppppuVar14 = ppppppuVar19;
              if (uVar6 != 0) {
                *local_1e8 = pppppppuVar14;
                local_1f0 = CONCAT44(uVar6,1);
              }
            }
            if (0.0 <= fVar21) {
              fVar22 = fVar21;
            }
            local_1fc = uVar2;
          }
          goto LAB_0209b7d0;
        }
LAB_0209bed8:
        if (0 < (int)(uint)local_1f0) {
          lVar20 = 0;
          do {
            local_1e0 = (undefined8 *******)local_1e8[lVar20];
            lVar20 = lVar20 + 1;
            *local_1e0 = pppppppuVar14;
            pppppppuVar14 = local_1e0;
          } while (lVar20 < (int)(uint)local_1f0);
        }
        local_1f0._0_4_ = 0;
        if (local_1f0._4_4_ == 0) {
          return 0;
        }
        *local_1e0 = ppppppuVar19;
        if (local_1f0._4_4_ != 0) {
          *local_1e8 = local_1e0;
          local_1f0._0_4_ = 1;
        }
        goto LAB_0209be68;
      }
      lVar20 = *(long *)(*(long *)(puVar10 + 2) + (long)(int)uVar13 * 8);
      if (*(short *)(lVar20 + 0x18) == 0) goto LAB_0209b89c;
LAB_0209b82c:
      if (DAT_053e0208 == 0) {
LAB_0209b914:
        puVar10 = &DAT_053dce00;
        uVar13 = DAT_053dce00;
      }
      else {
        uVar13 = *(uint *)((long)ppppppuVar19 + 0xc);
        if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
          if ((((*(long *)(DAT_053e0208 + 0x16b90) != 0) &&
               (puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8), puVar10 != (uint *)0x0)
               ) && ((*(uint *)(DAT_053e0208 + 0x16ba8) <= uVar13 ||
                     (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar13) != '\0'))))
             && (((uVar13 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
            iVar15 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              iVar15 = 0x1c;
            }
            puVar10 = (uint *)((ulong)(puVar10[1] * uVar13 + (uint)(ushort)puVar10[2] * 8 + iVar15)
                              + (long)puVar10);
            if (puVar10 != (uint *)0x0) goto LAB_0209b880;
          }
          goto LAB_0209b914;
        }
        if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar13) goto LAB_0209b914;
        if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar13) {
          uVar13 = 0;
        }
        puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar13 * 8);
        if (puVar10 == (uint *)0x0) goto LAB_0209b914;
LAB_0209b880:
        uVar13 = *puVar10;
      }
      if (uVar13 != 0) {
        cVar12 = DAT_0538d24c;
        do {
          puVar4 = PTR_DAT_04bc1570;
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x68) = 0xffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar13 = *(uint *)(puVar5 + 0x1c);
            if (-1 < (int)uVar13) {
              if ((byte *)((ulong)uVar13 + (long)puVar10) != (byte *)0x0) {
                uVar18 = (ulong)*(byte *)((ulong)uVar13 + (long)puVar10);
                goto LAB_0209ba14;
              }
              break;
            }
            if (uVar13 != 0xffffffff) break;
          }
          uVar18 = 1;
          lVar7 = (long)puVar10 - (ulong)*puVar10;
          if ((*puVar10 == 0) || (lVar7 == 0)) goto LAB_0209ba14;
          lVar8 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          if (lVar8 + lVar7 == 0) break;
          uVar18 = (ulong)*(ushort *)(lVar7 + 8);
          *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar9 = (int *)(lVar8 + lVar7 + 4);
          while (piVar9[-1] != -0x5f262d62) {
            piVar9 = piVar9 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_0209ba10;
          }
          iVar15 = 0;
          if (*piVar9 != -1) {
            iVar15 = *piVar9;
          }
          *(int *)(puVar5 + 0x1c) = iVar15;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_0209ba10:
      uVar18 = 1;
LAB_0209ba14:
      local_80[0] = *(ulong *)(lVar20 + 0x18);
      if ((local_80[0] & 0xffff) != 0) {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
        local_68 = lVar7 + uVar18 * 0x3c;
        local_80[0] = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      lVar11 = *(long *)PTR_DAT_04bb32e8;
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar11 + 0x4060));
      if (lVar7 <= lVar8) {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar11 + 0x4060));
        if (lVar8 == lVar7) goto LAB_0209b7d0;
        if (*(int *)((long)ppppppuVar19 + 0xc) == 4) goto LAB_0209bed8;
        goto LAB_0209ba90;
      }
LAB_0209b7d0:
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
LAB_0209be68:
    if (0 < (int)(uint)local_1f0) {
      lVar20 = *(long *)(*(long *)(param_1 + 8) + 8);
      uVar13 = *(uint *)(lVar20 + 0x288);
      *(undefined4 *)(lVar20 + 0x288) = *(undefined4 *)(lVar20 + 0x28c);
      uVar13 = uVar13 ^ uVar13 << 0xb;
      *(undefined4 *)(lVar20 + 0x28c) = *(undefined4 *)(lVar20 + 0x290);
      uVar2 = *(uint *)(lVar20 + 0x294);
      *(uint *)(lVar20 + 0x290) = uVar2;
      uVar13 = uVar13 >> 8 ^ uVar2 >> 0x13 ^ uVar13 ^ uVar2;
      *(uint *)(lVar20 + 0x294) = uVar13;
      lVar20 = **(long **)((long)local_1e8 +
                          ((ulong)uVar13 * (ulong)(uint)local_1f0 >> 0x1d & 0x7fffffff8));
      if (param_3 == (uint *)0x0) {
        return lVar20;
      }
      if (lVar20 == 0) {
        return 0;
      }
      *param_3 = local_1fc;
      return lVar20;
    }
  }
  return 0;
}

