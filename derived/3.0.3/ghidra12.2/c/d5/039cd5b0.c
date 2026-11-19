
void FUN_039cd5b0(long param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  ulong uVar20;
  float *pfVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  long lVar26;
  float *pfVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  float *pfVar31;
  long lVar32;
  long lVar33;
  char *pcVar34;
  float *pfVar35;
  float *pfVar36;
  long lVar37;
  float *pfVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  iVar5 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(long *)PTR_DAT_04bd15a0 + 0x50);
  if (iVar5 == 0) {
    return;
  }
  lVar26 = *(long *)(param_1 + 0x10);
  uVar24 = 0;
  uVar20 = 0;
LAB_039cd7c0:
  uVar23 = (uint)uVar24;
  if (uVar23 < *(uint *)(DAT_05ae9320 + 0x4c)) {
    iVar19 = (int)uVar20;
    pfVar17 = (float *)(lVar26 + (long)iVar19 * 0x588);
    pfVar18 = pfVar17 + 6;
    lVar32 = *(long *)pfVar18;
    pfVar21 = pfVar17 + 4;
    fVar39 = *pfVar21;
    if ((fVar39 != 0.0) && (*param_2 != 0)) {
      uVar24 = 0;
      do {
        if (*param_2 != 0) {
          uVar6 = *(uint *)(param_1 + 0x1c);
          uVar28 = 0;
          plVar30 = *(long **)(lVar32 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
          lVar33 = (long)*param_2 << 3;
          lVar37 = *(long *)(param_2 + 2);
          do {
            (**(code **)(*plVar30 + 0x10))
                      (plVar30,uVar28 & 0xffffffff,*(undefined8 *)(lVar37 + uVar28 * 8),uVar6 & 1);
            uVar28 = uVar28 + 1;
            lVar33 = lVar33 + -8;
          } while (lVar33 != 0);
        }
        uVar28 = uVar24 + 1;
        uVar24 = uVar28 & 0xffffffff;
      } while (fVar39 != (float)uVar28);
    }
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      fVar39 = *pfVar21;
      if (fVar39 == 0.0) {
        return;
      }
      iVar5 = *param_2;
      if (iVar5 == 0) {
        return;
      }
      uVar24 = 0;
      lVar26 = *(long *)pfVar18;
      while( true ) {
        if (iVar5 != 0) {
          lVar33 = *(long *)(param_2 + 2);
          plVar30 = *(long **)(lVar26 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
          uVar20 = 0;
          lVar32 = (long)iVar5 << 3;
          do {
            (**(code **)(*plVar30 + 0x20))
                      (plVar30,uVar20 & 0xffffffff,*(undefined8 *)(lVar33 + uVar20 * 8));
            uVar20 = uVar20 + 1;
            lVar32 = lVar32 + -8;
          } while (lVar32 != 0);
        }
        if (fVar39 == (float)(uVar24 + 1)) break;
        uVar24 = uVar24 + 1 & 0xffffffff;
        iVar5 = *param_2;
      }
      return;
    }
    lVar32 = lVar26 + (long)iVar19 * 0x588;
    bVar9 = *(byte *)(lVar32 + 0x7c);
    *(byte *)(lVar32 + 0x7c) = bVar9 << 1;
    uVar6 = *(uint *)(param_1 + 0x18);
    *(byte *)(lVar32 + 0x7c) = uVar6 == uVar23 | bVar9 << 1;
    puVar11 = PTR_DAT_04bd15a0;
    if ((bVar9 >> 1 & 1) == 0) {
      fVar39 = *pfVar17;
    }
    else {
      lVar32 = *(long *)PTR_DAT_04bd15a0 + 8 + uVar20 * 0x20;
      if (1 < uVar23) {
        lVar32 = *(long *)PTR_DAT_04bd15a0 + 8;
      }
      fVar39 = *(float *)(lVar32 + 4);
      *pfVar17 = fVar39;
      lVar32 = *(long *)puVar11 + 8 + uVar20 * 0x20;
      if (1 < uVar23) {
        lVar32 = *(long *)puVar11 + 8;
      }
      if (*(int *)(lVar32 + 0x18) == 0) {
        puVar25 = (undefined4 *)(lVar32 + 4);
      }
      else {
        iVar10 = 0;
        if (*(int *)(lVar32 + 0x10) <= *(int *)(lVar32 + 0x14)) {
          iVar10 = *(int *)(lVar32 + 0x10);
        }
        puVar25 = (undefined4 *)
                  (*(long *)(lVar32 + 8) + (long)(*(int *)(lVar32 + 0x14) - iVar10) * 0x18 + 0x14);
      }
      *(undefined4 *)(lVar26 + (long)iVar19 * 0x588 + 8) = *puVar25;
    }
    fVar43 = *(float *)(param_1 + 0x24);
    fVar40 = fVar39 - fVar43;
    fVar42 = -fVar40;
    if (0.0 <= fVar40) {
      fVar42 = fVar40;
    }
    fVar40 = fVar39;
    if ((*(byte *)(param_1 + 0x1d) >> 2 & 1) != 0) {
      fVar40 = *(float *)(lVar26 + (long)iVar19 * 0x588 + 8);
      fVar41 = fVar40 - fVar43;
      fVar42 = -fVar41;
      if (0.0 <= fVar41) {
        fVar42 = fVar41;
      }
    }
    fVar43 = fVar43 - fVar40;
    lVar32 = lVar26 + (long)iVar19 * 0x588;
    bVar15 = false;
    puVar22 = (uint *)(lVar32 + 0x74);
    uVar16 = *puVar22;
    fVar40 = fVar43 * 0.01;
    pfVar31 = (float *)(lVar32 + 0x28);
    puVar25 = (undefined4 *)(lVar32 + 0x78);
    pfVar35 = (float *)(lVar32 + 0x48);
    pfVar36 = (float *)(lVar32 + 0x50);
    pfVar27 = (float *)(lVar32 + 4);
    pcVar34 = (char *)(lVar32 + 0x60);
    pfVar38 = (float *)(lVar32 + 0x68);
    do {
      if (uVar16 < 5) {
        switch(uVar16) {
        case 0:
          if ((bVar9 & 2) == 0) {
            uVar16 = 0;
          }
          else {
            if (0.0 < fVar43) {
LAB_039cdb54:
              uVar16 = 1;
              goto LAB_039cdcbc;
            }
            if (((*(uint *)(param_1 + 0x20) >> 1 & 1) == 0) || (*pfVar35 <= 0.0)) {
              if (((*(uint *)(param_1 + 0x20) >> 2 & 1) == 0) || (*pcVar34 != '\0')) {
                uVar16 = 4;
                goto LAB_039cdcbc;
              }
              bVar15 = true;
              *pcVar34 = '\x01';
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              *pfVar35 = 0.0;
              bVar15 = true;
            }
          }
          break;
        case 1:
          if ((bVar9 & 2) == 0) {
LAB_039cda34:
            uVar16 = 1;
          }
          else {
            if (0.0 <= fVar43) {
              if ((((*(uint *)(param_1 + 0x20) >> 2 & 1) == 0) || (*pcVar34 == '\0')) ||
                 (fVar43 <= *pfVar38)) {
                if ((*(uint *)(param_1 + 0x20) >> 1 & 1) == 0) goto LAB_039cda34;
                uVar16 = 1;
                if ((*pfVar35 != 0.0) || (fVar43 <= *pfVar36)) break;
                uVar16 = 3;
              }
              else {
                uVar16 = 2;
              }
              goto LAB_039cdcbc;
            }
            uVar16 = 0;
            *puVar22 = 0;
          }
          break;
        case 2:
          switch(*puVar25) {
          case 0:
            bVar15 = true;
            if (uVar6 == uVar23) {
              *pcVar34 = '\0';
              uVar16 = 2;
              *pfVar27 = fVar39;
              *puVar25 = 1;
            }
            else {
LAB_039cdc30:
              bVar15 = true;
              uVar16 = 2;
            }
            break;
          case 1:
            bVar15 = true;
            uVar16 = 2;
            *pcVar34 = '\x01';
            *puVar25 = 2;
            break;
          case 2:
            fVar41 = (fVar39 - *pfVar27) + *(float *)(param_1 + 0x2c);
            if (*(float *)(lVar32 + 100) < fVar41) {
              *pfVar38 = fVar41;
            }
            *puVar25 = 3;
LAB_039cdc1c:
            bVar15 = true;
            uVar16 = 2;
            break;
          case 3:
            if ((bVar9 & 2) == 0) goto LAB_039cdc1c;
            if ((*pcVar34 == '\0') || (fVar43 <= *pfVar38)) {
              uVar16 = 1;
              *puVar22 = 1;
            }
            else {
              *pcVar34 = '\0';
              uVar16 = 2;
            }
            *puVar25 = 4;
            bVar15 = true;
            break;
          case 4:
            if ((bVar9 & 2) == 0) goto LAB_039cdc30;
LAB_039cdcd4:
            bVar15 = true;
            *puVar22 = 1;
            uVar16 = 1;
            break;
          default:
switchD_039cda98_default:
            uVar16 = 1;
            bVar15 = true;
LAB_039cdcbc:
            *puVar22 = uVar16;
          }
          break;
        case 3:
          switch(*puVar25) {
          case 0:
            bVar15 = true;
            if (uVar6 != uVar23) goto LAB_039cdccc;
            *pfVar27 = fVar39;
            *pfVar35 = 0.001;
            uVar16 = 3;
            *puVar25 = 1;
            break;
          case 1:
            *pfVar35 = 0.0;
            bVar15 = true;
            uVar16 = 3;
            *puVar25 = 2;
            break;
          case 2:
            fVar41 = (fVar39 - *pfVar27) + *(float *)(param_1 + 0x2c);
            if (*(float *)(lVar32 + 0x4c) < fVar41) {
              *pfVar36 = fVar41;
            }
            uVar16 = 3;
            bVar15 = true;
            *puVar25 = 3;
            break;
          case 3:
            if ((bVar9 & 2) != 0) {
              if ((*pfVar35 != 0.0) || (fVar43 <= *pfVar36)) goto switchD_039cda98_default;
              *pfVar35 = 0.001;
            }
            bVar15 = true;
            uVar16 = 3;
            break;
          case 4:
            if ((bVar9 & 2) != 0) goto LAB_039cdcd4;
LAB_039cdccc:
            bVar15 = true;
            uVar16 = 3;
            break;
          default:
            goto switchD_039cda98_default;
          }
          break;
        case 4:
          if (((bVar9 & 2) != 0) &&
             (((*(byte *)(param_1 + 0x1d) >> 3 & 1) == 0 || (*(float *)(param_1 + 0x28) <= fVar42)))
             ) {
            pfVar3 = (float *)(lVar32 + 0x34);
            if (0.0 <= fVar40) {
              pfVar3 = (float *)(lVar32 + 0x3c);
            }
            pfVar4 = (float *)(lVar32 + 0x30);
            if (0.0 <= fVar40) {
              pfVar4 = (float *)(lVar32 + 0x38);
            }
            fVar44 = *pfVar31 + fVar40 * *pfVar3 * *pfVar4;
            fVar41 = *(float *)(lVar32 + 0x2c);
            *pfVar31 = fVar44;
            if (1.0 <= fVar41) {
              fVar41 = 0.999;
              *(float *)(lVar32 + 0x2c) = 0.999;
            }
            fVar45 = fVar41;
            if (fVar41 <= fVar44) {
              fVar45 = fVar44;
            }
            bVar12 = false;
            bVar13 = false;
            bVar14 = false;
            if (fVar41 <= fVar44) {
              bVar12 = false;
              bVar13 = false;
              bVar14 = true;
              if (!NAN(fVar45)) {
                bVar12 = fVar45 < 1.0;
                bVar13 = fVar45 == 1.0;
                bVar14 = false;
              }
            }
            if (!bVar13 && bVar12 == bVar14) {
              fVar44 = 1.0;
              if (fVar45 <= 1.0) {
                fVar44 = fVar45;
              }
              *pfVar31 = fVar44;
            }
            if (fVar44 == 1.0) goto LAB_039cdb54;
          }
          uVar16 = 4;
        }
      }
      uVar7 = *(uint *)(lVar32 + 0x70);
      *(uint *)(lVar32 + 0x70) = uVar16;
      if (uVar7 == uVar16) goto code_r0x039cdd50;
      *puVar25 = 0;
    } while( true );
  }
  goto LAB_039cde58;
code_r0x039cdd50:
  if (bVar15) {
    lVar32 = *(long *)PTR_DAT_04bd15a0 + 8 + uVar20 * 0x20;
    if (1 < uVar23) {
      lVar32 = *(long *)PTR_DAT_04bd15a0 + 8;
    }
    *(undefined8 *)(lVar32 + 0x14) = 0;
  }
  fVar39 = *pfVar21;
  if (fVar39 != 0.0) {
    uVar24 = 0;
    uVar28 = 0;
    lVar32 = *(long *)pfVar18;
    do {
      uVar29 = -(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3;
      (**(code **)(**(long **)(lVar32 + uVar29) + 8))();
      lVar33 = *(long *)(param_2 + 2);
      plVar30 = *(long **)(lVar32 + uVar29);
      iVar10 = *param_2;
      if ((*(uint *)(param_1 + 0x20) >> (ulong)((uint)uVar24 & 0x1f) & 1) == 0) {
        if (iVar10 != 0) {
          uVar24 = 0;
          lVar37 = (long)iVar10 << 3;
          do {
            (**(code **)(*plVar30 + 0x20))
                      (plVar30,uVar24 & 0xffffffff,*(undefined8 *)(lVar33 + uVar24 * 8));
            uVar24 = uVar24 + 1;
            lVar37 = lVar37 + -8;
          } while (lVar37 != 0);
        }
      }
      else if (iVar10 != 0) {
        uVar24 = 0;
        lVar37 = (long)iVar10 << 3;
        do {
          (**(code **)(*plVar30 + 0x18))
                    (plVar30,uVar24 & 0xffffffff,*(undefined8 *)(lVar33 + uVar24 * 8));
          uVar24 = uVar24 + 1;
          lVar37 = lVar37 + -8;
        } while (lVar37 != 0);
      }
      uVar24 = uVar28 + 1;
      uVar28 = uVar24 & 0xffffffff;
    } while (fVar39 != (float)uVar24);
  }
  lVar32 = lVar26 + (long)iVar19 * 0x588;
  pbVar1 = (byte *)(lVar32 + 0x7d);
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  pbVar2[1] = (byte)(int)*pfVar17;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  pbVar2[2] = (byte)(int)*pfVar38;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  pbVar2[3] = (byte)(int)*pfVar36;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  pbVar2[4] = (byte)(int)(*pfVar31 * 100.0);
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  *pbVar2 = *pbVar2 & 0xfe | uVar6 == uVar23;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  *pbVar2 = *pbVar2 & 0xfd | bVar9 & 2;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  fVar39 = *pfVar31;
  *pbVar2 = *pbVar2 & 0xfb | (*pfVar35 == 0.0) << 2;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  *pbVar2 = *pbVar2 & 0xf7 | *pcVar34 << 3;
  pbVar2 = pbVar1 + (ulong)*(uint *)(lVar32 + 0x580) * 5;
  if (0xff < *(uint *)(lVar32 + 0x580)) {
    pbVar2 = pbVar1;
  }
  *pbVar2 = *pbVar2 & 0xef | (fVar39 != 1.0) << 4;
  uVar24 = uVar20 + 1;
  uVar20 = uVar24 & 0xffffffff;
  if (iVar5 == (int)uVar24) {
LAB_039cde58:
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      return;
    }
    lVar26 = *(long *)(param_1 + 0x10);
    iVar19 = 0;
    do {
      lVar32 = lVar26 + (long)iVar19 * 0x588;
      iVar8 = *(int *)(lVar32 + 0x580);
      iVar10 = 0;
      if (iVar8 + 1U < 0x100) {
        iVar10 = iVar8 + 1;
      }
      *(int *)(lVar32 + 0x580) = iVar10;
      iVar19 = iVar19 + 1;
    } while (iVar5 != iVar19);
    return;
  }
  goto LAB_039cd7c0;
}

