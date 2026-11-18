
void FUN_03357190(long param_1)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  short sVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined **ppuVar21;
  short sVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  char *pcStack_a8;
  
  lVar12 = *(long *)(param_1 + 0x330);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = *(long *)(param_1 + 0x338);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = *(long *)(param_1 + 0x340);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = *(long *)(param_1 + 0x348);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = *(long *)(param_1 + 0x350);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = *(long *)(param_1 + 0x358);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  lVar12 = param_1 + 0x4a8;
  **(undefined2 **)(param_1 + 0x4b0) = 0;
  if ((*(int *)(param_1 + 0x17a0) == 1) && (*(int *)(param_1 + 0x1368) == 0)) {
    (**(code **)(*(long *)(param_1 + 0x4a8) + 0x18))(lVar12);
    lVar13 = *(long *)(param_1 + 0x4b0);
    uVar17 = 0;
    do {
      if (*(short *)(lVar13 + uVar17 * 2) == 0) goto LAB_033572bc;
      lVar3 = lVar13 + uVar17 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar17 = uVar17 + 1;
        goto LAB_033572bc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar17 = uVar17 + 2;
        goto LAB_033572bc;
      }
      uVar17 = uVar17 + 3;
    } while (uVar17 != 0x80001);
    uVar17 = 0;
LAB_033572bc:
    if ((int)uVar17 < *(int *)(param_1 + 0x4b8) + -1) {
      *(undefined4 *)
       (lVar13 + (-(uVar17 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar17 & 0xffffffff) << 1)) = 10;
    }
  }
  lVar13 = DAT_05355a60;
  if (*(int *)(*(long *)(param_1 + 0x4a0) + 0xc) == 0) {
    fVar30 = *(float *)(param_1 + 5000) + 0.0;
    fVar31 = *(float *)(param_1 + 0x13bc) * 0.5;
    if (*(int *)(param_1 + 0x17a0) != 1) {
      fVar31 = 0.0;
    }
    fVar31 = ((*(float *)(param_1 + 0x138c) - fVar31) - *(float *)(param_1 + 0x1398)) -
             *(float *)(param_1 + 0x13bc) * (float)-*(int *)(param_1 + 0x1368);
    ppuVar21 = (undefined **)PTR_PTR_04bb2238;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x1368);
    fVar30 = 0.0;
    uVar24 = uVar11;
    if ((int)uVar11 < 2) {
      uVar24 = 1;
    }
    uVar25 = uVar24 - 1;
    if ((int)(uVar11 + 6) < (int)uVar24) {
      fVar31 = 0.0;
      uVar24 = uVar25;
    }
    else {
      iVar5 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf4);
      iVar6 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf8);
      lVar3 = param_1 + 0xb08;
      if (uVar25 == 0) {
        iVar26 = 0;
      }
      else {
        uVar17 = (ulong)(uVar24 - 2);
        if (0x1f7 < uVar24) {
          uVar17 = 0;
        }
        iVar26 = *(int *)(lVar3 + uVar17 * 4) + 1;
      }
      fVar31 = 0.0;
      fVar34 = 0.0;
      fVar33 = 0.0;
      fVar32 = 0.0;
      uVar17 = 0;
      sVar23 = 0;
      iVar20 = 0;
      iVar16 = 0;
      bVar8 = true;
      bVar1 = iVar5 <= iVar26 && iVar26 <= iVar6;
      do {
        if (bVar8) {
          fVar32 = 0.0;
          iVar16 = 0;
          if (((int)uVar25 < 0) || (*(int *)(param_1 + 0x12e0) <= (int)uVar25)) {
            fVar33 = 0.0;
            fVar34 = 0.0;
            iVar20 = 0;
            sVar23 = 0;
          }
          else {
            if (uVar25 == 0) {
              iVar16 = 1;
            }
            else {
              uVar18 = (ulong)(uVar25 - 1);
              if (0x1f6 < uVar25) {
                uVar18 = 0;
              }
              iVar16 = -*(int *)(lVar3 + uVar18 * 4);
            }
            uVar18 = (ulong)uVar25;
            fVar33 = 0.0;
            if (0x1f5 < uVar25) {
              uVar18 = 0;
            }
            fVar34 = 0.0;
            iVar20 = 0;
            sVar23 = 0;
            iVar16 = *(int *)(lVar3 + uVar18 * 4) + iVar16;
          }
        }
        sVar22 = *(short *)(*(long *)(lVar13 + 0x468) + (long)iVar26 * 2);
        if (sVar22 != 0 && sVar22 != 10) {
          sVar9 = 0x25cf;
          if (*(int *)(*(long *)(lVar13 + 0x20) + 0x156c) != 1) {
            sVar9 = sVar22;
          }
          sVar22 = sVar9;
        }
        if ((uVar25 == *(uint *)(param_1 + 0x1370)) && (iVar20 == *(int *)(param_1 + 0x1374))) {
          fVar30 = fVar34 + *(float *)(param_1 + 5000);
          fVar31 = *(float *)(param_1 + 0x13bc) * 0.5;
          if (*(int *)(param_1 + 0x17a0) != 1) {
            fVar31 = 0.0;
          }
          fVar31 = ((*(float *)(param_1 + 0x138c) - fVar31) - *(float *)(param_1 + 0x1398)) -
                   *(float *)(param_1 + 0x13bc) * (float)(int)(uVar25 - uVar11);
        }
        if (iVar20 < iVar16) {
          if (iVar5 == iVar26) {
            fVar33 = fVar34;
            bVar8 = true;
          }
          else {
            bVar8 = bVar1;
          }
          fVar29 = fVar34;
          if (iVar6 != iVar26) {
            fVar29 = fVar32;
          }
          fVar32 = fVar29;
          bVar1 = false;
          if (iVar6 != iVar26) {
            bVar1 = bVar8;
          }
          if (sVar22 != 10) {
            fVar27 = (float)FUN_03361770(lVar3,sVar23,sVar22);
            fVar27 = fVar27 + *(float *)(param_1 + 0x1328);
            fVar29 = 0.0;
            if (0.0 < fVar27) {
              (**(code **)(*(long *)(param_1 + 0x4a8) + 0x18))(lVar12);
              lVar14 = *(long *)(param_1 + 0x4b0);
              lVar19 = 0;
              do {
                if (*(short *)(lVar14 + lVar19 * 2) == 0) goto LAB_033575bc;
                lVar4 = lVar14 + lVar19 * 2;
                if (*(short *)(lVar4 + 2) == 0) {
                  lVar19 = lVar19 + 1;
                  goto LAB_033575bc;
                }
                if (*(short *)(lVar4 + 4) == 0) {
                  lVar19 = lVar19 + 2;
                  goto LAB_033575bc;
                }
                lVar19 = lVar19 + 3;
              } while (lVar19 != 0x80001);
              lVar19 = 0;
LAB_033575bc:
              if ((int)lVar19 < *(int *)(param_1 + 0x4b8) + -1) {
                psVar2 = (short *)(lVar14 + (long)(int)lVar19 * 2);
                *psVar2 = sVar22;
                psVar2[1] = 0;
              }
              fVar29 = fVar27;
            }
            fVar34 = fVar34 + fVar29;
          }
          iVar26 = iVar26 + 1;
          iVar20 = iVar20 + 1;
          sVar23 = sVar22;
          if (iVar20 != iVar16) goto LAB_033573f4;
LAB_033575f0:
          if (bVar1) {
            fVar32 = fVar34;
          }
          uVar18 = uVar17;
          if (fVar33 != fVar32) {
            uVar24 = (uint)uVar17;
            if (5 < uVar24) {
              uVar17 = 0;
            }
            uVar18 = (ulong)(uVar24 + 1);
            lVar19 = *(long *)(param_1 + 0x330 + uVar17 * 8);
            *(float *)(lVar19 + 0x50) = fVar32 - fVar33;
            bVar15 = *(byte *)(lVar19 + 0x58) | 0x11;
            *(byte *)(lVar19 + 0x58) = bVar15;
            iVar7 = *(int *)(param_1 + 0x1368);
            fVar29 = *(float *)(param_1 + 0x13bc);
            *(undefined4 *)(lVar19 + 0x38) = 0;
            *(byte *)(lVar19 + 0x58) = bVar15;
            *(float *)(lVar19 + 0x30) = fVar33;
            *(float *)(lVar19 + 0x34) = -(fVar29 * (float)(int)((uVar25 - iVar7) + 1));
          }
          (**(code **)(*(long *)(param_1 + 0x4a8) + 0x18))(lVar12);
          lVar19 = *(long *)(param_1 + 0x4b0);
          uVar17 = 0;
          do {
            if (*(short *)(lVar19 + uVar17 * 2) == 0) goto LAB_033576ac;
            lVar14 = lVar19 + uVar17 * 2;
            if (*(short *)(lVar14 + 2) == 0) {
              uVar17 = uVar17 + 1;
              goto LAB_033576ac;
            }
            if (*(short *)(lVar14 + 4) == 0) {
              uVar17 = uVar17 + 2;
              goto LAB_033576ac;
            }
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
          uVar17 = 0;
LAB_033576ac:
          if ((int)uVar17 < *(int *)(param_1 + 0x4b8) + -1) {
            *(undefined4 *)
             (lVar19 + (-(uVar17 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar17 & 0xffffffff) << 1)) =
                 10;
          }
          if ((uVar25 == *(uint *)(param_1 + 0x1370)) && (iVar16 == *(int *)(param_1 + 0x1374))) {
            fVar30 = fVar34 + *(float *)(param_1 + 5000);
            fVar31 = *(float *)(param_1 + 0x13bc) * 0.5;
            if (*(int *)(param_1 + 0x17a0) != 1) {
              fVar31 = 0.0;
            }
            fVar31 = ((*(float *)(param_1 + 0x138c) - fVar31) - *(float *)(param_1 + 0x1398)) -
                     *(float *)(param_1 + 0x13bc) *
                     (float)(int)(uVar25 - *(int *)(param_1 + 0x1368));
          }
          uVar24 = uVar25 + 1;
          if (((int)uVar25 < -1) || (*(int *)(param_1 + 0x12e0) <= (int)uVar24)) break;
          bVar8 = true;
          uVar17 = uVar18;
          uVar25 = uVar24;
        }
        else {
          if (iVar20 == iVar16) goto LAB_033575f0;
LAB_033573f4:
          bVar8 = false;
        }
        uVar11 = *(uint *)(param_1 + 0x1368);
        uVar24 = uVar25;
      } while ((int)uVar25 < (int)(uVar11 + 6));
    }
    if (*(uint *)(param_1 + 0x1370) == uVar24) {
      ppuVar21 = (undefined **)PTR_PTR_04bb2238;
      if (*(int *)(param_1 + 0x1374) == 0) {
        fVar30 = *(float *)(param_1 + 5000) + 0.0;
        fVar31 = *(float *)(param_1 + 0x13bc) * 0.5;
        if (*(int *)(param_1 + 0x17a0) != 1) {
          fVar31 = 0.0;
        }
        fVar31 = ((*(float *)(param_1 + 0x138c) - fVar31) - *(float *)(param_1 + 0x1398)) -
                 *(float *)(param_1 + 0x13bc) * (float)(int)(uVar24 - *(int *)(param_1 + 0x1368));
      }
    }
    else {
      ppuVar21 = &PTR_PTR_04c4b980;
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x388) + 0x10);
    if (lVar13 != 0) {
      if (*ppuVar21[1] == '\0') {
        lVar13 = *(long *)(*(long *)(lVar13 + 0xf0) + 0x18);
      }
      else {
        local_b0 = PTR_DAT_04bc8e68 + 0x10;
        pcStack_a8 = ppuVar21[1];
        lVar13 = FUN_032cb8e0(auStack_b8,&local_b0,*(undefined8 *)(lVar13 + 0xf0));
      }
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | (fVar31 != 0.0 || fVar30 != 0.0);
    }
  }
  local_c0 = *(undefined8 *)(param_1 + 0x308);
  (**(code **)(*(long *)(param_1 + 0x4a8) + 0x18))(lVar12);
  pcStack_a8 = *(char **)(param_1 + 0x4b0);
  local_b0 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_c0,&local_b0);
  lVar12 = *(long *)(*(long *)(param_1 + 0x388) + 0x10);
  if (*ppuVar21[1] == '\0') {
    lVar12 = *(long *)(*(long *)(lVar12 + 0xf0) + 0x18);
  }
  else {
    local_b0 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_a8 = ppuVar21[1];
    lVar12 = FUN_032cb8e0(auStack_b8,&local_b0,*(undefined8 *)(lVar12 + 0xf0));
  }
  *(float *)(lVar12 + 0x30) = fVar30;
  *(float *)(lVar12 + 0x34) = fVar31;
  *(undefined4 *)(lVar12 + 0x38) = 0;
  *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
  uVar24 = *(uint *)(param_1 + 0x17a0) & 0xfffffffd;
  if (*(int *)(*(long *)(param_1 + 0x4a0) + 0xc) == 0) {
    if (uVar24 != 0) {
      lVar12 = *(long *)(param_1 + 800);
      bVar15 = *(byte *)(lVar12 + 0x58) | 1;
      goto LAB_033578dc;
    }
    if (*(int *)(param_1 + 0x17ac) == 2) {
      uVar28 = 0;
      goto LAB_03357938;
    }
    if (*(int *)(param_1 + 0x17ac) == 0) {
      uVar10 = 5;
      uVar28 = 0;
      goto LAB_03357948;
    }
    uVar28 = 0;
  }
  else {
    if (uVar24 != 0) {
      lVar12 = *(long *)(param_1 + 800);
      bVar15 = *(byte *)(lVar12 + 0x58) & 0xfe;
LAB_033578dc:
      *(byte *)(lVar12 + 0x58) = bVar15;
      return;
    }
    if (*(int *)(param_1 + 0x17ac) == 2) {
      uVar28 = 0x3f800000;
LAB_03357938:
      uVar10 = 7;
      goto LAB_03357948;
    }
    if (*(int *)(param_1 + 0x17ac) == 0) {
      uVar10 = 5;
      uVar28 = 0x3f800000;
      goto LAB_03357948;
    }
    uVar28 = 0x3f800000;
  }
  uVar10 = 6;
LAB_03357948:
  FUN_032c8150(uVar28,param_1 + 0x390,uVar10,3);
  return;
}

