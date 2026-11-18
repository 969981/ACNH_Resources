
/* WARNING: Type propagation algorithm not settling */

void FUN_036fdb30(long param_1,int *param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short sVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  short sVar20;
  uint uVar21;
  ulong uVar22;
  short sVar23;
  uint uVar24;
  ulong uVar25;
  char cVar26;
  char cVar27;
  int iVar28;
  undefined8 uVar29;
  uint *puVar30;
  undefined1 auStack_7a4 [4];
  undefined8 local_7a0;
  char *local_798;
  uint *local_790;
  int local_13c;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 *******local_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******local_118;
  undefined8 *******local_110;
  undefined8 *******local_108;
  undefined8 *******local_100;
  undefined8 ******local_f8;
  undefined8 *****local_f0;
  undefined8 ****local_e8;
  undefined8 ***local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [12];
  
  puVar5 = PTR_DAT_04bc2550;
  puVar4 = PTR_DAT_04bc2548;
  local_c8 = 0;
  local_118 = &local_110;
  local_110 = &local_108;
  local_100 = &local_f8;
  local_108 = &local_100;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  pppppppuStack_120 = &local_118;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_138 = 0;
  local_130 = (undefined8 *)0x0;
  if (local_c0 != (undefined8 *)0x0) {
    local_138 = 0xb00000000;
    local_130 = local_c0;
  }
  iVar8 = 0;
  lVar17 = 6;
  cVar27 = *PTR_DAT_04bc2548;
  local_128 = pppppppuStack_120;
  cVar26 = DAT_05ab9860;
  do {
    pppppppuVar6 = local_128;
    if (((&DAT_0545b2cc)[lVar17 * 0x118] != '\0') && ((&DAT_0545b308)[lVar17 * 0x118] == '\0')) {
      uVar9 = (&DAT_0545b2e4)[lVar17 * 0x46];
      if ((int)*(uint *)(param_1 + 0x598) < 1) {
        if ((((*(long *)(param_1 + 0x488) != 0) &&
             (puVar14 = *(uint **)(*(long *)(param_1 + 0x488) + 8), puVar14 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0x4a0) <= uVar9 ||
             (*(char *)(*(long *)(param_1 + 0x4a8) + (long)(int)uVar9) != '\0')))) &&
           (((uVar9 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
          iVar28 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar28 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * uVar9 + (uint)(ushort)puVar14[2] * 8 + iVar28) +
                            (long)puVar14);
          goto joined_r0x036fdd9c;
        }
      }
      else if (uVar9 < *(uint *)(param_1 + 0x598)) {
        if (*(uint *)(param_1 + 0x588) <= uVar9) {
          uVar9 = 0;
        }
        puVar14 = *(uint **)(*(long *)(param_1 + 0x590) + (ulong)uVar9 * 8);
joined_r0x036fdd9c:
        if (puVar14 != (uint *)0x0) {
          uVar9 = *puVar14;
          while (uVar9 != 0) {
            if (cVar27 == '\0') {
              cVar27 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar9 = *(uint *)(puVar5 + 0x28);
              if (-1 < (int)uVar9) {
                if (((char *)((ulong)uVar9 + (long)puVar14) == (char *)0x0) ||
                   (-1 < *(char *)((ulong)uVar9 + (long)puVar14))) goto LAB_036fddd0;
                goto LAB_036fdc30;
              }
              if (uVar9 != 0xffffffff) goto LAB_036fddd0;
            }
            lVar3 = (long)puVar14 - (ulong)*puVar14;
            if ((*puVar14 == 0) || (lVar3 == 0)) goto LAB_036fddd0;
            lVar2 = 0xc;
            if (*(char *)(lVar3 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar3 == 0) goto LAB_036fddd0;
            uVar15 = (ulong)*(ushort *)(lVar3 + 8);
            *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
            if (uVar15 == 0) goto LAB_036fddd0;
            piVar10 = (int *)(lVar2 + lVar3 + 4);
            while (piVar10[-1] != 0x38501139) {
              piVar10 = piVar10 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_036fddd0;
            }
            iVar28 = 0;
            if (*piVar10 != -1) {
              iVar28 = *piVar10;
            }
            *(int *)(puVar5 + 0x28) = iVar28;
            uVar9 = *puVar14;
          }
LAB_036fde58:
          uVar9 = (&DAT_0545b2e0)[lVar17 * 0x46];
          if ((int)*(uint *)(param_1 + 0xb20) < 1) {
            if ((((*(long *)(param_1 + 0xa10) != 0) &&
                 (puVar14 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar14 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 0xa28) <= uVar9 ||
                 (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar9) != '\0')))) &&
               (((uVar9 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
              iVar28 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar28 = 0x1c;
              }
              puVar14 = (uint *)((ulong)(puVar14[1] * uVar9 + (uint)(ushort)puVar14[2] * 8 + iVar28)
                                + (long)puVar14);
              goto joined_r0x036fdf90;
            }
          }
          else if (uVar9 < *(uint *)(param_1 + 0xb20)) {
            uVar24 = uVar9;
            if (*(uint *)(param_1 + 0xb10) <= uVar9) {
              uVar24 = 0;
            }
            puVar14 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar24 * 8);
joined_r0x036fdf90:
            if ((puVar14 != (uint *)0x0) && (*puVar14 != 0)) {
              do {
                if (cVar26 == '\0') {
                  cVar26 = '\x01';
                  DAT_05ab9864 = 0xffffffffffffffff;
                  DAT_05ab986c = -1;
                  DAT_05ab9860 = '\x01';
                  DAT_05ab9874 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_05ab9874) {
                    pcVar1 = (char *)((DAT_05ab9874 & 0xffffffff) + (long)puVar14);
                    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0' && iVar8 < local_138._4_4_)) {
                      if (local_128 != (undefined8 *******)0x0) {
                        local_128 = (undefined8 *******)*local_128;
                      }
                      *(uint *)pppppppuVar6 = uVar9;
                      iVar8 = (uint)local_138;
                      if ((int)(uint)local_138 < local_138._4_4_) {
                        local_130[(int)(uint)local_138] = pppppppuVar6;
                        iVar8 = (uint)local_138 + 1;
                        local_138 = CONCAT44(local_138._4_4_,iVar8);
                      }
                    }
                    break;
                  }
                  if ((int)DAT_05ab9874 != -1) break;
                }
                lVar3 = (long)puVar14 - (ulong)*puVar14;
                if ((*puVar14 == 0) || (lVar3 == 0)) break;
                lVar2 = 0xc;
                if (*(char *)(lVar3 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                if (lVar2 + lVar3 == 0) break;
                uVar15 = (ulong)*(ushort *)(lVar3 + 8);
                DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,0xfffffffe);
                if (uVar15 == 0) break;
                piVar10 = (int *)(lVar2 + lVar3 + 4);
                while (piVar10[-1] != 0x4f0b2be7) {
                  piVar10 = piVar10 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_036fdc30;
                }
                iVar28 = 0;
                if (*piVar10 != -1) {
                  iVar28 = *piVar10;
                }
                DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,iVar28);
                if (*puVar14 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
LAB_036fdc30:
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0xf);
  local_7a0 = PTR_DAT_04bb2020 + 0x10;
  local_798 = "ManGenerateInFieldTemp";
  iVar8 = FUN_02758850(&local_7a0);
  pppppppuVar6 = local_128;
  if (iVar8 == 1) {
    local_13c = 0x1d;
    uVar15 = local_138 & 0xffffffff;
    local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,0x14);
    uVar9 = (uint)local_138;
    if (0 < (int)(uint)local_138) {
      puVar18 = local_130;
      do {
        if ((0x13 < *(int *)*puVar18) && (*(int *)*puVar18 < 0x15)) goto LAB_036fe0d0;
        puVar18 = puVar18 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if ((int)(uint)local_138 < local_138._4_4_) {
      if (local_128 != (undefined8 *******)0x0) {
        local_128 = (undefined8 *******)*local_128;
      }
      *(uint *)pppppppuVar6 = 0x14;
      if ((int)(uint)local_138 < local_138._4_4_) {
        local_130[(int)(uint)local_138] = pppppppuVar6;
        uVar9 = (uint)local_138 + 1;
        local_138 = CONCAT44(local_138._4_4_,uVar9);
      }
    }
LAB_036fe0d0:
    pppppppuVar6 = local_128;
    if (0 < (int)uVar9) {
      uVar15 = (ulong)uVar9;
      puVar18 = local_130;
      do {
        if ((0x1c < *(int *)*puVar18) && (*(int *)*puVar18 < 0x1e)) goto LAB_036fe160;
        puVar18 = puVar18 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if ((int)uVar9 < local_138._4_4_) {
      if (local_128 != (undefined8 *******)0x0) {
        local_128 = (undefined8 *******)*local_128;
      }
      *(uint *)pppppppuVar6 = 0x1d;
      if ((int)(uint)local_138 < local_138._4_4_) {
        local_130[(int)(uint)local_138] = pppppppuVar6;
        local_138 = CONCAT44(local_138._4_4_,(uint)local_138 + 1);
      }
    }
  }
LAB_036fe160:
  FUN_036f9b68(&local_7a0);
  uVar9 = *(uint *)(param_1 + 0xb20);
  if ((0 < (int)uVar9) ||
     (((*(long *)(param_1 + 0xa10) != 0 &&
       (puVar14 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar14 != (uint *)0x0)) &&
      (uVar9 = *puVar14, uVar9 != 0)))) {
    uVar24 = 0;
    cVar27 = DAT_05ab9860;
LAB_036fec70:
    puVar14 = local_790;
    if ((int)*(uint *)(param_1 + 0xb20) < 1) {
      if ((((*(long *)(param_1 + 0xa10) != 0) &&
           (puVar30 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar30 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xa28) <= uVar24 ||
           (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar24) != '\0')))) &&
         (((uVar24 < *puVar30 && (puVar30[1] != 0)) && ((ushort)puVar30[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar30 = (uint *)((ulong)(puVar30[1] * uVar24 + (uint)(ushort)puVar30[2] * 8 + iVar8) +
                          (long)puVar30);
        goto joined_r0x036feda0;
      }
    }
    else if (uVar24 < *(uint *)(param_1 + 0xb20)) {
      uVar16 = uVar24;
      if (*(uint *)(param_1 + 0xb10) <= uVar24) {
        uVar16 = 0;
      }
      puVar30 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar16 * 8);
joined_r0x036feda0:
      if ((puVar30 != (uint *)0x0) && (*puVar30 != 0)) {
        do {
          if (cVar27 == '\0') {
            cVar27 = '\x01';
            DAT_05ab9864 = 0xffffffffffffffff;
            DAT_05ab986c = -1;
            DAT_05ab9860 = '\x01';
            DAT_05ab9874 = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05ab9874) {
              pcVar1 = (char *)((DAT_05ab9874 & 0xffffffff) + (long)puVar30);
              if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
                uVar16 = *puVar30;
                lVar17 = DAT_05ab986c;
                goto joined_r0x036fedbc;
              }
              break;
            }
            if ((int)DAT_05ab9874 != -1) break;
          }
          lVar17 = (long)puVar30 - (ulong)*puVar30;
          if ((*puVar30 == 0) || (lVar17 == 0)) break;
          lVar3 = 0xc;
          if (*(char *)(lVar17 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar17 == 0) break;
          uVar15 = (ulong)*(ushort *)(lVar17 + 8);
          DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,0xfffffffe);
          if (uVar15 == 0) break;
          piVar10 = (int *)(lVar3 + lVar17 + 4);
          while (piVar10[-1] != 0x4f0b2be7) {
            piVar10 = piVar10 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_036fec64;
          }
          iVar8 = 0;
          if (*piVar10 != -1) {
            iVar8 = *piVar10;
          }
          DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,iVar8);
          if (*puVar30 == 0) break;
        } while( true );
      }
    }
    goto LAB_036fec64;
  }
LAB_036fe1c4:
  if (0 < (int)local_7a0) {
    uVar9 = nn::os::GetSystemTick();
    if (1 < (int)local_7a0) {
      uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      uVar24 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      uVar16 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 3;
      uVar22 = (ulong)((uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4);
      uVar15 = (ulong)local_7a0 & 0xffffffff;
      do {
        uVar9 = uVar9 ^ uVar9 << 0xb;
        uVar21 = (uint)uVar22;
        uVar22 = (ulong)(uVar21 >> 0x13 ^ uVar9 >> 8 ^ uVar21 ^ uVar9);
        lVar17 = (uVar15 - 1 & 0xffffffff) * 8;
        uVar29 = *(undefined8 *)(local_798 + lVar17);
        uVar25 = uVar15 * uVar22 >> 0x1d & 0x7fffffff8;
        *(undefined8 *)(local_798 + lVar17) = *(undefined8 *)(local_798 + uVar25);
        *(undefined8 *)(local_798 + uVar25) = uVar29;
        bVar7 = 2 < uVar15;
        uVar15 = uVar15 - 1;
        uVar9 = uVar24;
        uVar24 = uVar16;
        uVar16 = uVar21;
      } while (bVar7);
    }
    if (0 < (int)local_7a0) {
      lVar17 = 0;
LAB_036fe2d0:
      uVar9 = **(uint **)(local_798 + lVar17 * 8);
      uVar24 = *(uint *)(param_1 + 0xb20);
      if (0 < (int)uVar24) {
        if (uVar24 <= uVar9) goto LAB_036fe2c0;
        if (*(uint *)(param_1 + 0xb10) <= uVar9) {
          uVar9 = 0;
        }
        puVar14 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar9 * 8);
        if (puVar14 == (uint *)0x0) goto LAB_036fe2c0;
LAB_036fe308:
        uVar9 = *puVar14;
        uVar15 = DAT_05ab9864;
        cVar27 = DAT_05ab9860;
        while (sVar20 = 0, DAT_05ab9864 = uVar15, uVar9 != 0) {
          if (cVar27 != '\0') {
            DAT_05ab9864._4_4_ = (uint)(uVar15 >> 0x20);
            uVar22 = (ulong)DAT_05ab9864._4_4_;
            if ((long)uVar15 < 0) {
              bVar7 = DAT_05ab9864._4_4_ == 0xffffffff;
              if ((bVar7) && (uVar9 = *puVar14, uVar9 != 0)) goto LAB_036fe358;
            }
            else if ((short *)(uVar22 + (long)puVar14) != (short *)0x0) {
              sVar20 = *(short *)(uVar22 + (long)puVar14);
              uVar15 = (ulong)*puVar14;
              sVar12 = sVar20;
              if (*puVar14 != 0) goto LAB_036fe46c;
              sVar23 = 0;
              goto LAB_036fe500;
            }
LAB_036fe464:
            sVar20 = 0;
            uVar15 = (ulong)*puVar14;
            sVar23 = 0;
            sVar12 = sVar20;
            if (*puVar14 == 0) goto LAB_036fe500;
LAB_036fe46c:
            sVar20 = sVar12;
            uVar22 = DAT_05ab9864 & 0xffffffff;
            goto LAB_036fe470;
          }
          cVar27 = '\x01';
          DAT_05ab9864 = 0xffffffffffffffff;
          DAT_05ab986c = -1;
          DAT_05ab9860 = '\x01';
          DAT_05ab9874 = 0xffffffffffffffff;
          uVar9 = *puVar14;
          if (uVar9 == 0) goto LAB_036fe464;
LAB_036fe358:
          puVar30 = (uint *)(ulong)uVar9;
          if (puVar14 == puVar30) {
LAB_036fe438:
            sVar20 = 0;
            uVar15 = (ulong)*puVar14;
            sVar12 = 0;
            if (*puVar14 != 0) goto LAB_036fe46c;
            sVar23 = 0;
            goto LAB_036fe500;
          }
          lVar3 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar30)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar14 + (lVar3 - (long)puVar30);
          if (lVar3 == 0) goto LAB_036fe438;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar30));
          DAT_05ab9864 = CONCAT44(0xfffffffe,(int)DAT_05ab9864);
          if (uVar15 == 0) goto LAB_036fe464;
          piVar10 = (int *)(lVar3 + 4);
          while (piVar10[-1] != -0x6cb8e6bc) {
            piVar10 = piVar10 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_036fe464;
          }
          iVar8 = 0;
          if (*piVar10 != -1) {
            iVar8 = *piVar10;
          }
          DAT_05ab9864 = CONCAT44(iVar8,(int)DAT_05ab9864);
          uVar15 = DAT_05ab9864;
          uVar9 = *puVar14;
        }
LAB_036fe3c8:
        sVar23 = 0;
        goto LAB_036fe500;
      }
      if ((((*(long *)(param_1 + 0xa10) != 0) &&
           (puVar14 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xa28) <= uVar9 ||
           (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar9) != '\0')))) &&
         (((uVar9 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar9 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                          (long)puVar14);
        if (puVar14 != (uint *)0x0) goto LAB_036fe308;
      }
      goto LAB_036fe2c0;
    }
  }
  return;
LAB_036fddd0:
  if (*puVar14 == 0) goto LAB_036fde58;
  if (cVar27 == '\0') {
    cVar27 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  }
  else {
    uVar9 = *(uint *)(puVar5 + 0x18);
    if (-1 < (int)uVar9) {
      if (((char *)((ulong)uVar9 + (long)puVar14) != (char *)0x0) &&
         (*(char *)((ulong)uVar9 + (long)puVar14) != '\0')) goto LAB_036fdc30;
      goto LAB_036fde58;
    }
    if (uVar9 != 0xffffffff) goto LAB_036fde58;
  }
  lVar3 = (long)puVar14 - (ulong)*puVar14;
  if ((*puVar14 == 0) || (lVar3 == 0)) goto LAB_036fde58;
  lVar2 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar3 == 0) goto LAB_036fde58;
  uVar15 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_036fde58;
  piVar10 = (int *)(lVar2 + lVar3 + 4);
  while (piVar10[-1] != -0x25f3a2cd) {
    piVar10 = piVar10 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_036fde58;
  }
  iVar28 = 0;
  if (*piVar10 != -1) {
    iVar28 = *piVar10;
  }
  *(int *)(puVar5 + 0x18) = iVar28;
  goto LAB_036fddd0;
joined_r0x036fedbc:
  DAT_05ab986c = lVar17;
  if (uVar16 == 0) goto LAB_036fee54;
  if (cVar27 == '\0') {
    cVar27 = '\x01';
    DAT_05ab9864 = 0xffffffffffffffff;
    DAT_05ab986c = -1;
    DAT_05ab9860 = '\x01';
    DAT_05ab9874 = 0xffffffffffffffff;
  }
  else {
    DAT_05ab986c._4_4_ = (uint)((ulong)lVar17 >> 0x20);
    uVar15 = (ulong)DAT_05ab986c._4_4_;
    if (-1 < lVar17) {
      if (((char *)(uVar15 + (long)puVar30) != (char *)0x0) &&
         (*(char *)(uVar15 + (long)puVar30) != '\0')) goto LAB_036fec64;
      goto LAB_036fee54;
    }
    bVar7 = DAT_05ab986c._4_4_ != 0xffffffff;
    if (bVar7) goto LAB_036fee54;
  }
  lVar17 = (long)puVar30 - (ulong)*puVar30;
  if ((*puVar30 == 0) || (lVar17 == 0)) goto LAB_036fee54;
  lVar3 = 0xc;
  if (*(char *)(lVar17 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar17 == 0) goto LAB_036fee54;
  uVar15 = (ulong)*(ushort *)(lVar17 + 8);
  DAT_05ab986c = CONCAT44(0xfffffffe,(undefined4)DAT_05ab986c);
  if (uVar15 == 0) goto LAB_036fee54;
  piVar10 = (int *)(lVar3 + lVar17 + 4);
  while (piVar10[-1] != -0x751c8f3b) {
    piVar10 = piVar10 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_036fee54;
  }
  iVar8 = 0;
  if (*piVar10 != -1) {
    iVar8 = *piVar10;
  }
  DAT_05ab986c = CONCAT44(iVar8,(undefined4)DAT_05ab986c);
  uVar16 = *puVar30;
  lVar17 = DAT_05ab986c;
  goto joined_r0x036fedbc;
LAB_036fee54:
  if ((int)local_7a0 < local_7a0._4_4_) {
    if (local_790 != (uint *)0x0) {
      local_790 = *(uint **)local_790;
    }
    *puVar14 = uVar24;
    if ((int)local_7a0 < local_7a0._4_4_) {
      *(uint **)(local_798 + (long)(int)local_7a0 * 8) = puVar14;
      local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,(int)local_7a0 + 1);
    }
  }
  uVar24 = uVar24 + 1;
LAB_036fec64:
  uVar24 = uVar24 + 1;
  if (uVar9 <= uVar24) goto LAB_036fe1c4;
  goto LAB_036fec70;
  while( true ) {
    if (uVar22 != 0xffffffff) goto LAB_036fe3c8;
    lVar3 = (long)puVar14 - uVar15;
    sVar23 = 0;
    if (lVar3 == 0) goto LAB_036fe500;
    lVar2 = 0xc;
    if (*(char *)(lVar3 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar3 == 0) goto LAB_036fe3c8;
    uVar15 = (ulong)*(ushort *)(lVar3 + 8);
    DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
    sVar23 = 0;
    if (uVar15 == 0) goto LAB_036fe500;
    puVar30 = (uint *)(lVar2 + lVar3 + 4);
    while (puVar30[-1] != 0x3198c2ac) {
      puVar30 = puVar30 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) {
        sVar23 = 0;
        goto LAB_036fe500;
      }
    }
    uVar22 = 0;
    if (*puVar30 != 0xffffffff) {
      uVar22 = (ulong)*puVar30;
    }
    DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,(int)uVar22);
    uVar15 = (ulong)*puVar14;
    if (*puVar14 == 0) break;
LAB_036fe470:
    if (-1 < (int)uVar22) {
      sVar23 = 0;
      if ((short *)(uVar22 + (long)puVar14) != (short *)0x0) {
        sVar23 = *(short *)(uVar22 + (long)puVar14);
      }
      goto LAB_036fe500;
    }
  }
  sVar23 = 0;
LAB_036fe500:
  uVar15 = 0;
  bVar7 = true;
  do {
    local_13c = (int)uVar15;
    if ((int)uVar24 < 1) {
      if ((((*(long *)(param_1 + 0xa10) != 0) &&
           (puVar30 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar30 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xa28) <= uVar15 ||
           (*(char *)(*(long *)(param_1 + 0xa30) + uVar15) != '\0')))) &&
         (((uVar15 < *puVar30 && (puVar30[1] != 0)) && ((ushort)puVar30[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar30 = (uint *)((ulong)(puVar30[1] * local_13c + (uint)(ushort)puVar30[2] * 8 + iVar8) +
                          (long)puVar30);
        goto joined_r0x036fe664;
      }
    }
    else if (uVar15 < uVar24) {
      uVar22 = uVar15;
      if (*(uint *)(param_1 + 0xb10) <= uVar15) {
        uVar22 = 0;
      }
      puVar30 = *(uint **)(*(long *)(param_1 + 0xb18) + uVar22 * 8);
joined_r0x036fe664:
      if (puVar30 != (uint *)0x0) {
        sVar12 = 0;
        if (*puVar30 != 0) {
          do {
            if (cVar27 != '\0') {
              if ((long)DAT_05ab9864 < 0) {
                if (DAT_05ab9864._4_4_ == 0xffffffff) {
                  uVar9 = *puVar30;
                  if (uVar9 != 0) goto LAB_036fe598;
                  sVar12 = 0;
                }
                else {
LAB_036fe66c:
                  sVar12 = 0;
                }
              }
              else {
                sVar12 = 0;
                if ((short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30) != (short *)0x0) {
                  sVar12 = *(short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30);
                }
              }
              goto LAB_036fe670;
            }
            cVar27 = '\x01';
            DAT_05ab9864 = 0xffffffffffffffff;
            DAT_05ab986c = -1;
            DAT_05ab9860 = '\x01';
            DAT_05ab9874 = 0xffffffffffffffff;
            uVar9 = *puVar30;
            sVar12 = 0;
            if (uVar9 == 0) goto LAB_036fe670;
LAB_036fe598:
            puVar13 = (uint *)(ulong)uVar9;
            if (puVar30 == puVar13) goto LAB_036fe66c;
            lVar3 = 0xc;
            if (*(char *)((long)puVar30 + (10 - (long)puVar13)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar30 + (lVar3 - (long)puVar13);
            if (lVar3 == 0) goto LAB_036fe66c;
            uVar22 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar13));
            DAT_05ab9864 = CONCAT44(0xfffffffe,(int)DAT_05ab9864);
            sVar12 = 0;
            if (uVar22 == 0) goto LAB_036fe670;
            piVar10 = (int *)(lVar3 + 4);
            while (piVar10[-1] != -0x6cb8e6bc) {
              piVar10 = piVar10 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) {
                sVar12 = 0;
                goto LAB_036fe670;
              }
            }
            iVar8 = 0;
            if (*piVar10 != -1) {
              iVar8 = *piVar10;
            }
            DAT_05ab9864 = CONCAT44(iVar8,(int)DAT_05ab9864);
          } while (*puVar30 != 0);
          sVar12 = 0;
        }
LAB_036fe670:
        if (sVar12 == sVar20) {
          uVar9 = *puVar30;
          if (uVar9 != 0) {
            while( true ) {
              if (cVar27 == '\0') {
                DAT_05ab9864 = 0xffffffffffffffff;
                DAT_05ab986c = -1;
                cVar27 = '\x01';
                DAT_05ab9874 = 0xffffffffffffffff;
                uVar9 = *puVar30;
                DAT_05ab9860 = '\x01';
              }
              else {
                if (-1 < (int)DAT_05ab9864) {
                  psVar11 = (short *)((DAT_05ab9864 & 0xffffffff) + (long)puVar30);
                  sVar12 = 0;
                  if (psVar11 != (short *)0x0) {
                    sVar12 = *psVar11;
                  }
                  goto LAB_036fe72c;
                }
                if ((int)DAT_05ab9864 != -1) break;
              }
              puVar13 = (uint *)(ulong)uVar9;
              if ((puVar13 == (uint *)0x0) || (puVar30 == puVar13)) break;
              lVar3 = 0xc;
              if (*(char *)((long)puVar30 + (10 - (long)puVar13)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar30 + (lVar3 - (long)puVar13);
              if (lVar3 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar13));
              DAT_05ab9864._4_4_ = (uint)(DAT_05ab9864 >> 0x20);
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
              if (uVar22 == 0) break;
              piVar10 = (int *)(lVar3 + 4);
              while (piVar10[-1] != 0x3198c2ac) {
                piVar10 = piVar10 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_036fe728;
              }
              iVar8 = 0;
              if (*piVar10 != -1) {
                iVar8 = *piVar10;
              }
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,iVar8);
              uVar9 = *puVar30;
              if (uVar9 == 0) break;
            }
          }
LAB_036fe728:
          sVar12 = 0;
LAB_036fe72c:
          if (sVar12 == sVar23) {
            if ((!bVar7) ||
               (uVar15 = FUN_036f7c00(param_1,&local_13c,auStack_7a4,1,0), (uVar15 & 1) == 0))
            break;
            uVar9 = **(int **)(local_798 + lVar17 * 8) + 1;
            uVar24 = *(uint *)(param_1 + 0xb20);
            if ((int)uVar24 < 1) {
              if ((((*(long *)(param_1 + 0xa10) == 0) ||
                   (puVar30 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar30 == (uint *)0x0))
                  || ((uVar9 < *(uint *)(param_1 + 0xa28) &&
                      (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar9) == '\0')))) ||
                 (((*puVar30 <= uVar9 || (puVar30[1] == 0)) || ((ushort)puVar30[2] == 0)))) break;
              iVar8 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar30 = (uint *)((ulong)(puVar30[1] * uVar9 + (uint)(ushort)puVar30[2] * 8 + iVar8)
                                + (long)puVar30);
            }
            else {
              if (uVar24 <= uVar9) break;
              if (*(uint *)(param_1 + 0xb10) <= uVar9) {
                uVar9 = 0;
              }
              puVar30 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar9 * 8);
            }
            if (puVar30 != (uint *)0x0) {
              sVar20 = 0;
              cVar27 = DAT_05ab9860;
              if (*puVar30 != 0) goto LAB_036fe7ec;
              goto LAB_036fe96c;
            }
            break;
          }
        }
      }
    }
    bVar7 = uVar15 < 0x3b;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x3c);
LAB_036fe2c0:
  lVar17 = lVar17 + 1;
  if ((int)local_7a0 <= lVar17) {
    return;
  }
  goto LAB_036fe2d0;
LAB_036fe7ec:
  do {
    if (cVar27 != '\0') {
      if ((long)DAT_05ab9864 < 0) {
        if (DAT_05ab9864._4_4_ == 0xffffffff) goto LAB_036fe814;
        goto LAB_036fe8f0;
      }
      sVar20 = 0;
      if ((short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30) != (short *)0x0) {
        sVar20 = *(short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30);
      }
LAB_036fe8f4:
      uVar9 = *puVar30;
      if (uVar9 == 0) goto LAB_036fe96c;
      uVar15 = DAT_05ab9864 & 0xffffffff;
      goto LAB_036fe900;
    }
    cVar27 = '\x01';
    DAT_05ab9864 = 0xffffffffffffffff;
    DAT_05ab986c = -1;
    DAT_05ab9860 = '\x01';
    DAT_05ab9874 = 0xffffffffffffffff;
LAB_036fe814:
    puVar13 = (uint *)(ulong)*puVar30;
    sVar20 = 0;
    if (*puVar30 == 0) goto LAB_036fe8f4;
    if (puVar30 == puVar13) {
LAB_036fe8f0:
      sVar20 = 0;
      goto LAB_036fe8f4;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar30 + (10 - (long)puVar13)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar30 + (lVar3 - (long)puVar13);
    if (lVar3 == 0) goto LAB_036fe8f0;
    uVar15 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar13));
    DAT_05ab9864 = CONCAT44(0xfffffffe,(int)DAT_05ab9864);
    sVar20 = 0;
    if (uVar15 == 0) goto LAB_036fe8f4;
    piVar10 = (int *)(lVar3 + 4);
    while (piVar10[-1] != -0x6cb8e6bc) {
      piVar10 = piVar10 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) {
        sVar20 = 0;
        goto LAB_036fe8f4;
      }
    }
    iVar8 = 0;
    if (*piVar10 != -1) {
      iVar8 = *piVar10;
    }
    DAT_05ab9864 = CONCAT44(iVar8,(int)DAT_05ab9864);
  } while (*puVar30 != 0);
  sVar20 = 0;
LAB_036fe96c:
  sVar12 = 0;
LAB_036fe970:
  uVar15 = 0;
  bVar7 = true;
  do {
    iVar8 = (int)uVar15;
    if ((int)uVar24 < 1) {
      if ((((*(long *)(param_1 + 0xa10) != 0) &&
           (puVar30 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar30 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xa28) <= uVar15 ||
           (*(char *)(*(long *)(param_1 + 0xa30) + uVar15) != '\0')))) &&
         (((uVar15 < *puVar30 && (puVar30[1] != 0)) && ((ushort)puVar30[2] != 0)))) {
        iVar28 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          iVar28 = 0x1c;
        }
        puVar30 = (uint *)((ulong)(puVar30[1] * iVar8 + (uint)(ushort)puVar30[2] * 8 + iVar28) +
                          (long)puVar30);
        goto joined_r0x036feacc;
      }
    }
    else if (uVar15 < uVar24) {
      uVar22 = uVar15 & 0xffffffff;
      if (*(uint *)(param_1 + 0xb10) <= uVar15) {
        uVar22 = 0;
      }
      puVar30 = *(uint **)(*(long *)(param_1 + 0xb18) + uVar22 * 8);
joined_r0x036feacc:
      if (puVar30 != (uint *)0x0) {
        sVar23 = 0;
        if (*puVar30 != 0) {
          do {
            if (cVar27 != '\0') {
              if ((long)DAT_05ab9864 < 0) {
                if (DAT_05ab9864._4_4_ == 0xffffffff) {
                  uVar9 = *puVar30;
                  if (uVar9 != 0) goto LAB_036fea08;
                  sVar23 = 0;
                }
                else {
LAB_036fead4:
                  sVar23 = 0;
                }
              }
              else {
                sVar23 = 0;
                if ((short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30) != (short *)0x0) {
                  sVar23 = *(short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar30);
                }
              }
              goto LAB_036fead8;
            }
            cVar27 = '\x01';
            DAT_05ab9864 = 0xffffffffffffffff;
            DAT_05ab986c = -1;
            DAT_05ab9860 = '\x01';
            DAT_05ab9874 = 0xffffffffffffffff;
            uVar9 = *puVar30;
            sVar23 = 0;
            if (uVar9 == 0) goto LAB_036fead8;
LAB_036fea08:
            puVar13 = (uint *)(ulong)uVar9;
            if (puVar30 == puVar13) goto LAB_036fead4;
            lVar3 = 0xc;
            if (*(char *)((long)puVar30 + (10 - (long)puVar13)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar30 + (lVar3 - (long)puVar13);
            if (lVar3 == 0) goto LAB_036fead4;
            uVar22 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar13));
            DAT_05ab9864 = CONCAT44(0xfffffffe,(int)DAT_05ab9864);
            sVar23 = 0;
            if (uVar22 == 0) goto LAB_036fead8;
            piVar10 = (int *)(lVar3 + 4);
            while (piVar10[-1] != -0x6cb8e6bc) {
              piVar10 = piVar10 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) {
                sVar23 = 0;
                goto LAB_036fead8;
              }
            }
            iVar28 = 0;
            if (*piVar10 != -1) {
              iVar28 = *piVar10;
            }
            DAT_05ab9864 = CONCAT44(iVar28,(int)DAT_05ab9864);
          } while (*puVar30 != 0);
          sVar23 = 0;
        }
LAB_036fead8:
        if (sVar23 == sVar20) {
          uVar9 = *puVar30;
          if (uVar9 != 0) {
            while( true ) {
              if (cVar27 == '\0') {
                DAT_05ab9864 = 0xffffffffffffffff;
                DAT_05ab986c = -1;
                cVar27 = '\x01';
                DAT_05ab9874 = 0xffffffffffffffff;
                uVar9 = *puVar30;
                DAT_05ab9860 = '\x01';
              }
              else {
                if (-1 < (int)DAT_05ab9864) {
                  psVar11 = (short *)((DAT_05ab9864 & 0xffffffff) + (long)puVar30);
                  sVar23 = 0;
                  if (psVar11 != (short *)0x0) {
                    sVar23 = *psVar11;
                  }
                  goto LAB_036feb88;
                }
                if ((int)DAT_05ab9864 != -1) break;
              }
              puVar13 = (uint *)(ulong)uVar9;
              if ((puVar13 == (uint *)0x0) || (puVar30 == puVar13)) break;
              lVar3 = 0xc;
              if (*(char *)((long)puVar30 + (10 - (long)puVar13)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar30 + (lVar3 - (long)puVar13);
              if (lVar3 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar13));
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
              if (uVar22 == 0) break;
              piVar10 = (int *)(lVar3 + 4);
              while (piVar10[-1] != 0x3198c2ac) {
                piVar10 = piVar10 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_036feb84;
              }
              iVar28 = 0;
              if (*piVar10 != -1) {
                iVar28 = *piVar10;
              }
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,iVar28);
              uVar9 = *puVar30;
              if (uVar9 == 0) break;
            }
          }
LAB_036feb84:
          sVar23 = 0;
LAB_036feb88:
          if (sVar23 == sVar12) {
            if (bVar7) {
              uVar15 = local_138 & 0xffffffff;
              if ((int)(uint)local_138 < 1) goto LAB_036feeb0;
              uVar22 = uVar15;
              puVar18 = local_130;
              goto LAB_036febe4;
            }
            break;
          }
        }
      }
    }
    bVar7 = uVar15 < 0x3b;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x3c);
  goto LAB_036fe2c0;
LAB_036fe900:
  if (-1 < (int)uVar15) {
    sVar12 = 0;
    if ((short *)(uVar15 + (long)puVar30) != (short *)0x0) {
      sVar12 = *(short *)(uVar15 + (long)puVar30);
    }
    goto LAB_036fe970;
  }
  if ((uVar15 != 0xffffffff) || (lVar3 = (long)puVar30 - (ulong)uVar9, lVar3 == 0))
  goto LAB_036fe96c;
  lVar2 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar3 == 0) goto LAB_036fe96c;
  uVar15 = (ulong)*(ushort *)(lVar3 + 8);
  DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
  if (uVar15 == 0) goto LAB_036fe96c;
  puVar13 = (uint *)(lVar2 + lVar3 + 4);
  while (puVar13[-1] != 0x3198c2ac) {
    puVar13 = puVar13 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_036fe96c;
  }
  uVar15 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar15 = (ulong)*puVar13;
  }
  DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,(int)uVar15);
  uVar9 = *puVar30;
  if (uVar9 == 0) goto LAB_036fe96c;
  goto LAB_036fe900;
LAB_036febe4:
  if ((local_13c <= *(int *)*puVar18) && (puVar19 = local_130, *(int *)*puVar18 <= local_13c))
  goto LAB_036fec18;
  puVar18 = puVar18 + 1;
  uVar22 = uVar22 - 1;
  if (uVar22 == 0) goto LAB_036feeb0;
  goto LAB_036febe4;
LAB_036fec18:
  while ((*(int *)*puVar19 < iVar8 || (iVar8 < *(int *)*puVar19))) {
    uVar15 = uVar15 - 1;
    puVar19 = puVar19 + 1;
    if (uVar15 == 0) {
LAB_036feeb0:
      psVar11 = (short *)FUN_0370c990(puVar14,1,0x93471944,DAT_05ab98f8);
      if (psVar11 == (short *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)*psVar11;
      }
      *param_2 = iVar8;
      psVar11 = (short *)FUN_0370c990(puVar14,0,0x3198c2ac,DAT_05ab9900);
      if (psVar11 == (short *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)*psVar11;
      }
      *param_3 = iVar8;
      psVar11 = (short *)FUN_0370c990(puVar14,0,0x3198c2ac,DAT_05ab9900);
      if (psVar11 == (short *)0x0) {
        iVar8 = 1;
      }
      else {
        iVar8 = *psVar11 + 1;
      }
      *param_4 = iVar8;
      return;
    }
  }
  goto LAB_036fe2c0;
}

