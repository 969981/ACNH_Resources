
void FUN_02793830(long param_1,byte *param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ushort *puVar2;
  char *pcVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  long lVar8;
  bool bVar9;
  char cVar10;
  ushort uVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  char cVar24;
  short *psVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  short sVar30;
  short sVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  uint *puVar36;
  char *pcVar37;
  uint *puVar38;
  uint uVar39;
  char *pcVar40;
  uint *puVar41;
  undefined8 uVar42;
  ulong uVar43;
  undefined *puVar44;
  int local_694;
  undefined8 local_680;
  uint local_678;
  undefined2 local_674;
  undefined2 local_672;
  undefined6 uStack_670;
  undefined8 local_66a;
  byte local_662;
  undefined **local_360;
  undefined8 local_358;
  undefined1 *local_350;
  uint local_348;
  undefined1 auStack_344 [4];
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined1 *local_318;
  int local_310;
  undefined1 auStack_30c [4];
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  uint local_2b0;
  undefined1 auStack_2ac [4];
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268;
  char *local_260;
  
  puVar44 = PTR_DAT_04bb32e8;
  puVar14 = PTR_DAT_04bb2020;
  if ((param_4 & 1) == 0) {
LAB_02793b10:
    bVar13 = false;
  }
  else {
    uVar42 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_680 = PTR_DAT_04bb2020 + 0x10;
    local_678 = 0x40d5132;
    local_674 = 0;
    local_672 = 0;
    local_2c8 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_2c8 >> 0x20) < '\x05') {
      lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
      local_268 = (undefined *)(lVar21 + -0x15180);
      local_2c8 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_268);
    }
    uVar27 = (ulong)local_2c8;
    uVar22 = (ulong)local_2c8 >> 0x30;
    local_2c8._0_6_ = CONCAT24(5,(undefined4)local_2c8);
    local_2c8 = (undefined **)(CONCAT26((short)uVar22,(undefined6)local_2c8) & 0xff00ffffffffffff);
    uVar22 = FUN_00879dd0(uVar42,&local_680,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
    bVar13 = false;
    if ((uVar22 & 1) == 0) {
      puVar1 = puVar14 + 0x10;
      local_678 = 0x40d5dfa;
      local_674 = 0;
      local_672 = 0;
      local_680 = puVar1;
      iVar18 = FUN_0274bce0(param_2,&local_680);
      if (iVar18 == 0) {
        local_678 = 0x40d5dfa;
        local_674 = 0;
        local_672 = 0;
        local_680 = puVar1;
        FUN_0274bfe8(param_2,&local_680,1);
        local_678 = 0x40fabf7;
        local_674 = 0;
        local_672 = 0;
        local_260 = "DailyQuestFivePointQuest";
        local_680 = puVar1;
        local_268 = puVar1;
        uVar19 = FUN_0274f6e0(&local_268);
        FUN_0274bfe8(param_2,&local_680,uVar19);
        if (*(short *)(*(long *)puVar44 + 0x4068) == 0) {
          local_268 = *(undefined **)(*(long *)puVar44 + 0x4060);
          if ((char)((ulong)local_268 >> 0x20) < '\x05') {
            lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_268);
            local_680 = (undefined *)(lVar21 + -0x15180);
            local_268 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_680);
          }
          uVar22 = (ulong)local_268 >> 0x30;
          local_268._0_6_ = CONCAT24(5,(undefined4)local_268);
          local_268 = (undefined *)
                      (CONCAT26((short)uVar22,(undefined6)local_268) & 0xff00ffffffffffff);
        }
        local_678 = 0x40fe362;
        local_674 = 0;
        local_672 = 0;
        local_680 = puVar14 + 0x10;
        uVar22 = FUN_0273f0a0(&local_680);
        if ((uVar22 & 1) != 0) {
          local_678 = 0x40a74b0;
          local_674 = 0;
          local_672 = 0;
          local_680 = puVar14 + 0x10;
          iVar18 = FUN_0274bce0(param_2,&local_680);
          if (iVar18 == 0) {
            puVar44 = puVar14 + 0x10;
            local_678 = 0x40e5a5c;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            FUN_0274bfe8(param_2,&local_680,1);
            local_678 = 0x40a74b0;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            FUN_0274bfe8(param_2,&local_680,1);
            local_678 = 0x406dd52;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            FUN_0274bfe8(param_2,&local_680,1);
          }
          else {
            puVar44 = puVar14 + 0x10;
            local_678 = 0x40cb2a4;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            iVar18 = FUN_0274bce0(param_2,&local_680);
            puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar20 = *puVar23 ^ *puVar23 << 0xb;
            uVar39 = puVar23[3];
            *puVar23 = puVar23[1];
            puVar23[1] = puVar23[2];
            uVar20 = uVar20 >> 8 ^ uVar39 >> 0x13 ^ uVar20 ^ uVar39;
            puVar23[2] = uVar39;
            puVar23[3] = uVar20;
            if (iVar18 * 0x19 + 0x19U <= (uint)((ulong)uVar20 * 100 >> 0x20)) {
              local_678 = 0x40cb2a4;
              local_674 = 0;
              local_672 = 0;
              local_680 = puVar44;
              FUN_0274ca70(param_2,&local_680,1);
              goto LAB_02793b10;
            }
            local_678 = 0x40e5a5c;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            FUN_0274bfe8(param_2,&local_680,1);
            local_678 = 0x40cb2a4;
            local_674 = 0;
            local_672 = 0;
            local_680 = puVar44;
            FUN_0274bfe8(param_2,&local_680,0);
          }
          local_672 = 0;
          local_674 = 0;
          local_678 = 0x40e5a5c;
          local_680 = puVar14 + 0x10;
          bVar13 = true;
          FUN_0273f3c4(&local_680,1);
          goto LAB_02793b14;
        }
      }
      goto LAB_02793b10;
    }
  }
LAB_02793b14:
  puVar14 = PTR_DAT_04bb6428;
  lVar21 = *(long *)PTR_DAT_04bb2208;
  uVar22 = (ulong)*(uint *)(lVar21 + 0x1b20);
  if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
    uVar22 = 0;
    if (*(long *)(lVar21 + 0x1a10) != 0) {
      puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8);
      uVar22 = 0;
      if ((puVar23 != (uint *)0x0) && (uVar20 = *puVar23, uVar22 = (ulong)uVar20, 0 < (int)uVar20))
      goto LAB_02793b4c;
    }
    bVar16 = false;
    local_694 = 5;
  }
  else {
LAB_02793b4c:
    cVar24 = *PTR_DAT_04bb6420;
    uVar27 = 0;
    local_694 = 5;
    puVar2 = (ushort *)(param_1 + 0xe4a);
    pcVar3 = (char *)(param_1 + 0x400);
    pcVar37 = (char *)(param_1 + 0x800);
    puVar23 = (uint *)(param_1 + 0xe4c);
    puVar4 = (ushort *)(param_1 + 0xe46);
    puVar5 = (ushort *)(param_1 + 0xe48);
    puVar36 = (uint *)(param_1 + 0xe4e);
    puVar44 = PTR_DAT_04bb6420;
    do {
      if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
        if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
             (puVar38 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar38 != (uint *)0x0)) &&
            ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
             (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
           (((uVar27 < *puVar38 && (puVar38[1] != 0)) && ((ushort)puVar38[2] != 0)))) {
          iVar18 = 0xc;
          if (*(char *)((long)puVar38 + 10) != '\0') {
            iVar18 = 0x1c;
          }
          puVar38 = (uint *)((ulong)(puVar38[1] * (int)uVar27 + (uint)(ushort)puVar38[2] * 8 +
                                    iVar18) + (long)puVar38);
          goto joined_r0x02793d00;
        }
      }
      else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
        uVar43 = uVar27 & 0xffffffff;
        if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
          uVar43 = 0;
        }
        puVar38 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar43 * 8);
joined_r0x02793d00:
        if (puVar38 != (uint *)0x0) {
          if (*puVar38 != 0) {
            do {
              if (cVar24 == '\0') {
                cVar24 = '\x01';
                *(undefined8 *)puVar14 = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                *puVar44 = 1;
                *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar20 = *(uint *)(puVar14 + 0x20);
                if (-1 < (int)uVar20) {
                  if (((ushort *)((ulong)uVar20 + (long)puVar38) != (ushort *)0x0) &&
                     (uVar11 = *(ushort *)((ulong)uVar20 + (long)puVar38), uVar11 < 0x200)) {
                    pcVar40 = pcVar3 + uVar11;
                    goto LAB_02793d34;
                  }
                  break;
                }
                if (uVar20 != 0xffffffff) break;
              }
              lVar28 = (long)puVar38 - (ulong)*puVar38;
              if ((*puVar38 == 0) || (lVar28 == 0)) break;
              lVar8 = 0xc;
              if (*(char *)(lVar28 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              if (lVar8 + lVar28 == 0) break;
              uVar43 = (ulong)*(ushort *)(lVar28 + 8);
              *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
              if (uVar43 == 0) break;
              piVar29 = (int *)(lVar8 + lVar28 + 4);
              while (piVar29[-1] != 0x54706054) {
                piVar29 = piVar29 + 2;
                uVar43 = uVar43 - 1;
                if (uVar43 == 0) goto LAB_02793d30;
              }
              iVar18 = 0;
              if (*piVar29 != -1) {
                iVar18 = *piVar29;
              }
              *(int *)(puVar14 + 0x20) = iVar18;
              if (*puVar38 == 0) break;
            } while( true );
          }
LAB_02793d30:
          pcVar40 = pcVar3;
LAB_02793d34:
          if (*pcVar40 != '\0') {
            if (*puVar38 != 0) {
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *(undefined8 *)puVar14 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                  *puVar44 = 1;
                  *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar20 = *(uint *)(puVar14 + 0x20);
                  if (-1 < (int)uVar20) {
                    if (((ushort *)((ulong)uVar20 + (long)puVar38) != (ushort *)0x0) &&
                       (uVar11 = *(ushort *)((ulong)uVar20 + (long)puVar38), uVar11 < 0x200)) {
                      pcVar40 = pcVar37 + uVar11;
                      goto LAB_02793e10;
                    }
                    break;
                  }
                  if (uVar20 != 0xffffffff) break;
                }
                lVar28 = (long)puVar38 - (ulong)*puVar38;
                if ((*puVar38 == 0) || (lVar28 == 0)) break;
                lVar8 = 0xc;
                if (*(char *)(lVar28 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                if (lVar8 + lVar28 == 0) break;
                uVar43 = (ulong)*(ushort *)(lVar28 + 8);
                *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                if (uVar43 == 0) break;
                piVar29 = (int *)(lVar8 + lVar28 + 4);
                while (piVar29[-1] != 0x54706054) {
                  piVar29 = piVar29 + 2;
                  uVar43 = uVar43 - 1;
                  if (uVar43 == 0) goto LAB_02793e0c;
                }
                iVar18 = 0;
                if (*piVar29 != -1) {
                  iVar18 = *piVar29;
                }
                *(int *)(puVar14 + 0x20) = iVar18;
                if (*puVar38 == 0) break;
              } while( true );
            }
LAB_02793e0c:
            pcVar40 = pcVar37;
LAB_02793e10:
            if (*pcVar40 == '\0') {
              local_694 = local_694 + -1;
            }
            else {
              if (*puVar38 != 0) {
                while( true ) {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *puVar44 = 1;
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    uVar20 = *puVar38;
                  }
                  else {
                    uVar20 = *(uint *)(puVar14 + 0x20);
                    if (-1 < (int)uVar20) {
                      uVar43 = 0;
                      if ((ushort *)((ulong)uVar20 + (long)puVar38) != (ushort *)0x0) {
                        uVar43 = (ulong)*(ushort *)((ulong)uVar20 + (long)puVar38);
                      }
                      goto LAB_02793edc;
                    }
                    if (uVar20 != 0xffffffff) break;
                    uVar20 = *puVar38;
                  }
                  if ((uVar20 == 0) || (puVar41 = (uint *)(ulong)uVar20, puVar38 == puVar41)) break;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar38 + (10 - (long)puVar41)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar38 + (lVar28 - (long)puVar41);
                  if (lVar28 == 0) break;
                  uVar43 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)puVar41));
                  *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                  if (uVar43 == 0) break;
                  piVar29 = (int *)(lVar28 + 4);
                  while (piVar29[-1] != 0x54706054) {
                    piVar29 = piVar29 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) goto LAB_02793ed8;
                  }
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar14 + 0x20) = iVar18;
                  if (*puVar38 == 0) break;
                }
              }
LAB_02793ed8:
              uVar43 = 0;
LAB_02793edc:
              uVar20 = (uint)uVar43;
              bVar16 = 0x1ff < uVar20;
              pcVar40 = pcVar3 + uVar43;
              uVar33 = uVar43;
              if (bVar16) {
                uVar33 = 0;
                pcVar40 = pcVar3;
              }
              *(undefined2 *)(param_1 + uVar33 * 2) = 0;
              *pcVar40 = '\0';
              pcVar40 = pcVar37 + uVar43;
              if (bVar16) {
                pcVar40 = pcVar37;
              }
              *pcVar40 = '\0';
              puVar6 = (undefined1 *)(param_1 + 0xc40) + uVar43;
              puVar12 = (undefined1 *)(param_1 + 0x600) + uVar43;
              if (bVar16) {
                puVar6 = (undefined1 *)(param_1 + 0xc40);
                puVar12 = (undefined1 *)(param_1 + 0x600);
              }
              *puVar12 = 0;
              *puVar6 = 0;
              *(undefined1 *)(param_1 + 0x54a8 + uVar33) = 0;
              if (*(ushort *)(param_1 + 0xe44) == uVar20) {
                *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
                *(undefined4 *)(param_1 + 0xe4c) = *(undefined4 *)(param_1 + 0xe4e);
                *(undefined8 *)(param_1 + 0xe44) = *(undefined8 *)puVar4;
                *(undefined2 *)puVar23 = 0xffff;
              }
              if (*puVar4 == uVar20) {
                *(undefined4 *)(param_1 + 0xe4e) = *(undefined4 *)(param_1 + 0xe50);
                *(undefined8 *)puVar4 = *(undefined8 *)puVar5;
                *(undefined2 *)puVar23 = 0xffff;
              }
              puVar44 = PTR_DAT_04bb6420;
              if (*puVar5 == uVar20) {
                *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
                *(undefined8 *)puVar5 = *(undefined8 *)puVar2;
                *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
              }
              if (*puVar2 == uVar20) {
                *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0xe4c);
                *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
                if (uVar20 == 0xffff) goto LAB_02793fc8;
              }
              else if (*(ushort *)puVar23 == uVar20) {
LAB_02793fc8:
                *puVar23 = *puVar36;
                *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
                *(undefined2 *)puVar23 = 0xffff;
              }
              if (*(ushort *)puVar36 == uVar20) {
                *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
                *puVar36 = *(uint *)(param_1 + 0xe50);
                uVar39 = *(uint *)(param_1 + 0xe50) >> 0x10;
                uVar34 = uVar39;
              }
              else {
                uVar39 = (uint)*(ushort *)(param_1 + 0xe52);
                uVar34 = (uint)*(ushort *)(param_1 + 0xe50);
              }
              if (uVar34 == uVar20) {
                *(short *)(param_1 + 0xe50) = (short)uVar39;
                *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
              }
              if (uVar39 == uVar20) {
                *(undefined2 *)puVar23 = 0xffff;
              }
            }
          }
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar22);
    if (local_694 < 1) {
      return;
    }
    bVar16 = true;
  }
  pcVar3 = (char *)(param_1 + 0x400);
  puVar44 = PTR_DAT_04bb2020 + 0x10;
  do {
    memset(&local_268,0,0x200);
    local_66a = CONCAT17((char)((ulong)local_66a >> 0x38),0x1010000);
    bVar17 = *param_2;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_680 = (undefined *)CONCAT71(local_680._1_7_,bVar17);
    uVar42 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    psVar25 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_672 = (undefined2)uVar42;
    uStack_670 = (undefined6)((ulong)uVar42 >> 0x10);
    if (*psVar25 == 0) {
      local_328 = (undefined **)uVar42;
      if ((char)((ulong)uVar42 >> 0x20) < '\x05') {
        lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_328);
        local_2c8 = (undefined **)(lVar21 - 0x15180);
        local_328 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_2c8);
      }
      psVar25 = (short *)&local_328;
      uVar27 = (ulong)local_328 >> 0x30;
      local_328._0_6_ = CONCAT24(5,(undefined4)local_328);
      local_328 = (undefined **)(CONCAT26((short)uVar27,(undefined6)local_328) & 0xff00ffffffffffff)
      ;
    }
    local_66a = *(undefined8 *)psVar25;
    local_662 = param_4 & 1;
    if (bVar16) {
      lVar21 = *(long *)PTR_DAT_04bb2208;
      uVar27 = 0;
      pcVar37 = PTR_DAT_04bb6420;
      do {
        if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
          if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
               (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0)) &&
              ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
               (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
             (((uVar27 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
            iVar18 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              iVar18 = 0x1c;
            }
            puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar27 + (uint)(ushort)puVar23[2] * 8 +
                                      iVar18) + (long)puVar23);
            goto joined_r0x027943b0;
          }
        }
        else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
          uVar43 = uVar27 & 0xffffffff;
          if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
            uVar43 = 0;
          }
          puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar43 * 8);
joined_r0x027943b0:
          if (puVar23 != (uint *)0x0) {
            if (*puVar23 != 0) {
              cVar24 = *pcVar37;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *(undefined8 *)puVar14 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                  *pcVar37 = '\x01';
                  *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar20 = *(uint *)(puVar14 + 0x20);
                  if (-1 < (int)uVar20) {
                    if (((ushort *)((ulong)uVar20 + (long)puVar23) != (ushort *)0x0) &&
                       (0x1ff < *(ushort *)((ulong)uVar20 + (long)puVar23))) goto LAB_02794260;
                    break;
                  }
                  if (uVar20 != 0xffffffff) break;
                }
                lVar28 = (long)puVar23 - (ulong)*puVar23;
                if ((*puVar23 == 0) || (lVar28 == 0)) break;
                lVar8 = 0xc;
                if (*(char *)(lVar28 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                if (lVar8 + lVar28 == 0) break;
                uVar43 = (ulong)*(ushort *)(lVar28 + 8);
                *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                if (uVar43 == 0) break;
                piVar29 = (int *)(lVar8 + lVar28 + 4);
                while (piVar29[-1] != 0x54706054) {
                  piVar29 = piVar29 + 2;
                  uVar43 = uVar43 - 1;
                  if (uVar43 == 0) goto LAB_027943d0;
                }
                iVar18 = 0;
                if (*piVar29 != -1) {
                  iVar18 = *piVar29;
                }
                *(int *)(puVar14 + 0x20) = iVar18;
                if (*puVar23 == 0) break;
              } while( true );
            }
LAB_027943d0:
            plVar26 = *(long **)PTR_DAT_04bb27d0;
            lVar28 = *plVar26;
            if (*(byte *)(lVar28 + 0x476) < 2) {
LAB_027944b0:
              bVar17 = *(byte *)(lVar28 + 0x473);
              if ((long)(char)bVar17 != 0xffffffffffffffff) {
                pbVar7 = (byte *)(lVar28 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x80;
                if (7 < bVar17) {
                  pbVar7 = (byte *)(lVar28 + 0x48);
                }
                if (((*pbVar7 >> 3 & 1) != 0) && (*(byte *)(lVar28 + 0x472) != bVar17)) {
                  if (*puVar23 != 0) {
                    cVar24 = *pcVar37;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *(undefined8 *)puVar14 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                        *pcVar37 = '\x01';
                        *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                        *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                      }
                      else {
                        uVar20 = *(uint *)(puVar14 + 0x30);
                        if (-1 < (int)uVar20) {
                          if (((char *)((ulong)uVar20 + (long)puVar23) != (char *)0x0) &&
                             (*(char *)((ulong)uVar20 + (long)puVar23) != '\0')) goto LAB_027944e4;
                          break;
                        }
                        if (uVar20 != 0xffffffff) break;
                      }
                      lVar28 = (long)puVar23 - (ulong)*puVar23;
                      if ((*puVar23 == 0) || (lVar28 == 0)) break;
                      lVar8 = 0xc;
                      if (*(char *)(lVar28 + 10) != '\0') {
                        lVar8 = 0x1c;
                      }
                      if (lVar8 + lVar28 == 0) break;
                      uVar43 = (ulong)*(ushort *)(lVar28 + 8);
                      *(undefined4 *)(puVar14 + 0x30) = 0xfffffffe;
                      if (uVar43 == 0) break;
                      piVar29 = (int *)(lVar8 + lVar28 + 4);
                      while (piVar29[-1] != -0x504e0c9a) {
                        piVar29 = piVar29 + 2;
                        uVar43 = uVar43 - 1;
                        if (uVar43 == 0) goto LAB_02794260;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0x30) = iVar18;
                      if (*puVar23 == 0) break;
                    } while( true );
                  }
                  goto LAB_02794260;
                }
              }
LAB_027944e4:
              if (*puVar23 == 0) {
LAB_0279468c:
                uVar20 = 0;
              }
              else {
                cVar24 = *pcVar37;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *pcVar37 = '\x01';
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                  }
                  else {
                    uVar20 = *(uint *)(puVar14 + 0x14);
                    if (-1 < (int)uVar20) {
                      if ((ushort *)((ulong)uVar20 + (long)puVar23) == (ushort *)0x0)
                      goto LAB_0279468c;
                      uVar20 = (uint)*(ushort *)((ulong)uVar20 + (long)puVar23);
                      goto LAB_02794690;
                    }
                    if (uVar20 != 0xffffffff) goto LAB_0279468c;
                  }
                  puVar36 = (uint *)(ulong)*puVar23;
                  uVar20 = 0;
                  if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02794690;
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                  if (lVar21 == 0) goto LAB_0279468c;
                  uVar43 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                  *(undefined4 *)(puVar14 + 0x14) = 0xfffffffe;
                  uVar20 = 0;
                  if (uVar43 == 0) goto LAB_02794690;
                  piVar29 = (int *)(lVar21 + 4);
                  while (piVar29[-1] != 0x110b14c) {
                    piVar29 = piVar29 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) {
                      uVar20 = 0;
                      goto LAB_02794690;
                    }
                  }
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar14 + 0x14) = iVar18;
                } while (*puVar23 != 0);
                uVar20 = 0;
              }
LAB_02794690:
              local_680 = (undefined *)CONCAT44(uVar20,(uint)local_680);
              if (*puVar23 == 0) {
LAB_0279476c:
                local_678 = 0;
              }
              else {
                cVar24 = *pcVar37;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *pcVar37 = '\x01';
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                  }
                  else {
                    uVar20 = *(uint *)(puVar14 + 8);
                    if (-1 < (int)uVar20) {
                      if ((ushort *)((ulong)uVar20 + (long)puVar23) == (ushort *)0x0)
                      goto LAB_0279476c;
                      local_678 = (uint)*(ushort *)((ulong)uVar20 + (long)puVar23);
                      goto LAB_02794770;
                    }
                    if (uVar20 != 0xffffffff) goto LAB_0279476c;
                  }
                  puVar36 = (uint *)(ulong)*puVar23;
                  local_678 = 0;
                  if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02794770;
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                  if (lVar21 == 0) goto LAB_0279476c;
                  uVar43 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                  *(undefined4 *)(puVar14 + 8) = 0xfffffffe;
                  local_678 = 0;
                  if (uVar43 == 0) goto LAB_02794770;
                  piVar29 = (int *)(lVar21 + 4);
                  while (piVar29[-1] != -0x786dd9a1) {
                    piVar29 = piVar29 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) {
                      local_678 = 0;
                      goto LAB_02794770;
                    }
                  }
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar14 + 8) = iVar18;
                } while (*puVar23 != 0);
                local_678 = 0;
              }
LAB_02794770:
              if (*puVar23 != 0) {
                cVar24 = *pcVar37;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *pcVar37 = '\x01';
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                  }
                  else {
                    uVar20 = *(uint *)(puVar14 + 0x10);
                    if (-1 < (int)uVar20) {
                      if ((undefined2 *)((ulong)uVar20 + (long)puVar23) != (undefined2 *)0x0) {
                        local_674 = *(undefined2 *)((ulong)uVar20 + (long)puVar23);
                        goto LAB_02794210;
                      }
                      break;
                    }
                    if (uVar20 != 0xffffffff) break;
                  }
                  puVar36 = (uint *)(ulong)*puVar23;
                  local_674 = 0xfffe;
                  if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02794210;
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                  if (lVar21 == 0) break;
                  uVar43 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                  *(undefined4 *)(puVar14 + 0x10) = 0xfffffffe;
                  if (uVar43 == 0) break;
                  piVar29 = (int *)(lVar21 + 4);
                  while (piVar29[-1] != -0x3cc576b2) {
                    piVar29 = piVar29 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) goto LAB_0279420c;
                  }
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar14 + 0x10) = iVar18;
                  if (*puVar23 == 0) break;
                } while( true );
              }
LAB_0279420c:
              local_674 = 0xfffe;
LAB_02794210:
              bVar17 = FUN_00ad48f0(*(undefined8 *)PTR_DAT_04bb64a0,puVar23,&local_680);
              uVar43 = uVar27;
              if (0x1ff < uVar27) {
                uVar43 = 0;
              }
              *(byte *)((long)&local_268 + uVar43) = bVar17 & 1;
              lVar21 = *(long *)PTR_DAT_04bb2208;
              pcVar37 = PTR_DAT_04bb6420;
            }
            else if (*puVar23 != 0) {
              cVar24 = *pcVar37;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *(undefined8 *)puVar14 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                  *pcVar37 = '\x01';
                  *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar20 = *(uint *)(puVar14 + 0x44);
                  if (-1 < (int)uVar20) {
                    if (((char *)((ulong)uVar20 + (long)puVar23) != (char *)0x0) &&
                       (*(char *)((ulong)uVar20 + (long)puVar23) != '\0')) {
                      lVar28 = *plVar26;
                      goto LAB_027944b0;
                    }
                    break;
                  }
                  if (uVar20 != 0xffffffff) break;
                }
                lVar28 = (long)puVar23 - (ulong)*puVar23;
                if ((*puVar23 == 0) || (lVar28 == 0)) break;
                lVar8 = 0xc;
                if (*(char *)(lVar28 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                if (lVar8 + lVar28 == 0) break;
                uVar43 = (ulong)*(ushort *)(lVar28 + 8);
                *(undefined4 *)(puVar14 + 0x44) = 0xfffffffe;
                if (uVar43 == 0) break;
                piVar29 = (int *)(lVar8 + lVar28 + 4);
                while (piVar29[-1] != 0x60da5fef) {
                  piVar29 = piVar29 + 2;
                  uVar43 = uVar43 - 1;
                  if (uVar43 == 0) goto LAB_02794260;
                }
                iVar18 = 0;
                if (*piVar29 != -1) {
                  iVar18 = *piVar29;
                }
                *(int *)(puVar14 + 0x44) = iVar18;
                if (*puVar23 == 0) break;
              } while( true );
            }
          }
        }
LAB_02794260:
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar22);
    }
    if (bVar13) {
      local_678 = 0x406dd52;
      local_674 = 0;
      local_672 = 0;
      local_680 = puVar44;
      iVar18 = FUN_0274bce0(param_2,&local_680);
      if (iVar18 == 0) goto LAB_02794920;
      local_680 = PTR_DAT_04bb2020 + 0x10;
      local_678 = 0x407bffc;
      local_674 = 0;
      local_672 = 0;
      uVar20 = FUN_02796a00(*(long *)PTR_DAT_04bb2208 + 0x1960,&local_680);
      if ((int)uVar20 < 0) goto LAB_02794920;
      uVar27 = (ulong)uVar20;
      if (0x1ff < uVar20) {
        uVar27 = 0;
      }
      if (*(char *)((long)&local_268 + uVar27) == '\0') goto LAB_02794920;
      lVar21 = *(long *)PTR_DAT_04bb2208;
      uVar19 = FUN_006bd550("SellTodaysFurniture",0);
      local_680 = (undefined *)CONCAT44(local_680._4_4_,uVar19);
      puVar23 = (uint *)FUN_00ad5fc0(lVar21 + 0x1960,&local_680);
      if (puVar23 == (uint *)0x0) goto LAB_02794920;
LAB_02794108:
      FUN_02796b20(param_1,param_2,puVar23);
      bVar13 = false;
LAB_02794114:
      local_694 = local_694 + -1;
    }
    else {
LAB_02794920:
      local_2c8 = &PTR_LAB_04a90e10;
      local_2c0 = 0x1000000200;
      local_320 = 0x1000000200;
      local_328 = &PTR_LAB_04a90e10;
      local_270 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_2d0 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_358 = 0x7000000c8;
      local_360 = &PTR_LAB_04a90e28;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_350 = auStack_344;
      local_318 = auStack_30c;
      local_2b8 = auStack_2ac;
      memset(&local_680,0xff,800);
      puVar15 = PTR_DAT_04bb6420;
      puVar1 = PTR_DAT_04bb2208;
      uVar20 = 0;
      if (bVar16) {
        uVar27 = 0;
        uVar43 = 0;
        do {
          lVar21 = *(long *)puVar1;
          uVar20 = (uint)uVar27;
          if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
            if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
                 (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0)) &&
                ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
                 (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
               (((uVar27 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
              iVar18 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                iVar18 = 0x1c;
              }
              puVar23 = (uint *)((ulong)(puVar23[1] * uVar20 + (uint)(ushort)puVar23[2] * 8 + iVar18
                                        ) + (long)puVar23);
              goto joined_r0x02794b60;
            }
          }
          else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
            uVar33 = uVar27 & 0xffffffff;
            if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
              uVar33 = 0;
            }
            puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar33 * 8);
joined_r0x02794b60:
            if (puVar23 != (uint *)0x0) {
              if (bVar13) {
                if (*puVar23 != 0) {
                  cVar24 = *puVar15;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    }
                    else {
                      uVar39 = *(uint *)(puVar14 + 0x24);
                      if (-1 < (int)uVar39) {
                        if (((char *)((ulong)uVar39 + (long)puVar23) != (char *)0x0) &&
                           (*(char *)((ulong)uVar39 + (long)puVar23) != '\0')) goto LAB_02795bf0;
                        break;
                      }
                      if (uVar39 != 0xffffffff) break;
                    }
                    lVar21 = (long)puVar23 - (ulong)*puVar23;
                    if ((*puVar23 == 0) || (lVar21 == 0)) break;
                    lVar28 = 0xc;
                    if (*(char *)(lVar21 + 10) != '\0') {
                      lVar28 = 0x1c;
                    }
                    if (lVar28 + lVar21 == 0) break;
                    uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                    *(undefined4 *)(puVar14 + 0x24) = 0xfffffffe;
                    if (uVar33 == 0) break;
                    piVar29 = (int *)(lVar28 + lVar21 + 4);
                    while (piVar29[-1] != 0x329d696) {
                      piVar29 = piVar29 + 2;
                      uVar33 = uVar33 - 1;
                      if (uVar33 == 0) goto LAB_02794a00;
                    }
                    iVar18 = 0;
                    if (*piVar29 != -1) {
                      iVar18 = *piVar29;
                    }
                    *(int *)(puVar14 + 0x24) = iVar18;
                    if (*puVar23 == 0) break;
                  } while( true );
                }
              }
              else {
                if (*puVar23 != 0) {
                  cVar24 = *puVar15;
                  do {
                    if (cVar24 != '\0') {
                      uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                      if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                        if (uVar33 == 0xffffffff) goto LAB_02794bb0;
                      }
                      else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                              (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_02794cc4;
LAB_02794c34:
                      uVar39 = *puVar23;
                      sVar30 = *(short *)(param_1 + 0xe54);
                      goto joined_r0x02794c3c;
                    }
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *puVar15 = 1;
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02794bb0:
                    lVar21 = (long)puVar23 - (ulong)*puVar23;
                    if (*puVar23 == 0) {
LAB_02794e5c:
                      uVar33 = 0xffffffff;
                      goto LAB_02794c34;
                    }
                    uVar33 = 0xffffffff;
                    if (lVar21 == 0) goto LAB_02794c34;
                    lVar28 = 0xc;
                    if (*(char *)(lVar21 + 10) != '\0') {
                      lVar28 = 0x1c;
                    }
                    if (lVar28 + lVar21 == 0) goto LAB_02794e5c;
                    uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                    *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                    if (uVar33 == 0) {
LAB_02794c30:
                      uVar33 = 0xfffffffe;
                      goto LAB_02794c34;
                    }
                    piVar29 = (int *)(lVar28 + lVar21 + 4);
                    while (piVar29[-1] != 0x7eabefae) {
                      piVar29 = piVar29 + 2;
                      uVar33 = uVar33 - 1;
                      if (uVar33 == 0) goto LAB_02794c30;
                    }
                    iVar18 = 0;
                    if (*piVar29 != -1) {
                      iVar18 = *piVar29;
                    }
                    *(int *)(puVar14 + 0xc) = iVar18;
                  } while (*puVar23 != 0);
                }
                sVar30 = *(short *)(param_1 + 0xe54);
LAB_02794cb8:
                sVar31 = 0;
LAB_02794cbc:
                if (sVar30 == sVar31) {
LAB_02795730:
                  bVar9 = true;
                }
                else {
LAB_02794cc4:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_02794d10;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_02794ed4;
LAB_02794d98:
                        sVar30 = *(short *)(param_1 + 0xe56);
                        sVar31 = 0;
                        if (*puVar23 == 0) goto LAB_02794ecc;
                        cVar24 = *puVar15;
                        goto LAB_02794da8;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02794d10:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02794e64:
                        uVar33 = 0xffffffff;
                        goto LAB_02794d98;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_02794d98;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02794e64;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_02794d94:
                        uVar33 = 0xfffffffe;
                        goto LAB_02794d98;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_02794d94;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe56);
LAB_02794d8c:
                  sVar31 = 0;
LAB_02794ecc:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_02794ed4:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_02794f20;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_02795034;
LAB_02794fa4:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe58);
                        goto joined_r0x02794fac;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02794f20:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02795510:
                        uVar33 = 0xffffffff;
                        goto LAB_02794fa4;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_02794fa4;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02795510;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_02794fa0:
                        uVar33 = 0xfffffffe;
                        goto LAB_02794fa4;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_02794fa0;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe58);
LAB_02795028:
                  sVar31 = 0;
LAB_0279502c:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_02795034:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_02795080;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_02795194;
LAB_02795104:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe5a);
                        goto joined_r0x0279510c;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02795080:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_0279566c:
                        uVar33 = 0xffffffff;
                        goto LAB_02795104;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_02795104;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_0279566c;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_02795100:
                        uVar33 = 0xfffffffe;
                        goto LAB_02795104;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_02795100;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe5a);
LAB_02795188:
                  sVar31 = 0;
LAB_0279518c:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_02795194:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_027951e0;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_027952f4;
LAB_02795264:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe5c);
                        goto joined_r0x0279526c;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_027951e0:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02795a9c:
                        uVar33 = 0xffffffff;
                        goto LAB_02795264;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_02795264;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02795a9c;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_02795260:
                        uVar33 = 0xfffffffe;
                        goto LAB_02795264;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_02795260;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe5c);
LAB_027952e8:
                  sVar31 = 0;
LAB_027952ec:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_027952f4:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_02795340;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_02795454;
LAB_027953c4:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe5e);
                        goto joined_r0x027953cc;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02795340:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02795bac:
                        uVar33 = 0xffffffff;
                        goto LAB_027953c4;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_027953c4;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02795bac;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_027953c0:
                        uVar33 = 0xfffffffe;
                        goto LAB_027953c4;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_027953c0;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe5e);
LAB_02795448:
                  sVar31 = 0;
LAB_0279544c:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_02795454:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_02795498;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_027955b0;
LAB_0279551c:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe60);
                        goto joined_r0x02795524;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_02795498:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02795d1c:
                        uVar33 = 0xffffffff;
                        goto LAB_0279551c;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_0279551c;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02795d1c;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_02795518:
                        uVar33 = 0xfffffffe;
                        goto LAB_0279551c;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_02795518;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe60);
LAB_027955a4:
                  sVar31 = 0;
LAB_027955a8:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_027955b0:
                  if (*puVar23 != 0) {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 != '\0') {
                        uVar33 = (ulong)*(uint *)(puVar14 + 0xc);
                        if ((int)*(uint *)(puVar14 + 0xc) < 0) {
                          if (uVar33 == 0xffffffff) goto LAB_027955f4;
                        }
                        else if (((short *)(uVar33 + (long)puVar23) != (short *)0x0) &&
                                (*(short *)(uVar33 + (long)puVar23) == 100)) goto LAB_027960e0;
LAB_027956a0:
                        uVar39 = *puVar23;
                        sVar30 = *(short *)(param_1 + 0xe62);
                        goto joined_r0x027956a8;
                      }
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
LAB_027955f4:
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if (*puVar23 == 0) {
LAB_02795e2c:
                        uVar33 = 0xffffffff;
                        goto LAB_027956a0;
                      }
                      uVar33 = 0xffffffff;
                      if (lVar21 == 0) goto LAB_027956a0;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) goto LAB_02795e2c;
                      uVar33 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                      if (uVar33 == 0) {
LAB_0279569c:
                        uVar33 = 0xfffffffe;
                        goto LAB_027956a0;
                      }
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x7eabefae) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) goto LAB_0279569c;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0xc) = iVar18;
                    } while (*puVar23 != 0);
                  }
                  sVar30 = *(short *)(param_1 + 0xe62);
LAB_02795724:
                  sVar31 = 0;
LAB_02795728:
                  if (sVar30 == sVar31) goto LAB_02795730;
LAB_027960e0:
                  bVar9 = false;
                }
                sVar30 = *(short *)(param_1 + 0xe44);
                if (*puVar23 == 0) {
LAB_0279580c:
                  sVar31 = 0;
                }
                else {
                  cVar24 = *puVar15;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    }
                    else {
                      uVar39 = *(uint *)(puVar14 + 0x20);
                      if (-1 < (int)uVar39) {
                        if ((short *)((ulong)uVar39 + (long)puVar23) == (short *)0x0)
                        goto LAB_0279580c;
                        sVar31 = *(short *)((ulong)uVar39 + (long)puVar23);
                        goto LAB_02795810;
                      }
                      if (uVar39 != 0xffffffff) goto LAB_0279580c;
                    }
                    puVar36 = (uint *)(ulong)*puVar23;
                    sVar31 = 0;
                    if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02795810;
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                    if (lVar21 == 0) goto LAB_0279580c;
                    uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                    sVar31 = 0;
                    if (uVar33 == 0) goto LAB_02795810;
                    piVar29 = (int *)(lVar21 + 4);
                    while (piVar29[-1] != 0x54706054) {
                      piVar29 = piVar29 + 2;
                      uVar33 = uVar33 - 1;
                      if (uVar33 == 0) {
                        sVar31 = 0;
                        goto LAB_02795810;
                      }
                    }
                    iVar18 = 0;
                    if (*piVar29 != -1) {
                      iVar18 = *piVar29;
                    }
                    *(int *)(puVar14 + 0x20) = iVar18;
                  } while (*puVar23 != 0);
                  sVar31 = 0;
                }
LAB_02795810:
                if (sVar30 != sVar31) {
                  if (*puVar23 == 0) {
LAB_027958ec:
                    sVar30 = 0;
                  }
                  else {
                    cVar24 = *puVar15;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *(undefined8 *)puVar14 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                        *puVar15 = 1;
                        *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                        *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                      }
                      else {
                        uVar39 = *(uint *)(puVar14 + 0x20);
                        if (-1 < (int)uVar39) {
                          if ((short *)((ulong)uVar39 + (long)puVar23) == (short *)0x0)
                          goto LAB_027958ec;
                          sVar30 = *(short *)((ulong)uVar39 + (long)puVar23);
                          goto LAB_027958f0;
                        }
                        if (uVar39 != 0xffffffff) goto LAB_027958ec;
                      }
                      puVar36 = (uint *)(ulong)*puVar23;
                      sVar30 = 0;
                      if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_027958f0;
                      lVar21 = 0xc;
                      if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                        lVar21 = 0x1c;
                      }
                      lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                      if (lVar21 == 0) goto LAB_027958ec;
                      uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                      *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                      sVar30 = 0;
                      if (uVar33 == 0) goto LAB_027958f0;
                      piVar29 = (int *)(lVar21 + 4);
                      while (piVar29[-1] != 0x54706054) {
                        piVar29 = piVar29 + 2;
                        uVar33 = uVar33 - 1;
                        if (uVar33 == 0) {
                          sVar30 = 0;
                          goto LAB_027958f0;
                        }
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0x20) = iVar18;
                    } while (*puVar23 != 0);
                    sVar30 = 0;
                  }
LAB_027958f0:
                  if (*(short *)(param_1 + 0xe46) != sVar30) {
                    if (*puVar23 == 0) {
LAB_027959cc:
                      sVar30 = 0;
                    }
                    else {
                      cVar24 = *puVar15;
                      do {
                        if (cVar24 == '\0') {
                          cVar24 = '\x01';
                          *(undefined8 *)puVar14 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                          *puVar15 = 1;
                          *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                          *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                        }
                        else {
                          uVar39 = *(uint *)(puVar14 + 0x20);
                          if (-1 < (int)uVar39) {
                            if ((short *)((ulong)uVar39 + (long)puVar23) == (short *)0x0)
                            goto LAB_027959cc;
                            sVar30 = *(short *)((ulong)uVar39 + (long)puVar23);
                            goto LAB_027959d0;
                          }
                          if (uVar39 != 0xffffffff) goto LAB_027959cc;
                        }
                        puVar36 = (uint *)(ulong)*puVar23;
                        sVar30 = 0;
                        if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_027959d0;
                        lVar21 = 0xc;
                        if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                          lVar21 = 0x1c;
                        }
                        lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                        if (lVar21 == 0) goto LAB_027959cc;
                        uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                        *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                        sVar30 = 0;
                        if (uVar33 == 0) goto LAB_027959d0;
                        piVar29 = (int *)(lVar21 + 4);
                        while (piVar29[-1] != 0x54706054) {
                          piVar29 = piVar29 + 2;
                          uVar33 = uVar33 - 1;
                          if (uVar33 == 0) {
                            sVar30 = 0;
                            goto LAB_027959d0;
                          }
                        }
                        iVar18 = 0;
                        if (*piVar29 != -1) {
                          iVar18 = *piVar29;
                        }
                        *(int *)(puVar14 + 0x20) = iVar18;
                      } while (*puVar23 != 0);
                      sVar30 = 0;
                    }
LAB_027959d0:
                    if (*(short *)(param_1 + 0xe48) != sVar30) {
                      if (*puVar23 == 0) {
LAB_02795acc:
                        sVar30 = 0;
                      }
                      else {
                        cVar24 = *puVar15;
                        do {
                          if (cVar24 == '\0') {
                            cVar24 = '\x01';
                            *(undefined8 *)puVar14 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                            *puVar15 = 1;
                            *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                            *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                          }
                          else {
                            uVar39 = *(uint *)(puVar14 + 0x20);
                            if (-1 < (int)uVar39) {
                              if ((short *)((ulong)uVar39 + (long)puVar23) == (short *)0x0)
                              goto LAB_02795acc;
                              sVar30 = *(short *)((ulong)uVar39 + (long)puVar23);
                              goto LAB_02795ad0;
                            }
                            if (uVar39 != 0xffffffff) goto LAB_02795acc;
                          }
                          puVar36 = (uint *)(ulong)*puVar23;
                          sVar30 = 0;
                          if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02795ad0;
                          lVar21 = 0xc;
                          if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                            lVar21 = 0x1c;
                          }
                          lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                          if (lVar21 == 0) goto LAB_02795acc;
                          uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                          *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                          sVar30 = 0;
                          if (uVar33 == 0) goto LAB_02795ad0;
                          piVar29 = (int *)(lVar21 + 4);
                          while (piVar29[-1] != 0x54706054) {
                            piVar29 = piVar29 + 2;
                            uVar33 = uVar33 - 1;
                            if (uVar33 == 0) {
                              sVar30 = 0;
                              goto LAB_02795ad0;
                            }
                          }
                          iVar18 = 0;
                          if (*piVar29 != -1) {
                            iVar18 = *piVar29;
                          }
                          *(int *)(puVar14 + 0x20) = iVar18;
                        } while (*puVar23 != 0);
                        sVar30 = 0;
                      }
LAB_02795ad0:
                      if (*(short *)(param_1 + 0xe4a) != sVar30) {
                        if (*puVar23 == 0) {
LAB_02795bdc:
                          sVar30 = 0;
                        }
                        else {
                          cVar24 = *puVar15;
                          do {
                            if (cVar24 == '\0') {
                              cVar24 = '\x01';
                              *(undefined8 *)puVar14 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                              *puVar15 = 1;
                              *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                              *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                            }
                            else {
                              uVar39 = *(uint *)(puVar14 + 0x20);
                              if (-1 < (int)uVar39) {
                                if ((short *)((ulong)uVar39 + (long)puVar23) == (short *)0x0)
                                goto LAB_02795bdc;
                                sVar30 = *(short *)((ulong)uVar39 + (long)puVar23);
                                goto LAB_02795be0;
                              }
                              if (uVar39 != 0xffffffff) goto LAB_02795bdc;
                            }
                            puVar36 = (uint *)(ulong)*puVar23;
                            sVar30 = 0;
                            if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02795be0;
                            lVar21 = 0xc;
                            if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                              lVar21 = 0x1c;
                            }
                            lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                            if (lVar21 == 0) goto LAB_02795bdc;
                            uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                            *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                            sVar30 = 0;
                            if (uVar33 == 0) goto LAB_02795be0;
                            piVar29 = (int *)(lVar21 + 4);
                            while (piVar29[-1] != 0x54706054) {
                              piVar29 = piVar29 + 2;
                              uVar33 = uVar33 - 1;
                              if (uVar33 == 0) {
                                sVar30 = 0;
                                goto LAB_02795be0;
                              }
                            }
                            iVar18 = 0;
                            if (*piVar29 != -1) {
                              iVar18 = *piVar29;
                            }
                            *(int *)(puVar14 + 0x20) = iVar18;
                          } while (*puVar23 != 0);
                          sVar30 = 0;
                        }
LAB_02795be0:
                        if (*(short *)(param_1 + 0xe4c) == sVar30) {
                          bVar9 = true;
                        }
                        if (!bVar9) {
LAB_02795bf0:
                          uVar33 = uVar27;
                          if (0x1ff < uVar27) {
                            uVar33 = 0;
                          }
                          if (*(char *)((long)&local_268 + uVar33) != '\0') {
                            uVar39 = 1 << (ulong)(uVar20 & 0x1f);
                            if ((*(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) & uVar39) == 0)
                            {
                              *(uint *)(local_2b8 + ((long)(uVar27 << 0x20) >> 0x25) * 4) =
                                   *(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) | uVar39;
                              local_2b0 = local_2b0 + 1;
                              if (*puVar23 != 0) goto LAB_02795c4c;
LAB_02795d5c:
                              uVar33 = 0;
                            }
                            else {
                              if (*puVar23 == 0) goto LAB_02795d5c;
LAB_02795c4c:
                              cVar24 = *puVar15;
                              do {
                                if (cVar24 == '\0') {
                                  cVar24 = '\x01';
                                  *(undefined8 *)puVar14 = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                                  *puVar15 = 1;
                                  *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                                  *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                                  *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                                }
                                else {
                                  uVar20 = *(uint *)(puVar14 + 0xc);
                                  if (-1 < (int)uVar20) {
                                    if ((ushort *)((ulong)uVar20 + (long)puVar23) == (ushort *)0x0)
                                    goto LAB_02795d5c;
                                    uVar33 = (ulong)*(ushort *)((ulong)uVar20 + (long)puVar23);
                                    goto LAB_02795d60;
                                  }
                                  if (uVar20 != 0xffffffff) goto LAB_02795d5c;
                                }
                                puVar36 = (uint *)(ulong)*puVar23;
                                uVar33 = 0;
                                if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02795d60;
                                lVar21 = 0xc;
                                if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                                  lVar21 = 0x1c;
                                }
                                lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                                if (lVar21 == 0) goto LAB_02795d5c;
                                uVar35 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                                *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                                uVar33 = 0;
                                if (uVar35 == 0) goto LAB_02795d60;
                                piVar29 = (int *)(lVar21 + 4);
                                while (piVar29[-1] != 0x7eabefae) {
                                  piVar29 = piVar29 + 2;
                                  uVar35 = uVar35 - 1;
                                  if (uVar35 == 0) {
                                    uVar33 = 0;
                                    goto LAB_02795d60;
                                  }
                                }
                                iVar18 = 0;
                                if (*piVar29 != -1) {
                                  iVar18 = *piVar29;
                                }
                                *(int *)(puVar14 + 0xc) = iVar18;
                              } while (*puVar23 != 0);
                              uVar33 = 0;
                            }
LAB_02795d60:
                            if ((*(uint *)(local_318 + (uVar33 >> 5) * 4) >>
                                 (ulong)((uint)uVar33 & 0x1f) & 1) == 0) {
                              if (*puVar23 == 0) {
LAB_02795e6c:
                                uVar33 = 0;
                              }
                              else {
                                cVar24 = *puVar15;
                                do {
                                  if (cVar24 == '\0') {
                                    cVar24 = '\x01';
                                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                                    *puVar15 = 1;
                                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                                  }
                                  else {
                                    uVar20 = *(uint *)(puVar14 + 0xc);
                                    if (-1 < (int)uVar20) {
                                      if ((ushort *)((ulong)uVar20 + (long)puVar23) == (ushort *)0x0
                                         ) goto LAB_02795e6c;
                                      uVar33 = (ulong)*(ushort *)((ulong)uVar20 + (long)puVar23);
                                      goto LAB_02795e70;
                                    }
                                    if (uVar20 != 0xffffffff) goto LAB_02795e6c;
                                  }
                                  puVar36 = (uint *)(ulong)*puVar23;
                                  uVar33 = 0;
                                  if ((*puVar23 == 0) || (puVar23 == puVar36)) goto LAB_02795e70;
                                  lVar21 = 0xc;
                                  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                                    lVar21 = 0x1c;
                                  }
                                  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                                  if (lVar21 == 0) goto LAB_02795e6c;
                                  uVar35 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                                  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                                  uVar33 = 0;
                                  if (uVar35 == 0) goto LAB_02795e70;
                                  piVar29 = (int *)(lVar21 + 4);
                                  while (piVar29[-1] != 0x7eabefae) {
                                    piVar29 = piVar29 + 2;
                                    uVar35 = uVar35 - 1;
                                    if (uVar35 == 0) {
                                      uVar33 = 0;
                                      goto LAB_02795e70;
                                    }
                                  }
                                  iVar18 = 0;
                                  if (*piVar29 != -1) {
                                    iVar18 = *piVar29;
                                  }
                                  *(int *)(puVar14 + 0xc) = iVar18;
                                } while (*puVar23 != 0);
                                uVar33 = 0;
                              }
LAB_02795e70:
                              uVar20 = 1 << (ulong)((uint)uVar33 & 0x1f);
                              if ((uVar20 & *(uint *)(local_318 + (uVar33 >> 5) * 4)) == 0) {
                                *(uint *)(local_318 + (uVar33 >> 5) * 4) =
                                     uVar20 | *(uint *)(local_318 + (uVar33 >> 5) * 4);
                                local_310 = local_310 + 1;
                              }
                              cVar24 = *puVar15;
                              uVar20 = 0;
                              if (*puVar23 != 0) goto LAB_02795ec8;
                              puVar36 = (uint *)0x0;
LAB_02795fe8:
                              do {
                                if (((uint)puVar36 <= uVar20) ||
                                   (uVar39 = (uint)uVar43, 199 < (int)uVar39)) break;
                                uVar34 = 0;
                                if (*puVar23 != 0) {
                                  do {
                                    if (cVar24 != '\0') {
                                      uVar32 = *(uint *)(puVar14 + 0xc);
                                      if ((int)uVar32 < 0) {
                                        if (uVar32 == 0xffffffff) {
                                          uVar32 = *puVar23;
                                          if (uVar32 != 0) goto LAB_02796048;
                                          uVar34 = 0;
                                        }
                                        else {
LAB_02795f84:
                                          uVar34 = 0;
                                        }
                                      }
                                      else {
                                        uVar34 = 0;
                                        if ((ushort *)((ulong)uVar32 + (long)puVar23) !=
                                            (ushort *)0x0) {
                                          uVar34 = (uint)*(ushort *)((ulong)uVar32 + (long)puVar23);
                                        }
                                      }
                                      goto LAB_02795f90;
                                    }
                                    cVar24 = '\x01';
                                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                                    *puVar15 = 1;
                                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                                    uVar32 = *puVar23;
                                    uVar34 = 0;
                                    if (uVar32 == 0) goto LAB_02795f90;
LAB_02796048:
                                    puVar36 = (uint *)(ulong)uVar32;
                                    if (puVar23 == puVar36) goto LAB_02795f84;
                                    lVar21 = 0xc;
                                    if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                                      lVar21 = 0x1c;
                                    }
                                    lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                                    if (lVar21 == 0) goto LAB_02795f84;
                                    uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36))
                                    ;
                                    *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                                    uVar34 = 0;
                                    if (uVar33 == 0) goto LAB_02795f90;
                                    piVar29 = (int *)(lVar21 + 4);
                                    while (piVar29[-1] != 0x7eabefae) {
                                      piVar29 = piVar29 + 2;
                                      uVar33 = uVar33 - 1;
                                      if (uVar33 == 0) {
                                        uVar34 = 0;
                                        goto LAB_02795f90;
                                      }
                                    }
                                    iVar18 = 0;
                                    if (*piVar29 != -1) {
                                      iVar18 = *piVar29;
                                    }
                                    *(int *)(puVar14 + 0xc) = iVar18;
                                  } while (*puVar23 != 0);
                                  uVar34 = 0;
                                }
LAB_02795f90:
                                uVar33 = uVar43;
                                if (199 < uVar39) {
                                  uVar33 = 0;
                                }
                                *(uint *)((long)&local_680 + uVar33 * 4) = uVar34;
                                uVar34 = 1 << (ulong)(uVar39 & 0x1f);
                                if ((*(uint *)(local_350 + (long)((int)uVar39 >> 5) * 4) & uVar34)
                                    == 0) {
                                  *(uint *)(local_350 + ((long)(uVar43 << 0x20) >> 0x25) * 4) =
                                       *(uint *)(local_350 + (long)((int)uVar39 >> 5) * 4) | uVar34;
                                  local_348 = local_348 + 1;
                                }
                                uVar43 = (ulong)(uVar39 + 1);
                                uVar20 = uVar20 + 1;
                                puVar36 = (uint *)(ulong)*puVar23;
                                if (*puVar23 != 0) {
LAB_02795ec8:
                                  while (cVar24 == '\0') {
                                    cVar24 = '\x01';
                                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                                    *puVar15 = 1;
                                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                                    puVar36 = (uint *)(ulong)*puVar23;
                                    if (*puVar23 == 0) goto LAB_02795fe8;
LAB_02795f18:
                                    if (puVar23 == puVar36) goto LAB_02795f6c;
                                    lVar21 = 0xc;
                                    if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                                      lVar21 = 0x1c;
                                    }
                                    lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
                                    if (lVar21 == 0) goto LAB_02795f6c;
                                    uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36))
                                    ;
                                    *(undefined4 *)(puVar14 + 0x50) = 0xfffffffe;
                                    puVar36 = (uint *)0x0;
                                    if (uVar33 == 0) goto LAB_02795fe8;
                                    piVar29 = (int *)(lVar21 + 4);
                                    while (piVar29[-1] != -0xe9c1742) {
                                      piVar29 = piVar29 + 2;
                                      uVar33 = uVar33 - 1;
                                      if (uVar33 == 0) {
                                        puVar36 = (uint *)0x0;
                                        goto LAB_02795fe8;
                                      }
                                    }
                                    iVar18 = 0;
                                    if (*piVar29 != -1) {
                                      iVar18 = *piVar29;
                                    }
                                    *(int *)(puVar14 + 0x50) = iVar18;
                                    puVar36 = (uint *)(ulong)*puVar23;
                                    if (*puVar23 == 0) goto LAB_02795fe8;
                                  }
                                  uVar39 = *(uint *)(puVar14 + 0x50);
                                  if ((int)uVar39 < 0) {
                                    if (uVar39 == 0xffffffff) {
                                      puVar36 = (uint *)(ulong)*puVar23;
                                      if (*puVar23 != 0) goto LAB_02795f18;
                                      puVar36 = (uint *)0x0;
                                    }
                                    else {
LAB_02795f6c:
                                      puVar36 = (uint *)0x0;
                                    }
                                  }
                                  else {
                                    puVar36 = (uint *)0x0;
                                    if ((byte *)((ulong)uVar39 + (long)puVar23) != (byte *)0x0) {
                                      puVar36 = (uint *)(ulong)*(byte *)((ulong)uVar39 +
                                                                        (long)puVar23);
                                    }
                                  }
                                }
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_02794a00:
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar22);
        if ((int)local_348 < 1) {
          cVar24 = *puVar15;
          uVar27 = 0;
          do {
            uVar43 = uVar27;
            if (0x1ff < uVar27) {
              uVar43 = 0;
            }
            if (*(char *)((long)&local_268 + uVar43) != '\0') {
              lVar21 = *(long *)puVar1;
              uVar20 = (uint)uVar27;
              if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
                if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
                     (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0))
                    && ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
                        (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
                   (((uVar27 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                  iVar18 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    iVar18 = 0x1c;
                  }
                  puVar23 = (uint *)((ulong)(puVar23[1] * uVar20 + (uint)(ushort)puVar23[2] * 8 +
                                            iVar18) + (long)puVar23);
                  goto joined_r0x02796520;
                }
              }
              else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
                uVar43 = uVar27 & 0xffffffff;
                if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
                  uVar43 = 0;
                }
                puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar43 * 8);
joined_r0x02796520:
                if (puVar23 != (uint *)0x0) {
                  if (*puVar23 != 0) {
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *(undefined8 *)puVar14 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                        *puVar15 = 1;
                        *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                        *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                      }
                      else {
                        uVar39 = *(uint *)(puVar14 + 0x20);
                        if (-1 < (int)uVar39) {
                          if (((ushort *)((ulong)uVar39 + (long)puVar23) != (ushort *)0x0) &&
                             (uVar11 = *(ushort *)((ulong)uVar39 + (long)puVar23), uVar11 < 0x200))
                          {
                            cVar10 = pcVar3[uVar11];
                            goto joined_r0x0279654c;
                          }
                          break;
                        }
                        if (uVar39 != 0xffffffff) break;
                      }
                      lVar21 = (long)puVar23 - (ulong)*puVar23;
                      if ((*puVar23 == 0) || (lVar21 == 0)) break;
                      lVar28 = 0xc;
                      if (*(char *)(lVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      if (lVar28 + lVar21 == 0) break;
                      uVar43 = (ulong)*(ushort *)(lVar21 + 8);
                      *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                      if (uVar43 == 0) break;
                      piVar29 = (int *)(lVar28 + lVar21 + 4);
                      while (piVar29[-1] != 0x54706054) {
                        piVar29 = piVar29 + 2;
                        uVar43 = uVar43 - 1;
                        if (uVar43 == 0) goto LAB_02796554;
                      }
                      iVar18 = 0;
                      if (*piVar29 != -1) {
                        iVar18 = *piVar29;
                      }
                      *(int *)(puVar14 + 0x20) = iVar18;
                      if (*puVar23 == 0) break;
                    } while( true );
                  }
LAB_02796554:
                  cVar10 = *pcVar3;
joined_r0x0279654c:
                  if (cVar10 == '\0') {
                    uVar39 = 1 << (ulong)(uVar20 & 0x1f);
                    if ((*(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) & uVar39) == 0) {
                      *(uint *)(local_2b8 + ((long)(uVar27 << 0x20) >> 0x25) * 4) =
                           *(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) | uVar39;
                      local_2b0 = local_2b0 + 1;
                    }
                  }
                }
              }
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar22);
          uVar20 = local_2b0;
          goto LAB_027965a0;
        }
        puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar20 = *puVar23 ^ *puVar23 << 0xb;
        uVar39 = puVar23[3];
        *puVar23 = puVar23[1];
        puVar23[1] = puVar23[2];
        uVar20 = uVar20 >> 8 ^ uVar39 >> 0x13 ^ uVar20 ^ uVar39;
        puVar23[2] = uVar39;
        puVar23[3] = uVar20;
        puVar15 = PTR_DAT_04bb6420;
        puVar1 = PTR_DAT_04bb2208;
        if (0 < (int)(uint)local_358) {
          uVar39 = 0;
          puVar23 = (uint *)&local_680;
          uVar27 = (ulong)local_348 * (ulong)uVar20 >> 0x20;
          do {
            if ((*(uint *)(local_350 + (ulong)(uVar39 >> 5) * 4) >> (ulong)(uVar39 & 0x1f) & 1) != 0
               ) {
              if ((int)uVar27 == 0) {
                if (199 < uVar39) {
                  puVar23 = (uint *)&local_680;
                }
                goto LAB_027961b4;
              }
              uVar27 = (ulong)((int)uVar27 - 1);
            }
            uVar39 = uVar39 + 1;
            puVar23 = puVar23 + 1;
          } while ((uint)local_358 != uVar39);
        }
        puVar23 = (uint *)&local_680;
LAB_027961b4:
        uVar39 = *puVar23;
        if ((int)uVar39 < 0) {
          return;
        }
        cVar24 = *PTR_DAT_04bb6420;
        uVar27 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2208;
        do {
          uVar20 = (uint)uVar27;
          if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
            if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
                 (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0)) &&
                ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
                 (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
               (((uVar27 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
              iVar18 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                iVar18 = 0x1c;
              }
              puVar23 = (uint *)((ulong)(puVar23[1] * uVar20 + (uint)(ushort)puVar23[2] * 8 + iVar18
                                        ) + (long)puVar23);
              goto joined_r0x02796390;
            }
          }
          else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
            uVar43 = uVar27 & 0xffffffff;
            if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
              uVar43 = 0;
            }
            puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar43 * 8);
joined_r0x02796390:
            if (puVar23 != (uint *)0x0) {
              if (*puVar23 != 0) {
                while( true ) {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *(undefined8 *)puVar14 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *puVar15 = 1;
                    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    uVar34 = *puVar23;
                  }
                  else {
                    uVar34 = *(uint *)(puVar14 + 0xc);
                    if (-1 < (int)uVar34) {
                      uVar32 = 0;
                      if ((ushort *)((ulong)uVar34 + (long)puVar23) != (ushort *)0x0) {
                        uVar32 = (uint)*(ushort *)((ulong)uVar34 + (long)puVar23);
                      }
                      goto LAB_027962e4;
                    }
                    if (uVar34 != 0xffffffff) break;
                    uVar34 = *puVar23;
                  }
                  if ((uVar34 == 0) || (puVar36 = (uint *)(ulong)uVar34, puVar23 == puVar36)) break;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar23 + (lVar28 - (long)puVar36);
                  if (lVar28 == 0) break;
                  uVar43 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
                  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
                  if (uVar43 == 0) break;
                  piVar29 = (int *)(lVar28 + 4);
                  while (piVar29[-1] != 0x7eabefae) {
                    piVar29 = piVar29 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) goto LAB_027962e0;
                  }
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar14 + 0xc) = iVar18;
                  if (*puVar23 == 0) break;
                }
              }
LAB_027962e0:
              uVar32 = 0;
LAB_027962e4:
              if (uVar39 != uVar32) {
                uVar34 = 1 << (ulong)(uVar20 & 0x1f);
                if ((*(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) & uVar34) != 0) {
                  *(uint *)(local_2b8 + ((long)(uVar27 << 0x20) >> 0x25) * 4) =
                       *(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) & (uVar34 ^ 0xffffffff);
                  local_2b0 = local_2b0 - 1;
                  lVar21 = *(long *)puVar1;
                }
              }
            }
          }
          uVar27 = uVar27 + 1;
          uVar20 = local_2b0;
        } while (uVar27 != uVar22);
      }
      else {
LAB_027965a0:
        if ((0 < (int)uVar22) && ((int)uVar20 < 1)) {
          cVar24 = *puVar15;
          uVar27 = 0;
          lVar21 = *(long *)puVar1;
          do {
            uVar20 = (uint)uVar27;
            if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
              if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
                   (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0))
                  && ((*(uint *)(lVar21 + 0x1a28) <= uVar27 ||
                      (*(char *)(*(long *)(lVar21 + 0x1a30) + uVar27) != '\0')))) &&
                 (((uVar27 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                iVar18 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  iVar18 = 0x1c;
                }
                puVar23 = (uint *)((ulong)(puVar23[1] * uVar20 + (uint)(ushort)puVar23[2] * 8 +
                                          iVar18) + (long)puVar23);
                goto joined_r0x02796710;
              }
            }
            else if (uVar27 < *(uint *)(lVar21 + 0x1b20)) {
              uVar43 = uVar27;
              if (*(uint *)(lVar21 + 0x1b10) <= uVar27) {
                uVar43 = 0;
              }
              puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + uVar43 * 8);
joined_r0x02796710:
              if (puVar23 != (uint *)0x0) {
                if (*puVar23 != 0) {
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *(undefined8 *)puVar14 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                      *puVar15 = 1;
                      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    }
                    else {
                      uVar39 = *(uint *)(puVar14 + 0x20);
                      if (-1 < (int)uVar39) {
                        if (((ushort *)((ulong)uVar39 + (long)puVar23) != (ushort *)0x0) &&
                           (uVar11 = *(ushort *)((ulong)uVar39 + (long)puVar23), uVar11 < 0x200)) {
                          cVar10 = pcVar3[uVar11];
                          goto joined_r0x0279673c;
                        }
                        break;
                      }
                      if (uVar39 != 0xffffffff) break;
                    }
                    lVar28 = (long)puVar23 - (ulong)*puVar23;
                    if ((*puVar23 == 0) || (lVar28 == 0)) break;
                    lVar8 = 0xc;
                    if (*(char *)(lVar28 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    if (lVar8 + lVar28 == 0) break;
                    uVar43 = (ulong)*(ushort *)(lVar28 + 8);
                    *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                    if (uVar43 == 0) break;
                    piVar29 = (int *)(lVar8 + lVar28 + 4);
                    while (piVar29[-1] != 0x54706054) {
                      piVar29 = piVar29 + 2;
                      uVar43 = uVar43 - 1;
                      if (uVar43 == 0) goto LAB_02796744;
                    }
                    iVar18 = 0;
                    if (*piVar29 != -1) {
                      iVar18 = *piVar29;
                    }
                    *(int *)(puVar14 + 0x20) = iVar18;
                    if (*puVar23 == 0) break;
                  } while( true );
                }
LAB_02796744:
                cVar10 = *pcVar3;
joined_r0x0279673c:
                if (cVar10 == '\0') {
                  uVar39 = 1 << (ulong)(uVar20 & 0x1f);
                  if ((*(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) & uVar39) == 0) {
                    *(uint *)(local_2b8 + ((long)(uVar27 << 0x20) >> 0x25) * 4) =
                         *(uint *)(local_2b8 + (long)((int)uVar20 >> 5) * 4) | uVar39;
                    local_2b0 = local_2b0 + 1;
                    lVar21 = *(long *)puVar1;
                  }
                }
              }
            }
            uVar27 = uVar27 + 1;
            uVar20 = local_2b0;
          } while (uVar27 != uVar22);
        }
      }
      if (0 < (int)uVar20) {
        puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar20 = *puVar23 ^ *puVar23 << 0xb;
        uVar39 = puVar23[3];
        *puVar23 = puVar23[1];
        puVar23[1] = puVar23[2];
        uVar20 = uVar20 >> 8 ^ uVar39 >> 0x13 ^ uVar20 ^ uVar39;
        puVar23[2] = uVar39;
        puVar23[3] = uVar20;
        puVar1 = PTR_DAT_04bb6420;
        if ((int)(uint)local_2c0 < 1) {
          uVar39 = 0xffffffff;
        }
        else {
          uVar39 = 0;
          uVar27 = (ulong)local_2b0 * (ulong)uVar20 >> 0x20;
          do {
            if ((*(uint *)(local_2b8 + (ulong)(uVar39 >> 5) * 4) >> (ulong)(uVar39 & 0x1f) & 1) != 0
               ) {
              if ((int)uVar27 == 0) goto LAB_0279684c;
              uVar27 = (ulong)((int)uVar27 - 1);
            }
            uVar39 = uVar39 + 1;
          } while ((uint)local_2c0 != uVar39);
          uVar39 = 0xffffffff;
        }
LAB_0279684c:
        lVar21 = *(long *)PTR_DAT_04bb2208;
        if ((int)*(uint *)(lVar21 + 0x1b20) < 1) {
          if ((((*(long *)(lVar21 + 0x1a10) != 0) &&
               (puVar23 = *(uint **)(*(long *)(lVar21 + 0x1a10) + 8), puVar23 != (uint *)0x0)) &&
              ((*(uint *)(lVar21 + 0x1a28) <= uVar39 ||
               (*(char *)(*(long *)(lVar21 + 0x1a30) + (long)(int)uVar39) != '\0')))) &&
             (((uVar39 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
            iVar18 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              iVar18 = 0x1c;
            }
            puVar23 = (uint *)((ulong)(puVar23[1] * uVar39 + (uint)(ushort)puVar23[2] * 8 + iVar18)
                              + (long)puVar23);
            goto joined_r0x027969a8;
          }
        }
        else if (uVar39 < *(uint *)(lVar21 + 0x1b20)) {
          if (*(uint *)(lVar21 + 0x1b10) <= uVar39) {
            uVar39 = 0;
          }
          puVar23 = *(uint **)(*(long *)(lVar21 + 0x1b18) + (ulong)uVar39 * 8);
joined_r0x027969a8:
          if (puVar23 != (uint *)0x0) {
            if (*puVar23 != 0) {
              cVar24 = *PTR_DAT_04bb6420;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *(undefined8 *)puVar14 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                  *puVar1 = 1;
                  *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar20 = *(uint *)(puVar14 + 0x20);
                  if (-1 < (int)uVar20) {
                    if (((ushort *)((ulong)uVar20 + (long)puVar23) != (ushort *)0x0) &&
                       (0x1ff < *(ushort *)((ulong)uVar20 + (long)puVar23))) goto LAB_0279411c;
                    break;
                  }
                  if (uVar20 != 0xffffffff) break;
                }
                lVar21 = (long)puVar23 - (ulong)*puVar23;
                if ((*puVar23 == 0) || (lVar21 == 0)) break;
                lVar28 = 0xc;
                if (*(char *)(lVar21 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                if (lVar28 + lVar21 == 0) break;
                uVar27 = (ulong)*(ushort *)(lVar21 + 8);
                *(undefined4 *)(puVar14 + 0x20) = 0xfffffffe;
                if (uVar27 == 0) break;
                piVar29 = (int *)(lVar28 + lVar21 + 4);
                while (piVar29[-1] != 0x54706054) {
                  piVar29 = piVar29 + 2;
                  uVar27 = uVar27 - 1;
                  if (uVar27 == 0) goto LAB_02794108;
                }
                iVar18 = 0;
                if (*piVar29 != -1) {
                  iVar18 = *piVar29;
                }
                *(int *)(puVar14 + 0x20) = iVar18;
                if (*puVar23 == 0) break;
              } while( true );
            }
            goto LAB_02794108;
          }
        }
        goto LAB_02794114;
      }
    }
LAB_0279411c:
    if (local_694 < 1) {
      return;
    }
  } while( true );
joined_r0x02794c3c:
  if (uVar39 == 0) goto LAB_02794cb8;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_02794cbc;
  }
  if (uVar33 != 0xffffffff) goto LAB_02794cb8;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_02794cbc;
  if (puVar23 == puVar36) goto LAB_02794cb8;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02794cb8;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_02794cbc;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_02794cbc;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x02794c3c;
LAB_02794da8:
  if (cVar24 == '\0') {
    cVar24 = '\x01';
    *(undefined8 *)puVar14 = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
    *puVar15 = 1;
    *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
    uVar39 = *puVar23;
  }
  else {
    if (-1 < (int)uVar33) {
      sVar31 = 0;
      if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
        sVar31 = *(short *)(uVar33 + (long)puVar23);
      }
      goto LAB_02794ecc;
    }
    if (uVar33 != 0xffffffff) goto LAB_02794d8c;
    uVar39 = *puVar23;
  }
  if ((uVar39 == 0) || (puVar36 = (uint *)(ulong)uVar39, puVar23 == puVar36)) goto LAB_02794d8c;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02794d8c;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  if (uVar33 == 0) goto LAB_02794d8c;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) goto LAB_02794d8c;
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  if (*puVar23 == 0) goto LAB_02794d8c;
  goto LAB_02794da8;
joined_r0x02794fac:
  if (uVar39 == 0) goto LAB_02795028;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_0279502c;
  }
  if (uVar33 != 0xffffffff) goto LAB_02795028;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_0279502c;
  if (puVar23 == puVar36) goto LAB_02795028;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02795028;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_0279502c;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_0279502c;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x02794fac;
joined_r0x0279510c:
  if (uVar39 == 0) goto LAB_02795188;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_0279518c;
  }
  if (uVar33 != 0xffffffff) goto LAB_02795188;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_0279518c;
  if (puVar23 == puVar36) goto LAB_02795188;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02795188;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_0279518c;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_0279518c;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x0279510c;
joined_r0x0279526c:
  if (uVar39 == 0) goto LAB_027952e8;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_027952ec;
  }
  if (uVar33 != 0xffffffff) goto LAB_027952e8;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_027952ec;
  if (puVar23 == puVar36) goto LAB_027952e8;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_027952e8;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_027952ec;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_027952ec;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x0279526c;
joined_r0x027953cc:
  if (uVar39 == 0) goto LAB_02795448;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_0279544c;
  }
  if (uVar33 != 0xffffffff) goto LAB_02795448;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_0279544c;
  if (puVar23 == puVar36) goto LAB_02795448;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02795448;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_0279544c;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_0279544c;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x027953cc;
joined_r0x02795524:
  if (uVar39 == 0) goto LAB_027955a4;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_027955a8;
  }
  if (uVar33 != 0xffffffff) goto LAB_027955a4;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_027955a8;
  if (puVar23 == puVar36) goto LAB_027955a4;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_027955a4;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_027955a8;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_027955a8;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x02795524;
joined_r0x027956a8:
  if (uVar39 == 0) goto LAB_02795724;
  if (-1 < (int)uVar33) {
    sVar31 = 0;
    if ((short *)(uVar33 + (long)puVar23) != (short *)0x0) {
      sVar31 = *(short *)(uVar33 + (long)puVar23);
    }
    goto LAB_02795728;
  }
  if (uVar33 != 0xffffffff) goto LAB_02795724;
  puVar36 = (uint *)(ulong)*puVar23;
  sVar31 = 0;
  if (*puVar23 == 0) goto LAB_02795728;
  if (puVar23 == puVar36) goto LAB_02795724;
  lVar21 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar36)) != '\0') {
    lVar21 = 0x1c;
  }
  lVar21 = (long)puVar23 + (lVar21 - (long)puVar36);
  if (lVar21 == 0) goto LAB_02795724;
  uVar33 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar36));
  *(undefined4 *)(puVar14 + 0xc) = 0xfffffffe;
  sVar31 = 0;
  if (uVar33 == 0) goto LAB_02795728;
  puVar36 = (uint *)(lVar21 + 4);
  while (puVar36[-1] != 0x7eabefae) {
    puVar36 = puVar36 + 2;
    uVar33 = uVar33 - 1;
    if (uVar33 == 0) {
      sVar31 = 0;
      goto LAB_02795728;
    }
  }
  uVar33 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar33 = (ulong)*puVar36;
  }
  *(int *)(puVar14 + 0xc) = (int)uVar33;
  uVar39 = *puVar23;
  goto joined_r0x027956a8;
}

