
void FUN_039bf600(long param_1,long param_2,float *param_3,ulong param_4,uint param_5,long *param_6,
                 long param_7)

{
  undefined4 *puVar1;
  long *plVar2;
  byte *pbVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_64;
  
  lVar11 = *(long *)(param_1 + 8);
  if (((param_4 & 1) == 0) && (lVar11 == 0)) {
    return;
  }
  if ((param_4 & 1) == 0) {
    uVar23 = 0xffffffff;
    fVar31 = 0.0;
    uVar22 = 0xffffffff;
  }
  else {
    fVar31 = 0.0;
    uVar23 = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0x3f80000000000000;
    local_108 = 0;
    local_100 = 0x3f80000000000000;
    if (*(long *)(param_2 + 0x1110) == 0) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = 0xffffffff;
      if ((*(uint *)(param_2 + 0x1124) >> 0x10 & 1) != 0) {
        if ((*(uint *)(param_2 + 0x1124) >> 0x11 & 1) == 0) {
          uVar9 = FUN_03a355a0();
          if ((uVar9 & 1) == 0) goto LAB_039bf68c;
LAB_039bf6c0:
          lVar11 = *(long *)(param_2 + 0x11b0) + (long)(int)local_e8 * 0x30;
          lVar26 = *(long *)(param_2 + 0x11b0) + (long)local_e8._4_4_ * 0x30;
          puVar12 = (uint *)(lVar11 + 0xc);
          local_f0 = local_e0 & 0xffffffff;
          local_100 = local_e0 & 0xffffffff;
          uVar33 = NEON_ucvtf(*(undefined4 *)(lVar11 + 0x10));
          uVar29 = NEON_ucvtf(*puVar12);
          uVar30 = NEON_ucvtf(*(undefined4 *)(lVar26 + 0xc));
          local_f8 = CONCAT44(uVar30,uVar29);
          uVar29 = NEON_ucvtf(*(undefined4 *)(lVar26 + 0x10));
          local_108 = CONCAT44(uVar29,uVar33);
          uVar23 = *(uint *)(lVar26 + 0xc);
          fVar31 = (float)local_e0;
        }
        else {
          uVar9 = FUN_03a35190(param_2 + 0xec0,&local_e8,param_3);
          if ((uVar9 & 1) != 0) goto LAB_039bf6c0;
LAB_039bf68c:
          uVar23 = 0xffffffff;
          puVar12 = (uint *)(param_2 + 0x1154);
        }
        uVar22 = *puVar12;
      }
    }
    lVar26 = *(long *)PTR_DAT_04bbd580;
    lVar11 = lVar26 + 0x80;
    if (param_7 != 0) {
      lVar25 = **(long **)(lVar26 + 0x88);
      bVar10 = (&DAT_041b370c)[(ulong)*(byte *)(lVar25 + 0x44) * 4];
      (**(code **)(*(long *)(lVar26 + 0x80) + 0x18))(lVar11);
      if ((ulong)bVar10 != 0) {
        memcpy((void *)(param_7 + (ulong)*(ushort *)(lVar25 + 0x40)),&local_f8,(ulong)bVar10 << 2);
      }
      lVar25 = **(long **)(lVar26 + 0x88);
      bVar10 = (&DAT_041b370c)[(ulong)*(byte *)(lVar25 + 0x50) * 4];
      (**(code **)(*(long *)(lVar26 + 0x80) + 0x18))(lVar11);
      if ((ulong)bVar10 != 0) {
        memcpy((void *)(param_7 + (ulong)*(ushort *)(lVar25 + 0x4c)),&local_108,(ulong)bVar10 << 2);
      }
    }
    if (param_6 != (long *)0x0) {
      if (*(char *)((long)param_6 + 0xf1) == '\0') {
        local_64 = 1;
      }
      else {
        local_64 = (**(code **)(*param_6 + 0x218))(param_6);
      }
      uVar8 = (**(code **)(*param_6 + 0x1e0))(param_6);
      if ((0 < (int)uVar8) && (0 < local_64)) {
        uVar9 = 0;
        do {
          if ((*(ushort *)
                (param_6[10] +
                 (ulong)*(ushort *)(*(long *)(param_6[0x23] + uVar9 * 0x70) + 0x52) * 0xc + 6) & 1)
              != 0) {
            iVar28 = 0;
            lVar25 = param_6[0x23] + uVar9 * 0x70;
            pcVar19 = (char *)(lVar25 + 0xd);
            plVar2 = (long *)(lVar25 + 0x20);
            pbVar3 = (byte *)(lVar25 + 0xf);
            do {
              uVar24 = *(byte *)((long)param_6 + 0x2e5) & 3;
              if (*pcVar19 != '\0') {
                uVar24 = uVar24 + iVar28 * (uint)*pbVar3;
              }
              lVar25 = 0;
              if (*plVar2 != 0) {
                lVar25 = *plVar2 + (long)(int)uVar24 * 0x48;
              }
              lVar25 = FUN_00347cc4(lVar25);
              lVar27 = **(long **)(lVar26 + 0x88);
              bVar10 = (&DAT_041b370c)[(ulong)*(byte *)(lVar27 + 0x44) * 4];
              (**(code **)(*(long *)(lVar26 + 0x80) + 0x18))(lVar11);
              if (bVar10 != 0) {
                uVar16 = (ulong)*(ushort *)(lVar27 + 0x40);
                if (bVar10 < 8) {
                  lVar27 = 0;
                  puVar13 = &local_f8;
                }
                else {
                  lVar27 = 0;
                  puVar17 = (undefined4 *)(lVar25 + uVar16 + 0x10);
                  puVar13 = &local_f8;
                  do {
                    lVar27 = lVar27 + -8;
                    puVar17[-4] = *(undefined4 *)puVar13;
                    puVar17[-3] = *(undefined4 *)((long)puVar13 + 4);
                    puVar17[-2] = *(undefined4 *)(puVar13 + 1);
                    puVar17[-1] = *(undefined4 *)((long)puVar13 + 0xc);
                    *puVar17 = *(undefined4 *)(puVar13 + 2);
                    puVar17[1] = *(undefined4 *)((long)puVar13 + 0x14);
                    puVar17[2] = *(undefined4 *)(puVar13 + 3);
                    puVar1 = (undefined4 *)((long)puVar13 + 0x1c);
                    puVar13 = puVar13 + 4;
                    puVar17[3] = *puVar1;
                    puVar17 = puVar17 + 8;
                  } while (-lVar27 != ((ulong)bVar10 & 0xf8));
                  lVar27 = -lVar27;
                }
                if ((bVar10 & 7) != 0) {
                  uVar18 = (ulong)bVar10 & 7;
                  puVar17 = (undefined4 *)(lVar25 + uVar16 + lVar27 * 4);
                  do {
                    uVar18 = uVar18 - 1;
                    *puVar17 = *(undefined4 *)puVar13;
                    puVar13 = (undefined8 *)((long)puVar13 + 4);
                    puVar17 = puVar17 + 1;
                  } while (uVar18 != 0);
                }
              }
              lVar27 = **(long **)(lVar26 + 0x88);
              bVar10 = (&DAT_041b370c)[(ulong)*(byte *)(lVar27 + 0x50) * 4];
              (**(code **)(*(long *)(lVar26 + 0x80) + 0x18))(lVar11);
              if (bVar10 != 0) {
                uVar16 = (ulong)*(ushort *)(lVar27 + 0x4c);
                if (bVar10 < 8) {
                  lVar27 = 0;
                  puVar13 = &local_108;
                }
                else {
                  lVar27 = 0;
                  puVar17 = (undefined4 *)(lVar25 + uVar16 + 0x10);
                  puVar13 = &local_108;
                  do {
                    lVar27 = lVar27 + -8;
                    puVar17[-4] = *(undefined4 *)puVar13;
                    puVar17[-3] = *(undefined4 *)((long)puVar13 + 4);
                    puVar17[-2] = *(undefined4 *)(puVar13 + 1);
                    puVar17[-1] = *(undefined4 *)((long)puVar13 + 0xc);
                    *puVar17 = *(undefined4 *)(puVar13 + 2);
                    puVar17[1] = *(undefined4 *)((long)puVar13 + 0x14);
                    puVar17[2] = *(undefined4 *)(puVar13 + 3);
                    puVar1 = (undefined4 *)((long)puVar13 + 0x1c);
                    puVar13 = puVar13 + 4;
                    puVar17[3] = *puVar1;
                    puVar17 = puVar17 + 8;
                  } while (-lVar27 != ((ulong)bVar10 & 0xf8));
                  lVar27 = -lVar27;
                }
                if ((bVar10 & 7) != 0) {
                  uVar18 = (ulong)bVar10 & 7;
                  puVar17 = (undefined4 *)(lVar25 + uVar16 + lVar27 * 4);
                  do {
                    uVar18 = uVar18 - 1;
                    *puVar17 = *(undefined4 *)puVar13;
                    puVar13 = (undefined8 *)((long)puVar13 + 4);
                    puVar17 = puVar17 + 1;
                  } while (uVar18 != 0);
                }
              }
              uVar24 = *(byte *)((long)param_6 + 0x2e5) & 3;
              uVar15 = uVar24;
              if (*pcVar19 != '\0') {
                uVar15 = uVar24 + iVar28 * (uint)*pbVar3;
              }
              lVar25 = 0;
              if (*plVar2 != 0) {
                lVar25 = *plVar2 + (long)(int)uVar15 * 0x48;
              }
              FUN_00347cdc(lVar25,0,0x100);
              if (*pcVar19 != '\0') {
                uVar24 = uVar24 + iVar28 * (uint)*pbVar3;
              }
              lVar25 = 0;
              if (*plVar2 != 0) {
                lVar25 = *plVar2 + (long)(int)uVar24 * 0x48;
              }
              FUN_00347cd8(lVar25);
              iVar28 = iVar28 + 1;
            } while (iVar28 != local_64);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar8);
      }
      uVar8 = (**(code **)(*param_6 + 0xb8))(param_6);
      if (0 < (int)uVar8) {
        lVar11 = 0;
        uVar9 = 0;
        lVar26 = 6;
        do {
          if ((*(ushort *)(param_6[10] + lVar26) & 1) != 0) {
            lVar25 = *(long *)(*(long *)(param_6[0x24] + lVar11) + 0x80);
            sVar5 = *(short *)(lVar25 + 8);
            sVar6 = *(short *)(lVar25 + 10);
            if (sVar5 != -1) {
              (**(code **)(*param_6 + 0x148))(param_6,uVar9 & 0xffffffff,(long)sVar5,&local_f8);
            }
            iVar28 = (int)sVar6;
            if (iVar28 != -1) {
              (**(code **)(*param_6 + 0x148))(param_6,uVar9 & 0xffffffff,iVar28,&local_108);
            }
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x80;
          lVar26 = lVar26 + 0xc;
        } while (uVar8 != uVar9);
      }
    }
    lVar11 = *(long *)(param_1 + 8);
  }
  if (lVar11 == 0) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0x19);
  lVar26 = *(long *)(param_2 + 0x4ae0);
  if ((int)cVar4 == 0xffffffff) goto LAB_039bff8c;
  lVar25 = *(long *)(param_2 + 0x4af8);
  lVar27 = *(long *)(lVar25 + 0x1d8);
  uVar8 = (uint)cVar4;
  if (*(uint *)(lVar25 + 0x1d0) < (uint)(int)cVar4 || *(uint *)(lVar25 + 0x1d0) == uVar8) {
    uVar8 = 0;
  }
  lVar20 = lVar27 + (long)(int)uVar8 * 0x910;
  if (uVar22 != 0xffffffff) {
    lVar21 = lVar20;
    if (uVar22 != 0) {
      lVar21 = *(long *)(*(long *)(lVar27 + (long)(int)uVar8 * 0x910 + 0x6b0) +
                        (long)(int)(uVar22 - 1) * 8);
    }
    uVar22 = (uint)*(byte *)(lVar21 + 0x309);
  }
  if (uVar23 != 0xffffffff) {
    if (uVar23 != 0) {
      lVar20 = *(long *)(*(long *)(lVar27 + (long)(int)uVar8 * 0x910 + 0x6b0) +
                        (long)(int)(uVar23 - 1) * 8);
    }
    uVar23 = (uint)*(byte *)(lVar20 + 0x309);
  }
  if ((uVar23 & uVar22) == 0xffffffff) {
    pcVar19 = *(char **)(lVar11 + 0xc0);
    if (*(long *)(lVar27 + (long)(int)uVar8 * 0x910 + 0x170) == 0) {
      if (((*pcVar19 == cVar4) && (pcVar19[1] == '\0')) && (*(float *)(pcVar19 + 4) == 1.0)) {
        uVar24 = 0;
      }
      else {
        *pcVar19 = cVar4;
        *(undefined1 *)(*(long *)(lVar11 + 0xc0) + 1) = 0;
        *(undefined4 *)(*(long *)(lVar11 + 0xc0) + 4) = 0x3f800000;
        uVar24 = 1;
      }
      uVar24 = uVar24 | (*(byte *)(lVar27 + (long)(int)uVar8 * 0x910 + 0x308) & 0x20) >> 5;
    }
    else if (((*pcVar19 == -1) && (pcVar19[1] == '\0')) && (*(float *)(pcVar19 + 4) == 0.0)) {
      uVar24 = 0;
    }
    else {
      *pcVar19 = -1;
      *(undefined1 *)(*(long *)(lVar11 + 0xc0) + 1) = 0;
      uVar24 = 1;
      *(undefined4 *)(*(long *)(lVar11 + 0xc0) + 4) = 0;
    }
    lVar11 = *(long *)(param_1 + 8);
    uVar9 = (ulong)(1 < *(uint *)(lVar11 + 0xb8));
    pcVar19 = (char *)(*(long *)(lVar11 + 0xc0) + uVar9 * 8);
    if (((*pcVar19 == -1) &&
        (lVar25 = *(long *)(lVar11 + 0xc0) + uVar9 * 8, *(char *)(lVar25 + 1) == '\0')) &&
       (*(float *)(lVar25 + 4) == 0.0)) goto joined_r0x039c00dc;
    *pcVar19 = -1;
    *(undefined1 *)(*(long *)(lVar11 + 0xc0) + (ulong)(1 < *(uint *)(lVar11 + 0xb8)) * 8 + 1) = 0;
    *(undefined4 *)(*(long *)(lVar11 + 0xc0) + (ulong)(1 < *(uint *)(lVar11 + 0xb8)) * 8 + 4) = 0;
LAB_039bfe7c:
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
  }
  else {
    pcVar19 = *(char **)(lVar11 + 0xc0);
    if (((uVar22 == (int)*pcVar19) && (pcVar19[1] == '\0')) &&
       (*(float *)(pcVar19 + 4) == 1.0 - fVar31)) {
      uVar24 = 0;
    }
    else {
      *pcVar19 = (char)uVar22;
      *(undefined1 *)(*(long *)(lVar11 + 0xc0) + 1) = 0;
      uVar24 = 1;
      *(float *)(*(long *)(lVar11 + 0xc0) + 4) = 1.0 - fVar31;
      lVar11 = *(long *)(param_1 + 8);
      pcVar19 = *(char **)(lVar11 + 0xc0);
    }
    uVar9 = (ulong)(1 < *(uint *)(lVar11 + 0xb8));
    if (((uVar23 == (int)pcVar19[uVar9 * 8]) && (pcVar19[uVar9 * 8 + 1] == '\0')) &&
       (*(float *)(pcVar19 + uVar9 * 8 + 4) == fVar31)) {
      uVar8 = 0;
    }
    else {
      pcVar19[uVar9 * 8] = (char)uVar23;
      *(undefined1 *)(*(long *)(lVar11 + 0xc0) + (ulong)(1 < *(uint *)(lVar11 + 0xb8)) * 8 + 1) = 0;
      *(float *)(*(long *)(lVar11 + 0xc0) + (ulong)(1 < *(uint *)(lVar11 + 0xb8)) * 8 + 4) = fVar31;
      uVar8 = 1;
    }
    uVar24 = uVar24 | uVar8;
    if (uVar22 != 0xffffffff) {
      if (*(uint *)(lVar25 + 0x1d0) <= uVar22) {
        uVar22 = 0;
      }
      uVar24 = uVar24 | (*(byte *)(*(long *)(lVar25 + 0x1d8) + (ulong)uVar22 * 0x910 + 0x308) & 0x20
                        ) >> 5;
    }
    if (uVar23 == 0xffffffff) {
joined_r0x039c00dc:
      if (uVar24 != 0) goto LAB_039bfe7c;
    }
    else {
      if (*(uint *)(lVar25 + 0x1d0) <= uVar23) {
        uVar23 = 0;
      }
      if (uVar24 != 0 ||
          (*(byte *)(*(long *)(lVar25 + 0x1d8) + (ulong)uVar23 * 0x910 + 0x308) & 0x20) != 0)
      goto LAB_039bfe7c;
    }
  }
  if ((lVar26 != 0) && ((param_5 & 1) != 0)) {
    iVar28 = 0;
    if (*(long *)(lVar26 + 0x248) != 0) {
      iVar28 = *(int *)(*(long *)(lVar26 + 0x248) + 0x1d0);
    }
    lVar11 = *(long *)(param_1 + 8);
    fVar32 = *(float *)(lVar11 + 0xac) - param_3[1];
    fVar31 = *(float *)(lVar11 + 0xa8) - *param_3;
    fVar34 = *(float *)(lVar11 + 0xb0) - param_3[2];
    if (*(float *)(lVar26 + 0x2d0) < fVar32 * fVar32 + fVar31 * fVar31 + fVar34 * fVar34) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
      *(float *)(lVar11 + 0xa8) = *param_3;
      *(float *)(lVar11 + 0xac) = param_3[1];
      *(float *)(lVar11 + 0xb0) = param_3[2];
      lVar11 = *(long *)(param_1 + 8);
    }
    if (*(int *)(lVar11 + 200) == iVar28) {
      if (*(char *)(lVar26 + 0x240) == '\0') goto LAB_039bff24;
    }
    else {
      *(int *)(lVar11 + 200) = iVar28;
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
LAB_039bff24:
  bVar10 = *(byte *)(param_1 + 0x18);
  if (((bVar10 >> 1 & 1) != 0) &&
     ((lVar11 = *(long *)(param_1 + 8), *(char *)(lVar11 + 0xcd) != '\0' ||
      (*(float *)(lVar11 + 0xd0) != 1.0)))) {
    *(undefined1 *)(lVar11 + 0xcd) = 0;
    *(undefined4 *)(lVar11 + 0xd0) = 0x3f800000;
    bVar10 = *(byte *)(param_1 + 0x18);
  }
  if ((bVar10 & 6) != 0) {
    uVar14 = *(undefined8 *)(param_1 + 8);
    puVar12 = (uint *)(param_2 + 0x4d00);
    do {
      uVar22 = *puVar12;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar7) {
        *puVar12 = uVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined8 *)
     (*(long *)(param_2 + 0x4d08) +
     (-(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3)) = uVar14;
  }
LAB_039bff8c:
  bVar10 = *(byte *)(param_1 + 0x18);
  if ((bVar10 & 6) != 0) {
    lVar11 = *(long *)(param_1 + 8);
    if ((lVar26 != 0) && ((bVar10 >> 1 & 1) != 0)) {
      if (*(char *)(lVar26 + 0x218) == '\0') {
        *(undefined8 *)(lVar11 + 0xe4) = 0;
        *(undefined4 *)(lVar11 + 0x14c) = 0;
        *(undefined8 *)(lVar11 + 0x13c) = 0;
        *(undefined8 *)(lVar11 + 0x144) = 0;
        *(undefined8 *)(lVar11 + 300) = 0;
        *(undefined8 *)(lVar11 + 0x134) = 0;
        *(undefined8 *)(lVar11 + 0x11c) = 0;
        *(undefined8 *)(lVar11 + 0x124) = 0;
        *(undefined8 *)(lVar11 + 0x10c) = 0;
        *(undefined8 *)(lVar11 + 0x114) = 0;
        *(undefined8 *)(lVar11 + 0xfc) = 0;
        *(undefined8 *)(lVar11 + 0x104) = 0;
        *(undefined8 *)(lVar11 + 0xec) = 0;
        *(undefined8 *)(lVar11 + 0xf4) = 0;
      }
      else {
        uVar9 = FUN_039c7a34(lVar26,&local_e8,lVar11 + 0xa8,*(undefined4 *)(lVar26 + 0x25c));
        fVar35 = *(float *)(lVar26 + 0x280);
        fVar31 = *(float *)(lVar26 + 0x2a4);
        fVar32 = *(float *)(lVar26 + 0x2a8);
        fVar34 = *(float *)(lVar26 + 0x2ac);
        *(float *)(lVar11 + 0xd4) = *(float *)(lVar26 + 0x2a0) * fVar35;
        *(float *)(lVar11 + 0xd8) = fVar31 * fVar35;
        *(float *)(lVar11 + 0xdc) = fVar32 * fVar35;
        *(float *)(lVar11 + 0xe0) = fVar34 * fVar35;
        if ((uVar9 & 1) == 0) {
          local_80 = 0;
          local_e8 = 0;
          local_90 = 0;
          local_88 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_e0 = 0;
          local_d8 = 0;
        }
        *(undefined8 *)(lVar11 + 0xe4) = local_e8;
        *(undefined8 *)(lVar11 + 0x13c) = local_90;
        *(undefined8 *)(lVar11 + 0x144) = local_88;
        *(undefined8 *)(lVar11 + 300) = local_a0;
        *(undefined8 *)(lVar11 + 0x134) = local_98;
        *(undefined4 *)(lVar11 + 0x14c) = local_80;
        *(undefined8 *)(lVar11 + 0x11c) = local_b0;
        *(undefined8 *)(lVar11 + 0x124) = local_a8;
        *(undefined8 *)(lVar11 + 0xfc) = local_d0;
        *(undefined8 *)(lVar11 + 0x104) = local_c8;
        *(undefined8 *)(lVar11 + 0x10c) = local_c0;
        *(undefined8 *)(lVar11 + 0x114) = local_b8;
        *(ulong *)(lVar11 + 0xec) = local_e0;
        *(undefined8 *)(lVar11 + 0xf4) = local_d8;
      }
      bVar10 = *(byte *)(param_1 + 0x18) & 0xfd;
      lVar11 = *(long *)(param_1 + 8);
    }
    *(byte *)(param_1 + 0x18) = bVar10 & 0xfb;
    FUN_039c10d0(lVar11,*(undefined1 *)(param_2 + 0x55b4));
    FUN_039c11f0(*(undefined8 *)(param_1 + 8));
  }
  return;
}

