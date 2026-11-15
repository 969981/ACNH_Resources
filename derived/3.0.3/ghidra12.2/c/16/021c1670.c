
void FUN_021c1670(long param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  void *__s;
  long lVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  char *pcVar20;
  char cVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  long *plVar26;
  int *piVar27;
  long *plVar28;
  int iVar29;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_6c;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar14 = FUN_0290d828();
  if (((uVar14 & 1) == 0) && ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
    __s = (void *)(**(code **)(*(long *)(param_1 + 0x7458) + 0x18))(param_1 + 0x7458);
    memset(__s,0,0x754);
    *(undefined8 *)(param_1 + 0x7c00) = 0;
    *(undefined8 *)(param_1 + 0x7bc8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x7c08) = 0;
    iVar29 = DAT_055cdb30;
    uVar10 = FUN_01df9150();
    uVar11 = FUN_0290d828();
    puVar9 = PTR_DAT_04bb6380;
    sVar8 = *(short *)PTR_DAT_04bb6298;
    if (sVar8 == -1) {
      uVar18 = 0;
    }
    else {
      local_6c = local_6c & 0xffffffff;
      puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar17 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar18 = *puVar17 & 1;
    }
    iVar6 = *(int *)(param_1 + 0x7c84);
    if (((uVar11 | uVar18 | uVar10 ^ 1) & 1) == 0) {
      uVar14 = 0;
      do {
        lVar15 = FUN_0265c2a0(uVar14 & 0xffffffff);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + uVar14 * 0xba0);
          if (iVar29 == 0x6622bd46) {
            lVar15 = param_1 + uVar14 * 0xba0;
            plVar1 = (long *)(lVar15 + 0x3a8);
            plVar22 = *(long **)(lVar15 + 0x3b0);
            if (plVar22 != plVar1) {
              lVar15 = param_1 + uVar14 * 0xba0;
              piVar27 = (int *)(lVar15 + 0x3b8);
              plVar26 = (long *)(lVar15 + 0x3c0);
              do {
                plVar5 = (long *)plVar22[1];
                plVar28 = plVar5;
                if (*plVar22 != 0) {
                  *(long **)(*plVar22 + 8) = plVar5;
                  plVar28 = (long *)plVar22[1];
                }
                if (plVar28 != (long *)0x0) {
                  *plVar28 = *plVar22;
                }
                *plVar22 = 0;
                plVar22[1] = 0;
                *piVar27 = *piVar27 + -1;
                plVar22[-1] = *plVar26;
                *plVar26 = (long)(plVar22 + -1);
                plVar22 = plVar5;
              } while (plVar5 != plVar1);
            }
          }
          lVar15 = *(long *)PTR_DAT_04bb2208;
          uVar13 = FUN_006bd550("IndoorTalkCount",0);
          local_6c = CONCAT44(uVar13,(undefined4)local_6c);
          puVar17 = (uint *)FUN_021cb820(lVar15 + 0x660,(long)&local_6c + 4);
          if (puVar17 != (uint *)0x0) {
            puVar19 = (undefined1 *)(param_1 + uVar14 * 0xba0 + 0x818);
            if (*puVar17 != 0) {
              cVar21 = DAT_04da7f68;
              do {
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  uVar18 = *puVar17;
                }
                else {
                  uVar18 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar18) {
                    if (((ushort *)((ulong)uVar18 + (long)puVar17) != (ushort *)0x0) &&
                       (uVar7 = *(ushort *)((ulong)uVar18 + (long)puVar17), uVar7 < 0x80)) {
                      puVar19 = puVar19 + uVar7;
                    }
                    break;
                  }
                  if (uVar18 != 0xffffffff) break;
                  uVar18 = *puVar17;
                }
                if ((uVar18 == 0) || (puVar25 = (uint *)(ulong)uVar18, puVar17 == puVar25)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar25)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar17 + (lVar15 - (long)puVar25);
                if (lVar15 == 0) break;
                uVar23 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar25));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar27 = (int *)(lVar15 + 4);
                while (piVar27[-1] != 0x54706054) {
                  piVar27 = piVar27 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_021c1c90;
                }
                iVar12 = 0;
                if (*piVar27 != -1) {
                  iVar12 = *piVar27;
                }
                *(int *)(puVar9 + 8) = iVar12;
                if (*puVar17 == 0) break;
              } while( true );
            }
LAB_021c1c90:
            *puVar19 = 0;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 10);
    }
    else {
      lVar15 = FUN_0265c2a0(0);
      if (iVar29 == 0x6622bd46) {
        if (lVar15 != 0) {
          FUN_02199cf0(param_1);
          plVar1 = *(long **)(param_1 + 0x3b0);
          while (plVar1 != (long *)(param_1 + 0x3a8)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x3c0);
            *(long **)(param_1 + 0x3c0) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(1);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0xba0);
          plVar1 = *(long **)(param_1 + 0xf50);
          while (plVar1 != (long *)(param_1 + 0xf48)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0xf58) = *(int *)(param_1 + 0xf58) + -1;
            plVar1[-1] = *(long *)(param_1 + 0xf60);
            *(long **)(param_1 + 0xf60) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(2);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x1740);
          plVar1 = *(long **)(param_1 + 0x1af0);
          while (plVar1 != (long *)(param_1 + 0x1ae8)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x1af8) = *(int *)(param_1 + 0x1af8) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x1b00);
            *(long **)(param_1 + 0x1b00) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(3);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x22e0);
          plVar1 = *(long **)(param_1 + 0x2690);
          while (plVar1 != (long *)(param_1 + 0x2688)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x2698) = *(int *)(param_1 + 0x2698) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x26a0);
            *(long **)(param_1 + 0x26a0) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(4);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x2e80);
          plVar1 = *(long **)(param_1 + 0x3230);
          while (plVar1 != (long *)(param_1 + 0x3228)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x3238) = *(int *)(param_1 + 0x3238) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x3240);
            *(long **)(param_1 + 0x3240) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(5);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x3a20);
          plVar1 = *(long **)(param_1 + 0x3dd0);
          while (plVar1 != (long *)(param_1 + 0x3dc8)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x3dd8) = *(int *)(param_1 + 0x3dd8) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x3de0);
            *(long **)(param_1 + 0x3de0) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(6);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x45c0);
          plVar1 = *(long **)(param_1 + 0x4970);
          while (plVar1 != (long *)(param_1 + 0x4968)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x4978) = *(int *)(param_1 + 0x4978) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x4980);
            *(long **)(param_1 + 0x4980) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(7);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x5160);
          plVar1 = *(long **)(param_1 + 0x5510);
          while (plVar1 != (long *)(param_1 + 0x5508)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x5518) = *(int *)(param_1 + 0x5518) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x5520);
            *(long **)(param_1 + 0x5520) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(8);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x5d00);
          plVar1 = *(long **)(param_1 + 0x60b0);
          while (plVar1 != (long *)(param_1 + 0x60a8)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x60b8) = *(int *)(param_1 + 0x60b8) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x60c0);
            *(long **)(param_1 + 0x60c0) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
        lVar15 = FUN_0265c2a0(9);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x68a0);
          plVar1 = *(long **)(param_1 + 0x6c50);
          while (plVar1 != (long *)(param_1 + 0x6c48)) {
            plVar22 = (long *)plVar1[1];
            plVar26 = plVar22;
            if (*plVar1 != 0) {
              *(long **)(*plVar1 + 8) = plVar22;
              plVar26 = (long *)plVar1[1];
            }
            if (plVar26 != (long *)0x0) {
              *plVar26 = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x6c58) = *(int *)(param_1 + 0x6c58) + -1;
            plVar1[-1] = *(long *)(param_1 + 0x6c60);
            *(long **)(param_1 + 0x6c60) = plVar1 + -1;
            plVar1 = plVar22;
          }
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_02199cf0(param_1);
        }
        lVar15 = FUN_0265c2a0(1);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0xba0);
        }
        lVar15 = FUN_0265c2a0(2);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x1740);
        }
        lVar15 = FUN_0265c2a0(3);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x22e0);
        }
        lVar15 = FUN_0265c2a0(4);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x2e80);
        }
        lVar15 = FUN_0265c2a0(5);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x3a20);
        }
        lVar15 = FUN_0265c2a0(6);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x45c0);
        }
        lVar15 = FUN_0265c2a0(7);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x5160);
        }
        lVar15 = FUN_0265c2a0(8);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x5d00);
        }
        lVar15 = FUN_0265c2a0(9);
        if (lVar15 != 0) {
          FUN_02199cf0(param_1 + 0x68a0);
        }
      }
    }
    puVar9 = PTR_DAT_04bb2720;
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      iVar29 = 0;
    }
    else if (*(long *)(lVar15 + 0x330) == 0) {
      iVar29 = 0;
    }
    else {
      puVar16 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar15 + 0x338));
      iVar12 = FUN_006bd550(*puVar16,0);
      iVar29 = 0;
      if (iVar12 == 0x758f7eaf) {
        iVar29 = 0;
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(*(long *)puVar9 + 0x330);
          iVar29 = 0;
          if (lVar15 != 0) {
            iVar29 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
    puVar9 = PTR_DAT_04bb6498;
    pcVar2 = (char *)(param_1 + 0x56010);
    if (((uVar11 | uVar10 ^ 1) & 1) == 0 && *(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar29) {
      iVar29 = 0;
      do {
        if (pcVar2[(long)iVar29 * 0x2d8] != '\0') {
          FUN_021c2470();
          local_6c = CONCAT44(1,(undefined4)local_6c);
          *(uint *)(pcVar2 + (long)iVar29 * 0x2d8 + 0x2ac) =
               *(uint *)(pcVar2 + (long)iVar29 * 0x2d8 + 0x2ac) & 0xfffffffd;
          lVar15 = DAT_04da8a30 + 0x2400;
          uVar13 = FUN_006bd550("IndoorTalkCount",0);
          local_6c = CONCAT44(uVar13,(undefined4)local_6c);
          puVar17 = (uint *)FUN_021cb9c0(lVar15,(long)&local_6c + 4);
          if (puVar17 != (uint *)0x0) {
            pcVar20 = pcVar2 + (long)iVar29 * 0x2d8 + 0x22c;
            if (*puVar17 != 0) {
              cVar21 = DAT_04da89e8;
              do {
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *PTR_DAT_04bb6490 = 1;
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  uVar11 = *puVar17;
                }
                else {
                  uVar11 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar11) {
                    if (((ushort *)((ulong)uVar11 + (long)puVar17) != (ushort *)0x0) &&
                       (uVar7 = *(ushort *)((ulong)uVar11 + (long)puVar17), uVar7 < 0x80)) {
                      pcVar20 = pcVar20 + uVar7;
                    }
                    break;
                  }
                  if (uVar11 != 0xffffffff) break;
                  uVar11 = *puVar17;
                }
                if ((uVar11 == 0) || (puVar25 = (uint *)(ulong)uVar11, puVar17 == puVar25)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar25)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar17 + (lVar15 - (long)puVar25);
                if (lVar15 == 0) break;
                uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar25));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar14 == 0) break;
                piVar27 = (int *)(lVar15 + 4);
                while (piVar27[-1] != 0x54706054) {
                  piVar27 = piVar27 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_021c2304;
                }
                iVar12 = 0;
                if (*piVar27 != -1) {
                  iVar12 = *piVar27;
                }
                *(int *)(puVar9 + 8) = iVar12;
                if (*puVar17 == 0) break;
              } while( true );
            }
LAB_021c2304:
            *pcVar20 = '\0';
          }
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 != 0x11);
    }
    else {
      if (*pcVar2 != '\0') {
        FUN_021c2470(pcVar2);
      }
      if (*(char *)(param_1 + 0x562e8) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x562e8));
      }
      if (*(char *)(param_1 + 0x565c0) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x565c0));
      }
      if (*(char *)(param_1 + 0x56898) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x56898));
      }
      if (*(char *)(param_1 + 0x56b70) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x56b70));
      }
      if (*(char *)(param_1 + 0x56e48) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x56e48));
      }
      if (*(char *)(param_1 + 0x57120) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x57120));
      }
      if (*(char *)(param_1 + 0x573f8) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x573f8));
      }
      if (*(char *)(param_1 + 0x576d0) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x576d0));
      }
      if (*(char *)(param_1 + 0x579a8) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x579a8));
      }
      if (*(char *)(param_1 + 0x57c80) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x57c80));
      }
      if (*(char *)(param_1 + 0x57f58) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x57f58));
      }
      if (*(char *)(param_1 + 0x58230) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x58230));
      }
      if (*(char *)(param_1 + 0x58508) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x58508));
      }
      if (*(char *)(param_1 + 0x587e0) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x587e0));
      }
      if (*(char *)(param_1 + 0x58ab8) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x58ab8));
      }
      if (*(char *)(param_1 + 0x58d90) != '\0') {
        FUN_021c2470((char *)(param_1 + 0x58d90));
      }
    }
    FUN_021c08e8(param_1,0);
    lVar15 = 0;
    lVar24 = 0x8b58;
    *(undefined2 *)(param_1 + 0x7c90) = 0;
    do {
      *(undefined4 *)(param_1 + 0x7ca0 + lVar15) = 0xffffffff;
      lVar3 = param_1 + 0x7ca0 + lVar15;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)(lVar3 + 4) = 0xffffffff;
      puVar4 = (undefined4 *)(param_1 + lVar24);
      lVar24 = lVar24 + 4;
      *puVar4 = 0;
      puVar4[0xec] = 5;
    } while (lVar15 != 0xec0);
    *(undefined4 *)(param_1 + 0x92b8) = 0;
    *(undefined8 *)(param_1 + 0x55d20) = 0;
    *(undefined8 *)(param_1 + 0x55d10) = 0;
    *(undefined8 *)(param_1 + 0x55d18) = 0;
    *(undefined4 *)(param_1 + 0x55d28) = 0;
    if (iVar6 == -1) {
      *(undefined4 *)(param_1 + 0x55c24) = 0xffffffff;
    }
    if (((uVar10 & 1) == 0) && (uVar10 = *(uint *)(param_1 + 0x55d2c), -1 < (int)uVar10)) {
      lVar15 = param_1 + (ulong)uVar10 * 0xba0;
      if (9 < uVar10) {
        lVar15 = param_1;
      }
      if (*(char *)(lVar15 + 0xaf9) != '\0') {
        *(undefined4 *)(lVar15 + 0x4e8) = 0;
        *(undefined4 *)(lVar15 + 0x4ee) = 0x101;
        *(undefined2 *)(lVar15 + 0x4ec) = 0;
        *(undefined1 *)(lVar15 + 0x4f2) = 0;
        *(undefined1 *)(lVar15 + 0x4f4) = 0;
        *(undefined4 *)(lVar15 + 0x898) = 0xffffffff;
        *(undefined1 *)(lVar15 + 0x89c) = 0xff;
        FUN_0219be30(lVar15);
        local_70 = *(undefined1 *)(lVar15 + 0xaf8);
        local_6f = 0;
        local_6c = 0;
        local_62 = 0;
        local_64 = 0xff00;
        if (-1 < DAT_053d0d10) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,(long)&local_6c + 4,
                       &local_70,8,0);
        }
        *(undefined4 *)(lVar15 + 0x4dc) = 0;
      }
      *(undefined4 *)(param_1 + 0x55d2c) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x55f00) = 0;
    *(undefined1 *)(param_1 + 0x55df8) = 0;
    FUN_021af370(param_1);
  }
  return;
}

