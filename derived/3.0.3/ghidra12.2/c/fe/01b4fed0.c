
void FUN_01b4fed0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  char cVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar10 = PTR_DAT_04bb2d88;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar11 = FUN_03853d00(param_1,&local_100);
  if ((uVar11 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar13 = param_1 + 0x47;
  local_6d = 0;
  local_ec = (char  [8])uVar8;
  local_e4 = (char  [4])uVar9;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar11 = FUN_03853d00(plVar13,&local_100);
  if ((uVar11 & 1) != 0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  pcStack_f8 = local_ec;
  local_100 = puVar10 + 0x10;
  local_ec = (char  [8])uVar8;
  plVar13 = param_1 + 0x8e;
  local_e4 = (char  [4])uVar9;
  local_e0 = 0;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar11 = FUN_03853d00(plVar13,&local_100);
  if ((uVar11 & 1) != 0) {
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_100,param_2);
  }
  puVar10 = PTR_DAT_04bc0648;
  puVar1 = PTR_DAT_04bc0640;
  if ((int)param_1[0x3d] != 0) {
    puVar19 = (undefined8 *)param_1[0x3e];
    uVar26 = 0x7fffffff;
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar23 = param_1[0x16];
    uVar27 = 0xffffffff;
    uVar5 = *(uint *)(param_1 + 0x19);
    puVar2 = puVar19 + (int)param_1[0x3d];
    cVar24 = *PTR_DAT_04bc0640;
    lVar25 = param_1[0x1a];
    uVar6 = *(uint *)(param_1 + 0x36);
    lVar12 = param_1[0x37];
    do {
      uVar17 = *(uint *)*puVar19;
      if ((int)uVar4 < 1) {
        if (lVar23 == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = *(uint **)(lVar23 + 8);
          if (puVar15 == (uint *)0x0) {
            puVar15 = (uint *)0x0;
          }
          else if ((uVar17 < uVar5) && (*(char *)(lVar25 + (int)uVar17) == '\0')) {
            puVar15 = (uint *)0x0;
          }
          else if (uVar17 < *puVar15) {
            if (puVar15[1] == 0) {
              puVar15 = (uint *)0x0;
            }
            else if ((ushort)puVar15[2] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              iVar22 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                iVar22 = 0x1c;
              }
              puVar15 = (uint *)((ulong)(puVar15[1] * uVar17 + (uint)(ushort)puVar15[2] * 8 + iVar22
                                        ) + (long)puVar15);
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
        }
      }
      else if (uVar17 < uVar4) {
        if (uVar6 <= uVar17) {
          uVar17 = 0;
        }
        puVar15 = *(uint **)(lVar12 + (ulong)uVar17 * 8);
      }
      else {
        puVar15 = (uint *)0x0;
      }
      while (*puVar15 != 0) {
        if (cVar24 != '\0') {
          uVar11 = (ulong)*(uint *)(puVar10 + 0x1c);
          if ((int)*(uint *)(puVar10 + 0x1c) < 0) {
            if (uVar11 == 0xffffffff) {
              uVar17 = *puVar15;
              if (uVar17 != 0) goto LAB_01b501bc;
              goto LAB_01b502f4;
            }
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            if ((ushort *)(uVar11 + (long)puVar15) != (ushort *)0x0) {
              uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
            }
          }
LAB_01b50210:
          uVar7 = *puVar15;
          if (uVar17 <= uVar26) {
            uVar26 = uVar17;
          }
          goto joined_r0x01b5021c;
        }
        cVar24 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        uVar17 = *puVar15;
        if (uVar17 == 0) {
LAB_01b502f4:
          uVar17 = 0;
          uVar11 = 0xffffffff;
          goto LAB_01b50210;
        }
LAB_01b501bc:
        puVar16 = (uint *)(ulong)uVar17;
        if (puVar15 == puVar16) goto LAB_01b502f4;
        lVar3 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
        if (lVar3 == 0) goto LAB_01b502f4;
        uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
        *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
        if (uVar11 == 0) {
LAB_01b50208:
          uVar17 = 0;
          uVar11 = 0xfffffffe;
          goto LAB_01b50210;
        }
        piVar18 = (int *)(lVar3 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01b50208;
        }
        iVar22 = 0;
        if (*piVar18 != -1) {
          iVar22 = *piVar18;
        }
        *(int *)(puVar10 + 0x1c) = iVar22;
      }
      uVar26 = 0;
LAB_01b502d4:
      uVar17 = 0;
LAB_01b502d8:
      puVar19 = puVar19 + 1;
      if ((int)uVar27 <= (int)uVar17) {
        uVar27 = uVar17;
      }
    } while (puVar19 != puVar2);
    if ((int)uVar26 <= (int)uVar27) {
      *(uint *)(param_1 + 0x44) = uVar26;
      if ((int)(uVar27 - uVar26) < 0) {
LAB_01b503b0:
        uVar11 = (ulong)*(uint *)(param_1 + 0x45);
        if (0 < (int)*(uint *)(param_1 + 0x45)) goto LAB_01b503bc;
      }
      else {
        uVar27 = (uVar27 - uVar26) + 1;
        uVar11 = (ulong)uVar27;
        lVar12 = *(long *)PTR_DAT_04bb2698;
        if (lVar12 == 0) {
          pvVar14 = malloc(uVar11 << 3);
        }
        else {
          plVar13 = param_2;
          if (param_2 == (long *)0x0) {
            lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar13 = (long *)(lVar12 + 8);
            if (lVar23 != 0) {
              plVar13 = (long *)(lVar23 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_01b503b0;
          }
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar11 << 3,8);
        }
        if (pvVar14 == (void *)0x0) goto LAB_01b503b0;
        *(uint *)(param_1 + 0x45) = uVar27;
        param_1[0x46] = (long)pvVar14;
LAB_01b503bc:
        uVar20 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          do {
            lVar12 = uVar21 * 8;
            uVar21 = uVar21 + 4;
            *(undefined8 *)(param_1[0x46] + lVar12) = 0;
            *(undefined8 *)(param_1[0x46] + lVar12 + 8) = 0;
            *(undefined8 *)(param_1[0x46] + lVar12 + 0x10) = 0;
            *(undefined8 *)(param_1[0x46] + lVar12 + 0x18) = 0;
          } while ((uVar11 & 0xfffffffc) != uVar21);
        }
        if (uVar20 != 0) {
          lVar12 = uVar21 << 3;
          do {
            uVar20 = uVar20 - 1;
            *(undefined8 *)(param_1[0x46] + lVar12) = 0;
            lVar12 = lVar12 + 8;
          } while (uVar20 != 0);
        }
      }
      if ((int)param_1[0x3d] != 0) {
        puVar19 = (undefined8 *)param_1[0x3e];
        cVar24 = *puVar1;
        puVar2 = puVar19 + (int)param_1[0x3d];
        do {
          uVar27 = *(uint *)*puVar19;
          if ((int)*(uint *)(param_1 + 0x38) < 1) {
            if (param_1[0x16] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              puVar15 = *(uint **)(param_1[0x16] + 8);
              if (puVar15 == (uint *)0x0) {
                puVar15 = (uint *)0x0;
              }
              else if ((uVar27 < *(uint *)(param_1 + 0x19)) &&
                      (*(char *)(param_1[0x1a] + (long)(int)uVar27) == '\0')) {
                puVar15 = (uint *)0x0;
              }
              else if (uVar27 < *puVar15) {
                if (puVar15[1] == 0) {
                  puVar15 = (uint *)0x0;
                }
                else if ((ushort)puVar15[2] == 0) {
                  puVar15 = (uint *)0x0;
                }
                else {
                  iVar22 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    iVar22 = 0x1c;
                  }
                  puVar15 = (uint *)((ulong)(puVar15[1] * uVar27 + (uint)(ushort)puVar15[2] * 8 +
                                            iVar22) + (long)puVar15);
                }
              }
              else {
                puVar15 = (uint *)0x0;
              }
            }
          }
          else if (uVar27 < *(uint *)(param_1 + 0x38)) {
            if (*(uint *)(param_1 + 0x36) <= uVar27) {
              uVar27 = 0;
            }
            puVar15 = *(uint **)(param_1[0x37] + (ulong)uVar27 * 8);
          }
          else {
            puVar15 = (uint *)0x0;
          }
          while (uVar27 = 0, *puVar15 != 0) {
            if (cVar24 != '\0') {
              uVar4 = *(uint *)(puVar10 + 0x1c);
              if ((int)uVar4 < 0) {
                if (uVar4 == 0xffffffff) {
                  uVar4 = *puVar15;
                  if (uVar4 != 0) goto LAB_01b505bc;
                  uVar27 = 0;
                }
                else {
LAB_01b5045c:
                  uVar27 = 0;
                }
              }
              else {
                uVar27 = 0;
                if ((ushort *)((ulong)uVar4 + (long)puVar15) != (ushort *)0x0) {
                  uVar27 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar15);
                }
              }
              break;
            }
            cVar24 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
            uVar4 = *puVar15;
            uVar27 = 0;
            if (uVar4 == 0) break;
LAB_01b505bc:
            puVar16 = (uint *)(ulong)uVar4;
            if (puVar15 == puVar16) goto LAB_01b5045c;
            lVar12 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar15 + (lVar12 - (long)puVar16);
            if (lVar12 == 0) goto LAB_01b5045c;
            uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
            *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
            uVar27 = 0;
            if (uVar11 == 0) break;
            piVar18 = (int *)(lVar12 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                uVar27 = 0;
                goto LAB_01b50460;
              }
            }
            iVar22 = 0;
            if (*piVar18 != -1) {
              iVar22 = *piVar18;
            }
            *(int *)(puVar10 + 0x1c) = iVar22;
          }
LAB_01b50460:
          uVar27 = uVar27 - uVar26;
          puVar19 = puVar19 + 1;
          if (*(uint *)(param_1 + 0x45) <= uVar27) {
            uVar27 = 0;
          }
          *(uint **)(param_1[0x46] + (long)(int)uVar27 * 8) = puVar15;
        } while (puVar19 != puVar2);
      }
    }
  }
  puVar10 = PTR_DAT_04bc0610;
  puVar1 = PTR_DAT_04bc0608;
  if ((int)param_1[0x84] != 0) {
    puVar19 = (undefined8 *)param_1[0x85];
    uVar26 = 0x7fffffff;
    uVar4 = *(uint *)(param_1 + 0x7f);
    lVar23 = param_1[0x5d];
    uVar27 = 0xffffffff;
    uVar5 = *(uint *)(param_1 + 0x60);
    puVar2 = puVar19 + (int)param_1[0x84];
    cVar24 = *PTR_DAT_04bc0608;
    lVar25 = param_1[0x61];
    uVar6 = *(uint *)(param_1 + 0x7d);
    lVar12 = param_1[0x7e];
    do {
      uVar17 = *(uint *)*puVar19;
      if ((int)uVar4 < 1) {
        if (lVar23 == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = *(uint **)(lVar23 + 8);
          if (puVar15 == (uint *)0x0) {
            puVar15 = (uint *)0x0;
          }
          else if ((uVar17 < uVar5) && (*(char *)(lVar25 + (int)uVar17) == '\0')) {
            puVar15 = (uint *)0x0;
          }
          else if (uVar17 < *puVar15) {
            if (puVar15[1] == 0) {
              puVar15 = (uint *)0x0;
            }
            else if ((ushort)puVar15[2] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              iVar22 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                iVar22 = 0x1c;
              }
              puVar15 = (uint *)((ulong)(puVar15[1] * uVar17 + (uint)(ushort)puVar15[2] * 8 + iVar22
                                        ) + (long)puVar15);
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
        }
      }
      else if (uVar17 < uVar4) {
        if (uVar6 <= uVar17) {
          uVar17 = 0;
        }
        puVar15 = *(uint **)(lVar12 + (ulong)uVar17 * 8);
      }
      else {
        puVar15 = (uint *)0x0;
      }
      while (*puVar15 != 0) {
        if (cVar24 != '\0') {
          uVar11 = (ulong)*(uint *)(puVar10 + 8);
          if ((int)*(uint *)(puVar10 + 8) < 0) {
            if (uVar11 == 0xffffffff) {
              uVar17 = *puVar15;
              if (uVar17 != 0) goto LAB_01b5079c;
              goto LAB_01b508d4;
            }
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            if ((ushort *)(uVar11 + (long)puVar15) != (ushort *)0x0) {
              uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
            }
          }
LAB_01b507f0:
          uVar7 = *puVar15;
          if (uVar17 <= uVar26) {
            uVar26 = uVar17;
          }
          goto joined_r0x01b507fc;
        }
        cVar24 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        uVar17 = *puVar15;
        if (uVar17 == 0) {
LAB_01b508d4:
          uVar17 = 0;
          uVar11 = 0xffffffff;
          goto LAB_01b507f0;
        }
LAB_01b5079c:
        puVar16 = (uint *)(ulong)uVar17;
        if (puVar15 == puVar16) goto LAB_01b508d4;
        lVar3 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
        if (lVar3 == 0) goto LAB_01b508d4;
        uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
        *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
        if (uVar11 == 0) {
LAB_01b507e8:
          uVar17 = 0;
          uVar11 = 0xfffffffe;
          goto LAB_01b507f0;
        }
        piVar18 = (int *)(lVar3 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01b507e8;
        }
        iVar22 = 0;
        if (*piVar18 != -1) {
          iVar22 = *piVar18;
        }
        *(int *)(puVar10 + 8) = iVar22;
      }
      uVar26 = 0;
LAB_01b508b4:
      uVar17 = 0;
LAB_01b508b8:
      puVar19 = puVar19 + 1;
      if ((int)uVar27 <= (int)uVar17) {
        uVar27 = uVar17;
      }
    } while (puVar19 != puVar2);
    if ((int)uVar26 <= (int)uVar27) {
      *(uint *)(param_1 + 0x8b) = uVar26;
      if ((int)(uVar27 - uVar26) < 0) {
LAB_01b50990:
        uVar11 = (ulong)*(uint *)(param_1 + 0x8c);
        if (0 < (int)*(uint *)(param_1 + 0x8c)) goto LAB_01b5099c;
      }
      else {
        uVar27 = (uVar27 - uVar26) + 1;
        uVar11 = (ulong)uVar27;
        lVar12 = *(long *)PTR_DAT_04bb2698;
        if (lVar12 == 0) {
          pvVar14 = malloc(uVar11 << 3);
        }
        else {
          plVar13 = param_2;
          if (param_2 == (long *)0x0) {
            lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar13 = (long *)(lVar12 + 8);
            if (lVar23 != 0) {
              plVar13 = (long *)(lVar23 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_01b50990;
          }
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar11 << 3,8);
        }
        if (pvVar14 == (void *)0x0) goto LAB_01b50990;
        *(uint *)(param_1 + 0x8c) = uVar27;
        param_1[0x8d] = (long)pvVar14;
LAB_01b5099c:
        uVar20 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          do {
            lVar12 = uVar21 * 8;
            uVar21 = uVar21 + 4;
            *(undefined8 *)(param_1[0x8d] + lVar12) = 0;
            *(undefined8 *)(param_1[0x8d] + lVar12 + 8) = 0;
            *(undefined8 *)(param_1[0x8d] + lVar12 + 0x10) = 0;
            *(undefined8 *)(param_1[0x8d] + lVar12 + 0x18) = 0;
          } while ((uVar11 & 0xfffffffc) != uVar21);
        }
        if (uVar20 != 0) {
          lVar12 = uVar21 << 3;
          do {
            uVar20 = uVar20 - 1;
            *(undefined8 *)(param_1[0x8d] + lVar12) = 0;
            lVar12 = lVar12 + 8;
          } while (uVar20 != 0);
        }
      }
      if ((int)param_1[0x84] != 0) {
        puVar19 = (undefined8 *)param_1[0x85];
        cVar24 = *puVar1;
        puVar2 = puVar19 + (int)param_1[0x84];
        do {
          uVar27 = *(uint *)*puVar19;
          if ((int)*(uint *)(param_1 + 0x7f) < 1) {
            if (param_1[0x5d] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              puVar15 = *(uint **)(param_1[0x5d] + 8);
              if (puVar15 == (uint *)0x0) {
                puVar15 = (uint *)0x0;
              }
              else if ((uVar27 < *(uint *)(param_1 + 0x60)) &&
                      (*(char *)(param_1[0x61] + (long)(int)uVar27) == '\0')) {
                puVar15 = (uint *)0x0;
              }
              else if (uVar27 < *puVar15) {
                if (puVar15[1] == 0) {
                  puVar15 = (uint *)0x0;
                }
                else if ((ushort)puVar15[2] == 0) {
                  puVar15 = (uint *)0x0;
                }
                else {
                  iVar22 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    iVar22 = 0x1c;
                  }
                  puVar15 = (uint *)((ulong)(puVar15[1] * uVar27 + (uint)(ushort)puVar15[2] * 8 +
                                            iVar22) + (long)puVar15);
                }
              }
              else {
                puVar15 = (uint *)0x0;
              }
            }
          }
          else if (uVar27 < *(uint *)(param_1 + 0x7f)) {
            if (*(uint *)(param_1 + 0x7d) <= uVar27) {
              uVar27 = 0;
            }
            puVar15 = *(uint **)(param_1[0x7e] + (ulong)uVar27 * 8);
          }
          else {
            puVar15 = (uint *)0x0;
          }
          while (uVar27 = 0, *puVar15 != 0) {
            if (cVar24 != '\0') {
              uVar4 = *(uint *)(puVar10 + 8);
              if ((int)uVar4 < 0) {
                if (uVar4 == 0xffffffff) {
                  uVar4 = *puVar15;
                  if (uVar4 != 0) goto LAB_01b50b9c;
                  uVar27 = 0;
                }
                else {
LAB_01b50a3c:
                  uVar27 = 0;
                }
              }
              else {
                uVar27 = 0;
                if ((ushort *)((ulong)uVar4 + (long)puVar15) != (ushort *)0x0) {
                  uVar27 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar15);
                }
              }
              break;
            }
            cVar24 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
            uVar4 = *puVar15;
            uVar27 = 0;
            if (uVar4 == 0) break;
LAB_01b50b9c:
            puVar16 = (uint *)(ulong)uVar4;
            if (puVar15 == puVar16) goto LAB_01b50a3c;
            lVar12 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar15 + (lVar12 - (long)puVar16);
            if (lVar12 == 0) goto LAB_01b50a3c;
            uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
            *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
            uVar27 = 0;
            if (uVar11 == 0) break;
            piVar18 = (int *)(lVar12 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                uVar27 = 0;
                goto LAB_01b50a40;
              }
            }
            iVar22 = 0;
            if (*piVar18 != -1) {
              iVar22 = *piVar18;
            }
            *(int *)(puVar10 + 8) = iVar22;
          }
LAB_01b50a40:
          uVar27 = uVar27 - uVar26;
          puVar19 = puVar19 + 1;
          if (*(uint *)(param_1 + 0x8c) <= uVar27) {
            uVar27 = 0;
          }
          *(uint **)(param_1[0x8d] + (long)(int)uVar27 * 8) = puVar15;
        } while (puVar19 != puVar2);
      }
    }
  }
  puVar10 = PTR_DAT_04bc0600;
  puVar1 = PTR_DAT_04bc05f8;
  if ((int)param_1[0xcb] == 0) {
    return;
  }
  puVar19 = (undefined8 *)param_1[0xcc];
  uVar27 = 0x7fffffff;
  uVar4 = *(uint *)(param_1 + 0xc6);
  uVar26 = 0xffffffff;
  lVar23 = param_1[0xa4];
  puVar2 = puVar19 + (int)param_1[0xcb];
  uVar5 = *(uint *)(param_1 + 0xa7);
  cVar24 = *PTR_DAT_04bc05f8;
  uVar11 = (ulong)*(uint *)PTR_DAT_04bc0600;
  lVar25 = param_1[0xa8];
  uVar6 = *(uint *)(param_1 + 0xc4);
  lVar12 = param_1[0xc5];
  do {
    uVar17 = *(uint *)*puVar19;
    if ((int)uVar4 < 1) {
      if (lVar23 == 0) {
        puVar15 = (uint *)0x0;
      }
      else {
        puVar15 = *(uint **)(lVar23 + 8);
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)0x0;
        }
        else if ((uVar17 < uVar5) && (*(char *)(lVar25 + (int)uVar17) == '\0')) {
          puVar15 = (uint *)0x0;
        }
        else if (uVar17 < *puVar15) {
          if (puVar15[1] == 0) {
            puVar15 = (uint *)0x0;
          }
          else if ((ushort)puVar15[2] == 0) {
            puVar15 = (uint *)0x0;
          }
          else {
            iVar22 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar22 = 0x1c;
            }
            puVar15 = (uint *)((ulong)(puVar15[1] * uVar17 + (uint)(ushort)puVar15[2] * 8 + iVar22)
                              + (long)puVar15);
          }
        }
        else {
          puVar15 = (uint *)0x0;
        }
      }
    }
    else if (uVar17 < uVar4) {
      if (uVar6 <= uVar17) {
        uVar17 = 0;
      }
      puVar15 = *(uint **)(lVar12 + (ulong)uVar17 * 8);
    }
    else {
      puVar15 = (uint *)0x0;
    }
    while (puVar16 = (uint *)(ulong)*puVar15, *puVar15 != 0) {
      if (cVar24 != '\0') {
        if ((int)uVar11 < 0) {
          if (uVar11 == 0xffffffff) {
            if (puVar16 != (uint *)0x0) goto LAB_01b50d88;
            goto LAB_01b50eac;
          }
LAB_01b50ed4:
          uVar17 = 0;
        }
        else {
          if ((ushort *)(uVar11 + (long)puVar15) == (ushort *)0x0) goto LAB_01b50ed4;
          uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
        }
LAB_01b50de0:
        uVar7 = *puVar15;
        if (uVar17 <= uVar27) {
          uVar27 = uVar17;
        }
        goto joined_r0x01b50dec;
      }
      *(undefined8 *)puVar10 = 0xffffffffffffffff;
      cVar24 = '\x01';
      *(undefined4 *)(puVar10 + 8) = 0xffffffff;
      puVar16 = (uint *)(ulong)*puVar15;
      *puVar1 = 1;
      if (puVar16 == (uint *)0x0) {
LAB_01b50eac:
        uVar17 = 0;
        uVar11 = 0xffffffff;
        goto LAB_01b50de0;
      }
LAB_01b50d88:
      if (puVar15 == puVar16) goto LAB_01b50eac;
      lVar3 = 0xc;
      if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
      if (lVar3 == 0) goto LAB_01b50eac;
      uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
      *(undefined4 *)puVar10 = 0xfffffffe;
      if (uVar11 == 0) {
LAB_01b50dd8:
        uVar17 = 0;
        uVar11 = 0xfffffffe;
        goto LAB_01b50de0;
      }
      puVar16 = (uint *)(lVar3 + 4);
      while (puVar16[-1] != 0x54706054) {
        puVar16 = puVar16 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01b50dd8;
      }
      uVar11 = 0;
      if (*puVar16 != 0xffffffff) {
        uVar11 = (ulong)*puVar16;
      }
      *(int *)puVar10 = (int)uVar11;
    }
    uVar27 = 0;
LAB_01b50ea4:
    uVar17 = 0;
LAB_01b50c68:
    puVar19 = puVar19 + 1;
    if ((int)uVar26 <= (int)uVar17) {
      uVar26 = uVar17;
    }
  } while (puVar19 != puVar2);
  if ((int)uVar26 < (int)uVar27) {
    return;
  }
  *(uint *)(param_1 + 0xd2) = uVar27;
  if ((int)(uVar26 - uVar27) < 0) {
LAB_01b50f7c:
    uVar11 = (ulong)*(uint *)(param_1 + 0xd3);
    if ((int)*(uint *)(param_1 + 0xd3) < 1) goto LAB_01b51008;
  }
  else {
    uVar26 = (uVar26 - uVar27) + 1;
    uVar11 = (ulong)uVar26;
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      pvVar14 = malloc(uVar11 << 3);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar19 = (undefined8 *)(lVar12 + 8);
        if (lVar23 != 0) {
          puVar19 = (undefined8 *)(lVar23 + 0xa8);
        }
        param_2 = (long *)*puVar19;
        if (param_2 == (long *)0x0) goto LAB_01b50f7c;
      }
      pvVar14 = (void *)(**(code **)(*param_2 + 0x30))(param_2,uVar11 << 3,8);
    }
    if (pvVar14 == (void *)0x0) goto LAB_01b50f7c;
    *(uint *)(param_1 + 0xd3) = uVar26;
    param_1[0xd4] = (long)pvVar14;
  }
  uVar20 = uVar11 & 3;
  if (uVar11 - 1 < 3) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    do {
      lVar12 = uVar21 * 8;
      uVar21 = uVar21 + 4;
      *(undefined8 *)(param_1[0xd4] + lVar12) = 0;
      *(undefined8 *)(param_1[0xd4] + lVar12 + 8) = 0;
      *(undefined8 *)(param_1[0xd4] + lVar12 + 0x10) = 0;
      *(undefined8 *)(param_1[0xd4] + lVar12 + 0x18) = 0;
    } while ((uVar11 & 0xfffffffc) != uVar21);
  }
  if (uVar20 != 0) {
    lVar12 = uVar21 << 3;
    do {
      uVar20 = uVar20 - 1;
      *(undefined8 *)(param_1[0xd4] + lVar12) = 0;
      lVar12 = lVar12 + 8;
    } while (uVar20 != 0);
  }
LAB_01b51008:
  if ((int)param_1[0xcb] != 0) {
    puVar19 = (undefined8 *)param_1[0xcc];
    cVar24 = *puVar1;
    puVar2 = puVar19 + (int)param_1[0xcb];
    do {
      uVar26 = *(uint *)*puVar19;
      if ((int)*(uint *)(param_1 + 0xc6) < 1) {
        if (param_1[0xa4] == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = *(uint **)(param_1[0xa4] + 8);
          if (puVar15 == (uint *)0x0) {
            puVar15 = (uint *)0x0;
          }
          else if ((uVar26 < *(uint *)(param_1 + 0xa7)) &&
                  (*(char *)(param_1[0xa8] + (long)(int)uVar26) == '\0')) {
            puVar15 = (uint *)0x0;
          }
          else if (uVar26 < *puVar15) {
            if (puVar15[1] == 0) {
              puVar15 = (uint *)0x0;
            }
            else if ((ushort)puVar15[2] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              iVar22 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                iVar22 = 0x1c;
              }
              puVar15 = (uint *)((ulong)(puVar15[1] * uVar26 + (uint)(ushort)puVar15[2] * 8 + iVar22
                                        ) + (long)puVar15);
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
        }
      }
      else if (uVar26 < *(uint *)(param_1 + 0xc6)) {
        if (*(uint *)(param_1 + 0xc4) <= uVar26) {
          uVar26 = 0;
        }
        puVar15 = *(uint **)(param_1[0xc5] + (ulong)uVar26 * 8);
      }
      else {
        puVar15 = (uint *)0x0;
      }
      while( true ) {
        uVar26 = *puVar15;
        puVar16 = (uint *)(ulong)uVar26;
        if (uVar26 == 0) break;
        if (cVar24 != '\0') {
          uVar4 = *(uint *)puVar10;
          if ((int)uVar4 < 0) {
            if (uVar4 == 0xffffffff) {
              if (puVar16 != (uint *)0x0) goto LAB_01b5117c;
            }
            else {
LAB_01b5102c:
              uVar26 = 0;
            }
          }
          else {
            uVar26 = 0;
            if ((ushort *)((ulong)uVar4 + (long)puVar15) != (ushort *)0x0) {
              uVar26 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar15);
            }
          }
          break;
        }
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        cVar24 = '\x01';
        *(undefined4 *)(puVar10 + 8) = 0xffffffff;
        puVar16 = (uint *)(ulong)*puVar15;
        *puVar1 = 1;
        uVar26 = 0;
        if (puVar16 == (uint *)0x0) break;
LAB_01b5117c:
        if (puVar15 == puVar16) goto LAB_01b5102c;
        lVar12 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar15 + (lVar12 - (long)puVar16);
        if (lVar12 == 0) goto LAB_01b5102c;
        uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
        *(undefined4 *)puVar10 = 0xfffffffe;
        uVar26 = 0;
        if (uVar11 == 0) break;
        piVar18 = (int *)(lVar12 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar26 = 0;
            goto LAB_01b51030;
          }
        }
        iVar22 = 0;
        if (*piVar18 != -1) {
          iVar22 = *piVar18;
        }
        *(int *)puVar10 = iVar22;
      }
LAB_01b51030:
      uVar26 = uVar26 - uVar27;
      puVar19 = puVar19 + 1;
      if (*(uint *)(param_1 + 0xd3) <= uVar26) {
        uVar26 = 0;
      }
      *(uint **)(param_1[0xd4] + (long)(int)uVar26 * 8) = puVar15;
    } while (puVar19 != puVar2);
  }
  return;
joined_r0x01b5021c:
  if (uVar7 == 0) goto LAB_01b502d4;
  if (cVar24 == '\0') {
    cVar24 = '\x01';
    *(undefined8 *)puVar10 = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    *puVar1 = 1;
    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
    uVar17 = *puVar15;
  }
  else {
    if (-1 < (int)uVar11) {
      uVar17 = 0;
      if ((ushort *)(uVar11 + (long)puVar15) != (ushort *)0x0) {
        uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
      }
      goto LAB_01b502d8;
    }
    if (uVar11 != 0xffffffff) goto LAB_01b502d4;
    uVar17 = *puVar15;
  }
  if ((uVar17 == 0) || (puVar16 = (uint *)(ulong)uVar17, puVar15 == puVar16)) goto LAB_01b502d4;
  lVar3 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
  if (lVar3 == 0) goto LAB_01b502d4;
  uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
  *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_01b502d4;
  puVar16 = (uint *)(lVar3 + 4);
  while (puVar16[-1] != 0x54706054) {
    puVar16 = puVar16 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01b502d4;
  }
  uVar11 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar11 = (ulong)*puVar16;
  }
  *(int *)(puVar10 + 0x1c) = (int)uVar11;
  uVar7 = *puVar15;
  goto joined_r0x01b5021c;
joined_r0x01b507fc:
  if (uVar7 == 0) goto LAB_01b508b4;
  if (cVar24 == '\0') {
    cVar24 = '\x01';
    *(undefined8 *)puVar10 = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    *puVar1 = 1;
    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
    uVar17 = *puVar15;
  }
  else {
    if (-1 < (int)uVar11) {
      uVar17 = 0;
      if ((ushort *)(uVar11 + (long)puVar15) != (ushort *)0x0) {
        uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
      }
      goto LAB_01b508b8;
    }
    if (uVar11 != 0xffffffff) goto LAB_01b508b4;
    uVar17 = *puVar15;
  }
  if ((uVar17 == 0) || (puVar16 = (uint *)(ulong)uVar17, puVar15 == puVar16)) goto LAB_01b508b4;
  lVar3 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
  if (lVar3 == 0) goto LAB_01b508b4;
  uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
  *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_01b508b4;
  puVar16 = (uint *)(lVar3 + 4);
  while (puVar16[-1] != 0x54706054) {
    puVar16 = puVar16 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01b508b4;
  }
  uVar11 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar11 = (ulong)*puVar16;
  }
  *(int *)(puVar10 + 8) = (int)uVar11;
  uVar7 = *puVar15;
  goto joined_r0x01b507fc;
joined_r0x01b50dec:
  if (uVar7 == 0) goto LAB_01b50ea4;
  puVar16 = (uint *)(ulong)uVar7;
  if (cVar24 != '\0') {
    if (-1 < (int)uVar11) {
      uVar17 = 0;
      if ((ushort *)(uVar11 + (long)puVar15) != (ushort *)0x0) {
        uVar17 = (uint)*(ushort *)(uVar11 + (long)puVar15);
      }
      goto LAB_01b50c68;
    }
    if (uVar11 == 0xffffffff) {
      if (puVar16 != (uint *)0x0) goto LAB_01b50e28;
LAB_01b50eb8:
      uVar17 = 0;
      uVar11 = 0xffffffff;
      goto LAB_01b50c68;
    }
    goto LAB_01b50ea4;
  }
  *(undefined8 *)puVar10 = 0xffffffffffffffff;
  cVar24 = '\x01';
  *(undefined4 *)(puVar10 + 8) = 0xffffffff;
  puVar16 = (uint *)(ulong)*puVar15;
  *puVar1 = 1;
  if (puVar16 == (uint *)0x0) goto LAB_01b50eb8;
LAB_01b50e28:
  if (puVar15 == puVar16) goto LAB_01b50eb8;
  lVar3 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar16)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar15 + (lVar3 - (long)puVar16);
  if (lVar3 == 0) goto LAB_01b50eb8;
  uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar16));
  *(undefined4 *)puVar10 = 0xfffffffe;
  if (uVar11 == 0) {
LAB_01b50c60:
    uVar17 = 0;
    uVar11 = 0xfffffffe;
    goto LAB_01b50c68;
  }
  puVar16 = (uint *)(lVar3 + 4);
  while (puVar16[-1] != 0x54706054) {
    puVar16 = puVar16 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01b50c60;
  }
  uVar11 = 0;
  if (*puVar16 != 0xffffffff) {
    uVar11 = (ulong)*puVar16;
  }
  *(int *)puVar10 = (int)uVar11;
  uVar7 = *puVar15;
  goto joined_r0x01b50dec;
}

