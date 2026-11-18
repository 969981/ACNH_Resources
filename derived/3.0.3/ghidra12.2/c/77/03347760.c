
void FUN_03347760(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  short sVar13;
  bool bVar14;
  char *pcVar15;
  undefined *puVar16;
  short sVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  char *pcVar23;
  ulong uVar24;
  short sVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined **ppuVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined1 auStack_98 [8];
  
  ppuVar29 = (undefined **)PTR_PTR_04bb2238;
  plVar2 = (long *)(param_1 + 0x330);
  lVar19 = *(long *)(param_1 + 0x330);
  if (*(int *)(param_1 + 0x20f4) != 1) {
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    lVar19 = *(long *)(param_1 + 0x338);
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    lVar19 = *(long *)(param_1 + 0x340);
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    lVar19 = *(long *)(param_1 + 0x348);
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    lVar19 = *(long *)(param_1 + 0x350);
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    lVar19 = *(long *)(param_1 + 0x358);
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    plVar3 = (long *)(param_1 + 0x4e8);
    plVar8 = plVar3 + (ulong)*(uint *)(param_1 + 0x20f4) * 0xcb;
    if (2 < *(uint *)(param_1 + 0x20f4)) {
      plVar8 = plVar3;
    }
    *(undefined2 *)plVar8[1] = 0;
    iVar30 = *(int *)(*(long *)(param_1 + 0x4e0) + 0xc);
    *(undefined4 *)(param_1 + 0x2534) = 0;
    lVar19 = DAT_05355a60;
    if (iVar30 == 0) {
      uVar28 = *(uint *)(param_1 + 0x20f4);
      uVar24 = (ulong)uVar28;
      pfVar4 = (float *)(param_1 + 0x206c) + uVar24 * 3;
      if (2 < uVar28) {
        pfVar4 = (float *)(param_1 + 0x206c);
      }
      fVar41 = *pfVar4;
      if ((uVar28 == 0) || (uVar28 == 1)) {
        fVar41 = fVar41 + 0.0;
      }
      fVar42 = (pfVar4[1] - *(float *)(param_1 + 0x2094)) -
               *(float *)(param_1 + 0x20b8) * (float)-*(int *)(param_1 + 0x2058);
    }
    else {
      uVar26 = *(uint *)(param_1 + 0x2058);
      fVar36 = 0.0;
      uVar28 = uVar26;
      if ((int)uVar26 < 2) {
        uVar28 = 1;
      }
      uVar31 = uVar28 - 1;
      if ((int)(uVar26 + 6) < (int)uVar28) {
        fVar41 = 0.0;
        fVar42 = 0.0;
        uVar32 = uVar31;
      }
      else {
        iVar30 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf4);
        iVar10 = *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf8);
        lVar20 = param_1 + 0x17f8;
        if (uVar31 == 0) {
          iVar27 = 0;
        }
        else {
          uVar24 = (ulong)(uVar28 - 2);
          if (0x1f7 < uVar28) {
            uVar24 = 0;
          }
          iVar27 = *(int *)(lVar20 + uVar24 * 4) + 1;
        }
        fVar42 = 0.0;
        fVar41 = 0.0;
        fVar38 = 0.0;
        uVar24 = 0;
        fVar40 = 0.0;
        sVar25 = 0;
        iVar33 = 0;
        iVar18 = 0;
        pfVar4 = (float *)(param_1 + 0x206c);
        bVar1 = iVar30 <= iVar27 && iVar27 <= iVar10;
        bVar14 = true;
        fVar36 = 0.0;
        do {
          if (bVar14) {
            fVar40 = 0.0;
            iVar18 = 0;
            if (((int)uVar31 < 0) || (*(int *)(param_1 + 0x1fd0) <= (int)uVar31)) {
              fVar38 = 0.0;
              fVar36 = 0.0;
              iVar33 = 0;
              sVar25 = 0;
            }
            else {
              if (uVar31 == 0) {
                iVar18 = 1;
              }
              else {
                uVar21 = (ulong)(uVar31 - 1);
                if (0x1f6 < uVar31) {
                  uVar21 = 0;
                }
                iVar18 = -*(int *)(lVar20 + uVar21 * 4);
              }
              uVar21 = (ulong)uVar31;
              fVar38 = 0.0;
              if (0x1f5 < uVar31) {
                uVar21 = 0;
              }
              fVar36 = 0.0;
              iVar33 = 0;
              sVar25 = 0;
              iVar18 = *(int *)(lVar20 + uVar21 * 4) + iVar18;
            }
          }
          sVar17 = *(short *)(*(long *)(lVar19 + 0x468) + (long)iVar27 * 2);
          if (sVar17 != 0 && sVar17 != 10) {
            sVar13 = 0x25cf;
            if (*(int *)(*(long *)(lVar19 + 0x20) + 0x156c) != 1) {
              sVar13 = sVar17;
            }
            sVar17 = sVar13;
          }
          if ((uVar31 == *(uint *)(param_1 + 0x2060)) && (iVar33 == *(int *)(param_1 + 0x2064))) {
            uVar28 = *(uint *)(param_1 + 0x20f4);
            if (uVar28 == 2) {
              *(float *)(param_1 + 0x2534) = fVar36;
              goto LAB_03347e64;
            }
            pfVar7 = pfVar4 + (ulong)uVar28 * 3;
            if (2 < uVar28) {
              pfVar7 = pfVar4;
            }
            fVar41 = *pfVar7;
            fVar42 = fVar41;
            if (uVar28 == 1) {
              fVar42 = fVar36 * 0.5 + fVar41;
            }
            fVar41 = fVar36 + fVar41;
            if (uVar28 != 0) {
              fVar41 = fVar42;
            }
            fVar42 = (pfVar7[1] - *(float *)(param_1 + 0x2094)) -
                     *(float *)(param_1 + 0x20b8) * (float)(int)(uVar31 - uVar26);
            if (iVar33 < iVar18) goto LAB_03347e6c;
LAB_03347f18:
            sVar17 = sVar25;
            if (iVar33 == iVar18) goto LAB_03347f24;
LAB_03347d80:
            bVar14 = false;
          }
          else {
LAB_03347e64:
            if (iVar18 <= iVar33) goto LAB_03347f18;
LAB_03347e6c:
            if (iVar30 == iVar27) {
              fVar38 = fVar36;
              bVar14 = true;
            }
            else {
              bVar14 = bVar1;
            }
            fVar34 = fVar36;
            if (iVar10 != iVar27) {
              fVar34 = fVar40;
            }
            fVar40 = fVar34;
            bVar1 = false;
            if (iVar10 != iVar27) {
              bVar1 = bVar14;
            }
            if (sVar17 != 10) {
              fVar34 = (float)FUN_03349620(param_1,sVar25,sVar17);
              fVar36 = fVar36 + fVar34;
            }
            iVar27 = iVar27 + 1;
            iVar33 = iVar33 + 1;
            sVar25 = sVar17;
            if (iVar33 != iVar18) goto LAB_03347d80;
LAB_03347f24:
            if (bVar1) {
              fVar40 = fVar36;
            }
            if (fVar38 != fVar40) {
              lVar22 = *(long *)(param_1 + 0x3a8);
              if (lVar22 != 0) {
                pfVar7 = pfVar4 + (ulong)*(uint *)(param_1 + 0x20f4) * 3;
                if (2 < *(uint *)(param_1 + 0x20f4)) {
                  pfVar7 = pfVar4;
                }
                fVar34 = *pfVar7;
                fVar39 = pfVar7[1];
                *(undefined4 *)(lVar22 + 0x38) = 0;
                *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
                *(float *)(lVar22 + 0x30) = fVar34;
                *(float *)(lVar22 + 0x34) = fVar39 + -74.0;
              }
              uVar28 = (uint)uVar24;
              if (5 < uVar28) {
                uVar24 = 0;
              }
              lVar22 = plVar2[uVar24];
              if (lVar22 != 0) {
                bVar11 = *(byte *)(lVar22 + 0x58);
                fVar39 = 0.0;
                *(byte *)(lVar22 + 0x58) = bVar11 | 1;
                iVar35 = *(int *)(param_1 + 0x20f4);
                *(float *)(lVar22 + 0x50) = fVar40 - fVar38;
                bVar11 = bVar11 | 0x11;
                fVar34 = fVar36;
                if (iVar35 != 2) {
                  fVar34 = 0.0;
                }
                *(byte *)(lVar22 + 0x58) = bVar11;
                if (*(int *)(param_1 + 0x20f4) == 1) {
                  fVar39 = -(*(float *)(param_1 + 0x20b8) *
                            (float)(int)((uVar31 - *(int *)(param_1 + 0x2058)) + 1));
                }
                *(undefined4 *)(lVar22 + 0x38) = 0;
                *(byte *)(lVar22 + 0x58) = bVar11;
                *(float *)(lVar22 + 0x30) = fVar38 - fVar34;
                *(float *)(lVar22 + 0x34) = fVar39;
              }
              uVar24 = (ulong)(uVar28 + 1);
            }
            if ((uVar31 == *(uint *)(param_1 + 0x2060)) && (iVar18 == *(int *)(param_1 + 0x2064))) {
              uVar28 = *(uint *)(param_1 + 0x20f4);
              if (uVar28 == 2) {
                *(float *)(param_1 + 0x2534) = fVar36;
              }
              else {
                pfVar7 = pfVar4 + (ulong)uVar28 * 3;
                if (2 < uVar28) {
                  pfVar7 = pfVar4;
                }
                fVar41 = *pfVar7;
                if (uVar28 == 0) {
                  fVar41 = fVar36 + fVar41;
                }
                else if (uVar28 == 1) {
                  fVar41 = fVar36 * 0.5 + fVar41;
                }
                fVar42 = (pfVar7[1] - *(float *)(param_1 + 0x2094)) -
                         *(float *)(param_1 + 0x20b8) *
                         (float)(int)(uVar31 - *(int *)(param_1 + 0x2058));
              }
            }
            uVar32 = uVar31 + 1;
            if (((int)uVar31 < -1) || (*(int *)(param_1 + 0x1fd0) <= (int)uVar32)) break;
            if ((int)uVar31 < *(int *)(param_1 + 0x2058) + 5) {
              plVar8 = plVar3 + (ulong)*(uint *)(param_1 + 0x20f4) * 0xcb;
              if (2 < *(uint *)(param_1 + 0x20f4)) {
                plVar8 = plVar3;
              }
              (**(code **)(*plVar8 + 0x18))(plVar8);
              lVar22 = plVar8[1];
              uVar21 = 0;
              do {
                if (*(short *)(lVar22 + uVar21 * 2) == 0) goto LAB_0334811c;
                lVar5 = lVar22 + uVar21 * 2;
                if (*(short *)(lVar5 + 2) == 0) {
                  uVar21 = uVar21 + 1;
                  goto LAB_0334811c;
                }
                if (*(short *)(lVar5 + 4) == 0) {
                  uVar21 = uVar21 + 2;
                  goto LAB_0334811c;
                }
                uVar21 = uVar21 + 3;
              } while (uVar21 != 0x80001);
              uVar21 = 0;
LAB_0334811c:
              if ((int)uVar21 < (int)plVar8[2] + -1) {
                *(undefined4 *)
                 (lVar22 + (-(uVar21 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar21 & 0xffffffff) << 1)
                 ) = 10;
              }
            }
            bVar14 = true;
            uVar31 = uVar32;
            sVar25 = sVar17;
          }
          uVar26 = *(uint *)(param_1 + 0x2058);
          uVar32 = uVar31;
        } while ((int)uVar31 < (int)(uVar26 + 6));
      }
      uVar26 = *(uint *)(param_1 + 0x2060);
      uVar28 = *(uint *)(param_1 + 0x20f4);
      if (uVar26 == uVar32) {
        ppuVar29 = (undefined **)PTR_PTR_04bb2238;
        if (*(int *)(param_1 + 0x2064) == 0) {
          pfVar4 = (float *)(param_1 + 0x206c) + (ulong)uVar28 * 3;
          if (2 < uVar28) {
            pfVar4 = (float *)(param_1 + 0x206c);
          }
          fVar41 = *pfVar4;
          if (uVar28 == 0) {
LAB_033485d8:
            fVar41 = fVar41 + 0.0;
          }
          else if (uVar28 == 2) {
            fVar41 = fVar41 - (0.0 - *(float *)(param_1 + 0x2534));
          }
          else if (uVar28 == 1) goto LAB_033485d8;
          fVar42 = (pfVar4[1] - *(float *)(param_1 + 0x2094)) -
                   *(float *)(param_1 + 0x20b8) * (float)(int)(uVar32 - *(int *)(param_1 + 0x2058));
        }
      }
      else {
        ppuVar29 = &PTR_PTR_04c4b980;
      }
      if ((uVar26 == uVar32 - 1) && (uVar28 == 2)) {
        fVar41 = *(float *)(param_1 + 0x2084) - (fVar36 - *(float *)(param_1 + 0x2534));
        fVar42 = (*(float *)(param_1 + 0x2088) - *(float *)(param_1 + 0x2094)) -
                 *(float *)(param_1 + 0x20b8) * (float)(int)(uVar26 - *(int *)(param_1 + 0x2058));
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
      if (lVar19 != 0) {
        if (*ppuVar29[1] == '\0') {
          lVar19 = *(long *)(*(long *)(lVar19 + 0xf0) + 0x18);
        }
        else {
          local_b8 = PTR_DAT_04bc8e68 + 0x10;
          local_b0 = ppuVar29[1];
          lVar19 = FUN_032cb8e0(auStack_98,&local_b8,*(undefined8 *)(lVar19 + 0xf0));
        }
        *(byte *)(lVar19 + 0x58) =
             *(byte *)(lVar19 + 0x58) & 0xfe | (fVar42 != 0.0 || fVar41 != 0.0);
        uVar28 = *(uint *)(param_1 + 0x20f4);
      }
      uVar24 = (ulong)uVar28;
    }
    puVar9 = (undefined8 *)(param_1 + 0x300) + uVar24;
    if (2 < uVar28) {
      puVar9 = (undefined8 *)(param_1 + 0x300);
    }
    local_c0 = *puVar9;
    plVar2 = plVar3 + uVar24 * 0xcb;
    if (2 < uVar28) {
      plVar2 = plVar3;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_b0 = (char *)plVar2[1];
    local_b8 = PTR_DAT_04bb8610 + 0x10;
    FUN_032d67f0(&local_c0,&local_b8);
    lVar19 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
    cVar12 = *ppuVar29[1];
    pcVar23 = ppuVar29[1];
    pcVar15 = local_b0;
    goto joined_r0x0334873c;
  }
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(param_1 + 0x338);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(param_1 + 0x340);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(param_1 + 0x348);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(param_1 + 0x350);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  lVar19 = *(long *)(param_1 + 0x358);
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  }
  plVar3 = (long *)(param_1 + 0x4e8);
  plVar8 = plVar3 + (ulong)*(uint *)(param_1 + 0x20f4) * 0xcb;
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    plVar8 = plVar3;
  }
  *(undefined2 *)plVar8[1] = 0;
  puVar16 = PTR_DAT_04bc1118;
  if (*(int *)(*(long *)(param_1 + 0x4e0) + 0xc) == 0) {
    uVar28 = 0;
    fVar42 = 0.0;
    uVar26 = 1;
    fVar41 = 0.0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2534) = 0;
    lVar19 = param_1 + 0x17f8;
    lVar20 = *(long *)puVar16;
    uVar31 = *(uint *)(param_1 + 0x2058);
    uVar28 = uVar31;
    if ((int)uVar31 < 2) {
      uVar28 = 1;
    }
    uVar26 = uVar28 - 1;
    if (uVar26 == 0) {
      iVar30 = 0;
    }
    else {
      uVar24 = (ulong)(uVar28 - 2);
      if (0x1f7 < uVar28) {
        uVar24 = 0;
      }
      iVar30 = *(int *)(lVar19 + uVar24 * 4) + 1;
    }
    iVar10 = *(int *)(*(long *)(lVar20 + 0x20) + 0xcf4);
    iVar27 = *(int *)(*(long *)(lVar20 + 0x20) + 0xcf8);
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x398) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
    if ((int)(uVar31 + 6) < (int)uVar28) {
      uVar31 = 0;
      fVar36 = 0.0;
      fVar41 = 0.0;
      fVar42 = 0.0;
    }
    else {
      fVar41 = 0.0;
      bVar1 = iVar10 <= iVar30 && iVar30 <= iVar27;
      fVar42 = 0.0;
      fVar40 = 0.0;
      fVar36 = 0.0;
      fVar38 = 0.0;
      sVar25 = 0;
      uVar24 = 0;
      iVar33 = 0;
      iVar18 = 0;
      bVar14 = true;
      uVar28 = 0;
      do {
        sVar17 = sVar25;
        if (bVar14) {
          fVar38 = 0.0;
          iVar18 = 0;
          if (((int)uVar26 < 0) || (*(int *)(param_1 + 0x1fd0) <= (int)uVar26)) {
            fVar36 = 0.0;
            fVar40 = 0.0;
            iVar33 = 0;
            sVar17 = 0;
          }
          else {
            if (uVar26 == 0) {
              iVar18 = 1;
            }
            else {
              uVar21 = (ulong)(uVar26 - 1);
              if (0x1f6 < uVar26) {
                uVar21 = 0;
              }
              iVar18 = -*(int *)(lVar19 + uVar21 * 4);
            }
            uVar21 = (ulong)uVar26;
            fVar36 = 0.0;
            if (0x1f5 < uVar26) {
              uVar21 = 0;
            }
            fVar40 = 0.0;
            iVar33 = 0;
            sVar17 = 0;
            iVar18 = *(int *)(lVar19 + uVar21 * 4) + iVar18;
          }
        }
        uVar31 = uVar26;
        fVar34 = fVar40;
        if (uVar26 != *(uint *)(param_1 + 0x2060) || iVar33 != *(int *)(param_1 + 0x2064)) {
          uVar31 = uVar28;
          fVar34 = fVar41;
        }
        fVar41 = fVar34;
        sVar25 = sVar17;
        if (iVar33 < iVar18) {
          sVar13 = *(short *)(*(long *)(lVar20 + 0x468) + (long)iVar30 * 2);
          sVar25 = sVar13;
          if ((sVar13 != 0 && sVar13 != 10) &&
             (sVar25 = 0x25cf, *(int *)(*(long *)(lVar20 + 0x20) + 0x156c) != 1)) {
            sVar25 = sVar13;
          }
          bVar14 = bVar1;
          if (iVar10 == iVar30) {
            fVar36 = fVar40;
            bVar14 = true;
          }
          fVar34 = fVar40;
          bVar1 = false;
          if (iVar27 != iVar30) {
            fVar34 = fVar38;
            bVar1 = bVar14;
          }
          fVar38 = fVar34;
          fVar34 = (float)FUN_03349620(param_1,sVar17,sVar25);
          fVar40 = fVar40 + fVar34;
          iVar30 = iVar30 + 1;
          iVar33 = iVar33 + 1;
        }
        if (iVar33 == iVar18) {
          if (bVar1) {
            fVar38 = fVar40;
          }
          if (fVar36 != fVar38) {
            lVar22 = *(long *)(param_1 + 0x3a8);
            if (lVar22 != 0) {
              iVar35 = *(int *)(param_1 + 0x1fd0);
              fVar34 = *(float *)(param_1 + 0x20b8);
              puVar6 = (undefined4 *)(param_1 + 0x206c) + (ulong)*(uint *)(param_1 + 0x20f4) * 3;
              if (2 < *(uint *)(param_1 + 0x20f4)) {
                puVar6 = (undefined4 *)(param_1 + 0x206c);
              }
              uVar37 = *puVar6;
              fVar39 = (float)puVar6[1];
              *(undefined4 *)(lVar22 + 0x38) = 0;
              *(undefined4 *)(lVar22 + 0x30) = uVar37;
              *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
              *(float *)(lVar22 + 0x34) = fVar39 + -14.0 + fVar34 * (float)iVar35 * 0.5;
            }
            uVar28 = (uint)uVar24;
            uVar21 = uVar24;
            if (5 < uVar28) {
              uVar21 = 0;
            }
            lVar22 = plVar2[uVar21];
            if (lVar22 != 0) {
              if (5 < uVar28) {
                uVar24 = 0;
              }
              *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
              *(float *)(param_1 + 0x360 + uVar24 * 4) = fVar36;
              *(float *)(param_1 + 0x378 + uVar24 * 4) = fVar38;
              ((int *)(param_1 + 0x390))[uVar24] = uVar26;
            }
            uVar24 = (ulong)(uVar28 + 1);
          }
          uVar28 = uVar26 + 1;
          fVar34 = fVar40;
          uVar32 = uVar26;
          if (uVar26 != *(uint *)(param_1 + 0x2060) || iVar18 != *(int *)(param_1 + 0x2064)) {
            fVar34 = fVar41;
            uVar32 = uVar31;
          }
          uVar31 = uVar32;
          fVar41 = fVar34;
          fVar34 = fVar40;
          if (fVar40 <= fVar42) {
            fVar34 = fVar42;
          }
          fVar42 = fVar34;
          if (((int)uVar26 < -1) || (*(int *)(param_1 + 0x1fd0) <= (int)uVar28)) {
            uVar26 = uVar28;
            break;
          }
          bVar14 = true;
          uVar26 = uVar28;
        }
        else {
          bVar14 = false;
        }
        uVar28 = uVar31;
      } while ((int)uVar26 < *(int *)(param_1 + 0x2058) + 6);
      fVar36 = fVar42 * 0.5;
      iVar30 = *(int *)(param_1 + 0x390);
      if ((iVar30 < 0) || (lVar19 = *plVar2, lVar19 == 0)) {
        ppuVar29 = &PTR_PTR_04c4b980;
      }
      else {
        fVar38 = *(float *)(param_1 + 0x360);
        fVar40 = *(float *)(param_1 + 0x378);
        bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
        *(byte *)(lVar19 + 0x58) = bVar11;
        *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
        ppuVar29 = (undefined **)PTR_PTR_04bb2238;
        fVar40 = 0.0;
        if (*(int *)(param_1 + 0x20f4) == 1) {
          fVar40 = -(*(float *)(param_1 + 0x20b8) *
                    (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1));
        }
        *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
        *(float *)(lVar19 + 0x34) = fVar40;
        *(undefined4 *)(lVar19 + 0x38) = 0;
        *(byte *)(lVar19 + 0x58) = bVar11;
      }
    }
    iVar30 = *(int *)(param_1 + 0x394);
    if ((-1 < iVar30) && (lVar19 = *(long *)(param_1 + 0x338), lVar19 != 0)) {
      fVar38 = *(float *)(param_1 + 0x364);
      fVar40 = *(float *)(param_1 + 0x37c);
      bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
      *(byte *)(lVar19 + 0x58) = bVar11;
      *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
      fVar40 = 0.0;
      if (*(int *)(param_1 + 0x20f4) == 1) {
        fVar40 = -(*(float *)(param_1 + 0x20b8) * (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1)
                  );
      }
      *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
      *(float *)(lVar19 + 0x34) = fVar40;
      *(undefined4 *)(lVar19 + 0x38) = 0;
      *(byte *)(lVar19 + 0x58) = bVar11;
    }
    iVar30 = *(int *)(param_1 + 0x398);
    if ((-1 < iVar30) && (lVar19 = *(long *)(param_1 + 0x340), lVar19 != 0)) {
      fVar38 = *(float *)(param_1 + 0x368);
      fVar40 = *(float *)(param_1 + 0x380);
      bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
      *(byte *)(lVar19 + 0x58) = bVar11;
      *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
      fVar40 = 0.0;
      if (*(int *)(param_1 + 0x20f4) == 1) {
        fVar40 = -(*(float *)(param_1 + 0x20b8) * (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1)
                  );
      }
      *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
      *(float *)(lVar19 + 0x34) = fVar40;
      *(undefined4 *)(lVar19 + 0x38) = 0;
      *(byte *)(lVar19 + 0x58) = bVar11;
    }
    iVar30 = *(int *)(param_1 + 0x39c);
    if ((-1 < iVar30) && (lVar19 = *(long *)(param_1 + 0x348), lVar19 != 0)) {
      fVar38 = *(float *)(param_1 + 0x36c);
      fVar40 = *(float *)(param_1 + 900);
      bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
      *(byte *)(lVar19 + 0x58) = bVar11;
      *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
      fVar40 = 0.0;
      if (*(int *)(param_1 + 0x20f4) == 1) {
        fVar40 = -(*(float *)(param_1 + 0x20b8) * (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1)
                  );
      }
      *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
      *(float *)(lVar19 + 0x34) = fVar40;
      *(undefined4 *)(lVar19 + 0x38) = 0;
      *(byte *)(lVar19 + 0x58) = bVar11;
    }
    iVar30 = *(int *)(param_1 + 0x3a0);
    if ((-1 < iVar30) && (lVar19 = *(long *)(param_1 + 0x350), lVar19 != 0)) {
      fVar38 = *(float *)(param_1 + 0x370);
      fVar40 = *(float *)(param_1 + 0x388);
      bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
      *(byte *)(lVar19 + 0x58) = bVar11;
      *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
      fVar40 = 0.0;
      if (*(int *)(param_1 + 0x20f4) == 1) {
        fVar40 = -(*(float *)(param_1 + 0x20b8) * (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1)
                  );
      }
      *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
      *(float *)(lVar19 + 0x34) = fVar40;
      *(undefined4 *)(lVar19 + 0x38) = 0;
      *(byte *)(lVar19 + 0x58) = bVar11;
    }
    iVar30 = *(int *)(param_1 + 0x3a4);
    if ((-1 < iVar30) && (lVar19 = *(long *)(param_1 + 0x358), lVar19 != 0)) {
      fVar38 = *(float *)(param_1 + 0x374);
      fVar40 = *(float *)(param_1 + 0x38c);
      bVar11 = *(byte *)(lVar19 + 0x58) | 0x10;
      *(byte *)(lVar19 + 0x58) = bVar11;
      *(float *)(lVar19 + 0x50) = fVar40 - fVar38;
      fVar40 = 0.0;
      if (*(int *)(param_1 + 0x20f4) == 1) {
        fVar40 = -(*(float *)(param_1 + 0x20b8) * (float)((iVar30 - *(int *)(param_1 + 0x2058)) + 1)
                  );
      }
      *(float *)(lVar19 + 0x30) = fVar38 - fVar36;
      *(float *)(lVar19 + 0x34) = fVar40;
      *(undefined4 *)(lVar19 + 0x38) = 0;
      *(byte *)(lVar19 + 0x58) = bVar11;
    }
    uVar28 = uVar31;
    if (*(uint *)(param_1 + 0x2060) == uVar26) {
      uVar28 = uVar26;
      fVar36 = 0.0;
      if (*(int *)(param_1 + 0x2064) != 0) {
        uVar28 = uVar31;
        fVar36 = fVar41;
      }
      fVar41 = fVar36;
    }
  }
  uVar31 = *(uint *)(param_1 + 0x20f4);
  puVar9 = (undefined8 *)(param_1 + 0x300) + uVar31;
  if (2 < uVar31) {
    puVar9 = (undefined8 *)(param_1 + 0x300);
  }
  local_c0 = *puVar9;
  plVar2 = plVar3 + (ulong)uVar31 * 0xcb;
  if (2 < uVar31) {
    plVar2 = plVar3;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  local_b0 = (char *)plVar2[1];
  local_b8 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_c0,&local_b8);
  (**(code **)(**(long **)(param_1 + 0x308) + 0x120))(&local_b8);
  fVar36 = local_b0._0_4_ - local_b8._0_4_;
  if (fVar36 <= fVar41) {
    if (fVar36 < fVar42) goto LAB_03348498;
  }
  else if (fVar42 < fVar36) {
LAB_03348498:
    fVar36 = fVar42;
  }
  pfVar4 = (float *)(param_1 + 0x206c) + (ulong)*(uint *)(param_1 + 0x20f4) * 3;
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    pfVar4 = (float *)(param_1 + 0x206c);
  }
  fVar41 = fVar41 + (*pfVar4 - fVar36 * 0.5);
  fVar42 = (*(float *)(param_1 + 0x20b8) * (float)(int)uVar26 * 0.5 + pfVar4[1]) -
           *(float *)(param_1 + 0x20b8) * (float)(int)uVar28;
  lVar20 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
  pcVar23 = ppuVar29[1];
  lVar19 = 0;
  if (lVar20 != 0) {
    if (*pcVar23 == '\0') {
      lVar19 = *(long *)(*(long *)(lVar20 + 0xf0) + 0x18);
    }
    else {
      local_b8 = PTR_DAT_04bc8e68 + 0x10;
      local_b0 = pcVar23;
      lVar19 = FUN_032cb8e0(auStack_98,&local_b8,*(undefined8 *)(lVar20 + 0xf0));
      pcVar23 = ppuVar29[1];
    }
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | (fVar42 != 0.0 || fVar41 != 0.0);
    lVar19 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
  }
  cVar12 = *pcVar23;
  pcVar15 = local_b0;
joined_r0x0334873c:
  local_b0 = pcVar23;
  if (cVar12 == '\0') {
    lVar19 = *(long *)(*(long *)(lVar19 + 0xf0) + 0x18);
    local_b0 = pcVar15;
  }
  else {
    local_b8 = PTR_DAT_04bc8e68 + 0x10;
    lVar19 = FUN_032cb8e0(auStack_98,&local_b8,*(undefined8 *)(lVar19 + 0xf0));
  }
  *(float *)(lVar19 + 0x30) = fVar41;
  *(float *)(lVar19 + 0x34) = fVar42;
  *(undefined4 *)(lVar19 + 0x38) = 0;
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 0x10;
  puVar9 = (undefined8 *)(param_1 + 0x318) + *(uint *)(param_1 + 0x20f4);
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    puVar9 = (undefined8 *)(param_1 + 0x318);
  }
  FUN_033497c0(param_1,*puVar9);
  return;
}

