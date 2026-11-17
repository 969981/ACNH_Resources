
/* WARNING: Type propagation algorithm not settling */

void FUN_03156790(long *param_1,int param_2,byte *param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long *plVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  short sVar8;
  short sVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  void *__s;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  long lVar24;
  long *plVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *puVar27;
  short *psVar28;
  short *psVar29;
  byte bVar30;
  ushort uVar31;
  char *pcVar32;
  undefined8 *puVar33;
  uint *puVar34;
  undefined ***pppuVar35;
  uint *puVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined8 *local_10d8;
  short *psStack_10d0;
  undefined8 *local_10b8;
  undefined8 *puStack_10b0;
  undefined8 *local_1098;
  undefined4 *puStack_1090;
  short local_1078;
  undefined1 local_1076;
  undefined1 local_1075;
  undefined4 local_1074;
  undefined4 local_1070;
  undefined4 local_106c;
  undefined *local_1068;
  undefined8 *local_1060;
  undefined8 *******local_1058;
  undefined8 *******pppppppuStack_1050;
  undefined8 *******local_1048;
  undefined8 ******local_1040;
  undefined8 *****local_1038;
  undefined8 ****local_1030;
  undefined8 ***local_1028;
  undefined8 **local_1020;
  undefined8 *local_1018;
  undefined8 local_1010;
  undefined8 local_1008 [8];
  undefined8 local_fc8;
  undefined2 local_fc0;
  undefined1 local_fbe;
  undefined1 local_fbd;
  undefined4 local_fbc;
  long local_fb8;
  undefined **local_fb0;
  char *local_fa8;
  undefined8 *******local_fa0;
  undefined8 *******pppppppuStack_f98;
  undefined8 *******local_f90;
  undefined8 ******local_f88;
  undefined8 *****local_f80;
  undefined8 ****local_f78;
  undefined8 ***local_f70;
  undefined8 **local_f68;
  undefined8 *local_f60;
  undefined8 local_f58;
  char local_f50 [1904];
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_6c [3];
  
  if (param_1 != (long *)0x0) {
    local_6c[0] = param_2;
    piVar18 = (int *)(**(code **)(*param_1 + 0x10))();
    if (0 < *piVar18) {
      lVar24 = 0;
      puVar38 = *(undefined8 **)(piVar18 + 4);
      do {
        puVar33 = *(undefined8 **)(*(long *)(piVar18 + 2) + lVar24 * 8);
        lVar24 = lVar24 + 1;
        *puVar33 = puVar38;
        *(undefined8 **)(piVar18 + 4) = puVar33;
        puVar38 = puVar33;
      } while (lVar24 < *piVar18);
    }
    *piVar18 = 0;
    local_7e0 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7d8,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_84 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
    local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_7e0);
    memset(__s,0,0x754);
    FUN_033fd750(&local_7e0,param_3);
    local_fb0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_fa8 = "UnlockInterior_CeilingFurniture";
    iVar14 = FUN_0274bce0(param_3,&local_fb0);
    puVar10 = PTR_DAT_04bb43c0;
    if (iVar14 == 0) {
      local_fb0 = &PTR_FUN_04b2a1b0;
      uVar13 = 0;
      do {
        (**(code **)(local_7e0 + 0x10))(&local_1068,&local_7e0,uVar13);
        lVar24 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
        uVar17 = 1 << (ulong)(uVar13 & 0x1f);
        if ((*(uint *)(lVar24 + (ulong)(uVar13 >> 5) * 4) & uVar17) != 0) {
          lVar24 = *(long *)puVar10;
          uVar15 = FUN_0277d6c4(&local_1068);
          if (*(long *)puVar10 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (((uVar15 < *(uint *)(lVar24 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
               (uVar19 = (*(code *)*local_fb0)(&local_fb0,&local_1068), (uVar19 & 1) == 0))
            goto LAB_03156920;
          }
          lVar24 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
          lVar20 = (ulong)(uVar13 >> 5) * 4;
          *(uint *)(lVar24 + lVar20) = *(uint *)(lVar24 + lVar20) & (uVar17 ^ 0xffffffff);
        }
LAB_03156920:
        uVar13 = uVar13 + 1;
      } while (uVar13 != 15000);
    }
    FUN_033fd3a0(&local_7e0,local_6c,1);
    memset(&local_fb0,0,2000);
    bVar30 = *param_3;
    if (7 < bVar30) {
      bVar30 = 0xff;
    }
    local_1068 = (undefined *)CONCAT71(local_1068._1_7_,bVar30);
    lVar24 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_1068,1);
    if (lVar24 != 0) {
      lVar20 = lVar24 + 0x194b0;
      if (*(long *)(lVar24 + 0x194b8) == 0) {
        lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        plVar25 = *(long **)(lVar20 + 0x1100);
      }
      else {
        plVar25 = *(long **)(lVar24 + 0x1a5b0);
      }
      if ((plVar25 == (long *)0x0) || ((undefined8 *)*plVar25 == (undefined8 *)0x0)) {
        memcpy(&local_fb0,(void *)(*(long *)(lVar20 + 0x10e8) + *(long *)(lVar20 + 0x10e0)),2000);
      }
      else {
        uVar19 = (*(code *)**(undefined8 **)*plVar25)();
        memcpy(&local_fb0,(void *)(*(long *)(lVar20 + 0x10e8) + *(long *)(lVar20 + 0x10e0)),2000);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar20 + 0x1100) != 0)) &&
           (puVar38 = *(undefined8 **)(*(long *)(lVar20 + 0x1100) + 8), puVar38 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar38)();
        }
      }
    }
    lVar24 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar19 = 0;
    do {
      if ((*(uint *)(lVar24 + (uVar19 >> 5) * 4) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)
      goto LAB_03156af0;
      uVar13 = (uint)uVar19 + 1;
      uVar19 = (ulong)uVar13;
    } while (uVar13 != 15000);
    uVar19 = 0;
LAB_03156af0:
    lVar20 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    iVar14 = 15000;
    do {
      if ((*(uint *)(lVar20 + (ulong)(iVar14 - 1U >> 5) * 4) >> (ulong)(iVar14 - 1U & 0x1f) & 1) !=
          0) break;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    if (iVar14 != (int)uVar19) {
      puVar38 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
LAB_03156c80:
      puVar10 = PTR_DAT_04bb43c0;
      plVar25 = (long *)(PTR_DAT_04bbfe58 + uVar19 * 8);
      if (0x752 < (uint)(uVar19 >> 3)) {
        plVar25 = (long *)PTR_DAT_04bbfe58;
      }
      plVar3 = (long *)PTR_DAT_04bb37e0;
      if ((uint)uVar19 < 0x3a99) {
        plVar3 = plVar25;
      }
      local_fc0 = (undefined2)*plVar3;
      local_fbe = *(undefined1 *)((long)plVar3 + 2);
      local_fbd = *(undefined1 *)((long)plVar3 + 3);
      local_fbc = *(undefined4 *)((long)plVar3 + 4);
      local_1068 = (undefined *)*plVar3;
      local_fb8 = 0;
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      local_fc8 = puVar38;
      uVar13 = FUN_0277d6c4(&local_fc0);
      if (*(long *)puVar10 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar13 = FUN_0277d6c4(&local_1068);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if (uVar13 < *(uint *)(lVar20 + 0x1d8)) {
            lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8);
            if (lVar20 != 0) {
              local_fb8 = lVar20;
            }
          }
        }
      }
      iVar16 = FUN_01ad7260(&local_fc8);
      if (iVar16 == 0) {
LAB_03156e2c:
        lVar20 = *plVar3;
        uVar7 = *(undefined1 *)((long)plVar3 + 2);
        uVar6 = *(undefined1 *)((long)plVar3 + 3);
        uVar5 = *(undefined4 *)((long)plVar3 + 4);
        piVar18 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
        if (*piVar18 < piVar18[1]) {
          puVar33 = *(undefined8 **)(piVar18 + 4);
          if (puVar33 != (undefined8 *)0x0) {
            *(undefined8 *)(piVar18 + 4) = *puVar33;
          }
          *(short *)puVar33 = (short)lVar20;
          *(undefined1 *)((long)puVar33 + 2) = uVar7;
          *(undefined1 *)((long)puVar33 + 3) = uVar6;
          *(undefined4 *)((long)puVar33 + 4) = uVar5;
          if (*piVar18 < piVar18[1]) {
            *(undefined8 **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = puVar33;
            *piVar18 = *piVar18 + 1;
          }
        }
      }
      else {
        uVar22 = FUN_01ae6580(&local_fc8);
        if ((uVar22 & 1) == 0) {
          iVar16 = FUN_01ad7260(&local_fc8);
          if (iVar16 != 0) goto LAB_03156e2c;
        }
        else {
          uVar22 = FUN_01affd70(&local_fc8);
          if ((uVar22 & 1) != 0) goto LAB_03156e2c;
        }
        local_1068 = (undefined *)0x0;
        local_1060 = (undefined8 *)0x0;
        local_1010 = 0;
        if (local_1008 != (undefined8 *)0x0) {
          local_1068 = (undefined *)0x800000000;
          local_1060 = local_1008;
        }
        local_1070 = (undefined4)*plVar3;
        local_106c = *(undefined4 *)((long)plVar3 + 4);
        local_1058 = &local_1048;
        pppppppuStack_1050 = &local_1048;
        local_1048 = &local_1040;
        local_1040 = &local_1038;
        local_1038 = &local_1030;
        local_1030 = &local_1028;
        local_1028 = &local_1020;
        local_1020 = &local_1018;
        local_1018 = &local_1010;
        FUN_0264cdf0(&local_1068,&local_1070);
        local_1070 = (undefined4)*plVar3;
        local_106c = *(undefined4 *)((long)plVar3 + 4);
        uVar22 = FUN_03422cc0(&local_1070);
        if ((uVar22 & 1) == 0) {
          uVar22 = FUN_03422a60(&local_1070,param_3);
          uVar22 = uVar22 & 0xffffffff;
          puVar33 = local_1060;
        }
        else {
          uVar22 = 1;
          puVar33 = local_1060;
        }
        local_1060 = puVar33;
        if ((int)local_1068 != 0) {
          lVar20 = (long)(int)local_1068 << 3;
          do {
            local_1070 = *(undefined4 *)*puVar33;
            local_106c = ((undefined4 *)*puVar33)[1];
            uVar21 = FUN_01b00960(&local_1070);
            uVar5 = local_106c;
            if ((((uint)(uVar21 >> 7) & 0x1ffffff) < 0x7d) &&
               ((*(uint *)(local_f50 + (uVar21 >> 5 & 0x7ffffff) * 4 + -0x60) >>
                 (ulong)((uint)uVar21 & 0x1f) & 1) != 0)) {
              uVar12 = (undefined2)local_1070;
              uVar7 = local_1070._2_1_;
              uVar6 = local_1070._3_1_;
              piVar18 = (int *)(**(code **)(*param_1 + 0x10))();
              if (*piVar18 < piVar18[1]) {
                puVar27 = *(undefined8 **)(piVar18 + 4);
                if (puVar27 != (undefined8 *)0x0) {
                  *(undefined8 *)(piVar18 + 4) = *puVar27;
                }
                *(undefined2 *)puVar27 = uVar12;
                *(undefined1 *)((long)puVar27 + 2) = uVar7;
                *(undefined1 *)((long)puVar27 + 3) = uVar6;
                *(undefined4 *)((long)puVar27 + 4) = uVar5;
                if (*piVar18 < piVar18[1]) {
                  *(undefined8 **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = puVar27;
                  *piVar18 = *piVar18 + 1;
                }
              }
              if ((uVar22 & 1) != 0) break;
            }
            puVar33 = puVar33 + 1;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
        }
      }
      do {
        uVar13 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar13;
        if (0x752 < uVar13 >> 3) {
          uVar13 = 0x3a95;
          goto LAB_03156fd0;
        }
      } while ((*(uint *)(lVar24 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
      goto LAB_03156c78;
    }
LAB_03156b38:
    uVar19 = FUN_01810f30();
    if (((uVar19 & 1) != 0) && ((local_6c[0] == 0x70 || (local_6c[0] == 0)))) {
      FUN_02204720();
      FUN_02204b90();
      FUN_022043e0();
      uVar13 = FUN_022030f0();
      puVar10 = PTR_DAT_04bb57c8;
      lVar24 = *(long *)PTR_DAT_04bb32f0;
      if (*(int *)(lVar24 + 0xe50) != 0) {
        puVar38 = *(undefined8 **)(lVar24 + 0xe58);
        puVar33 = puVar38 + *(int *)(lVar24 + 0xe50);
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        pcVar32 = PTR_DAT_04bb57c0;
LAB_0315704c:
        uVar17 = *(uint *)*puVar38;
        if ((int)*(uint *)(lVar24 + 0xe28) < 1) {
          if ((((*(long *)(lVar24 + 0xd18) == 0) ||
               (puVar36 = *(uint **)(*(long *)(lVar24 + 0xd18) + 8), puVar36 == (uint *)0x0)) ||
              ((uVar17 < *(uint *)(lVar24 + 0xd30) &&
               (*(char *)(*(long *)(lVar24 + 0xd38) + (long)(int)uVar17) == '\0')))) ||
             (((*puVar36 <= uVar17 || (puVar36[1] == 0)) || ((ushort)puVar36[2] == 0))))
          goto LAB_03157100;
          iVar14 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          puVar36 = (uint *)((ulong)(puVar36[1] * uVar17 + (uint)(ushort)puVar36[2] * 8 + iVar14) +
                            (long)puVar36);
          uVar17 = *puVar36;
        }
        else if (uVar17 < *(uint *)(lVar24 + 0xe28)) {
          if (*(uint *)(lVar24 + 0xe18) <= uVar17) {
            uVar17 = 0;
          }
          puVar36 = *(uint **)(*(long *)(lVar24 + 0xe20) + (ulong)uVar17 * 8);
          uVar17 = *puVar36;
        }
        else {
LAB_03157100:
          puVar36 = (uint *)0x0;
          uVar17 = uRam0000000000000000;
        }
        if (uVar17 != 0) {
          cVar23 = *pcVar32;
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar10 + 0xc);
              if (-1 < (int)uVar17) {
                if (((char *)((ulong)uVar17 + (long)puVar36) != (char *)0x0) &&
                   (*(char *)((ulong)uVar17 + (long)puVar36) != '\0')) {
                  uVar17 = *puVar36;
                  uVar15 = 0;
                  if (uVar17 == 0) goto LAB_03157258;
                  uVar19 = (ulong)*(uint *)(puVar10 + 0x10);
                  goto LAB_031571cc;
                }
                break;
              }
              if (uVar17 != 0xffffffff) break;
            }
            lVar20 = (long)puVar36 - (ulong)*puVar36;
            if ((*puVar36 == 0) || (lVar20 == 0)) break;
            lVar37 = 0xc;
            if (*(char *)(lVar20 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            if (lVar37 + lVar20 == 0) break;
            uVar19 = (ulong)*(ushort *)(lVar20 + 8);
            *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
            if (uVar19 == 0) break;
            piVar18 = (int *)(lVar37 + lVar20 + 4);
            while (piVar18[-1] != -0x5f448af0) {
              piVar18 = piVar18 + 2;
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_03157040;
            }
            iVar14 = 0;
            if (*piVar18 != -1) {
              iVar14 = *piVar18;
            }
            *(int *)(puVar10 + 0xc) = iVar14;
            if (*puVar36 == 0) break;
          } while( true );
        }
        goto LAB_03157040;
      }
LAB_03157830:
      lVar24 = *(long *)PTR_DAT_04bb5ce0;
      psVar29 = (short *)PTR_DAT_04bb37e0;
      psVar28 = (short *)PTR_DAT_04bb37e0;
      if (lVar24 != 0) {
        psVar29 = (short *)(lVar24 + 0xf54);
        psVar28 = (short *)(lVar24 + 0xf44);
      }
      psVar4 = (short *)PTR_DAT_04bb37e0;
      if (lVar24 != 0) {
        psVar4 = (short *)(lVar24 + 0xf4c);
      }
      if (*psVar28 != -2) {
        local_10d8 = &DAT_04b05060;
        psStack_10d0 = psVar28;
        puVar36 = (uint *)(**(code **)(*param_1 + 0x18))(param_1);
        pppuVar35 = (undefined ***)PTR_DAT_04bb37e0;
        uVar13 = *puVar36;
        if (0 < (int)uVar13) {
          uVar19 = 0;
          do {
            piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
            plVar25 = (long *)pppuVar35;
            if ((*piVar18 != 0) &&
               (piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1), uVar19 <= *piVar18 - 1)) {
              lVar24 = (**(code **)(*param_1 + 0x18))(param_1);
              plVar25 = *(long **)(*(long *)(lVar24 + 8) + uVar19 * 8);
            }
            local_fb0 = (undefined **)*plVar25;
            uVar22 = (*(code *)*local_10d8)(&local_10d8,&local_fb0);
            if ((uVar22 & 1) != 0) {
              pppuVar35 = &local_fb0;
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar13 != uVar19);
        }
        if (*(short *)pppuVar35 == -2) {
          sVar8 = *psVar28;
          sVar9 = psVar28[1];
          uVar7 = *(undefined1 *)((long)psVar28 + 3);
          uVar5 = *(undefined4 *)(psVar28 + 2);
          piVar18 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
          if (*piVar18 < piVar18[1]) {
            psVar28 = *(short **)(piVar18 + 4);
            if (psVar28 != (short *)0x0) {
              *(undefined8 *)(piVar18 + 4) = *(undefined8 *)psVar28;
            }
            *psVar28 = sVar8;
            *(char *)(psVar28 + 1) = (char)sVar9;
            *(undefined1 *)((long)psVar28 + 3) = uVar7;
            *(undefined4 *)(psVar28 + 2) = uVar5;
            if (*piVar18 < piVar18[1]) {
              *(short **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = psVar28;
              *piVar18 = *piVar18 + 1;
            }
          }
        }
      }
      if (*psVar4 != -2) {
        local_10d8 = &DAT_04b05060;
        psStack_10d0 = psVar4;
        puVar36 = (uint *)(**(code **)(*param_1 + 0x18))(param_1);
        puVar10 = PTR_DAT_04bb37e0;
        uVar13 = *puVar36;
        if ((int)uVar13 < 1) {
          pppuVar35 = (undefined ***)puVar10;
        }
        else {
          uVar19 = 0;
          do {
            piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
            plVar25 = (long *)puVar10;
            if ((*piVar18 != 0) &&
               (piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1), uVar19 <= *piVar18 - 1)) {
              lVar24 = (**(code **)(*param_1 + 0x18))(param_1);
              plVar25 = *(long **)(*(long *)(lVar24 + 8) + uVar19 * 8);
            }
            local_fb0 = (undefined **)*plVar25;
            uVar22 = (*(code *)*local_10d8)(&local_10d8,&local_fb0);
            pppuVar35 = &local_fb0;
            if ((uVar22 & 1) != 0) goto LAB_03157adc;
            uVar19 = uVar19 + 1;
          } while (uVar13 != uVar19);
          pppuVar35 = (undefined ***)puVar10;
        }
LAB_03157adc:
        if (*(short *)pppuVar35 == -2) {
          sVar8 = *psVar4;
          sVar9 = psVar4[1];
          uVar7 = *(undefined1 *)((long)psVar4 + 3);
          uVar5 = *(undefined4 *)(psVar4 + 2);
          piVar18 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
          if (*piVar18 < piVar18[1]) {
            psVar28 = *(short **)(piVar18 + 4);
            if (psVar28 != (short *)0x0) {
              *(undefined8 *)(piVar18 + 4) = *(undefined8 *)psVar28;
            }
            *psVar28 = sVar8;
            *(char *)(psVar28 + 1) = (char)sVar9;
            *(undefined1 *)((long)psVar28 + 3) = uVar7;
            *(undefined4 *)(psVar28 + 2) = uVar5;
            if (*piVar18 < piVar18[1]) {
              *(short **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = psVar28;
              *piVar18 = *piVar18 + 1;
            }
          }
        }
      }
      if (*psVar29 != -2) {
        local_10d8 = &DAT_04b05060;
        psStack_10d0 = psVar29;
        puVar36 = (uint *)(**(code **)(*param_1 + 0x18))(param_1);
        puVar10 = PTR_DAT_04bb37e0;
        uVar13 = *puVar36;
        if ((int)uVar13 < 1) {
          pppuVar35 = (undefined ***)puVar10;
        }
        else {
          uVar19 = 0;
          do {
            piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
            plVar25 = (long *)puVar10;
            if ((*piVar18 != 0) &&
               (piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1), uVar19 <= *piVar18 - 1)) {
              lVar24 = (**(code **)(*param_1 + 0x18))(param_1);
              plVar25 = *(long **)(*(long *)(lVar24 + 8) + uVar19 * 8);
            }
            local_fb0 = (undefined **)*plVar25;
            uVar22 = (*(code *)*local_10d8)(&local_10d8,&local_fb0);
            pppuVar35 = &local_fb0;
            if ((uVar22 & 1) != 0) goto LAB_03157c5c;
            uVar19 = uVar19 + 1;
          } while (uVar13 != uVar19);
          pppuVar35 = (undefined ***)puVar10;
        }
LAB_03157c5c:
        if (*(short *)pppuVar35 == -2) {
          sVar8 = *psVar29;
          sVar9 = psVar29[1];
          uVar7 = *(undefined1 *)((long)psVar29 + 3);
          uVar5 = *(undefined4 *)(psVar29 + 2);
          piVar18 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
          if (*piVar18 < piVar18[1]) {
            psVar29 = *(short **)(piVar18 + 4);
            if (psVar29 != (short *)0x0) {
              *(undefined8 *)(piVar18 + 4) = *(undefined8 *)psVar29;
            }
            *psVar29 = sVar8;
            *(char *)(psVar29 + 1) = (char)sVar9;
            *(undefined1 *)((long)psVar29 + 3) = uVar7;
            *(undefined4 *)(psVar29 + 2) = uVar5;
            if (*piVar18 < piVar18[1]) {
              *(short **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = psVar29;
              *piVar18 = *piVar18 + 1;
            }
          }
        }
      }
    }
  }
  return;
  while (uVar13 = uVar13 - 3, uVar13 != 0xfffffffd) {
LAB_03156fd0:
    uVar17 = uVar13 + 2;
    if ((((*(uint *)(lVar24 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) ||
        (uVar17 = uVar13 + 1,
        (*(uint *)(lVar24 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)) ||
       (uVar17 = uVar13,
       (*(uint *)(lVar24 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      uVar19 = (ulong)(uVar17 + 1);
      goto LAB_03156c78;
    }
  }
  uVar19 = 0;
LAB_03156c78:
  if (iVar14 == (int)uVar19) goto LAB_03156b38;
  goto LAB_03156c80;
  while( true ) {
    if (uVar19 != 0xffffffff) goto LAB_03157254;
    lVar20 = (long)puVar36 - (ulong)uVar17;
    uVar15 = 0;
    if (lVar20 == 0) goto LAB_03157258;
    lVar37 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar37 = 0x1c;
    }
    if (lVar37 + lVar20 == 0) goto LAB_03157254;
    uVar19 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar10 + 0x10) = 0xfffffffe;
    uVar15 = 0;
    if (uVar19 == 0) goto LAB_03157258;
    puVar34 = (uint *)(lVar37 + lVar20 + 4);
    while (puVar34[-1] != 0x7c226372) {
      puVar34 = puVar34 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) {
        uVar15 = 0;
        goto LAB_03157258;
      }
    }
    uVar19 = 0;
    if (*puVar34 != 0xffffffff) {
      uVar19 = (ulong)*puVar34;
    }
    *(int *)(puVar10 + 0x10) = (int)uVar19;
    uVar17 = *puVar36;
    if (uVar17 == 0) break;
LAB_031571cc:
    if (-1 < (int)uVar19) {
      uVar15 = 0;
      if (((byte *)(uVar19 + (long)puVar36) != (byte *)0x0) &&
         (bVar30 = *(byte *)(uVar19 + (long)puVar36), uVar15 = (uint)bVar30, 7 < bVar30)) {
LAB_03157254:
        uVar15 = 0;
      }
      goto LAB_03157258;
    }
  }
  uVar15 = 0;
LAB_03157258:
  local_fb0 = (undefined **)CONCAT44(local_fb0._4_4_,uVar15);
  iVar14 = FUN_02204f20(&local_fb0);
  if (iVar14 != 0) {
    if (*puVar36 != 0) {
      cVar23 = *pcVar32;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *pcVar32 = '\x01';
          *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar10 + 8);
          if (-1 < (int)uVar17) {
            if ((ushort *)((ulong)uVar17 + (long)puVar36) != (ushort *)0x0) {
              uVar31 = *(ushort *)((ulong)uVar17 + (long)puVar36);
              goto LAB_03157340;
            }
            break;
          }
          if (uVar17 != 0xffffffff) break;
        }
        puVar34 = (uint *)(ulong)*puVar36;
        uVar31 = 0xfffe;
        if ((*puVar36 == 0) || (puVar36 == puVar34)) goto LAB_03157340;
        lVar20 = 0xc;
        if (*(char *)((long)puVar36 + (10 - (long)puVar34)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar36 + (lVar20 - (long)puVar34);
        if (lVar20 == 0) break;
        uVar19 = (ulong)*(ushort *)((long)puVar36 + (8 - (long)puVar34));
        *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
        if (uVar19 == 0) break;
        piVar18 = (int *)(lVar20 + 4);
        while (piVar18[-1] != -0x52e1fb53) {
          piVar18 = piVar18 + 2;
          uVar19 = uVar19 - 1;
          if (uVar19 == 0) goto LAB_0315733c;
        }
        iVar14 = 0;
        if (*piVar18 != -1) {
          iVar14 = *piVar18;
        }
        *(int *)(puVar10 + 8) = iVar14;
        if (*puVar36 == 0) break;
      } while( true );
    }
LAB_0315733c:
    uVar31 = 0xfffe;
LAB_03157340:
    local_fc8 = (undefined8 *)(ulong)uVar31;
    FUN_0277d4ac(&local_fc8);
    puVar11 = PTR_DAT_04bb43c0;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar17 = FUN_0277d6c4(&local_fc8);
    lVar37 = *(long *)puVar11;
    if (lVar37 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar17 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8) != 0 &&
          (short)local_fc8 != -2)) {
        local_1058 = (undefined8 *******)0x0;
        local_1060 = local_fc8;
        local_1068 = puVar1;
        uVar17 = FUN_0277d6c4(&local_1060);
        if (*(long *)PTR_DAT_04bb43c0 != 0) {
          lVar20 = *(long *)(lVar37 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar17 = FUN_0277d6c4(&local_fc8);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (uVar17 < *(uint *)(lVar20 + 0x1d8)) {
              pppppppuVar26 =
                   *(undefined8 ********)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8);
              if (pppppppuVar26 != (undefined8 *******)0x0) {
                local_1058 = pppppppuVar26;
              }
            }
          }
        }
        iVar14 = FUN_01ad7260(&local_1068);
        if (((iVar14 == 0) || (uVar19 = FUN_03422cc0(&local_fc8), (uVar19 & 1) != 0)) ||
           (uVar17 = FUN_03422a60(&local_fc8,param_3), ((uVar17 | uVar13 ^ 1) & 1) != 0)) {
          puStack_10b0 = &local_fc8;
          local_10b8 = &DAT_04b05038;
          puVar36 = (uint *)(**(code **)(*param_1 + 0x18))();
          uVar17 = *puVar36;
          if (0 < (int)uVar17) {
            uVar19 = 0;
            do {
              piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
              if (*piVar18 == 0) {
                plVar25 = (long *)PTR_DAT_04bb37e0;
              }
              else {
                piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
                plVar25 = (long *)PTR_DAT_04bb37e0;
                if (uVar19 <= *piVar18 - 1) {
                  lVar20 = (**(code **)(*param_1 + 0x18))();
                  plVar25 = *(long **)(*(long *)(lVar20 + 8) + uVar19 * 8);
                }
              }
              local_fb0 = (undefined **)*plVar25;
              uVar22 = (*(code *)*local_10b8)(&local_10b8,&local_fb0);
              pppuVar35 = &local_fb0;
              if ((uVar22 & 1) != 0) goto LAB_03157570;
              uVar19 = uVar19 + 1;
            } while (uVar17 != uVar19);
          }
          pppuVar35 = (undefined ***)PTR_DAT_04bb37e0;
LAB_03157570:
          if (*(short *)pppuVar35 == -2) {
            uVar6 = local_fc8._3_1_;
            uVar5 = local_fc8._4_4_;
            uVar12 = (short)local_fc8;
            uVar7 = local_fc8._2_1_;
            piVar18 = (int *)(**(code **)(*param_1 + 0x10))();
            if (*piVar18 < piVar18[1]) {
              puVar27 = *(undefined8 **)(piVar18 + 4);
              if (puVar27 != (undefined8 *)0x0) {
                *(undefined8 *)(piVar18 + 4) = *puVar27;
              }
              *(undefined2 *)puVar27 = uVar12;
              *(undefined1 *)((long)puVar27 + 2) = uVar7;
              *(undefined1 *)((long)puVar27 + 3) = uVar6;
              *(undefined4 *)((long)puVar27 + 4) = uVar5;
              if (*piVar18 < piVar18[1]) {
                *(undefined8 **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = puVar27;
                *piVar18 = *piVar18 + 1;
              }
            }
          }
        }
        else {
          local_fb0 = (undefined **)0x0;
          local_fa8 = (char *)0x0;
          local_f58 = 0;
          if (local_f50 != (char *)0x0) {
            local_fb0 = (undefined **)0x800000000;
            local_fa8 = local_f50;
          }
          local_fa0 = &local_f90;
          pppppppuStack_f98 = &local_f90;
          local_f90 = &local_f88;
          local_f88 = &local_f80;
          local_f80 = &local_f78;
          local_f78 = &local_f70;
          local_f70 = &local_f68;
          local_f68 = &local_f60;
          local_f60 = &local_f58;
          FUN_0264cdf0(&local_fb0,&local_fc8);
          if ((int)local_fb0 != 0) {
            pcVar2 = local_fa8 + (long)(int)local_fb0 * 8;
            pcVar32 = local_fa8;
            do {
              local_1070 = **(undefined4 **)pcVar32;
              local_106c = (*(undefined4 **)pcVar32)[1];
              puStack_1090 = &local_1070;
              local_1098 = &DAT_04b05010;
              puVar36 = (uint *)(**(code **)(*param_1 + 0x18))();
              uVar17 = *puVar36;
              if (0 < (int)uVar17) {
                uVar19 = 0;
                do {
                  piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
                  if (*piVar18 == 0) {
                    psVar29 = (short *)PTR_DAT_04bb37e0;
                  }
                  else {
                    piVar18 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
                    psVar29 = (short *)PTR_DAT_04bb37e0;
                    if (uVar19 <= *piVar18 - 1) {
                      lVar20 = (**(code **)(*param_1 + 0x18))();
                      psVar29 = *(short **)(*(long *)(lVar20 + 8) + uVar19 * 8);
                    }
                  }
                  local_1078 = *psVar29;
                  local_1076 = (undefined1)psVar29[1];
                  local_1075 = *(undefined1 *)((long)psVar29 + 3);
                  local_1074 = *(undefined4 *)(psVar29 + 2);
                  uVar22 = (*(code *)*local_1098)(&local_1098,&local_1078);
                  psVar29 = &local_1078;
                  if ((uVar22 & 1) != 0) goto LAB_031577a0;
                  uVar19 = uVar19 + 1;
                } while (uVar17 != uVar19);
              }
              psVar29 = (short *)PTR_DAT_04bb37e0;
LAB_031577a0:
              uVar5 = local_106c;
              if (*psVar29 == -2) {
                uVar6 = local_1070._3_1_;
                uVar12 = (undefined2)local_1070;
                uVar7 = local_1070._2_1_;
                piVar18 = (int *)(**(code **)(*param_1 + 0x10))();
                if (*piVar18 < piVar18[1]) {
                  puVar27 = *(undefined8 **)(piVar18 + 4);
                  if (puVar27 != (undefined8 *)0x0) {
                    *(undefined8 *)(piVar18 + 4) = *puVar27;
                  }
                  *(undefined2 *)puVar27 = uVar12;
                  *(undefined1 *)((long)puVar27 + 2) = uVar7;
                  *(undefined1 *)((long)puVar27 + 3) = uVar6;
                  *(undefined4 *)((long)puVar27 + 4) = uVar5;
                  if (*piVar18 < piVar18[1]) {
                    *(undefined8 **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = puVar27;
                    *piVar18 = *piVar18 + 1;
                  }
                }
              }
              pcVar32 = pcVar32 + 8;
            } while (pcVar32 != pcVar2);
          }
        }
      }
    }
    pcVar32 = PTR_DAT_04bb57c0;
  }
LAB_03157040:
  puVar38 = puVar38 + 1;
  if (puVar38 == puVar33) goto LAB_03157830;
  goto LAB_0315704c;
}

