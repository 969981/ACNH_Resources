
void FUN_0317e7e0(int *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  byte bVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint *puVar22;
  char cVar23;
  undefined *local_78;
  char *local_70;
  uint local_64;
  
  uVar11 = FUN_031836fc(param_2);
  if ((uVar11 & 1) != 0) {
    FUN_031839d8(param_1,param_2);
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "PlayerEnableEating";
  iVar7 = FUN_0274bce0(param_2[1],&local_78);
  if (iVar7 != 0) {
    uVar11 = FUN_01b04ab0(*param_2);
    puVar2 = PTR_DAT_04bbfe90;
    puVar4 = PTR_DAT_04bbfe88;
    if ((uVar11 & 1) != 0) {
      puVar22 = *(uint **)(*param_2 + 0x10);
      if ((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) {
        cVar23 = *PTR_DAT_04bbfe88;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *puVar4 = 1;
            memset(puVar2,0xff,0x1ac);
            uVar8 = *puVar22;
          }
          else {
            uVar13 = *(uint *)(puVar2 + 0x128);
            if (-1 < (int)uVar13) {
              if (((short *)((ulong)uVar13 + (long)puVar22) != (short *)0x0) &&
                 (*(short *)((ulong)uVar13 + (long)puVar22) == 0x373e)) goto LAB_0317eb30;
              break;
            }
            if (uVar13 != 0xffffffff) break;
          }
          puVar16 = (uint *)(ulong)uVar8;
          if ((puVar16 == (uint *)0x0) || (puVar22 == puVar16)) break;
          lVar18 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar16)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar22 + (lVar18 - (long)puVar16);
          if (lVar18 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar16));
          *(undefined4 *)(puVar2 + 0x128) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar15 = (int *)(lVar18 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_0317e954;
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar2 + 0x128) = iVar7;
          uVar8 = *puVar22;
          if (uVar8 == 0) break;
        } while( true );
      }
LAB_0317e954:
      lVar18 = *param_2;
      puVar22 = *(uint **)(lVar18 + 0x10);
      if ((puVar22 == (uint *)0x0) ||
         (uVar8 = *puVar22, uVar8 == 0 || puVar22 == (uint *)(ulong)uVar8)) {
LAB_0317e9e8:
        uVar11 = FUN_01af0020(lVar18);
        if (((uVar11 & 1) == 0) || (iVar7 = FUN_01af02d0(lVar18), iVar7 < 2)) {
          puVar22 = *(uint **)(*param_2 + 0x10);
          if (((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) &&
             (puVar22 != (uint *)(ulong)uVar8)) {
            puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
            if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar16[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar18 != 0) {
                uVar13 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar13) {
                  uVar13 = 0xffffffff;
                }
                if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 2)) {
                  iVar7 = 0x28;
                  goto LAB_0317eaa4;
                }
              }
            }
          }
          iVar7 = 0x25;
        }
        else {
          iVar7 = 0x26;
        }
      }
      else {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
        if ((*puVar16 == 0) ||
           ((uVar8 = puVar16[1], uVar8 == 0 || ((ulong)(ushort)puVar16[2] == 0))))
        goto LAB_0317e9e8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar16 + lVar1 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar1 == 0) goto LAB_0317e9e8;
        uVar13 = 0;
        if ((ulong)uVar8 != 0) {
          uVar13 = (uint)((ulong)((long)puVar22 - lVar1) / (ulong)uVar8);
        }
        if (*puVar16 <= uVar13) {
          uVar13 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar13) ||
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) != 0x59))
        goto LAB_0317e9e8;
        iVar7 = 0x27;
      }
LAB_0317eaa4:
      local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar7);
      if (((((*param_1 != iVar7) && (param_1[1] != iVar7)) && (param_1[2] != iVar7)) &&
          ((param_1[3] != iVar7 && (param_1[4] != iVar7)))) &&
         ((param_1[5] != iVar7 && (param_1[6] != iVar7)))) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        param_1[7] = uVar8 + 1;
        param_1[uVar11] = iVar7;
      }
    }
  }
LAB_0317eb30:
  puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar4 = PTR_DAT_04bb6298;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) {
        puVar22 = *(uint **)(*param_2 + 0x10);
        if (puVar22 == (uint *)0x0) {
          uVar8 = 0xbc;
        }
        else {
          uVar13 = *puVar22;
          uVar8 = 0;
          if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
            puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
            uVar8 = 0;
            if (*puVar16 != 0) {
              uVar8 = puVar16[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar18 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
                  }
                  if (*puVar16 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar8 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                     uVar8 < 0xbd)) goto LAB_0317ec3c;
                }
              }
              uVar8 = 0;
            }
          }
        }
LAB_0317ec3c:
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
        if ((uVar8 != 0x5c) && (iVar7 = FUN_0277d6c4(*param_2 + 8), iVar7 != 0x515))
        goto LAB_0317ef88;
      }
    }
    lVar18 = *param_2;
    iVar7 = FUN_01afcfa0(lVar18);
    if ((iVar7 == 0) ||
       ((puVar12 = (ushort *)FUN_01afd600(lVar18), puVar12 == (ushort *)0x0 ||
        ((*puVar12 & 0x18) != 0x10)))) {
      plVar19 = (long *)(param_1 + 8);
      uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
      if ((((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) &&
         (uVar11 = FUN_031836fc(param_2), (uVar11 & 1) == 0)) {
        puVar22 = *(uint **)(*param_2 + 0x10);
        if (((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) &&
           (puVar22 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
          if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
             ((ulong)(ushort)puVar16[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar18 != 0) {
              uVar13 = 0;
              if ((ulong)uVar8 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 0x8a))
              goto LAB_0317ef88;
            }
          }
        }
        lVar18 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)param_2[1] * 0x740;
        if (7 < *(byte *)param_2[1]) {
          lVar18 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        local_78 = *(undefined **)(*param_2 + 8);
        uVar11 = FUN_022b27d0(lVar18 + 0xb0,&local_78,0,0);
        if ((uVar11 & 1) != 0) {
          puVar22 = *(uint **)(*param_2 + 0x10);
          if (puVar22 == (uint *)0x0) {
            uVar8 = 0xbc;
          }
          else {
            uVar13 = *puVar22;
            uVar8 = 0;
            if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
              puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
              uVar8 = 0;
              if (*puVar16 != 0) {
                uVar8 = puVar16[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar18 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
                    }
                    if (*puVar16 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar8 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                       uVar8 < 0xbd)) goto LAB_0317ee34;
                  }
                }
                uVar8 = 0;
              }
            }
          }
LAB_0317ee34:
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
          if ((uVar8 == 0x57) || (uVar8 == 0x51)) {
            FUN_031839d8(param_1,param_2);
          }
          else {
            if (((puVar22 == (uint *)0x0) || (uVar8 = *puVar22, uVar8 == 0)) ||
               (puVar22 == (uint *)(ulong)uVar8)) {
LAB_0317eef8:
              sVar5 = *(short *)puVar4;
              if (sVar5 != -1) {
                local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
                puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
                if (0xff < (uint)(int)sVar5) {
                  puVar2 = PTR_DAT_04bc39f8;
                }
                if (((((*(uint *)(puVar2 + 4) & 1) != 0) &&
                     (iVar7 = FUN_0277d6c4(*param_2 + 8), iVar7 == 0x515)) &&
                    (uVar11 = FUN_01af0020(*param_2), (uVar11 & 1) != 0)) &&
                   (iVar7 = FUN_01af02d0(*param_2), 1 < iVar7)) goto LAB_0317ef70;
              }
              uVar21 = 7;
            }
            else {
              puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
              if (((*puVar16 == 0) || (uVar8 = puVar16[1], uVar8 == 0)) ||
                 ((ulong)(ushort)puVar16[2] == 0)) goto LAB_0317eef8;
              lVar18 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar18 == 0) goto LAB_0317eef8;
              uVar13 = 0;
              if ((ulong)uVar8 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if (((*(uint *)PTR_DAT_04bc00c8 <= uVar13) ||
                  (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) != 0x5c)) ||
                 ((uVar11 = FUN_01af0020(), (uVar11 & 1) == 0 ||
                  (iVar7 = FUN_01af02d0(*param_2), iVar7 < 2)))) goto LAB_0317eef8;
LAB_0317ef70:
              uVar21 = 0x30;
            }
            FUN_03183234(param_1,uVar21);
          }
        }
      }
    }
  }
LAB_0317ef88:
  sVar5 = *(short *)puVar4;
  if (sVar5 == -1) {
LAB_0317efd0:
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (puVar22 == (uint *)0x0) {
      uVar8 = 0xbc;
    }
    else {
      uVar13 = *puVar22;
      uVar8 = 0;
      if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
        uVar8 = 0;
        if (*puVar16 != 0) {
          uVar8 = puVar16[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar18 != 0) {
              uVar13 = 0;
              if ((ulong)uVar8 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2)
                 , uVar8 < 0xbd)) goto LAB_0317f070;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_0317f070:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
    if (1 < uVar8 - 0x89) {
      plVar19 = (long *)(param_1 + 8);
      uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
      if (((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) {
        lVar18 = *param_2;
        uVar11 = FUN_01af0020(lVar18);
        if (((uVar11 & 1) != 0) &&
           ((iVar7 = FUN_01af02d0(lVar18), 1 < iVar7 &&
            (uVar11 = FUN_02672fb0(param_2[1]), (uVar11 & 1) != 0)))) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x2e);
          if ((*param_1 != 0x2e) &&
             ((((param_1[1] != 0x2e && (param_1[2] != 0x2e)) && (param_1[3] != 0x2e)) &&
              (((param_1[4] != 0x2e && (param_1[5] != 0x2e)) && (param_1[6] != 0x2e)))))) {
            uVar8 = param_1[7];
            uVar11 = (ulong)uVar8;
            if (6 < uVar8) {
              uVar11 = 0;
            }
            param_1[7] = uVar8 + 1;
            param_1[uVar11] = 0x2e;
          }
        }
      }
    }
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar22 >> 0x19 & 1) == 0) goto LAB_0317efd0;
  }
  sVar5 = *(short *)puVar4;
  if (sVar5 != -1) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar22 >> 0x11 & 1) == 0) && (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8)) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 0x19 & 1) == 0) goto LAB_0317f208;
    }
    goto LAB_0317f574;
  }
  if (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) {
LAB_0317f208:
    plVar19 = (long *)(param_1 + 8);
    uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) &&
       (uVar11 = FUN_01ae59b0(*param_2), (uVar11 & 1) != 0)) {
      bVar14 = *(byte *)param_2[1];
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
      uVar11 = FUN_02669430(&local_78);
      if ((uVar11 & 1) != 0) {
        sVar5 = *(short *)puVar4;
        if (sVar5 == -1) {
LAB_0317f2e4:
          if (*(int *)((long)puVar3 + 0x38) == -0x10e0fba8) goto LAB_0317f35c;
          if (*(long *)PTR_DAT_04bb59d8 != 0) {
            lVar18 = *(long *)PTR_DAT_04bb2720;
            if (lVar18 == 0) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = &DAT_055c04a0;
              if (*(long *)(lVar18 + 0x330) != 0) {
                puVar20 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
                iVar7 = FUN_006bd550(*puVar20,0);
                puVar20 = puVar3;
                if (iVar7 != 0x758f7eaf) {
                  puVar20 = &DAT_055c04a0;
                }
              }
            }
            lVar18 = param_2[1];
            if (*(int *)(puVar20 + 7) != -0x6efba09b) goto LAB_0317f4bc;
            goto LAB_0317f360;
          }
          lVar18 = param_2[1];
LAB_0317f4bc:
          uVar11 = FUN_02915598(lVar18);
          if ((uVar11 & 1) == 0) goto LAB_0317f574;
          uVar11 = FUN_01ae7a70(*param_2);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_01ae87f0(*param_2);
            if ((uVar11 & 1) == 0) {
              iVar7 = FUN_01af4e8c(*param_2);
              if (iVar7 == 8) {
                uVar21 = 0x16;
              }
              else {
                local_78 = (undefined *)CONCAT44(local_78._4_4_,0xe);
                local_64 = FUN_01ae7550(*param_2);
                if (local_64 != (uint)local_78) {
                  iVar7 = FUN_01ad9fd0(*param_2);
                  if (iVar7 == 0x76) goto LAB_0317f574;
                  goto LAB_0317f4dc;
                }
                local_78 = PTR_DAT_04bb2020 + 0x10;
                local_70 = "UnlockInterior_CeilingFurniture";
                iVar7 = FUN_0274bce0(param_2[1],&local_78);
                uVar21 = 0x17;
                if (iVar7 != 0) {
                  uVar21 = 0x1a;
                }
              }
            }
            else {
              uVar21 = 0x18;
            }
          }
          else {
            FUN_03183234(param_1,0x18);
LAB_0317f4dc:
            uVar21 = 0x17;
          }
LAB_0317f568:
          FUN_03183234(param_1,uVar21);
        }
        else {
          puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar22 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar22 >> 3 & 1) == 0) {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
            puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
            if (0xff < (uint)(int)sVar5) {
              puVar22 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_0317f2e4;
          }
LAB_0317f35c:
          lVar18 = param_2[1];
LAB_0317f360:
          local_78 = PTR_DAT_04bb2020 + 0x10;
          local_70 = "EnablePcTownDecoration";
          iVar7 = FUN_0274bce0(lVar18,&local_78);
          if (iVar7 == 0) goto LAB_0317f574;
          lVar18 = *param_2;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,10);
          local_64 = FUN_01ae7550(lVar18);
          if (local_64 == (uint)local_78) {
LAB_0317f3f4:
            uVar11 = FUN_01ae7a70(*param_2);
            if ((uVar11 & 1) == 0) goto LAB_0317f574;
          }
          else {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0xb);
            local_64 = FUN_01ae7550(lVar18);
            if (local_64 == (uint)local_78) goto LAB_0317f3f4;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0xc);
            local_64 = FUN_01ae7550(lVar18);
            if (local_64 == (uint)local_78) goto LAB_0317f3f4;
          }
          iVar7 = FUN_01af4e8c(*param_2);
          if (iVar7 != 8) {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0xe);
            local_64 = FUN_01ae7550(*param_2);
            if (local_64 == (uint)local_78) {
              local_78 = PTR_DAT_04bb2020 + 0x10;
              local_70 = "UnlockInterior_CeilingFurniture";
              iVar7 = FUN_0274bce0(param_2[1],&local_78);
              if (iVar7 != 0) goto LAB_0317f574;
            }
            uVar11 = FUN_01ad6a30(*param_2,0x15);
            if (((uVar11 & 1) == 0) && (uVar11 = FUN_01ad6a30(*param_2,0x16), (uVar11 & 1) == 0)) {
              uVar21 = 0x17;
              uVar11 = FUN_01ad6a30(*param_2,0x17);
              if ((uVar11 & 1) == 0) goto LAB_0317f568;
            }
          }
        }
      }
    }
LAB_0317f574:
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
LAB_0317f5f4:
      if (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) {
        if (*(long *)PTR_DAT_04bb59d8 != 0) {
          lVar18 = *(long *)PTR_DAT_04bb2720;
          if (lVar18 == 0) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = &DAT_055c04a0;
            if (*(long *)(lVar18 + 0x330) != 0) {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar7 = FUN_006bd550(*puVar20,0);
              puVar20 = puVar3;
              if (iVar7 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
          }
          if (*(int *)(puVar20 + 7) == -0x6efba09b) goto LAB_0317f688;
        }
        uVar11 = FUN_02915598(param_2[1]);
        if (((uVar11 & 1) != 0) && (uVar11 = FUN_01ae59b0(*param_2), (uVar11 & 1) == 0))
        goto LAB_0317f738;
      }
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 3 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_0317f5f4;
      }
LAB_0317f688:
      if (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) {
        if (*(long *)PTR_DAT_04bb59d8 != 0) {
          lVar18 = *(long *)PTR_DAT_04bb2720;
          if (lVar18 == 0) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = &DAT_055c04a0;
            if (*(long *)(lVar18 + 0x330) != 0) {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar7 = FUN_006bd550(*puVar20,0);
              puVar20 = puVar3;
              if (iVar7 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
          }
          if (*(int *)(puVar20 + 7) == -0x6efba09b) goto LAB_0317f83c;
        }
LAB_0317f738:
        lVar18 = *param_2;
        iVar7 = FUN_01afcfa0(lVar18);
        if (((iVar7 == 0) || (puVar12 = (ushort *)FUN_01afd600(lVar18), puVar12 == (ushort *)0x0))
           || ((*puVar12 & 0x18) != 0x10)) {
          plVar19 = (long *)(param_1 + 8);
          uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
          if (((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) {
            local_78 = *(undefined **)(*param_2 + 8);
            uVar11 = FUN_0277e688(&local_78);
            if (((((uVar11 & 1) != 0) &&
                 ((local_64 = 0x1e, *param_1 != 0x1e && (param_1[1] != 0x1e)))) &&
                (param_1[2] != 0x1e)) &&
               ((((param_1[3] != 0x1e && (param_1[4] != 0x1e)) && (param_1[5] != 0x1e)) &&
                (param_1[6] != 0x1e)))) {
              uVar8 = param_1[7];
              uVar11 = (ulong)uVar8;
              param_1[7] = uVar8 + 1;
              if (6 < uVar8) {
                uVar11 = 0;
              }
              param_1[uVar11] = 0x1e;
            }
          }
        }
      }
    }
  }
LAB_0317f83c:
  uVar11 = FUN_01adbe40(*param_2,1,0,0,1);
  if ((uVar11 & 1) != 0) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "ItemRingEnable";
    iVar7 = FUN_0274bce0(param_2[1],&local_78);
    if (iVar7 != 0) {
      sVar5 = *(short *)puVar4;
      if (sVar5 != -1) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x19 & 1) != 0) goto LAB_0317f9fc;
      }
      if ((char)param_2[2] == -1) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x37);
        if (((((*param_1 != 0x37) && (param_1[1] != 0x37)) &&
             ((param_1[2] != 0x37 && ((param_1[3] != 0x37 && (param_1[4] != 0x37)))))) &&
            (param_1[5] != 0x37)) && (param_1[6] != 0x37)) {
          uVar8 = param_1[7];
          uVar11 = (ulong)uVar8;
          if (6 < uVar8) {
            uVar11 = 0;
          }
          param_1[7] = uVar8 + 1;
          param_1[uVar11] = 0x37;
        }
      }
      else {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x38);
        if (((((*param_1 != 0x38) && (param_1[1] != 0x38)) && (param_1[2] != 0x38)) &&
            ((param_1[3] != 0x38 && (param_1[4] != 0x38)))) &&
           ((param_1[5] != 0x38 && (param_1[6] != 0x38)))) {
          uVar8 = param_1[7];
          uVar11 = (ulong)uVar8;
          param_1[7] = uVar8 + 1;
          if (6 < uVar8) {
            uVar11 = 0;
          }
          param_1[uVar11] = 0x38;
        }
      }
    }
  }
LAB_0317f9fc:
  local_78 = (undefined *)CONCAT53(local_78._3_5_,0x10001);
  local_70 = (char *)0x0;
  uVar11 = FUN_01adddf0(*param_2,&local_78);
  if ((uVar11 & 1) == 0) {
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) &&
       (puVar22 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) && ((ulong)(ushort)puVar16[2] != 0))
      {
        lVar18 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar18 != 0) {
          uVar13 = 0;
          if ((ulong)uVar8 != 0) {
            uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
          }
          if (*puVar16 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 0x78))
          goto LAB_0317fd04;
        }
      }
    }
    local_70 = (char *)0x0;
    local_78 = (undefined *)CONCAT53(local_78._3_5_,1);
    uVar11 = FUN_01add954(*param_2,&local_78);
    if ((uVar11 & 1) != 0) {
      plVar19 = (long *)(param_1 + 8);
      uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
      if (((uVar11 & 1) != 0) && (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) != 0))
      goto LAB_0317fbdc;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,6);
      if ((*param_1 != 6) &&
         (((((param_1[1] != 6 && (param_1[2] != 6)) && (param_1[3] != 6)) &&
           ((param_1[4] != 6 && (param_1[5] != 6)))) && (param_1[6] != 6)))) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        param_1[7] = uVar8 + 1;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        iVar7 = 6;
        goto LAB_0317fd00;
      }
    }
  }
  else {
    plVar19 = (long *)(param_1 + 8);
    uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
    if (((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) {
      bVar14 = *(byte *)param_2[1];
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
      uVar11 = FUN_02669430(&local_78);
      if (((uVar11 & 1) != 0) && (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8)) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
        if (((*param_1 != 4) && (((param_1[1] != 4 && (param_1[2] != 4)) && (param_1[3] != 4)))) &&
           (((param_1[4] != 4 && (param_1[5] != 4)) && (param_1[6] != 4)))) {
          uVar8 = param_1[7];
          uVar11 = (ulong)uVar8;
          param_1[7] = uVar8 + 1;
          if (6 < uVar8) {
            uVar11 = 0;
          }
          iVar7 = 4;
LAB_0317fd00:
          param_1[uVar11] = iVar7;
        }
      }
    }
    else {
LAB_0317fbdc:
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x23);
      if ((((*param_1 != 0x23) && (param_1[1] != 0x23)) &&
          ((param_1[2] != 0x23 &&
           (((param_1[3] != 0x23 && (param_1[4] != 0x23)) && (param_1[5] != 0x23)))))) &&
         (param_1[6] != 0x23)) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        param_1[7] = uVar8 + 1;
        param_1[uVar11] = 0x23;
      }
    }
  }
LAB_0317fd04:
  uVar8 = FUN_0266c940(param_2[1]);
  if ((1 < uVar8) && (uVar11 = FUN_02915598(param_2[1]), (uVar11 & 1) != 0)) {
    plVar19 = (long *)(param_1 + 8);
    uVar11 = (**(code **)(*plVar19 + 8))(plVar19);
    if (((uVar11 & 1) == 0) || (uVar11 = (**(code **)*plVar19)(plVar19), (uVar11 & 1) == 0)) {
      local_78 = *(undefined **)(*param_2 + 8);
      uVar11 = FUN_0277e9e0(&local_78);
      if (((((uVar11 & 1) != 0) && (local_64 = 0x31, *param_1 != 0x31)) && (param_1[1] != 0x31)) &&
         ((((param_1[2] != 0x31 && (param_1[3] != 0x31)) && (param_1[4] != 0x31)) &&
          ((param_1[5] != 0x31 && (param_1[6] != 0x31)))))) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        param_1[7] = uVar8 + 1;
        param_1[uVar11] = 0x31;
      }
    }
  }
  bVar14 = *(byte *)param_2[1];
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
  uVar11 = FUN_02669430(&local_78);
  if (((uVar11 & 1) != 0) && (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8)) {
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
LAB_0317fea4:
      if (*(long *)PTR_DAT_04bb59d8 != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2720;
        if (lVar18 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar18 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar7 = FUN_006bd550(*puVar20,0);
            puVar20 = puVar3;
            if (iVar7 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar20 + 7) == -0x6efba09b) goto LAB_0317ff2c;
      }
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 3 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_0317fea4;
      }
LAB_0317ff2c:
      puVar22 = *(uint **)(*param_2 + 0x10);
      if (((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) &&
         (puVar22 != (uint *)(ulong)uVar8)) {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
        if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar13 = 0;
            if ((ulong)uVar8 != 0) {
              uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 0x77)) {
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
              if (((*param_1 != 0x19) &&
                  (((param_1[1] != 0x19 && (param_1[2] != 0x19)) && (param_1[3] != 0x19)))) &&
                 (((param_1[4] != 0x19 && (param_1[5] != 0x19)) && (param_1[6] != 0x19)))) {
                uVar8 = param_1[7];
                uVar11 = (ulong)uVar8;
                if (6 < uVar8) {
                  uVar11 = 0;
                }
                param_1[7] = uVar8 + 1;
                param_1[uVar11] = 0x19;
              }
            }
          }
        }
      }
    }
  }
  sVar5 = *(short *)puVar4;
  if (sVar5 == -1) {
LAB_031800cc:
    iVar7 = *(int *)((long)puVar3 + 0x38);
    if ((iVar7 != -0x10e0fba8) && (*(long *)PTR_DAT_04bb59d8 != 0)) {
      lVar18 = *(long *)PTR_DAT_04bb2720;
      if (lVar18 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar18 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar9 = FUN_006bd550(*puVar20,0);
          iVar7 = *(int *)((long)puVar3 + 0x38);
          puVar20 = puVar3;
          if (iVar9 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar20 + 7) == -0x6efba09b) goto LAB_03180164;
    }
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar22 >> 3 & 1) == 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_031800cc;
    }
    iVar7 = *(int *)((long)puVar3 + 0x38);
LAB_03180164:
    if (iVar7 != -0x10e0fba8) {
      bVar14 = *(byte *)param_2[1];
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
      uVar11 = FUN_02669430(&local_78);
      if (((((uVar11 & 1) != 0) && (puVar22 = *(uint **)(*param_2 + 0x10), puVar22 != (uint *)0x0))
          && (uVar8 = *puVar22, uVar8 != 0)) && (puVar22 != (uint *)(ulong)uVar8)) {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
        if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar13 = 0;
            if ((ulong)uVar8 != 0) {
              uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 0x9d)) {
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1b);
              if (((*param_1 != 0x1b) &&
                  (((param_1[1] != 0x1b && (param_1[2] != 0x1b)) && (param_1[3] != 0x1b)))) &&
                 (((param_1[4] != 0x1b && (param_1[5] != 0x1b)) && (param_1[6] != 0x1b)))) {
                uVar8 = param_1[7];
                uVar11 = (ulong)uVar8;
                if (6 < uVar8) {
                  uVar11 = 0;
                }
                param_1[7] = uVar8 + 1;
                param_1[uVar11] = 0x1b;
              }
            }
          }
        }
      }
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x9c);
  puVar22 = *(uint **)(*param_2 + 0x10);
  if (puVar22 == (uint *)0x0) {
    local_64 = 0xbc;
  }
  else {
    uVar8 = *puVar22;
    local_64 = 0;
    if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      local_64 = 0;
      if (*puVar16 != 0) {
        uVar8 = puVar16[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar13 = 0;
            if ((ulong)uVar8 != 0) {
              uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_64 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
               local_64 < 0xbd)) goto LAB_03180358;
          }
        }
        local_64 = 0;
      }
    }
  }
LAB_03180358:
  if ((local_64 == 0x9c) && (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8)) {
    bVar14 = *(byte *)param_2[1];
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
    uVar11 = FUN_02669430(&local_78);
    if ((uVar11 & 1) != 0) {
      lVar18 = *param_2;
      uVar11 = FUN_01af0020(lVar18);
      if (((uVar11 & 1) == 0) || (iVar7 = FUN_01af02d0(lVar18), iVar7 < 2)) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1c);
        if (((*param_1 != 0x1c) &&
            (((param_1[1] != 0x1c && (param_1[2] != 0x1c)) && (param_1[3] != 0x1c)))) &&
           (((param_1[4] != 0x1c && (param_1[5] != 0x1c)) && (param_1[6] != 0x1c)))) {
          uVar8 = param_1[7];
          uVar11 = (ulong)uVar8;
          param_1[7] = uVar8 + 1;
          if (6 < uVar8) {
            uVar11 = 0;
          }
          param_1[uVar11] = 0x1c;
        }
      }
      else {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1d);
        if (((*param_1 != 0x1d) && (param_1[1] != 0x1d)) &&
           ((param_1[2] != 0x1d &&
            ((((param_1[3] != 0x1d && (param_1[4] != 0x1d)) && (param_1[5] != 0x1d)) &&
             (param_1[6] != 0x1d)))))) {
          uVar8 = param_1[7];
          uVar11 = (ulong)uVar8;
          if (6 < uVar8) {
            uVar11 = 0;
          }
          param_1[7] = uVar8 + 1;
          param_1[uVar11] = 0x1d;
        }
      }
    }
  }
  puVar22 = *(uint **)(*param_2 + 0x10);
  if (puVar22 == (uint *)0x0) {
LAB_03180578:
    uVar13 = 0;
  }
  else {
    uVar8 = *puVar22;
    uVar13 = 0;
    if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      uVar13 = 0;
      if (*puVar16 != 0) {
        uVar8 = puVar16[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar13 = 0;
            if ((ulong)uVar8 != 0) {
              uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar13 * 2),
               uVar13 < 0x52)) goto LAB_0318057c;
          }
        }
        goto LAB_03180578;
      }
    }
  }
LAB_0318057c:
  local_78._0_4_ = uVar13;
  if ((((uVar13 == 0x49) && (local_78._0_4_ = 0x2c, *param_1 != 0x2c)) && (param_1[1] != 0x2c)) &&
     (((param_1[2] != 0x2c && (param_1[3] != 0x2c)) &&
      ((param_1[4] != 0x2c && ((param_1[5] != 0x2c && (param_1[6] != 0x2c)))))))) {
    uVar8 = param_1[7];
    uVar11 = (ulong)uVar8;
    if (6 < uVar8) {
      uVar11 = 0;
    }
    param_1[7] = uVar8 + 1;
    param_1[uVar11] = 0x2c;
  }
  sVar5 = *(short *)puVar4;
  if (sVar5 == -1) {
LAB_03180660:
    lVar18 = *param_2;
    uVar11 = FUN_01af8438(lVar18);
    if ((uVar11 & 1) == 0) {
      local_78._0_4_ = 100;
      puVar22 = *(uint **)(lVar18 + 0x10);
      if (puVar22 == (uint *)0x0) {
        local_64 = 0xbc;
      }
      else {
        uVar8 = *puVar22;
        local_64 = 0;
        if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
          local_64 = 0;
          if (*puVar16 != 0) {
            uVar8 = puVar16[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar16 + lVar1 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar1 != 0) {
                uVar13 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar13 = (uint)((ulong)((long)puVar22 - lVar1) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar13) {
                  uVar13 = 0xffffffff;
                }
                if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_64 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                   local_64 < 0xbd)) goto LAB_0318070c;
              }
            }
            local_64 = 0;
          }
        }
LAB_0318070c:
        if (local_64 == 100) goto LAB_03180814;
        uVar8 = *puVar22;
        if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
          uVar8 = *puVar16;
          if ((uVar8 != 0) &&
             ((uVar11 = (ulong)puVar16[1], puVar16[1] != 0 &&
              (uVar17 = (ulong)(ushort)puVar16[2], uVar17 != 0)))) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar16 + lVar1 + uVar17 * 8;
            if (lVar1 != 0) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar1) / uVar11);
              }
              if (uVar8 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 1))
              goto LAB_03180814;
            }
            lVar1 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar16 + lVar1 + uVar17 * 8;
            if (lVar1 != 0) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar1) / uVar11);
              }
              if (uVar8 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 2))
              goto LAB_03180814;
            }
          }
        }
      }
      uVar11 = FUN_01af8a5c(lVar18);
      if ((uVar11 & 1) == 0) goto LAB_031808a8;
    }
LAB_03180814:
    local_78._0_4_ = 0x10;
    if ((((*param_1 != 0x10) && (param_1[1] != 0x10)) && (param_1[2] != 0x10)) &&
       (((param_1[3] != 0x10 && (param_1[4] != 0x10)) &&
        ((param_1[5] != 0x10 && (param_1[6] != 0x10)))))) {
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      param_1[7] = uVar8 + 1;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[uVar11] = 0x10;
    }
  }
  else {
    local_78._0_4_ = 0x19;
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar22 >> 0x19 & 1) == 0) goto LAB_03180660;
  }
LAB_031808a8:
  uVar10 = FUN_01af4e8c(*param_2);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar10);
  switch(uVar10) {
  case 1:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0xc);
    if (((((*param_1 != 0xc) && (param_1[1] != 0xc)) && (param_1[2] != 0xc)) &&
        ((param_1[3] != 0xc && (param_1[4] != 0xc)))) &&
       ((param_1[5] != 0xc && (param_1[6] != 0xc)))) {
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      param_1[7] = uVar8 + 1;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[uVar11] = 0xc;
    }
    break;
  case 2:
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (puVar22 == (uint *)0x0) {
      uVar8 = 0xbc;
    }
    else {
      uVar13 = *puVar22;
      uVar8 = 0;
      if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
        uVar8 = 0;
        if (*puVar16 != 0) {
          uVar8 = puVar16[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar18 != 0) {
              uVar13 = 0;
              if ((ulong)uVar8 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2)
                 , uVar8 < 0xbd)) goto LAB_03181480;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_03181480:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
    if (((uVar8 != 0x59) || (iVar7 = FUN_01aedd20(), iVar7 < 0x14)) ||
       (uVar11 = FUN_02672fb0(param_2[1]), (uVar11 & 1) == 0)) break;
    iVar7 = 0x2f;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x2f);
    if ((((*param_1 == 0x2f) || (param_1[1] == 0x2f)) ||
        ((param_1[2] == 0x2f || ((param_1[3] == 0x2f || (param_1[4] == 0x2f)))))) ||
       (param_1[5] == 0x2f)) break;
    goto LAB_031811d4;
  case 3:
    if (*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) {
      sVar5 = *(short *)puVar4;
      if (sVar5 != -1) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x19 & 1) != 0) break;
      }
      uVar11 = FUN_02f08394();
      if (((uVar11 & 1) != 0) && (*(long *)PTR_DAT_04bb27b8 != 0)) {
        cVar23 = *(char *)(*(long *)PTR_DAT_04bb27b8 + 0x28);
        if ((cVar23 == -1) || (cVar23 != '\x03')) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
          if ((((*param_1 != 1) && (param_1[1] != 1)) && (param_1[2] != 1)) &&
             ((((param_1[3] != 1 && (param_1[4] != 1)) && (param_1[5] != 1)) && (param_1[6] != 1))))
          {
            uVar8 = param_1[7];
            uVar11 = (ulong)uVar8;
            param_1[7] = uVar8 + 1;
            if (6 < uVar8) {
              uVar11 = 0;
            }
            param_1[uVar11] = 1;
          }
        }
        else {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
          if (((*param_1 != 2) && (param_1[1] != 2)) &&
             (((param_1[2] != 2 && (((param_1[3] != 2 && (param_1[4] != 2)) && (param_1[5] != 2))))
              && (param_1[6] != 2)))) {
            uVar8 = param_1[7];
            uVar11 = (ulong)uVar8;
            param_1[7] = uVar8 + 1;
            if (6 < uVar8) {
              uVar11 = 0;
            }
            param_1[uVar11] = 2;
          }
        }
      }
    }
    break;
  case 4:
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (puVar22 == (uint *)0x0) {
      uVar8 = 0xbc;
    }
    else {
      uVar13 = *puVar22;
      uVar8 = 0;
      if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
        puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
        uVar8 = 0;
        if (*puVar16 != 0) {
          uVar8 = puVar16[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar18 != 0) {
              uVar13 = 0;
              if ((ulong)uVar8 != 0) {
                uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2)
                 , uVar8 < 0xbd)) goto LAB_03181518;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_03181518:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
    if ((((((uVar8 == 0x8f) &&
           (local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1f), *param_1 != 0x1f)) &&
          (param_1[1] != 0x1f)) && ((param_1[2] != 0x1f && (param_1[3] != 0x1f)))) &&
        (param_1[4] != 0x1f)) && ((param_1[5] != 0x1f && (param_1[6] != 0x1f)))) {
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      param_1[7] = uVar8 + 1;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[uVar11] = 0x1f;
    }
    break;
  case 5:
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) &&
       (puVar22 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) && ((ulong)(ushort)puVar16[2] != 0))
      {
        lVar18 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar18 != 0) {
          uVar13 = 0;
          if ((ulong)uVar8 != 0) {
            uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
          }
          if (*puVar16 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) == 0x8d)) {
            local_64 = 0;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x8d);
            uVar8 = *puVar22;
            if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
              puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
              local_64 = 0;
              if (*puVar16 != 0) {
                uVar8 = puVar16[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar18 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
                    }
                    if (*puVar16 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                       local_64 < 0xbd)) goto LAB_03180cdc;
                  }
                }
                local_64 = 0;
              }
            }
LAB_03180cdc:
            if ((local_64 != 0x8d) || ((*(byte *)(*param_2 + 0xb) >> 2 & 1) == 0)) {
              bVar14 = *(byte *)param_2[1];
              if (7 < bVar14) {
                bVar14 = 0xff;
              }
              local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
              uVar11 = FUN_02669430(&local_78);
              if ((uVar11 & 1) == 0) break;
            }
          }
        }
      }
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
    if ((((*param_1 != 0x20) && (param_1[1] != 0x20)) && (param_1[2] != 0x20)) &&
       (((param_1[3] != 0x20 && (param_1[4] != 0x20)) &&
        ((param_1[5] != 0x20 && (param_1[6] != 0x20)))))) {
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      param_1[7] = uVar8 + 1;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[uVar11] = 0x20;
    }
    break;
  case 6:
    iVar7 = 5;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
    if (((*param_1 == 5) || (param_1[1] == 5)) ||
       ((param_1[2] == 5 || (((param_1[3] == 5 || (param_1[4] == 5)) || (param_1[5] == 5))))))
    break;
    goto LAB_031811d4;
  case 7:
    puVar22 = *(uint **)(*param_2 + 0x10);
    if (((puVar22 == (uint *)0x0) || (uVar8 = *puVar22, uVar8 == 0)) ||
       (puVar22 == (uint *)(ulong)uVar8)) break;
    puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
    if (((*puVar16 == 0) || (uVar8 = puVar16[1], uVar8 == 0)) || ((ulong)(ushort)puVar16[2] == 0))
    break;
    lVar18 = 0xc;
    if (*(char *)((long)puVar16 + 10) != '\0') {
      lVar18 = 0x1c;
    }
    lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
    if (lVar18 == 0) break;
    uVar13 = 0;
    if ((ulong)uVar8 != 0) {
      uVar13 = (uint)((ulong)((long)puVar22 - lVar18) / (ulong)uVar8);
    }
    if (*puVar16 <= uVar13) {
      uVar13 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar13) ||
       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2) != 0x35)) break;
    iVar7 = 0x22;
    goto LAB_031812d4;
  case 9:
    iVar7 = 0x24;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x24);
    if (((*param_1 == 0x24) || (param_1[1] == 0x24)) ||
       ((param_1[2] == 0x24 ||
        (((param_1[3] == 0x24 || (param_1[4] == 0x24)) || (param_1[5] == 0x24)))))) break;
    goto LAB_031811d4;
  case 10:
    uVar11 = FUN_033fa420();
    if ((uVar11 & 1) == 0) {
      FUN_03182518(param_1,param_2);
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0xf);
      if ((((*param_1 != 0xf) && (param_1[1] != 0xf)) && (param_1[2] != 0xf)) &&
         (((param_1[3] != 0xf && (param_1[4] != 0xf)) &&
          ((param_1[5] != 0xf && (param_1[6] != 0xf)))))) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        param_1[7] = uVar8 + 1;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        param_1[uVar11] = 0xf;
      }
    }
    break;
  case 0xb:
    FUN_031827d8(param_1,param_2);
    break;
  case 0xc:
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
      if (*(int *)((long)puVar3 + 0x38) == -0x10e0fba8) break;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar22 >> 0x11 & 1) != 0) || (*(int *)((long)puVar3 + 0x38) == -0x10e0fba8)) break;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 0x19 & 1) != 0) break;
    }
    bVar14 = *(byte *)param_2[1];
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
    uVar11 = FUN_02669430(&local_78);
    uVar6 = *(ushort *)puVar4;
    uVar8 = (uint)(short)uVar6;
    if ((uVar11 & 1) == 0) {
      if (uVar6 == 0xffff) break;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar4 = PTR_DAT_04bc39f8 + (ulong)uVar8 * 8;
      if (0xff < uVar6) {
        puVar4 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar4 + 4) & 1) == 0) break;
LAB_03181798:
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar8) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 3 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
        if (0xff < uVar8) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_0318180c;
      }
    }
    else {
      if (uVar6 != 0xffff) goto LAB_03181798;
LAB_0318180c:
      if ((*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) &&
         (uVar11 = FUN_033fa130(), (uVar11 & 1) == 0)) {
        uVar11 = FUN_035a3310();
        if (((uVar11 & 1) != 0) &&
           (((uVar11 = FUN_0180b700(), (uVar11 & 1) == 0 && (*(long *)PTR_DAT_04bb3728 != 0)) &&
            (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 1)))) {
          FUN_03183234(param_1,0);
        }
        break;
      }
    }
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    if ((((*param_1 != 0) && (param_1[1] != 0)) &&
        ((param_1[2] != 0 && ((param_1[3] != 0 && (param_1[4] != 0)))))) &&
       ((param_1[5] != 0 && (param_1[6] != 0)))) {
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[7] = uVar8 + 1;
      param_1[uVar11] = 0;
    }
    break;
  case 0xe:
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
LAB_031813f0:
      iVar7 = *(int *)((long)puVar3 + 0x38);
      if ((iVar7 == -0x10e0fba8) || (*(long *)PTR_DAT_04bb59d8 == 0)) break;
      lVar18 = *(long *)PTR_DAT_04bb2720;
      if (lVar18 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar18 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar9 = FUN_006bd550(*puVar20,0);
          iVar7 = *(int *)((long)puVar3 + 0x38);
          if (iVar9 != 0x758f7eaf) {
            puVar3 = &DAT_055c04a0;
          }
          puVar20 = puVar3;
        }
      }
      if (*(int *)(puVar20 + 7) != -0x6efba09b) break;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 3 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_031813f0;
      }
      iVar7 = *(int *)((long)puVar3 + 0x38);
    }
    if (iVar7 != -0x10e0fba8) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0xe);
      if (((((*param_1 != 0xe) && (param_1[1] != 0xe)) && (param_1[2] != 0xe)) &&
          ((param_1[3] != 0xe && (param_1[4] != 0xe)))) &&
         ((param_1[5] != 0xe && (param_1[6] != 0xe)))) {
        uVar8 = param_1[7];
        uVar11 = (ulong)uVar8;
        param_1[7] = uVar8 + 1;
        if (6 < uVar8) {
          uVar11 = 0;
        }
        param_1[uVar11] = 0xe;
      }
    }
    break;
  case 0x10:
    FUN_03181a74(param_1,param_2);
    break;
  case 0x11:
    uVar11 = FUN_02915598(param_2[1]);
    if ((uVar11 & 1) == 0) break;
    iVar7 = 0x12;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x12);
    if ((((*param_1 == 0x12) || (param_1[1] == 0x12)) || (param_1[2] == 0x12)) ||
       (((param_1[3] == 0x12 || (param_1[4] == 0x12)) || (param_1[5] == 0x12)))) break;
    goto LAB_031811d4;
  case 0x12:
    iVar7 = 0x21;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x21);
    if (((*param_1 == 0x21) || (param_1[1] == 0x21)) ||
       (((param_1[2] == 0x21 || ((param_1[3] == 0x21 || (param_1[4] == 0x21)))) ||
        (param_1[5] == 0x21)))) break;
LAB_031811d4:
    if (param_1[6] != (uint)local_78) {
LAB_03181348:
      uVar8 = param_1[7];
      uVar11 = (ulong)uVar8;
      if (6 < uVar8) {
        uVar11 = 0;
      }
      param_1[7] = uVar8 + 1;
      param_1[uVar11] = iVar7;
    }
    break;
  case 0x14:
    iVar7 = 0x36;
    goto LAB_031812d4;
  case 0x15:
    sVar5 = *(short *)puVar4;
    if (sVar5 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar4 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar4 + 4) & 1) != 0) break;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    if ((((*param_1 == 3) || (param_1[1] == 3)) ||
        ((param_1[2] == 3 || (((param_1[3] == 3 || (param_1[4] == 3)) || (param_1[5] == 3)))))) ||
       (param_1[6] == 3)) break;
    uVar8 = param_1[7];
    uVar11 = (ulong)uVar8;
    param_1[7] = uVar8 + 1;
    if (6 < uVar8) {
      uVar11 = 0;
    }
    iVar7 = 3;
    goto LAB_031812c8;
  case 0x16:
    iVar7 = 0x2d;
LAB_031812d4:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar7);
    if (((((*param_1 == iVar7) || (param_1[1] == iVar7)) || (param_1[2] == iVar7)) ||
        ((param_1[3] == iVar7 || (param_1[4] == iVar7)))) ||
       ((param_1[5] == iVar7 || (param_1[6] == iVar7)))) break;
    goto LAB_03181348;
  case 0x19:
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
      if (*(int *)((long)puVar3 + 0x38) == -0x10e0fba8) break;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar22 >> 0x11 & 1) != 0) || (*(int *)((long)puVar3 + 0x38) == -0x10e0fba8)) break;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 0x19 & 1) != 0) break;
    }
    bVar14 = *(byte *)param_2[1];
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar14);
    uVar11 = FUN_02669430(&local_78);
    if ((uVar11 & 1) == 0) break;
    sVar5 = *(short *)puVar4;
    if (sVar5 == -1) {
LAB_031816b0:
      if ((*(int *)((long)puVar3 + 0x38) != -0x10e0fba8) &&
         (uVar11 = FUN_033fa130(), (uVar11 & 1) == 0)) break;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 3 & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar22 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar22 >> 0x11 & 1) == 0) goto LAB_031816b0;
      }
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x3e);
    if ((*param_1 == 0x3e) ||
       (((((param_1[1] == 0x3e || (param_1[2] == 0x3e)) || (param_1[3] == 0x3e)) ||
         ((param_1[4] == 0x3e || (param_1[5] == 0x3e)))) || (param_1[6] == 0x3e)))) break;
    uVar8 = param_1[7];
    uVar11 = (ulong)uVar8;
    param_1[7] = uVar8 + 1;
    if (6 < uVar8) {
      uVar11 = 0;
    }
    iVar7 = 0x3e;
LAB_031812c8:
    param_1[uVar11] = iVar7;
  }
  FUN_03181d14(param_1);
  return;
}

