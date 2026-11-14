
short FUN_019583d0(long param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  long *plVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  char cVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_88;
  
  if (param_2 == 0) {
    return -2;
  }
  uVar15 = *(uint *)(param_1 + 0x63c);
  *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x640);
  uVar5 = *(uint *)(param_1 + 0x648);
  uVar15 = uVar15 ^ uVar15 << 0xb;
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x644);
  *(uint *)(param_1 + 0x644) = uVar5;
  uVar15 = uVar15 >> 8 ^ uVar5 >> 0x13 ^ uVar15 ^ uVar5;
  *(uint *)(param_1 + 0x648) = uVar15;
  lVar17 = *(long *)PTR_DAT_04bb30a0;
  fVar20 = (float)FUN_00a8c6ac(lVar17);
  if (fVar20 <= 0.0) {
    uVar5 = FUN_00a86724(lVar17);
    if ((uVar5 & 0xfffffffe) == 6) {
      uVar5 = 2;
    }
    else {
      local_88 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      iVar6 = FUN_00a8d32c(lVar17,&local_88);
      uVar5 = 3;
      if (iVar6 == 2) {
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  uVar15 = (uint)((ulong)uVar15 * 1000 >> 0x20);
  if (uVar5 == 3) {
    uVar5 = 0;
    uVar18 = 0;
    do {
      if ((int)*(uint *)(param_2 + 0x1c0) < 1) {
        lVar17 = *(long *)(param_2 + 0xb0);
        if (lVar17 == 0) {
          return -2;
        }
        uVar19 = 0;
        if (*(uint **)(lVar17 + 8) != (uint *)0x0) {
          uVar19 = **(uint **)(lVar17 + 8);
        }
        if (uVar19 <= uVar5) {
          return -2;
        }
        if ((((lVar17 != 0) && (puVar14 = *(uint **)(lVar17 + 8), puVar14 != (uint *)0x0)) &&
            ((*(uint *)(param_2 + 200) <= uVar5 ||
             (*(char *)(*(long *)(param_2 + 0xd0) + (long)(int)uVar5) != '\0')))) &&
           (((uVar5 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * uVar5 + (uint)(ushort)puVar14[2] * 8 + iVar6) +
                            (long)puVar14);
          goto joined_r0x01958680;
        }
      }
      else {
        if (*(uint *)(param_2 + 0x1c0) <= uVar5) {
          return -2;
        }
        uVar19 = uVar5;
        if (*(uint *)(param_2 + 0x1b0) <= uVar5) {
          uVar19 = 0;
        }
        puVar14 = *(uint **)(*(long *)(param_2 + 0x1b8) + (ulong)uVar19 * 8);
joined_r0x01958680:
        if (puVar14 != (uint *)0x0) {
          uVar19 = *puVar14;
          if (uVar19 != 0) {
            cVar16 = DAT_052cba40;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                DAT_052cba40 = '\x01';
                memset(&DAT_052cba44,0xff,300);
                uVar19 = *puVar14;
              }
              else {
                if (-1 < (int)DAT_052cba44) {
                  if ((short *)((ulong)DAT_052cba44 + (long)puVar14) != (short *)0x0) {
                    sVar3 = *(short *)((ulong)DAT_052cba44 + (long)puVar14);
                    if (sVar3 == 0x279) goto LAB_019584f0;
                    goto LAB_019586a4;
                  }
                  break;
                }
                if (DAT_052cba44 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)uVar19;
              sVar3 = 0;
              if ((puVar12 == (uint *)0x0) || (sVar3 = 0, puVar14 == puVar12)) goto LAB_019586a4;
              lVar17 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar14 + (lVar17 - (long)puVar12);
              if (lVar17 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
              DAT_052cba44 = 0xfffffffe;
              if (uVar9 == 0) break;
              puVar12 = (uint *)(lVar17 + 4);
              while (puVar12[-1] != 0x20cb67bc) {
                puVar12 = puVar12 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_019586a0;
              }
              DAT_052cba44 = 0;
              if (*puVar12 != 0xffffffff) {
                DAT_052cba44 = *puVar12;
              }
              uVar19 = *puVar14;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_019586a0:
          sVar3 = 0;
LAB_019586a4:
          uVar19 = *param_4 + *param_3 * 6;
          plVar2 = (long *)(param_1 + 0x170) + (ulong)uVar19 * 2;
          if (0x47 < uVar19) {
            plVar2 = (long *)(param_1 + 0x170);
          }
          pcVar10 = (code *)*plVar2;
          if ((plVar2[1] & 1U) != 0) {
            pcVar10 = *(code **)(pcVar10 + *(long *)((long)puVar14 + (plVar2[1] >> 1)));
          }
          iVar6 = (*pcVar10)();
          uVar18 = iVar6 + uVar18;
          if (uVar15 < (uVar18 & 0xffff)) {
            return sVar3;
          }
        }
      }
LAB_019584f0:
      uVar5 = uVar5 + 1;
    } while( true );
  }
  uVar18 = *(uint *)(lVar17 + 0x65204);
  if (1 < uVar18) {
    uVar18 = 0;
  }
  if ((*(char *)(param_1 + 0x158) != '\0') && (*(uint *)(param_1 + 0x15c) == uVar18))
  goto LAB_019589bc;
  iVar6 = *(int *)(param_1 + 0x148);
  if (iVar6 == 0) {
LAB_01958748:
    uVar9 = 0;
    do {
      if ((int)*(uint *)(param_2 + 0x1c0) < 1) {
        if (((*(long *)(param_2 + 0xb0) == 0) ||
            (puVar14 = *(uint **)(*(long *)(param_2 + 0xb0) + 8), puVar14 == (uint *)0x0)) ||
           (*puVar14 <= uVar9)) goto LAB_019589ac;
        if (((*(uint *)(param_2 + 200) <= uVar9) ||
            (*(char *)(*(long *)(param_2 + 0xd0) + uVar9) != '\0')) &&
           ((puVar14[1] != 0 && ((ushort)puVar14[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar9 + (uint)(ushort)puVar14[2] * 8 + iVar6)
                            + (long)puVar14);
          goto joined_r0x01958904;
        }
      }
      else {
        if (*(uint *)(param_2 + 0x1c0) <= uVar9) goto LAB_019589ac;
        uVar13 = uVar9 & 0xffffffff;
        if (*(uint *)(param_2 + 0x1b0) <= uVar9) {
          uVar13 = 0;
        }
        puVar14 = *(uint **)(*(long *)(param_2 + 0x1b8) + uVar13 * 8);
joined_r0x01958904:
        if (puVar14 != (uint *)0x0) {
          uVar19 = *puVar14;
          if (uVar19 != 0) {
            cVar16 = DAT_052cba40;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                DAT_052cba40 = '\x01';
                memset(&DAT_052cba44,0xff,300);
                uVar19 = *puVar14;
              }
              else {
                if (-1 < (int)DAT_052cba44) {
                  if ((undefined2 *)((ulong)DAT_052cba44 + (long)puVar14) != (undefined2 *)0x0) {
                    uVar7 = *(undefined2 *)((ulong)DAT_052cba44 + (long)puVar14);
                    goto LAB_01958924;
                  }
                  break;
                }
                if (DAT_052cba44 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)uVar19;
              uVar7 = 0;
              if ((puVar12 == (uint *)0x0) || (uVar7 = 0, puVar14 == puVar12)) goto LAB_01958924;
              lVar17 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar14 + (lVar17 - (long)puVar12);
              if (lVar17 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
              DAT_052cba44 = 0xfffffffe;
              if (uVar13 == 0) break;
              puVar12 = (uint *)(lVar17 + 4);
              while (puVar12[-1] != 0x20cb67bc) {
                puVar12 = puVar12 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_01958920;
              }
              DAT_052cba44 = 0;
              if (*puVar12 != 0xffffffff) {
                DAT_052cba44 = *puVar12;
              }
              uVar19 = *puVar14;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_01958920:
          uVar7 = 0;
LAB_01958924:
          if (uVar5 == 0) {
            uVar8 = 5;
          }
          else if (uVar5 == 1) {
            uVar8 = 6;
          }
          else {
            if (uVar5 != 2) goto LAB_01958780;
            uVar8 = 2;
          }
          local_88 = CONCAT44(local_88._4_4_,uVar8);
          iVar6 = FUN_01a11dd8(DAT_052d2598,uVar7);
          if (iVar6 == (int)local_88) {
            uVar19 = *param_4 + *param_3 * 6;
            plVar2 = (long *)(param_1 + 0x170) + (ulong)uVar19 * 2;
            if (0x47 < uVar19) {
              plVar2 = (long *)(param_1 + 0x170);
            }
            pcVar10 = (code *)*plVar2;
            if ((plVar2[1] & 1U) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)((long)puVar14 + (plVar2[1] >> 1)));
            }
            sVar3 = (*pcVar10)();
            uVar19 = uVar5;
            if (*(uint *)(param_1 + 0x148) <= uVar5) {
              uVar19 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x150) + (ulong)uVar19 * 2) =
                 *(short *)(*(long *)(param_1 + 0x150) + (ulong)uVar19 * 2) + sVar3;
          }
        }
      }
LAB_01958780:
      uVar9 = uVar9 + 1;
    } while( true );
  }
  lVar17 = *(long *)(param_1 + 0x150);
  uVar9 = 0;
  do {
    *(undefined2 *)(lVar17 + (-(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar9 << 1)) = 0;
    uVar13 = uVar9 + 1;
    uVar9 = uVar13 & 0xffffffff;
  } while (iVar6 != (int)uVar13);
  if (uVar5 != 3) goto LAB_01958748;
LAB_019589b4:
  *(uint *)(param_1 + 0x15c) = uVar18;
LAB_019589bc:
  fVar20 = *(float *)(param_1 + 0x600);
  uVar18 = 0;
  uVar19 = 0;
  uVar11 = uVar5;
  if (*(uint *)(param_1 + 0x148) <= uVar5) {
    uVar11 = 0;
  }
  uVar1 = uVar5;
  if (*(uint *)(param_1 + 0x148) <= uVar5) {
    uVar1 = 0;
  }
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0x150) + (long)(int)uVar1 * 2));
  fVar21 = (1000.0 - fVar21 * fVar20) /
           (float)(ushort)(1000 - *(short *)(*(long *)(param_1 + 0x150) + (long)(int)uVar11 * 2));
  do {
    if ((int)*(uint *)(param_2 + 0x1c0) < 1) {
      lVar17 = *(long *)(param_2 + 0xb0);
      if (lVar17 == 0) {
        return -2;
      }
      uVar11 = 0;
      if (*(uint **)(lVar17 + 8) != (uint *)0x0) {
        uVar11 = **(uint **)(lVar17 + 8);
      }
      if (uVar11 <= uVar18) {
        return -2;
      }
      if ((((lVar17 != 0) && (puVar14 = *(uint **)(lVar17 + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(param_2 + 200) <= uVar18 ||
           (*(char *)(*(long *)(param_2 + 0xd0) + (long)(int)uVar18) != '\0')))) &&
         (((uVar18 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar18 + (uint)(ushort)puVar14[2] * 8 + iVar6) +
                          (long)puVar14);
        goto joined_r0x01958bd0;
      }
    }
    else {
      if (*(uint *)(param_2 + 0x1c0) <= uVar18) {
        return -2;
      }
      uVar11 = uVar18;
      if (*(uint *)(param_2 + 0x1b0) <= uVar18) {
        uVar11 = 0;
      }
      puVar14 = *(uint **)(*(long *)(param_2 + 0x1b8) + (ulong)uVar11 * 8);
joined_r0x01958bd0:
      if (puVar14 != (uint *)0x0) {
        uVar11 = *puVar14;
        if (uVar11 != 0) {
          cVar16 = DAT_052cba40;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              DAT_052cba40 = '\x01';
              memset(&DAT_052cba44,0xff,300);
              uVar11 = *puVar14;
            }
            else {
              if (-1 < (int)DAT_052cba44) {
                if ((short *)((ulong)DAT_052cba44 + (long)puVar14) != (short *)0x0) {
                  sVar3 = *(short *)((ulong)DAT_052cba44 + (long)puVar14);
                  if (sVar3 == 0x279) goto LAB_01958a40;
                  goto LAB_01958bf4;
                }
                break;
              }
              if (DAT_052cba44 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)uVar11;
            sVar3 = 0;
            if ((puVar12 == (uint *)0x0) || (sVar3 = 0, puVar14 == puVar12)) goto LAB_01958bf4;
            lVar17 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar14 + (lVar17 - (long)puVar12);
            if (lVar17 == 0) break;
            uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
            DAT_052cba44 = 0xfffffffe;
            if (uVar9 == 0) break;
            puVar12 = (uint *)(lVar17 + 4);
            while (puVar12[-1] != 0x20cb67bc) {
              puVar12 = puVar12 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_01958bf0;
            }
            DAT_052cba44 = 0;
            if (*puVar12 != 0xffffffff) {
              DAT_052cba44 = *puVar12;
            }
            uVar11 = *puVar14;
            if (uVar11 == 0) break;
          } while( true );
        }
LAB_01958bf0:
        sVar3 = 0;
LAB_01958bf4:
        if (uVar5 == 0) {
          uVar8 = 5;
LAB_01958c1c:
          local_88 = CONCAT44(local_88._4_4_,uVar8);
          iVar6 = FUN_01a11dd8(*(undefined8 *)PTR_DAT_04bb4008,sVar3);
          fVar22 = fVar20;
          if (iVar6 != (int)local_88) {
            fVar22 = fVar21;
          }
        }
        else {
          if (uVar5 == 1) {
            uVar8 = 6;
            goto LAB_01958c1c;
          }
          if (uVar5 == 2) {
            uVar8 = 2;
            goto LAB_01958c1c;
          }
          fVar22 = fVar21;
        }
        uVar11 = *param_4 + *param_3 * 6;
        plVar2 = (long *)(param_1 + 0x170) + (ulong)uVar11 * 2;
        if (0x47 < uVar11) {
          plVar2 = (long *)(param_1 + 0x170);
        }
        pcVar10 = (code *)*plVar2;
        if ((plVar2[1] & 1U) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)((long)puVar14 + (plVar2[1] >> 1)));
        }
        uVar4 = (*pcVar10)();
        uVar19 = uVar19 + (int)(fVar22 * (float)uVar4);
        if (uVar15 < (uVar19 & 0xffff)) {
          return sVar3;
        }
      }
    }
LAB_01958a40:
    uVar18 = uVar18 + 1;
  } while( true );
LAB_019589ac:
  *(undefined1 *)(param_1 + 0x158) = 1;
  goto LAB_019589b4;
}

