
/* WARNING: Type propagation algorithm not settling */

void FUN_0179f740(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined1 *puVar20;
  uint uVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined *local_1c8;
  char *local_1c0;
  int local_1b8;
  char local_1b4 [127];
  undefined1 local_135;
  undefined4 local_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined8 local_128;
  undefined *local_120;
  char *local_118;
  undefined4 local_110;
  char local_10c [8];
  char acStack_104 [8];
  char local_fc [8];
  undefined1 local_f4;
  undefined1 local_f3 [102];
  undefined1 local_8d;
  
  puVar7 = PTR_DAT_04bbe4b0;
  puVar6 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  lVar19 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar19 == 0) {
    fVar26 = 170.0;
    fVar25 = 180.0;
    uVar21 = 4;
    uVar23 = 1;
  }
  else {
    iVar12 = *(int *)(lVar19 + 0xe48);
    if (iVar12 == 0x14) {
      uVar23 = *(uint *)(lVar19 + 0xf64);
    }
    else if (iVar12 == 1) {
      uVar23 = 0;
    }
    else if ((iVar12 < 2) || (5 < iVar12)) {
      if ((iVar12 < 6) || (0x10 < iVar12)) {
        if ((iVar12 < 0x11) || (0x12 < iVar12)) {
          uVar21 = 1;
          if (iVar12 != 0x14) {
            uVar21 = 2;
          }
          uVar23 = 3;
          if (iVar12 != 0x13) {
            uVar23 = uVar21;
          }
        }
        else {
          uVar23 = 3;
        }
      }
      else {
        uVar23 = 2;
      }
    }
    else {
      uVar23 = 1;
    }
    iVar12 = *(int *)(lVar19 + 0xf64) * 2;
    uVar21 = iVar12 + 4;
    fVar26 = (float)uVar21 * 5.0 + 160.0 + -10.0;
    fVar25 = (float)(*(int *)(lVar19 + 0xf68) * 2 + 4) * 5.0 + 160.0;
    if (iVar12 == 2) {
      local_10c = (char  [8])s_RoomMdlOutside6_OUTSIDE__0406246a._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside6_OUTSIDE__0406246a._8_8_;
      local_fc = (char  [8])s_RoomMdlOutside6_OUTSIDE__0406246a._16_8_;
      puVar20 = &local_f4;
      uVar21 = 6;
      goto LAB_0179f998;
    }
    if (iVar12 == 4) {
      local_10c = (char  [8])s_RoomMdlOutside8_OUTSIDE__040ef277._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside8_OUTSIDE__040ef277._8_8_;
      local_fc = (char  [8])s_RoomMdlOutside8_OUTSIDE__040ef277._16_8_;
      puVar20 = &local_f4;
      uVar21 = 8;
      goto LAB_0179f998;
    }
    if (iVar12 == 6) {
      local_f4 = 0x3a;
      local_fc = (char  [8])s_RoomMdlOutside10_OUTSIDE__040bb316._16_8_;
      local_10c = (char  [8])s_RoomMdlOutside10_OUTSIDE__040bb316._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside10_OUTSIDE__040bb316._8_8_;
      puVar20 = local_f3;
      uVar21 = 10;
      goto LAB_0179f998;
    }
  }
  local_10c = (char  [8])s_RoomMdlOutside4_OUTSIDE__0408c91e._0_8_;
  acStack_104 = (char  [8])s_RoomMdlOutside4_OUTSIDE__0408c91e._8_8_;
  local_fc = (char  [8])s_RoomMdlOutside4_OUTSIDE__0408c91e._16_8_;
  puVar20 = &local_f4;
LAB_0179f998:
  local_8d = 0;
  local_110 = 0x80;
  local_118 = local_10c;
  *puVar20 = 0;
  local_1f8 = 0x800000000;
  local_1c8 = PTR_DAT_04bb2d88 + 0x10;
  uStack_1e4 = 0x3f800000;
  local_1b8 = 0x80;
  local_1c0 = local_1b4;
  local_135 = 0;
  local_1b4[0] = '\0';
  local_128 = 0;
  uStack_12c = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_130 = 7;
  local_120 = local_1c8;
  if ((1 < uVar21) && (uVar23 < 4)) {
    uVar21 = uVar21 >> 1;
    uVar5 = uVar21 - 1;
    switch(uVar23) {
    case 0:
      uVar23 = 0;
      do {
        fVar26 = fVar26 + -10.0;
        uStack_1ec = 0;
        local_1e0 = 0x80000000;
        sVar4 = *(short *)PTR_DAT_04bb6298;
        local_1f0 = fVar26;
        if (sVar4 != -1) {
          local_208 = (undefined *)CONCAT44(local_208._4_4_,0x19);
          puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
          if (0xff < (uint)(int)sVar4) {
            puVar3 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar3 >> 0x19 & 1) == 0) ||
             (local_208 = (undefined *)CONCAT44(local_208._4_4_,7), (*puVar3 >> 7 & 1) == 0))
          goto LAB_017a05f0;
          if (*(long *)PTR_DAT_04bb5ce0 == 0) {
            bVar9 = false;
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            local_1e8 = fVar25;
            if (lVar19 != 0) goto LAB_017a09b4;
            goto LAB_017a09c0;
          }
          bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5d) != '\0';
          lVar19 = *(long *)puVar6;
          if (lVar19 == 0) {
            iVar12 = 0;
            local_1e8 = fVar25;
            goto LAB_017a09c0;
          }
LAB_017a09b4:
          local_1e8 = fVar25;
          if (*(long *)(lVar19 + 0x330) == 0) {
            iVar12 = 0;
            goto LAB_017a09c0;
          }
LAB_017a0700:
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)puVar1 + 0x18))
                              (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
          iVar11 = FUN_006bd550(*puVar13,0);
          iVar12 = 0;
          if (iVar11 == 0x758f7eaf) {
            iVar12 = 0;
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(*(long *)puVar6 + 0x330);
              iVar12 = 0;
              if (lVar19 != 0) {
                iVar12 = *(int *)(lVar19 + 0x248);
              }
            }
          }
          goto LAB_017a09c0;
        }
LAB_017a05f0:
        lVar19 = *(long *)puVar6;
        iVar12 = 0;
        local_1e8 = fVar25;
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x330) == 0) {
            iVar12 = 0;
          }
          else {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)puVar1 + 0x18))
                                (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
            iVar11 = FUN_006bd550(*puVar13,0);
            iVar12 = 0;
            if (iVar11 == 0x758f7eaf) {
              iVar12 = 0;
              if (*(long *)puVar6 != 0) {
                lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                iVar12 = 0;
                if (lVar19 != 0) {
                  iVar12 = *(int *)(lVar19 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar7 + 0xa8) == iVar12) {
          if (*(long *)PTR_DAT_04bb5ce0 == 0) {
            bVar9 = false;
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) goto LAB_017a06f8;
LAB_017a09c0:
            if (bVar9) goto LAB_017a09c8;
LAB_017a07c4:
            if (iVar12 == 0) goto LAB_017a0b18;
LAB_017a09cc:
            if (local_1c0 == "RoomMdlEntranceDown4m/ENTRANCE:") goto LAB_017a050c;
            pcVar14 = "RoomMdlEntranceDown4m/ENTRANCE:";
            iVar11 = local_1b8 + -1;
            bVar8 = SBORROW4(local_1b8,0x1f);
            bVar9 = local_1b8 + -0x1f < 0;
            bVar10 = local_1b8 == 0x1f;
            iVar12 = 0x1f;
          }
          else {
            bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
            lVar19 = *(long *)puVar6;
            if (lVar19 == 0) {
              iVar12 = 0;
              goto LAB_017a09c0;
            }
LAB_017a06f8:
            if (*(long *)(lVar19 + 0x330) != 0) goto LAB_017a0700;
            iVar12 = 0;
            if (!bVar9) goto LAB_017a07c4;
LAB_017a09c8:
            if (iVar12 != 0) goto LAB_017a09cc;
LAB_017a09fc:
            if (local_1c0 == "RoomMdlEntranceNmlUp4m/ENTRANCE:") goto LAB_017a050c;
            pcVar14 = "RoomMdlEntranceNmlUp4m/ENTRANCE:";
            iVar11 = local_1b8 + -1;
            bVar8 = SBORROW4(local_1b8,0x20);
            bVar9 = local_1b8 + -0x20 < 0;
            bVar10 = local_1b8 == 0x20;
            iVar12 = 0x20;
          }
LAB_017a04f4:
          pcVar22 = local_1c0;
          if (bVar10 || bVar9 != bVar8) {
            iVar12 = iVar11;
          }
          memcpy(local_1c0,pcVar14,(long)iVar12);
          pcVar22[iVar12] = '\0';
        }
        else {
          lVar19 = *(long *)puVar6;
          iVar12 = 0;
          if (lVar19 != 0) {
            if (*(long *)(lVar19 + 0x330) == 0) {
              iVar12 = 0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)puVar1 + 0x18))
                                  (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)puVar6 != 0) {
                  lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(puVar7 + 0xb0) == iVar12) {
LAB_017a07dc:
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              bVar9 = false;
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              if (lVar19 != 0) goto LAB_017a0810;
LAB_017a0860:
              iVar11 = iVar12;
              if (bVar9) goto LAB_017a0864;
LAB_017a08d4:
              if (iVar11 == 0) goto LAB_017a0b18;
            }
            else {
              bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
              lVar19 = *(long *)puVar6;
              if (lVar19 == 0) {
                iVar12 = 0;
                goto LAB_017a0860;
              }
LAB_017a0810:
              if (*(long *)(lVar19 + 0x330) != 0) {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)puVar1 + 0x18))
                                    (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x248);
                    }
                  }
                }
                goto LAB_017a0860;
              }
              iVar11 = 0;
              iVar12 = 0;
              if (!bVar9) goto LAB_017a08d4;
LAB_017a0864:
              if (iVar12 == 0) goto LAB_017a09fc;
            }
            lVar19 = *(long *)puVar6;
            if ((lVar19 != 0) && (*(long *)(lVar19 + 0x330) != 0)) {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)puVar1 + 0x18))
                                  (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
              iVar12 = FUN_006bd550(*puVar13,0);
              if ((iVar12 == 0x758f7eaf) &&
                 (((*(long *)puVar6 != 0 &&
                   (lVar19 = *(long *)(*(long *)puVar6 + 0x330), lVar19 != 0)) &&
                  (*(int *)(lVar19 + 0x248) == 1)))) goto LAB_017a0b18;
            }
            goto LAB_017a09cc;
          }
          lVar19 = *(long *)puVar6;
          iVar12 = 0;
          if (lVar19 != 0) {
            if (*(long *)(lVar19 + 0x330) == 0) {
              iVar12 = 0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)puVar1 + 0x18))
                                  (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)puVar6 != 0) {
                  lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(puVar7 + 0xac) == iVar12) goto LAB_017a07dc;
          lVar19 = *(long *)puVar6;
          iVar12 = 0;
          if (lVar19 != 0) {
            if (*(long *)(lVar19 + 0x330) == 0) {
              iVar12 = 0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)puVar1 + 0x18))
                                  (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)puVar6 != 0) {
                  lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(puVar7 + 0xb4) == iVar12) {
LAB_017a0b18:
            if (local_1c0 != "RoomMdlEntranceNml4m/ENTRANCE:") {
              pcVar14 = "RoomMdlEntranceNml4m/ENTRANCE:";
              iVar11 = local_1b8 + -1;
              bVar8 = SBORROW4(local_1b8,0x1e);
              bVar9 = local_1b8 + -0x1e < 0;
              bVar10 = local_1b8 == 0x1e;
              iVar12 = 0x1e;
              goto LAB_017a04f4;
            }
          }
          else {
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)puVar1 + 0x18))
                                    (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(puVar7 + 0xb8) == iVar12) goto LAB_017a0b18;
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)puVar1 + 0x18))
                                    (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(puVar7 + 0xa4) == iVar12) goto LAB_017a0b18;
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)puVar1 + 0x18))
                                    (*(long **)puVar1,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(puVar7 + 0xcc) == iVar12) goto LAB_017a0b18;
          }
        }
LAB_017a050c:
        local_1dc = 0x300000000;
        FUN_0179eea0(param_1,param_2,&local_1f8);
        fVar26 = fVar26 + -20.0;
        uVar23 = uVar23 + 2;
      } while (uVar23 < uVar21);
      break;
    default:
      uVar24 = 0;
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        pcVar14 = local_1c0;
        local_1f0 = fVar26;
        if (uVar24 == 1) {
          if (uVar23 != 1) goto LAB_0179fbc8;
LAB_0179fb10:
          uStack_1ec = 0;
          local_1e0 = 0x80000000;
          sVar4 = *(short *)PTR_DAT_04bb6298;
          if (sVar4 == -1) {
LAB_0179fc24:
            lVar19 = *(long *)PTR_DAT_04bb2720;
            iVar12 = 0;
            local_1e8 = fVar25;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)PTR_DAT_04bb2720 != 0) {
                    lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(PTR_DAT_04bbe4b0 + 0xa8) == iVar12) {
              if (*(long *)PTR_DAT_04bb5ce0 == 0) {
                bVar9 = false;
              }
              else {
                bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
              }
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) != 0) goto LAB_0179fd60;
                iVar12 = 0;
              }
              goto joined_r0x0179fe50;
            }
            lVar19 = *(long *)PTR_DAT_04bb2720;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)PTR_DAT_04bb2720 != 0) {
                    lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(PTR_DAT_04bbe4b0 + 0xb0) != iVar12) {
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xac) == iVar12) goto LAB_0179fe8c;
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xb4) == iVar12) goto LAB_017a0218;
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xb8) == iVar12) goto LAB_017a0218;
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xa4) == iVar12) goto LAB_017a0218;
              lVar19 = *(long *)PTR_DAT_04bb2720;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar12) {
                pcStack_200 = "RoomMdlEntranceNml2m/ENTRANCE:";
                local_208 = puVar1;
                FUN_00709380(&local_1f8,&local_208);
              }
              goto LAB_017a0264;
            }
LAB_0179fe8c:
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              bVar9 = false;
            }
            else {
              bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
            }
            lVar19 = *(long *)PTR_DAT_04bb2720;
            iVar12 = 0;
            if (lVar19 == 0) {
LAB_0179ff20:
              iVar11 = iVar12;
              if (!bVar9) goto LAB_0179ffbc;
LAB_0179ff24:
              if (iVar12 != 0) goto LAB_0179ffc0;
              if (local_1c0 == "RoomMdlEntranceNmlUp2m/ENTRANCE:") goto LAB_017a0264;
              goto LAB_017a0154;
            }
            if (*(long *)(lVar19 + 0x330) != 0) {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)PTR_DAT_04bb2720 != 0) {
                  lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x248);
                  }
                }
              }
              goto LAB_0179ff20;
            }
            iVar11 = 0;
            iVar12 = 0;
            if (bVar9) goto LAB_0179ff24;
LAB_0179ffbc:
            if (iVar11 == 0) {
LAB_017a0218:
              if (local_1c0 == "RoomMdlEntranceNml2m/ENTRANCE:") goto LAB_017a0264;
              goto LAB_017a022c;
            }
LAB_0179ffc0:
            lVar19 = *(long *)PTR_DAT_04bb2720;
            if ((lVar19 != 0) && (*(long *)(lVar19 + 0x330) != 0)) {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar12 = FUN_006bd550(*puVar13,0);
              if ((iVar12 == 0x758f7eaf) &&
                 (((*(long *)PTR_DAT_04bb2720 != 0 &&
                   (lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar19 != 0)) &&
                  (*(int *)(lVar19 + 0x248) == 1)))) goto LAB_017a0218;
            }
            if (local_1c0 == "RoomMdlEntranceDown2m/ENTRANCE:") goto LAB_017a0264;
LAB_017a011c:
            pcVar14 = "RoomMdlEntranceDown2m/ENTRANCE:";
            iVar11 = local_1b8 + -1;
            bVar8 = SBORROW4(local_1b8,0x1f);
            bVar9 = local_1b8 + -0x1f < 0;
            bVar10 = local_1b8 == 0x1f;
            iVar12 = 0x1f;
LAB_017a0248:
            pcVar22 = local_1c0;
            if (bVar10 || bVar9 != bVar8) {
              iVar12 = iVar11;
            }
            memcpy(local_1c0,pcVar14,(long)iVar12);
            pcVar22[iVar12] = '\0';
          }
          else {
            local_208 = (undefined *)CONCAT44(local_208._4_4_,0x19);
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
            if (0xff < (uint)(int)sVar4) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar3 >> 0x19 & 1) == 0) ||
               (local_208 = (undefined *)CONCAT44(local_208._4_4_,7), (*puVar3 >> 7 & 1) == 0))
            goto LAB_0179fc24;
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              bVar9 = false;
            }
            else {
              bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5d) != '\0';
            }
            lVar19 = *(long *)PTR_DAT_04bb2720;
            iVar12 = 0;
            local_1e8 = fVar25;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
                goto joined_r0x0179fe50;
              }
LAB_0179fd60:
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)PTR_DAT_04bb2720 != 0) {
                  lVar19 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x248);
                  }
                }
              }
            }
joined_r0x0179fe50:
            if (bVar9) {
              if (iVar12 != 0) goto LAB_017a0104;
              if (local_1c0 != "RoomMdlEntranceNmlUp2m/ENTRANCE:") {
LAB_017a0154:
                pcVar14 = "RoomMdlEntranceNmlUp2m/ENTRANCE:";
                iVar11 = local_1b8 + -1;
                bVar8 = SBORROW4(local_1b8,0x20);
                bVar9 = local_1b8 + -0x20 < 0;
                bVar10 = local_1b8 == 0x20;
                iVar12 = 0x20;
                goto LAB_017a0248;
              }
            }
            else {
              if (iVar12 == 0) {
                if (local_1c0 == "RoomMdlEntranceNml2m/ENTRANCE:") goto LAB_017a0264;
LAB_017a022c:
                pcVar14 = "RoomMdlEntranceNml2m/ENTRANCE:";
                iVar11 = local_1b8 + -1;
                bVar8 = SBORROW4(local_1b8,0x1e);
                bVar9 = local_1b8 + -0x1e < 0;
                bVar10 = local_1b8 == 0x1e;
                iVar12 = 0x1e;
                goto LAB_017a0248;
              }
LAB_017a0104:
              if (local_1c0 != "RoomMdlEntranceDown2m/ENTRANCE:") goto LAB_017a011c;
            }
          }
LAB_017a0264:
          uVar15 = 4;
          if (uVar5 != uVar24) {
            uVar15 = 2;
          }
          uVar16 = 6;
          if (uVar5 != uVar24) {
            uVar16 = 4;
          }
        }
        else {
          if ((uVar24 == 2) && (uVar23 == 3)) goto LAB_0179fb10;
LAB_0179fbc8:
          uStack_1ec = 0;
          local_1e0 = 0x80000000;
          local_1e8 = fVar25;
          if (local_1c0 != "RoomMdlWall/WALL:") {
            iVar12 = 0x11;
            if (local_1b8 < 0x12) {
              iVar12 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar12);
            pcVar14[iVar12] = '\0';
          }
          uVar16 = 4;
          if (uVar5 != uVar24) {
            uVar16 = 2;
          }
          uVar17 = 6;
          if (uVar5 != uVar24) {
            uVar17 = 4;
          }
          uVar15 = 0;
          if (uVar24 != 0) {
            uVar15 = uVar16;
          }
          uVar16 = 2;
          if (uVar24 != 0) {
            uVar16 = uVar17;
          }
        }
        local_1dc = CONCAT44(uVar16,uVar15);
        FUN_0179eea0(param_1,param_2,&local_1f8);
        fVar26 = fVar26 + -20.0;
        uVar24 = uVar24 + 1;
      } while (uVar21 != uVar24);
      break;
    case 2:
      uVar15 = 4;
      if (uVar21 != 2) {
        uVar15 = 2;
      }
      uVar16 = 5;
      if (uVar21 != 2) {
        uVar16 = 3;
      }
      uVar23 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        pcVar14 = local_1c0;
        if (uVar23 == 1) {
          fVar26 = fVar26 + -10.0;
          uStack_1ec = 0;
          local_1e0 = 0x80000000;
          sVar4 = *(short *)PTR_DAT_04bb6298;
          local_1f0 = fVar26;
          if (sVar4 != -1) {
            local_208 = (undefined *)CONCAT44(local_208._4_4_,0x19);
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
            if (0xff < (uint)(int)sVar4) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar3 >> 0x19 & 1) == 0) ||
               (local_208 = (undefined *)CONCAT44(local_208._4_4_,7), (*puVar3 >> 7 & 1) == 0))
            goto LAB_017a0d70;
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              bVar9 = false;
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              local_1e8 = fVar25;
              if (lVar19 != 0) goto LAB_017a1184;
              goto LAB_017a1190;
            }
            bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5d) != '\0';
            lVar19 = *(long *)puVar6;
            if (lVar19 == 0) {
              iVar12 = 0;
              local_1e8 = fVar25;
              goto LAB_017a1190;
            }
LAB_017a1184:
            local_1e8 = fVar25;
            if (*(long *)(lVar19 + 0x330) == 0) {
              iVar12 = 0;
              goto LAB_017a1190;
            }
LAB_017a0e8c:
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
            iVar11 = FUN_006bd550(*puVar13,0);
            iVar12 = 0;
            if (iVar11 == 0x758f7eaf) {
              iVar12 = 0;
              if (*(long *)puVar6 != 0) {
                lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                iVar12 = 0;
                if (lVar19 != 0) {
                  iVar12 = *(int *)(lVar19 + 0x248);
                }
              }
            }
            goto LAB_017a1190;
          }
LAB_017a0d70:
          lVar19 = *(long *)puVar6;
          iVar12 = 0;
          local_1e8 = fVar25;
          if (lVar19 != 0) {
            if (*(long *)(lVar19 + 0x330) == 0) {
              iVar12 = 0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar11 = FUN_006bd550(*puVar13,0);
              iVar12 = 0;
              if (iVar11 == 0x758f7eaf) {
                iVar12 = 0;
                if (*(long *)puVar6 != 0) {
                  lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                  iVar12 = 0;
                  if (lVar19 != 0) {
                    iVar12 = *(int *)(lVar19 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(PTR_DAT_04bbe4b0 + 0xa8) == iVar12) {
            if (*(long *)PTR_DAT_04bb5ce0 == 0) {
              bVar9 = false;
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              if (lVar19 != 0) goto LAB_017a0e84;
LAB_017a1190:
              if (bVar9) goto LAB_017a1198;
LAB_017a0f68:
              if (iVar12 == 0) goto LAB_017a1264;
LAB_017a119c:
              if (local_1c0 == "RoomMdlEntranceDown4m/ENTRANCE:") goto LAB_017a0be0;
              pcVar14 = "RoomMdlEntranceDown4m/ENTRANCE:";
              iVar11 = local_1b8 + -1;
              bVar8 = SBORROW4(local_1b8,0x1f);
              bVar9 = local_1b8 + -0x1f < 0;
              bVar10 = local_1b8 == 0x1f;
              iVar12 = 0x1f;
            }
            else {
              bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
              lVar19 = *(long *)puVar6;
              if (lVar19 == 0) {
                iVar12 = 0;
                goto LAB_017a1190;
              }
LAB_017a0e84:
              if (*(long *)(lVar19 + 0x330) != 0) goto LAB_017a0e8c;
              iVar12 = 0;
              if (!bVar9) goto LAB_017a0f68;
LAB_017a1198:
              if (iVar12 != 0) goto LAB_017a119c;
LAB_017a0b98:
              if (local_1c0 == "RoomMdlEntranceNmlUp4m/ENTRANCE:") goto LAB_017a0be0;
              pcVar14 = "RoomMdlEntranceNmlUp4m/ENTRANCE:";
              iVar11 = local_1b8 + -1;
              bVar8 = SBORROW4(local_1b8,0x20);
              bVar9 = local_1b8 + -0x20 < 0;
              bVar10 = local_1b8 == 0x20;
              iVar12 = 0x20;
            }
LAB_017a0bc4:
            pcVar22 = local_1c0;
            if (bVar10 || bVar9 != bVar8) {
              iVar12 = iVar11;
            }
            memcpy(local_1c0,pcVar14,(long)iVar12);
            pcVar22[iVar12] = '\0';
          }
          else {
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(PTR_DAT_04bbe4b0 + 0xb0) == iVar12) {
LAB_017a0f88:
              if (*(long *)PTR_DAT_04bb5ce0 == 0) {
                bVar9 = false;
                lVar19 = *(long *)puVar6;
                iVar12 = 0;
                if (lVar19 != 0) goto LAB_017a0fbc;
LAB_017a1014:
                iVar11 = iVar12;
                if (bVar9) goto LAB_017a1018;
LAB_017a108c:
                if (iVar11 == 0) goto LAB_017a1264;
              }
              else {
                bVar9 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0';
                lVar19 = *(long *)puVar6;
                if (lVar19 == 0) {
                  iVar12 = 0;
                  goto LAB_017a1014;
                }
LAB_017a0fbc:
                if (*(long *)(lVar19 + 0x330) != 0) {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)puVar6 != 0) {
                      lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x248);
                      }
                    }
                  }
                  goto LAB_017a1014;
                }
                iVar11 = 0;
                iVar12 = 0;
                if (!bVar9) goto LAB_017a108c;
LAB_017a1018:
                if (iVar12 == 0) goto LAB_017a0b98;
              }
              lVar19 = *(long *)puVar6;
              if ((lVar19 != 0) && (*(long *)(lVar19 + 0x330) != 0)) {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar12 = FUN_006bd550(*puVar13,0);
                if ((iVar12 == 0x758f7eaf) &&
                   (((*(long *)puVar6 != 0 &&
                     (lVar19 = *(long *)(*(long *)puVar6 + 0x330), lVar19 != 0)) &&
                    (*(int *)(lVar19 + 0x248) == 1)))) goto LAB_017a1264;
              }
              goto LAB_017a119c;
            }
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(PTR_DAT_04bbe4b0 + 0xac) == iVar12) goto LAB_017a0f88;
            lVar19 = *(long *)puVar6;
            iVar12 = 0;
            if (lVar19 != 0) {
              if (*(long *)(lVar19 + 0x330) == 0) {
                iVar12 = 0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                iVar11 = FUN_006bd550(*puVar13,0);
                iVar12 = 0;
                if (iVar11 == 0x758f7eaf) {
                  iVar12 = 0;
                  if (*(long *)puVar6 != 0) {
                    lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                    iVar12 = 0;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x244);
                    }
                  }
                }
              }
            }
            if (*(int *)(PTR_DAT_04bbe4b0 + 0xb4) == iVar12) {
LAB_017a1264:
              if (local_1c0 != "RoomMdlEntranceNml4m/ENTRANCE:") {
                pcVar14 = "RoomMdlEntranceNml4m/ENTRANCE:";
                iVar11 = local_1b8 + -1;
                bVar8 = SBORROW4(local_1b8,0x1e);
                bVar9 = local_1b8 + -0x1e < 0;
                bVar10 = local_1b8 == 0x1e;
                iVar12 = 0x1e;
                goto LAB_017a0bc4;
              }
            }
            else {
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)puVar6 != 0) {
                      lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xb8) == iVar12) goto LAB_017a1264;
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)puVar6 != 0) {
                      lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xa4) == iVar12) goto LAB_017a1264;
              lVar19 = *(long *)puVar6;
              iVar12 = 0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x330) == 0) {
                  iVar12 = 0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
                  iVar11 = FUN_006bd550(*puVar13,0);
                  iVar12 = 0;
                  if (iVar11 == 0x758f7eaf) {
                    iVar12 = 0;
                    if (*(long *)puVar6 != 0) {
                      lVar19 = *(long *)(*(long *)puVar6 + 0x330);
                      iVar12 = 0;
                      if (lVar19 != 0) {
                        iVar12 = *(int *)(lVar19 + 0x244);
                      }
                    }
                  }
                }
              }
              if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar12) {
                pcStack_200 = "RoomMdlEntranceNml4m/ENTRANCE:";
                local_208 = puVar1;
                FUN_00709380(&local_1f8,&local_208);
              }
            }
          }
LAB_017a0be0:
          local_1dc = CONCAT44(uVar16,uVar15);
          FUN_0179eea0(param_1,param_2,&local_1f8);
          fVar26 = fVar26 + -10.0;
          uVar23 = 2;
        }
        else {
          uStack_1ec = 0;
          local_1e0 = 0x80000000;
          local_1f0 = fVar26;
          local_1e8 = fVar25;
          if (local_1c0 != "RoomMdlWall/WALL:") {
            iVar12 = 0x11;
            if (local_1b8 < 0x12) {
              iVar12 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar12);
            pcVar14[iVar12] = '\0';
          }
          uVar17 = 4;
          if (uVar23 != uVar5) {
            uVar17 = 2;
          }
          uVar18 = 6;
          if (uVar23 != uVar5) {
            uVar18 = 4;
          }
          uVar2 = 0;
          if (uVar23 != 0) {
            uVar2 = uVar17;
          }
          uVar17 = 2;
          if (uVar23 != 0) {
            uVar17 = uVar18;
          }
          local_1dc = CONCAT44(uVar17,uVar2);
          FUN_0179eea0(param_1,param_2,&local_1f8);
        }
        fVar26 = fVar26 + -20.0;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar21);
    }
  }
  pcVar14 = local_1c0;
  local_1f0 = 160.0;
  uStack_1ec = 0;
  local_1e0 = 0;
  local_1e8 = fVar25;
  if (local_1c0 != local_118) {
    lVar19 = 0;
    do {
      if (local_118[lVar19] == '\0') goto LAB_017a0334;
      if (local_118[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_017a0334;
      }
      if (local_118[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_017a0334;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_017a0334:
    iVar12 = (int)lVar19;
    if (local_1b8 <= (int)lVar19) {
      iVar12 = local_1b8 + -1;
    }
    memcpy(local_1c0,local_118,(long)iVar12);
    pcVar14[iVar12] = '\0';
  }
  *param_3 = 1;
  if (param_1 != 0) {
    if (*(int *)(param_3 + 0x14) == 0) {
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_3 + 0x10) = local_1f8._4_4_;
  }
  *(undefined ***)(param_3 + 0x78) = &PTR_LAB_049c3940;
  *(undefined1 **)(param_3 + 0x80) = param_3;
  pcVar22 = *(char **)(param_3 + 0x100);
  *(undefined1 **)(param_3 + 0x88) = &LAB_0178f13c;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined4 *)(param_3 + 200) = (undefined4)local_1f8;
  *(undefined4 *)(param_3 + 0xcc) = local_1f8._4_4_;
  *(float *)(param_3 + 0xd0) = local_1f0;
  *(ulong *)(param_3 + 0xd4) = CONCAT44(local_1e8,uStack_1ec);
  *(undefined4 *)(param_3 + 0xe0) = local_1e0;
  *(undefined4 *)(param_3 + 0xdc) = uStack_1e4;
  *(undefined8 *)(param_3 + 0xec) = local_1d4;
  *(undefined8 *)(param_3 + 0xe4) = local_1dc;
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  pcVar14 = local_1c0;
  if (pcVar22 != local_1c0) {
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    lVar19 = 0;
    do {
      if (local_1c0[lVar19] == '\0') goto LAB_017a044c;
      if (local_1c0[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_017a044c;
      }
      if (local_1c0[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_017a044c;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_017a044c:
    iVar12 = (int)lVar19;
    if (*(int *)(param_3 + 0x108) <= (int)lVar19) {
      iVar12 = *(int *)(param_3 + 0x108) + -1;
    }
    memcpy(pcVar22,pcVar14,(long)iVar12);
    pcVar22[iVar12] = '\0';
  }
  *(ulong *)(param_3 + 400) = CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
  *(undefined8 *)(param_3 + 0x198) = local_128;
  return;
}

