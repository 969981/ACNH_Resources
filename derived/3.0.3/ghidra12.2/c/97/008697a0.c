
void FUN_008697a0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  char *pcVar19;
  byte bVar20;
  long lVar21;
  uint *puVar22;
  int *piVar23;
  char cVar24;
  uint *puVar25;
  byte local_cc [4];
  byte local_c8 [4];
  byte local_c4 [4];
  undefined *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  char *pcStack_90;
  int local_74;
  undefined8 local_70;
  byte local_64 [4];
  
  FUN_00e48a70(3);
  puVar7 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar25 = &DAT_054f08c0;
      if (iVar9 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar25 = &DAT_054f08c0;
    }
  }
  else {
    puVar25 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
  *puVar25 = *puVar25 & 0xfffffffe;
  puVar3 = PTR_DAT_04bb39b0;
  if (param_2[2] == 0) {
    lVar21 = *(long *)PTR_DAT_04bb39b0;
    pbVar18 = PTR_DAT_04bb32e0;
    if (lVar21 == 0) {
LAB_00869890:
      if (*pbVar18 < 8) goto LAB_00869908;
LAB_0086989c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00869900:
        pbVar18 = PTR_DAT_04bb5038;
        goto LAB_00869908;
      }
      lVar21 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar21 + 0x473);
      pbVar18 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar25 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar25 = (uint *)(lVar21 + 0x48);
        }
        if ((*puVar25 & 8) != 0) {
          pbVar18 = (byte *)(lVar21 + 0x471);
        }
      }
      local_c4[0] = *pbVar18;
      if (7 < local_c4[0]) goto LAB_00869900;
    }
    else {
      if (*(int *)(lVar21 + 0x15c) != 0) {
        pbVar18 = (byte *)(lVar21 + 0x158);
      }
      if (7 < *pbVar18) {
        if ((*(int *)(lVar21 + 0x15c) != 0) && (lVar21 = *(long *)puVar7, lVar21 != 0)) {
          pbVar18 = (byte *)(lVar21 + 0x11a5);
          goto LAB_00869890;
        }
        goto LAB_0086989c;
      }
LAB_00869908:
      local_c4[0] = *pbVar18;
      if (7 < local_c4[0]) {
        local_c4[0] = 0xff;
      }
    }
    iVar9 = FUN_02753180(local_c4,param_1 + 0xb8);
    iVar10 = FUN_0273ea30(param_1 + 0x110);
    iVar11 = FUN_02743000(param_1 + 0x3d0);
    if ((iVar11 < 2) || (*(int *)(*(long *)puVar3 + 0x15c) != 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if (4 < iVar10) {
        uVar13 = 5;
      }
      uVar4 = uVar13 | 2;
      if (iVar10 < 10) {
        uVar4 = uVar13;
      }
      uVar13 = uVar4 + 3;
      if (iVar10 < 0xf) {
        uVar13 = uVar4;
      }
    }
    lVar21 = param_1 + 0x168;
    iVar10 = (uint)(2 < iVar9) * 2 + iVar9 + uVar13;
    FUN_0274bce0(local_c4,lVar21);
    local_64[0] = local_c4[0];
    if (7 < local_c4[0]) {
      local_64[0] = 0xff;
    }
    uVar14 = FUN_02669430(local_64);
    if ((uVar14 & 1) == 0) {
      FUN_02755058(local_c4,param_1 + 800,2 < iVar9);
      FUN_02755058(local_c4,param_1 + 0x378,uVar13 != 0);
    }
    else {
      FUN_0274bfe8(local_c4,param_1 + 0x270,2 < iVar9);
      FUN_0274bfe8(local_c4,param_1 + 0x2c8,uVar13 != 0);
    }
    FUN_027533a8(local_c4,&DAT_04ce66c8,iVar10);
    FUN_0274ca70(local_c4,lVar21,iVar10);
    if (*param_2 == 0) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
      local_a8 = PTR_s_calendar_compe_insect_result_04a85540;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_b0 = puVar1;
      FUN_025ffac8(&local_98,&local_b0,local_c4);
      local_70 = 1;
      local_a0 = 0;
      puVar2 = PTR_DAT_04bc3258 + 0x10;
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0xfffe00000000;
      local_98 = puVar2;
      FUN_0277d4ac((long)&local_a8 + 4);
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar10);
      uVar12 = FUN_0274bce0(local_c4,lVar21);
      local_b0 = (undefined *)CONCAT44(uVar12,(undefined4)local_b0);
      pcStack_b8 = "ChyEvent_TotalPoint";
      local_c0 = puVar1;
      uVar12 = FUN_0274bce0(local_c4,&local_c0);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar12);
      FUN_02591110(&local_98,&local_b0);
      local_98 = puVar2;
LAB_00869b84:
      iVar9 = FUN_02591470(&local_98);
      if (iVar9 == -1) {
LAB_00869bb4:
        if (local_74 == 0) {
          local_74 = 1;
        }
      }
      else {
        iVar9 = (**(code **)(local_98 + 0x20))(&local_98);
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar9);
        if (0xc < iVar9) goto LAB_00869bb4;
      }
      FUN_02601530(&local_98);
    }
    else if (*param_2 == 1) {
      local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
      local_a8 = PTR_s_calendar_compe_fish_result_04a85530;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_b0 = puVar1;
      FUN_025ffac8(&local_98,&local_b0,local_c4);
      local_70 = 0;
      local_a0 = 0;
      puVar2 = PTR_DAT_04bc3258 + 0x10;
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0xfffe00000000;
      local_98 = puVar2;
      FUN_0277d4ac((long)&local_a8 + 4);
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar10);
      uVar12 = FUN_0274bce0(local_c4,lVar21);
      local_b0 = (undefined *)CONCAT44(uVar12,(undefined4)local_b0);
      pcStack_b8 = "BeyEvent_TotalPoint";
      local_c0 = puVar1;
      uVar12 = FUN_0274bce0(local_c4,&local_c0);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar12);
      FUN_02591110(&local_98,&local_b0);
      local_98 = puVar2;
      goto LAB_00869b84;
    }
    local_c8[0] = local_c4[0];
    if (7 < local_c4[0]) {
      local_c8[0] = 0xff;
    }
    uVar14 = FUN_02669430(local_c8);
    if ((uVar14 & 1) != 0) {
      local_98 = PTR_DAT_04bb2020 + 0x10;
      pcStack_90 = "CatchtFesBox_Valid";
      FUN_0274bfe8(local_c4,&local_98,1);
    }
    uVar14 = FUN_02744114(local_c4,param_1 + 0x1c0);
    if ((uVar14 & 1) != 0) {
      bVar8 = true;
      if (local_c4[0] < 8) {
        uVar13 = FUN_02582d8c(local_c4,1);
        puVar1 = PTR_DAT_04bb4fb8;
        if (uVar13 < 8) {
          if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d4) == '\0') ||
             (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d6) == '\0')) {
            bVar8 = true;
          }
          else {
            uVar13 = FUN_02582d8c(local_c4,1);
            if (uVar13 < 8) {
              lVar17 = *(long *)puVar1 + (ulong)uVar13 * 0x13f0;
              lVar21 = 0;
              if (*(char *)(lVar17 + 0x13d4) != '\0') {
                lVar21 = lVar17;
              }
            }
            else {
              lVar21 = 0;
            }
            bVar8 = lVar21 == 0;
          }
        }
      }
      local_cc[0] = local_c4[0];
      if (7 < local_c4[0]) {
        local_cc[0] = 0xff;
      }
      lVar21 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_cc,1);
      puVar1 = PTR_DAT_04bb43c0;
      if ((!bVar8) && (lVar21 != 0)) {
        iVar9 = 0;
        do {
          plVar15 = (long *)FUN_0267f210(local_c4,iVar9);
          local_98 = (undefined *)*plVar15;
          lVar21 = *(long *)puVar1;
          uVar13 = FUN_0277d6c4(&local_98);
          if (*(long *)puVar1 != 0) {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
              FUN_0267de70(local_c4,&local_98,0);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x14);
      }
    }
  }
  lVar21 = *(long *)puVar3;
  pbVar18 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
LAB_00869e18:
    if (7 < *pbVar18) {
LAB_00869e24:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar21 + 0x473);
        pbVar18 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar25 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar25 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar25 & 8) != 0) {
            pbVar18 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar20 = *pbVar18;
        bVar8 = 7 < bVar20;
        if (bVar8) {
          bVar20 = 0xff;
        }
        local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar20);
        if (!bVar8) goto LAB_00869ea4;
      }
      pbVar18 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (lVar21 = *(long *)puVar7, lVar21 != 0)) {
        pbVar18 = (byte *)(lVar21 + 0x11a5);
        goto LAB_00869e18;
      }
      goto LAB_00869e24;
    }
  }
  bVar20 = *pbVar18;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar20);
LAB_00869ea4:
  FUN_0267f3a0(&local_98);
  if (param_2[2] == 5) {
    FUN_02507c6c(&local_98,1,1,0,0);
    if ((byte)local_98 < 8) {
      FUN_02743a24(&local_98,param_1 + 0x60,0);
      FUN_02743a24(&local_98,param_1 + 0x1c0,0);
      puVar7 = PTR_DAT_04bb5038;
      while ((byte)local_98 < 8) {
        uVar14 = (ulong)(byte)local_98;
        do {
          if (uVar14 == 7) goto LAB_0086a040;
          uVar14 = uVar14 + 1;
          uVar16 = FUN_02507924(&local_98,puVar7 + uVar14);
        } while ((uVar16 & 1) == 0);
        bVar20 = puVar7[uVar14];
        if (7 < bVar20) break;
        local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar20);
        FUN_02743a24(&local_98,param_1 + 0x60,0);
        FUN_02743a24(&local_98,param_1 + 0x1c0,0);
      }
    }
  }
  else {
    if (param_2[2] == 0) {
      FUN_02507c6c(&local_98,1,1,0,0);
      if ((byte)local_98 < 8) {
        FUN_02743a24(&local_98,param_1 + 0x60,0);
        puVar7 = PTR_DAT_04bb5038;
        while ((byte)local_98 < 8) {
          uVar14 = (ulong)(byte)local_98;
          do {
            if (uVar14 == 7) goto LAB_0086a3bc;
            uVar14 = uVar14 + 1;
            uVar16 = FUN_02507924(&local_98,puVar7 + uVar14);
          } while ((uVar16 & 1) == 0);
          bVar20 = puVar7[uVar14];
          if (7 < bVar20) {
LAB_0086a3bc:
            local_98 = (undefined *)CONCAT71(local_98._1_7_,0xff);
            break;
          }
          local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar20);
          FUN_02743a24(&local_98,param_1 + 0x60,0);
        }
      }
    }
    else {
      FUN_02743234(param_1 + 0x1c0,0);
      FUN_02743234(param_1 + 0x60,0);
    }
    FUN_02743234(param_1 + 8,0);
  }
LAB_0086a040:
  puVar7 = PTR_DAT_04bb2020;
  if ((param_2[2] == 0) &&
     (((lVar21 = *(long *)PTR_DAT_04bb27d0, lVar21 == 0 || (*(long *)(lVar21 + 0x28) == 0)) ||
      (*(int *)(lVar21 + 0x80) != 1)))) {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
      if (0xff < (uint)(int)sVar6) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) {
        return;
      }
    }
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_90 = "TodayGlobalEventId";
    local_98 = puVar3;
    iVar9 = FUN_0273ea30(&local_98);
    if (iVar9 != 0xffff) {
      pcStack_90 = "TodayGlobalEventId";
      lVar21 = *(long *)PTR_DAT_04bb32f0;
      local_98 = puVar3;
      uVar13 = FUN_0273ea30(&local_98);
      uVar5 = *(ushort *)(lVar21 + 0x420);
      uVar13 = (uVar13 & 0xffff) - (uint)uVar5;
      if (((*(uint *)(lVar21 + 0x400) <= uVar13) ||
          (puVar25 = *(uint **)(*(long *)(lVar21 + 0x408) + (long)(int)uVar13 * 8),
          puVar25 == (uint *)0x0)) &&
         (puVar25 = (uint *)0x0, -(uint)uVar5 < *(uint *)(lVar21 + 0x400))) {
        puVar25 = *(uint **)(*(long *)(lVar21 + 0x408) + (ulong)uVar5 * -8);
      }
      FUN_02507c6c(&local_b0,1,1,0,0);
      puVar1 = PTR_DAT_04bb5038;
      puVar3 = PTR_DAT_04bb3250;
      if ((byte)local_b0 < 8) {
        uVar13 = *puVar25;
        do {
          if (uVar13 != 0) {
            cVar24 = *PTR_DAT_04bb3248;
            do {
              if (cVar24 == '\0') {
                cVar24 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar3,0xff,0x288);
              }
              else {
                uVar13 = *(uint *)(puVar3 + 0x148);
                if (-1 < (int)uVar13) {
                  pcVar19 = (char *)((ulong)uVar13 + (long)puVar25);
                  goto LAB_0086a278;
                }
                if (uVar13 != 0xffffffff) break;
              }
              puVar22 = (uint *)(ulong)*puVar25;
              pcVar19 = (char *)0x0;
              if ((*puVar25 == 0) || (puVar25 == puVar22)) goto LAB_0086a278;
              lVar21 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar22)) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar25 + (lVar21 - (long)puVar22);
              if (lVar21 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar22));
              *(undefined4 *)(puVar3 + 0x148) = 0xfffffffe;
              pcVar19 = (char *)0x0;
              if (uVar14 == 0) goto LAB_0086a278;
              piVar23 = (int *)(lVar21 + 4);
              while (piVar23[-1] != 0x443c0fb7) {
                piVar23 = piVar23 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  pcVar19 = (char *)0x0;
                  goto LAB_0086a278;
                }
              }
              iVar9 = 0;
              if (*piVar23 != -1) {
                iVar9 = *piVar23;
              }
              *(int *)(puVar3 + 0x148) = iVar9;
            } while (*puVar25 != 0);
          }
          pcVar19 = (char *)0x0;
LAB_0086a278:
          pcStack_90 = *(char **)PTR_PTR_04bb3260;
          if (pcVar19 != (char *)0x0) {
            pcStack_90 = pcVar19;
          }
          local_98 = puVar7 + 0x10;
          FUN_0279db20(&local_b0,&local_98);
          bVar20 = (byte)local_b0;
          uVar14 = (ulong)local_b0 & 0xff;
          if (7 < (byte)local_b0) {
            return;
          }
          if (uVar14 + 1 == 8) {
            return;
          }
          pbVar18 = puVar1 + uVar14 + 1;
          uVar16 = FUN_02507924(&local_b0,pbVar18);
          if ((uVar16 & 1) == 0) {
            if (uVar14 + 2 == 8) {
              return;
            }
            pbVar18 = puVar1 + uVar14 + 2;
            uVar16 = FUN_02507924(&local_b0,pbVar18);
            if ((uVar16 & 1) == 0) {
              if (uVar14 + 3 == 8) {
                return;
              }
              pbVar18 = puVar1 + uVar14 + 3;
              uVar16 = FUN_02507924(&local_b0,pbVar18);
              if ((uVar16 & 1) == 0) {
                if (uVar14 + 4 == 8) {
                  return;
                }
                pbVar18 = puVar1 + uVar14 + 4;
                uVar16 = FUN_02507924(&local_b0,pbVar18);
                if ((uVar16 & 1) == 0) {
                  if (uVar14 + 5 == 8) {
                    return;
                  }
                  pbVar18 = puVar1 + uVar14 + 5;
                  uVar16 = FUN_02507924(&local_b0,pbVar18);
                  if ((uVar16 & 1) == 0) {
                    if (uVar14 + 6 == 8) {
                      return;
                    }
                    pbVar18 = puVar1 + uVar14 + 6;
                    uVar16 = FUN_02507924(&local_b0,pbVar18);
                    if ((uVar16 & 1) == 0) {
                      if (uVar14 + 7 == 8) {
                        return;
                      }
                      pbVar18 = puVar1 + uVar14 + 7;
                      uVar16 = FUN_02507924(&local_b0,pbVar18);
                      if ((uVar16 & 1) == 0) {
                        if (bVar20 == 0) {
                          return;
                        }
                        pbVar18 = puVar1 + uVar14 + 8;
                        FUN_02507924(&local_b0,pbVar18);
                      }
                    }
                  }
                }
              }
            }
          }
          if (7 < *pbVar18) {
            return;
          }
          local_b0 = (undefined *)CONCAT71(local_b0._1_7_,*pbVar18);
          uVar13 = *puVar25;
        } while( true );
      }
    }
  }
  return;
}

