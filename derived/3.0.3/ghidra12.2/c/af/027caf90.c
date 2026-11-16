
/* WARNING: Removing unreachable block (ram,0x027cc764) */
/* WARNING: Removing unreachable block (ram,0x027cb8c8) */
/* WARNING: Removing unreachable block (ram,0x027cbed8) */
/* WARNING: Removing unreachable block (ram,0x027cbe90) */
/* WARNING: Removing unreachable block (ram,0x027cbe18) */
/* WARNING: Removing unreachable block (ram,0x027cbd74) */
/* WARNING: Removing unreachable block (ram,0x027cb880) */
/* WARNING: Removing unreachable block (ram,0x027cb76c) */
/* WARNING: Removing unreachable block (ram,0x027cb798) */
/* WARNING: Removing unreachable block (ram,0x027cbd6c) */
/* WARNING: Removing unreachable block (ram,0x027cbddc) */
/* WARNING: Removing unreachable block (ram,0x027cbe24) */
/* WARNING: Removing unreachable block (ram,0x027cbed0) */
/* WARNING: Removing unreachable block (ram,0x027cbf44) */
/* WARNING: Removing unreachable block (ram,0x027cc63c) */
/* WARNING: Removing unreachable block (ram,0x027cc848) */
/* WARNING: Removing unreachable block (ram,0x027cb91c) */

void FUN_027caf90(uint *param_1,ulong *param_2,uint param_3)

{
  char *__dest;
  undefined2 *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  uint *puVar22;
  char cVar23;
  uint *puVar24;
  long lVar25;
  char *__src;
  undefined *local_d8;
  char *pcStack_d0;
  undefined *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined1 local_ad;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  byte bStack_97;
  undefined2 uStack_96;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_6c [4];
  undefined2 local_68 [2];
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb2020;
  puVar1 = (undefined2 *)((long)param_1 + 0x12de);
  puVar5 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
  if (*param_2 != 0) {
    local_a8 = PTR_DAT_04bb2020 + 0x10;
    local_a0 = 0x40d05cd;
    uStack_9c = 0;
    uVar14 = FUN_0273f0a0(&local_a8);
    puVar5 = PTR_DAT_04bb37e0;
    if ((uVar14 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x4b7) = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)puVar1 = puVar5[2];
      *(undefined *)((long)param_1 + 0x12df) = puVar5[3];
      uVar13 = *(uint *)(puVar5 + 4);
      *(undefined1 *)(param_1 + 0x4b9) = 0;
      param_1[0x4b8] = uVar13;
    }
    puVar5 = local_a8;
    if (0 < (long)*param_2) {
      local_a8._0_4_ = *param_1;
      if (2 < (uint)local_a8) {
        local_a8._0_4_ = 0;
      }
      puVar5 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
      if ((uint)local_a8 == 1) {
        if (((char)param_1[0x71] == -1) ||
           (iVar12 = FUN_027490f0((long)(char)param_1[0x71],&DAT_05593300), iVar12 == 0)) {
          if ((*(char *)((long)param_1 + 0x1c5) != -1) &&
             (iVar12 = FUN_027490f0((long)*(char *)((long)param_1 + 0x1c5),&DAT_05593300),
             iVar12 != 0)) {
            lVar25 = 1;
            goto LAB_027cb08c;
          }
        }
        else {
          lVar25 = 0;
LAB_027cb08c:
          FUN_027494ac((long)*(char *)((long)param_1 + lVar25 + 0x1c4),&DAT_05593310,1);
          *param_1 = 2;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)((long)param_1 + 0xe);
          *(uint *)((long)param_1 + 10) = param_1[4];
          if ((param_1[0x4b9] & 1) != 0) {
            *(short *)(param_1 + 0x72) = (short)param_1[0x4b7];
            *(undefined2 *)((long)param_1 + 0x1ca) = *puVar1;
            param_1[0x73] = param_1[0x4b8];
          }
          lVar15 = FUN_0265c3e0((long)*(char *)((long)param_1 + lVar25 + 0x1c4));
          local_74 = 0;
          local_7c = 0;
          local_84 = 0;
          local_90 = 2;
          local_a8._0_4_ = 0;
          local_a8._4_4_ = 0;
          local_a0 = 0;
          uStack_9c = 0;
          uStack_98 = 0;
          bStack_97 = 0;
          uStack_96 = 0;
          local_94 = 0;
          local_8c = 0;
          if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
             (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar16 == (undefined8 *)0x0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)*puVar16)();
            uVar14 = uVar14 & 0xffffffff;
          }
          iVar12 = FUN_0277d6c4(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x13188);
          plVar20 = *(long **)(lVar15 + 0x28);
          if ((uVar14 & 1) == 0) {
LAB_027cb180:
            if (iVar12 == 0x948) {
              if (plVar20 == (long *)0x0) {
                uVar14 = 0;
              }
              else {
                if ((undefined8 *)plVar20[2] == (undefined8 *)0x0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (*(code *)**(undefined8 **)plVar20[2])();
                  plVar20 = *(long **)(lVar15 + 0x28);
                  uVar14 = uVar14 & 0xffffffff;
                  if (plVar20 == (long *)0x0) goto LAB_027cb1fc;
                }
                plVar20 = (long *)plVar20[4];
                if (plVar20 != (long *)0x0) {
                  local_c8 = *(undefined **)(lVar15 + 8);
                  pcStack_c0 = *(char **)(lVar15 + 0x10);
                  local_b8 = 0x13230;
                  (**(code **)(*plVar20 + 0x20))(plVar20,&local_c8);
                }
              }
LAB_027cb1fc:
              lVar21 = *(long *)(lVar15 + 8);
              lVar3 = *(long *)(lVar15 + 0x10);
              local_c8 = (undefined *)0x1698;
              FUN_0277d4ac(&local_c8);
              FUN_027d2090(lVar3 + lVar21 + 0x13188,&local_c8,&local_8c,7,0,0);
              plVar20 = *(long **)(lVar15 + 0x28);
              if ((uVar14 & 1) == 0) goto LAB_027cb258;
              if (plVar20 != (long *)0x0) {
                if ((undefined8 *)plVar20[3] != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)plVar20[3])();
                  plVar20 = *(long **)(lVar15 + 0x28);
                  goto LAB_027cb258;
                }
                goto LAB_027cb25c;
              }
            }
            else {
LAB_027cb258:
              if (plVar20 != (long *)0x0) {
LAB_027cb25c:
                if ((undefined8 *)*plVar20 != (undefined8 *)0x0) {
                  uVar17 = (*(code *)**(undefined8 **)*plVar20)();
                  uVar17 = uVar17 & 0xffffffff;
                  goto LAB_027cb27c;
                }
              }
            }
            uVar17 = 0;
          }
          else {
            if (plVar20 != (long *)0x0) {
              if ((undefined8 *)plVar20[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar20[1])();
                plVar20 = *(long **)(lVar15 + 0x28);
              }
              goto LAB_027cb180;
            }
            uVar14 = 0;
            uVar17 = 0;
            if (iVar12 == 0x948) goto LAB_027cb1fc;
          }
LAB_027cb27c:
          iVar12 = FUN_0277d6c4(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x131b4);
          plVar20 = *(long **)(lVar15 + 0x28);
          if ((uVar17 & 1) == 0) {
LAB_027cb2b8:
            if (iVar12 == 0xc0c) {
              if (plVar20 == (long *)0x0) goto LAB_027cb2f0;
              if ((undefined8 *)plVar20[2] == (undefined8 *)0x0) {
                uVar14 = 0;
              }
              else {
                uVar14 = (*(code *)**(undefined8 **)plVar20[2])();
                plVar20 = *(long **)(lVar15 + 0x28);
                uVar14 = uVar14 & 0xffffffff;
                if (plVar20 == (long *)0x0) goto LAB_027cb328;
              }
              plVar20 = (long *)plVar20[4];
              if (plVar20 != (long *)0x0) {
                local_c8 = *(undefined **)(lVar15 + 8);
                pcStack_c0 = *(char **)(lVar15 + 0x10);
                local_b8 = 0x13230;
                (**(code **)(*plVar20 + 0x20))(plVar20,&local_c8);
              }
LAB_027cb328:
              lVar21 = *(long *)(lVar15 + 8);
              lVar3 = *(long *)(lVar15 + 0x10);
              local_c8 = (undefined *)0x949;
              FUN_0277d4ac(&local_c8);
              FUN_027d2090(lVar3 + lVar21 + 0x131b4,&local_c8,&local_8c,7,0,0);
              plVar20 = *(long **)(lVar15 + 0x28);
              if ((uVar14 & 1) == 0) goto LAB_027cb384;
              if (plVar20 == (long *)0x0) goto LAB_027cb3a4;
              if ((undefined8 *)plVar20[3] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar20[3])();
                plVar20 = *(long **)(lVar15 + 0x28);
                goto LAB_027cb384;
              }
            }
            else {
LAB_027cb384:
              if (plVar20 == (long *)0x0) goto LAB_027cb3a4;
            }
            if ((undefined8 *)*plVar20 == (undefined8 *)0x0) goto LAB_027cb3a4;
            uVar13 = (*(code *)**(undefined8 **)*plVar20)();
            uVar13 = uVar13 ^ 1;
          }
          else {
            if (plVar20 != (long *)0x0) {
              if ((undefined8 *)plVar20[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar20[1])();
                plVar20 = *(long **)(lVar15 + 0x28);
              }
              goto LAB_027cb2b8;
            }
            if (iVar12 == 0xc0c) {
LAB_027cb2f0:
              uVar14 = 0;
              goto LAB_027cb328;
            }
LAB_027cb3a4:
            uVar13 = 1;
          }
          iVar12 = FUN_0277d6c4(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x131e0);
          if ((((uVar13 & 1) == 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
             (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar16 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar16)();
          }
          if (iVar12 == 0xc0b) {
            lVar21 = *(long *)(lVar15 + 0x28);
            if (lVar21 == 0) {
              uVar14 = 0;
            }
            else {
              if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
                uVar14 = 0;
              }
              else {
                uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                lVar21 = *(long *)(lVar15 + 0x28);
                uVar14 = uVar14 & 0xffffffff;
                if (lVar21 == 0) goto LAB_027cb44c;
              }
              plVar20 = *(long **)(lVar21 + 0x20);
              if (plVar20 != (long *)0x0) {
                local_c8 = *(undefined **)(lVar15 + 8);
                pcStack_c0 = *(char **)(lVar15 + 0x10);
                local_b8 = 0x13230;
                (**(code **)(*plVar20 + 0x20))(plVar20,&local_c8);
              }
            }
LAB_027cb44c:
            lVar21 = *(long *)(lVar15 + 8);
            lVar3 = *(long *)(lVar15 + 0x10);
            local_c8 = (undefined *)0x94b;
            FUN_0277d4ac(&local_c8);
            FUN_027d2090(lVar3 + lVar21 + 0x131e0,&local_c8,&local_8c,7,0,0);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 0x18),
               puVar16 != (undefined8 *)0x0)) {
              (**(code **)*puVar16)();
            }
          }
          puVar5 = PTR_PTR_04bb2238;
          local_ad = 0;
          __dest = (char *)((long)&local_b8 + 4);
          local_b8 = CONCAT44(local_b8._4_4_,8);
          local_c8 = PTR_DAT_04bb6a30 + 0x10;
          pcStack_c0 = __dest;
          (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
          __src = *(char **)(puVar5 + 8);
          if (__dest != __src) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            lVar15 = 0;
            do {
              if (*(char *)(*(long *)(puVar5 + 8) + lVar15) == '\0') goto LAB_027cb54c;
              lVar21 = *(long *)(puVar5 + 8) + lVar15;
              if (*(char *)(lVar21 + 1) == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_027cb54c;
              }
              if (*(char *)(lVar21 + 2) == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_027cb54c;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_027cb54c:
            iVar12 = (int)lVar15;
            if ((int)local_b8 <= (int)lVar15) {
              iVar12 = (int)local_b8 + -1;
            }
            memcpy(__dest,__src,(long)iVar12);
            __dest[iVar12] = '\0';
          }
          local_c8 = PTR_DAT_04bb3768 + 0x10;
          FUN_021d7c00(&local_c8,(long)*(char *)((long)param_1 + lVar25 + 0x1c4));
          local_d8 = puVar6 + 0x10;
          pcStack_d0 = "LE_NnpcHouseBuilt";
          uVar14 = FUN_01b61690(local_68,local_6c,&local_c8);
          if ((uVar14 & 1) != 0) {
            lVar25 = *(long *)PTR_DAT_04bb49a0;
            local_64 = FUN_006bd550("LE_NnpcHouseBuilt",0);
            uVar18 = FUN_01b5b650(lVar25 + 0x238,&local_64);
            FUN_01b60bc0(&local_d8,local_68[0],local_6c[0],uVar18,0,0);
          }
        }
        puVar5 = PTR_DAT_04bb5008;
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        uVar13 = param_3;
        if (9 < param_3) {
          uVar13 = 0;
        }
        local_a0 = (&DAT_05636e30)[(int)uVar13];
        FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_a8,0x6622bd46);
        FUN_02b3acc0(*(long *)puVar5 + 0x26e8,param_3,0x6622bd46);
        puVar5 = local_a8;
      }
    }
  }
  local_a8._4_4_ = (uint)((ulong)puVar5 >> 0x20);
  uVar13 = param_1[1];
  if (uVar13 == 0) {
    local_a8._0_4_ = 0;
    if (((char)param_1[0x71] == -1) || (lVar25 = FUN_0265c2a0(), lVar25 == 0)) {
      local_a8._0_4_ = 1;
      puVar5 = (undefined *)CONCAT44(local_a8._4_4_,1);
      if (*(char *)((long)param_1 + 0x1c5) != -1) {
        lVar25 = FUN_0265c2a0();
        puVar5 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
        if (lVar25 != 0) goto LAB_027cb7b4;
      }
LAB_027cb840:
      uVar13 = param_1[1];
      goto joined_r0x027cb848;
    }
LAB_027cb7b4:
    if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
       (puVar16 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar16 == (undefined8 *)0x0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = (**(code **)*puVar16)();
      uVar13 = uVar13 ^ 1;
    }
    local_a8 = PTR_DAT_04bb2020 + 0x10;
    local_a0 = 0x40c483e;
    uStack_9c = 0;
    iVar12 = FUN_02749340(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) + 0x1267c,&local_a8);
    if ((((uVar13 & 1) == 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)();
    }
    puVar8 = PTR_DAT_04bc4628;
    puVar7 = PTR_DAT_04bc4620;
    puVar6 = PTR_DAT_04bb5008;
    puVar5 = local_a8;
    if (iVar12 != 0) goto LAB_027cb840;
    lVar25 = *(long *)PTR_DAT_04bb5008;
    lVar15 = 6 - (ulong)*(ushort *)(lVar25 + 0x7f0);
    if (((uint)lVar15 < *(uint *)(lVar25 + 2000)) &&
       (puVar22 = *(uint **)(*(long *)(lVar25 + 0x7d8) + lVar15 * 8), puVar22 != (uint *)0x0)) {
      uVar13 = *puVar22;
      if (uVar13 != 0) {
        cVar23 = *PTR_DAT_04bc4620;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            uVar13 = *puVar22;
          }
          else {
            uVar4 = *(uint *)(puVar8 + 0x10);
            if (-1 < (int)uVar4) {
              if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                goto LAB_027cc3d0;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)uVar13;
          uVar11 = 0;
          if ((puVar24 == (uint *)0x0) || (puVar22 == puVar24)) goto LAB_027cc3d0;
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
          uVar11 = 0;
          if (lVar15 == 0) goto LAB_027cc3d0;
          uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
          *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar19 = (int *)(lVar15 + 4);
          while (piVar19[-1] != -0x278d8283) {
            piVar19 = piVar19 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_027cc3cc;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar8 + 0x10) = iVar12;
          uVar13 = *puVar22;
          if (uVar13 == 0) break;
        } while( true );
      }
LAB_027cc3cc:
      uVar11 = 0;
LAB_027cc3d0:
      *(undefined2 *)(param_1 + 2) = uVar11;
      puVar7 = PTR_DAT_04bc4628;
      puVar5 = PTR_DAT_04bc4620;
      uVar13 = *puVar22;
      if (uVar13 != 0) {
        cVar23 = *PTR_DAT_04bc4620;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            uVar13 = *puVar22;
          }
          else {
            uVar4 = *(uint *)(puVar7 + 0xc);
            if (-1 < (int)uVar4) {
              if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                goto LAB_027cc4bc;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)uVar13;
          uVar11 = 0;
          if ((puVar24 == (uint *)0x0) || (puVar22 == puVar24)) goto LAB_027cc4bc;
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
          uVar11 = 0;
          if (lVar15 == 0) goto LAB_027cc4bc;
          uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
          *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar19 = (int *)(lVar15 + 4);
          while (piVar19[-1] != 0x966fbe3) {
            piVar19 = piVar19 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_027cc4b8;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar7 + 0xc) = iVar12;
          uVar13 = *puVar22;
          if (uVar13 == 0) break;
        } while( true );
      }
LAB_027cc4b8:
      uVar11 = 0;
LAB_027cc4bc:
      *(undefined2 *)((long)param_1 + 10) = uVar11;
      puVar7 = PTR_DAT_04bc4628;
      puVar5 = PTR_DAT_04bc4620;
      uVar13 = *puVar22;
      if (uVar13 != 0) {
        cVar23 = *PTR_DAT_04bc4620;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            uVar13 = *puVar22;
          }
          else {
            uVar4 = *(uint *)(puVar7 + 8);
            if (-1 < (int)uVar4) {
              if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                goto LAB_027cc5ac;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)uVar13;
          uVar11 = 0;
          if ((puVar24 == (uint *)0x0) || (puVar22 == puVar24)) goto LAB_027cc5ac;
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
          uVar11 = 0;
          if (lVar15 == 0) goto LAB_027cc5ac;
          uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
          *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar19 = (int *)(lVar15 + 4);
          while (piVar19[-1] != -0x37919f2b) {
            piVar19 = piVar19 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_027cc5a8;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar7 + 8) = iVar12;
          uVar13 = *puVar22;
          if (uVar13 == 0) break;
        } while( true );
      }
LAB_027cc5a8:
      uVar11 = 0;
LAB_027cc5ac:
      *(undefined2 *)(param_1 + 3) = uVar11;
    }
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
    local_a8 = PTR_DAT_04bc43f8 + 0x10;
    uVar13 = param_3;
    if (9 < param_3) {
      uVar13 = 0;
    }
    local_a0 = (&DAT_05636e30)[(int)uVar13];
    FUN_02b3cb40(lVar25 + 0x26e8,&local_a8,0x6622bd46);
    FUN_02b3acc0(*(long *)puVar6 + 0x26e8,param_3,0x6622bd46);
LAB_027cc614:
    uVar13 = 1;
LAB_027cc618:
    param_1[1] = uVar13;
  }
  else {
joined_r0x027cb848:
    if (uVar13 == 1) {
      local_a8 = puVar5;
      uVar14 = FUN_027ccc08(param_1);
      if ((uVar14 & 1) != 0) {
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)((long)param_1 + 0xe);
        *(uint *)((long)param_1 + 10) = param_1[4];
        if ((param_1[0x4b9] & 1) != 0) {
          *(short *)(param_1 + 0x72) = (short)param_1[0x4b7];
          *(undefined2 *)((long)param_1 + 0x1ca) = *puVar1;
          param_1[0x73] = param_1[0x4b8];
        }
        puVar5 = PTR_DAT_04bb5008;
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        uVar13 = param_3;
        if (9 < param_3) {
          uVar13 = 0;
        }
        local_a0 = (&DAT_05636e30)[(int)uVar13];
        FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_a8,0x6622bd46);
        FUN_02b3acc0(*(long *)puVar5 + 0x26e8,param_3,0x6622bd46);
        param_1[1] = 2;
        FUN_027ccda0(param_1,param_2 + 2);
        FUN_027ccf30(param_3);
        goto LAB_027cc61c;
      }
      uVar13 = param_1[1];
      puVar5 = local_a8;
      if (uVar13 != 0) goto LAB_027cb850;
LAB_027cbf88:
      local_a8 = puVar5;
      uVar14 = FUN_027ccc08(param_1);
      if ((uVar14 & 1) != 0) {
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)((long)param_1 + 0xe);
        *(uint *)((long)param_1 + 10) = param_1[4];
        if ((param_1[0x4b9] & 1) != 0) {
          *(short *)(param_1 + 0x72) = (short)param_1[0x4b7];
          *(undefined2 *)((long)param_1 + 0x1ca) = *puVar1;
          param_1[0x73] = param_1[0x4b8];
        }
        puVar5 = PTR_DAT_04bb5008;
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        uVar13 = param_3;
        if (9 < param_3) {
          uVar13 = 0;
        }
        local_a0 = (&DAT_05636e30)[(int)uVar13];
        FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_a8,0x6622bd46);
        FUN_02b3acc0(*(long *)puVar5 + 0x26e8,param_3,0x6622bd46);
        param_1[1] = 2;
        FUN_027ccda0(param_1,param_2 + 2);
        FUN_027ccf30(param_3);
      }
    }
    else {
      local_a8._4_4_ = (uint)((ulong)puVar5 >> 0x20);
      if (uVar13 == 0) goto LAB_027cbf88;
LAB_027cb850:
      puVar5 = PTR_DAT_04bb5008;
      if ((uVar13 == 2) && (((char)param_1[0x71] != -1 || (*(char *)((long)param_1 + 0x1c5) != -1)))
         ) {
        bVar10 = (byte)param_1[0x71];
        if ((bVar10 < 10) && ((DAT_054540d0 >> (ulong)(bVar10 & 0x1f) & 1) != 0)) {
          uVar14 = *param_2;
          if (((long)uVar14 < 0) || (uVar14 == 1)) {
            local_a8 = PTR_DAT_04bc4888 + 0x10;
            lVar25 = *(long *)PTR_DAT_04bb5008;
            lVar15 = 6 - (ulong)*(ushort *)(lVar25 + 0x7f0);
            if ((uint)lVar15 < *(uint *)(lVar25 + 2000)) {
              lVar15 = *(long *)(*(long *)(lVar25 + 0x7d8) + lVar15 * 8);
              local_a0 = (undefined4)lVar15;
              uStack_9c = (undefined4)((ulong)lVar15 >> 0x20);
              if (lVar15 != 0) {
                uVar11 = FUN_02af78b0(&local_a8);
                *(undefined2 *)(param_1 + 2) = uVar11;
                uVar11 = FUN_02af79b0(&local_a8);
                *(undefined2 *)((long)param_1 + 10) = uVar11;
                uVar11 = FUN_02af7ab0(&local_a8);
                lVar25 = *(long *)puVar5;
                *(undefined2 *)(param_1 + 3) = uVar11;
              }
            }
            local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
            local_a8 = PTR_DAT_04bc43f8 + 0x10;
            uVar13 = param_3;
            if (9 < param_3) {
              uVar13 = 0;
            }
            local_a0 = (&DAT_05636e30)[(int)uVar13];
            FUN_02b3cb40(lVar25 + 0x26e8,&local_a8,0x6622bd46);
            FUN_02b3acc0(*(long *)puVar5 + 0x26e8,param_3,0x6622bd46);
LAB_027cbd34:
            FUN_027cd1e0(param_3);
            goto LAB_027cc614;
          }
          if (uVar14 < 2) goto LAB_027cc61c;
          puVar5 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
          if (uVar14 == 2) {
            local_a8._0_4_ = 0;
            lVar25 = FUN_0265c2a0((long)(char)param_1[0x71]);
            puVar5 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
            if (lVar25 != 0) {
              local_a0 = (undefined4)lVar25;
              uStack_9c = (undefined4)((ulong)lVar25 >> 0x20);
              uStack_98 = 1;
              if (*(long **)(lVar25 + 0x28) == (long *)0x0) {
                bVar10 = 0;
              }
              else {
                puVar16 = (undefined8 *)**(long **)(lVar25 + 0x28);
                bVar10 = 0;
                if (puVar16 != (undefined8 *)0x0) {
                  bVar10 = (**(code **)*puVar16)();
                }
              }
              bStack_97 = bVar10 & 1;
              local_a8 = PTR_DAT_04bb67a0 + 0x10;
              local_c8 = PTR_DAT_04bb2020 + 0x10;
              pcStack_c0 = "MoveInCompletion";
              iVar12 = FUN_02749340(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) + 0x1267c,
                                    &local_c8);
              FUN_02640184(&local_a8);
              puVar5 = local_a8;
              if (iVar12 == 0) {
                FUN_027cc920(param_1);
                FUN_027cc880(param_3);
                goto LAB_027cbd34;
              }
            }
          }
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)((long)param_1 + 0xe);
          *(uint *)((long)param_1 + 10) = param_1[4];
          if ((param_1[0x4b9] & 1) != 0) {
            *(short *)(param_1 + 0x72) = (short)param_1[0x4b7];
            *(undefined2 *)((long)param_1 + 0x1ca) = *puVar1;
            param_1[0x73] = param_1[0x4b8];
          }
          puVar6 = PTR_DAT_04bb5008;
          local_a8 = puVar5;
          FUN_02b3ce18(*(long *)PTR_DAT_04bb5008 + 0x26e8,param_3,0x6622bd46);
          FUN_02b3acc0(*(long *)puVar6 + 0x26e8,param_3,0x6622bd46);
          uVar13 = 2;
          goto LAB_027cc618;
        }
      }
      local_a8._0_4_ = 0;
      lVar25 = FUN_0265c2a0((long)(char)param_1[0x71]);
      if (lVar25 == 0) {
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 != 0) {
          puVar16 = *(undefined8 **)(lVar25 + 0x10);
          if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
            lVar25 = (**(code **)(*(long *)*puVar16 + 0x38))();
            if (lVar25 != 0) {
              lVar25 = lVar25 + 0x70;
LAB_027cbc38:
              if (*(long **)(&LAB_00205730 + lVar25) == (long *)0x0) {
                uVar14 = 0;
              }
              else {
                puVar16 = (undefined8 *)**(long **)(&LAB_00205730 + lVar25);
                uVar14 = 0;
                if (puVar16 != (undefined8 *)0x0) {
                  uVar14 = (**(code **)*puVar16)();
                }
              }
              pbVar2 = (byte *)(*(long *)(&LAB_00205718 + lVar25) +
                               *(long *)(&LAB_00205710 + lVar25));
              if (((pbVar2[0xb7] < 10) && (uVar17 = (ulong)*pbVar2, uVar17 < 0x23)) &&
                 ((pbVar2[1] <= (byte)PTR_DAT_04bc27f0[uVar17] &&
                  (((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0
                   && (pbVar2[0x20] != 2)))))) {
                local_a8._0_4_ = 0;
                uVar13 = (uint)pbVar2[0xb7];
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar13);
                if (uVar13 != param_3) goto LAB_027cbdf8;
LAB_027cbf60:
                if ((((uVar14 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar25) != 0)) &&
                   (puVar16 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar25) + 8),
                   puVar16 != (undefined8 *)0x0)) {
                  (**(code **)*puVar16)();
                }
                goto LAB_027cbf80;
              }
LAB_027cbdf8:
              if ((((pbVar2[0xb8] < 10) && (uVar17 = (ulong)pbVar2[0x3c], uVar17 < 0x23)) &&
                  (pbVar2[0x3d] <= (byte)PTR_DAT_04bc27f0[uVar17])) &&
                 (((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(pbVar2[0x3d] & 0x1f) & 1) !=
                   0 && (pbVar2[0x5c] != 2)))) {
                local_a8._0_4_ = 1;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)pbVar2[0xb8]);
                if (pbVar2[0xb8] == param_3) goto LAB_027cbf60;
              }
              local_a8._0_4_ = 2;
              if (((pbVar2[0xb9] < 10) && (uVar17 = (ulong)pbVar2[0x78], uVar17 < 0x23)) &&
                 ((pbVar2[0x79] <= (byte)PTR_DAT_04bc27f0[uVar17] &&
                  (((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(pbVar2[0x79] & 0x1f) & 1)
                    != 0 && (local_a8._0_4_ = (uint)pbVar2[0x98], (uint)local_a8 != 2)))))) {
                local_a8._0_4_ = 2;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)pbVar2[0xb9]);
                if (pbVar2[0xb9] == param_3) goto LAB_027cbf60;
              }
              if ((((uVar14 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar25) != 0)) &&
                 (puVar16 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar25) + 8),
                 puVar16 != (undefined8 *)0x0)) {
                (**(code **)*puVar16)();
              }
            }
          }
          else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
                  (lVar25 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar25 != 0))
          goto LAB_027cbc38;
        }
LAB_027cbb10:
        puVar7 = PTR_DAT_04bc4628;
        puVar6 = PTR_DAT_04bc4620;
        puVar5 = PTR_DAT_04bb5008;
        lVar25 = *(long *)PTR_DAT_04bb5008;
        lVar15 = 5 - (ulong)*(ushort *)(lVar25 + 0x7f0);
        if (((uint)lVar15 < *(uint *)(lVar25 + 2000)) &&
           (puVar22 = *(uint **)(*(long *)(lVar25 + 0x7d8) + lVar15 * 8), puVar22 != (uint *)0x0)) {
          uVar13 = *puVar22;
          if (uVar13 != 0) {
            cVar23 = *PTR_DAT_04bc4620;
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar13 = *puVar22;
              }
              else {
                uVar4 = *(uint *)(puVar7 + 0x10);
                if (-1 < (int)uVar4) {
                  if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                    uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                    goto LAB_027cc08c;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar11 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar11 = 0, puVar22 == puVar24)) goto LAB_027cc08c;
              lVar15 = 0xc;
              if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
              uVar11 = 0;
              if (lVar15 == 0) goto LAB_027cc08c;
              uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar19 = (int *)(lVar15 + 4);
              while (piVar19[-1] != -0x278d8283) {
                piVar19 = piVar19 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_027cc088;
              }
              iVar12 = 0;
              if (*piVar19 != -1) {
                iVar12 = *piVar19;
              }
              *(int *)(puVar7 + 0x10) = iVar12;
              uVar13 = *puVar22;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_027cc088:
          uVar11 = 0;
LAB_027cc08c:
          *(undefined2 *)(param_1 + 2) = uVar11;
          uVar13 = *puVar22;
          if (uVar13 != 0) {
            cVar23 = *puVar6;
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar13 = *puVar22;
              }
              else {
                uVar4 = *(uint *)(puVar7 + 0xc);
                if (-1 < (int)uVar4) {
                  if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                    uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                    goto LAB_027cc16c;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar11 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar11 = 0, puVar22 == puVar24)) goto LAB_027cc16c;
              lVar15 = 0xc;
              if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
              uVar11 = 0;
              if (lVar15 == 0) goto LAB_027cc16c;
              uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar19 = (int *)(lVar15 + 4);
              while (piVar19[-1] != 0x966fbe3) {
                piVar19 = piVar19 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_027cc168;
              }
              iVar12 = 0;
              if (*piVar19 != -1) {
                iVar12 = *piVar19;
              }
              *(int *)(puVar7 + 0xc) = iVar12;
              uVar13 = *puVar22;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_027cc168:
          uVar11 = 0;
LAB_027cc16c:
          *(undefined2 *)((long)param_1 + 10) = uVar11;
          uVar13 = *puVar22;
          if (uVar13 != 0) {
            cVar23 = *puVar6;
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar13 = *puVar22;
              }
              else {
                uVar4 = *(uint *)(puVar7 + 8);
                if (-1 < (int)uVar4) {
                  if ((undefined2 *)((ulong)uVar4 + (long)puVar22) != (undefined2 *)0x0) {
                    uVar11 = *(undefined2 *)((ulong)uVar4 + (long)puVar22);
                    goto LAB_027cc24c;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar11 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar11 = 0, puVar22 == puVar24)) goto LAB_027cc24c;
              lVar15 = 0xc;
              if (*(char *)((long)puVar22 + (10 - (long)puVar24)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar22 + (lVar15 - (long)puVar24);
              uVar11 = 0;
              if (lVar15 == 0) goto LAB_027cc24c;
              uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar19 = (int *)(lVar15 + 4);
              while (piVar19[-1] != -0x37919f2b) {
                piVar19 = piVar19 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_027cc248;
              }
              iVar12 = 0;
              if (*piVar19 != -1) {
                iVar12 = *piVar19;
              }
              *(int *)(puVar7 + 8) = iVar12;
              uVar13 = *puVar22;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_027cc248:
          uVar11 = 0;
LAB_027cc24c:
          *(undefined2 *)(param_1 + 3) = uVar11;
        }
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_3);
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        uVar13 = param_3;
        if (9 < param_3) {
          uVar13 = 0;
        }
        local_a0 = (&DAT_05636e30)[(int)uVar13];
        FUN_02b3cb40(lVar25 + 0x26e8,&local_a8,0x6622bd46);
        FUN_02b3acc0(*(long *)puVar5 + 0x26e8,param_3,0x6622bd46);
        FUN_027cd1e0(param_3);
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 0x71) = 0xffff;
      }
      else {
        if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
           (puVar16 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar16 == (undefined8 *)0x0)) {
          uVar13 = 1;
        }
        else {
          uVar13 = (**(code **)*puVar16)();
          uVar13 = uVar13 ^ 1;
        }
        pbVar2 = (byte *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
        uVar14 = (ulong)*pbVar2;
        if ((uVar14 < 0x23) && (bVar10 = pbVar2[1], bVar10 <= (byte)PTR_DAT_04bc27f0[uVar14])) {
          bVar9 = (*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar10 & 0x1f) & 1) == 0;
          if ((uVar13 & 1) != 0) goto LAB_027cbb0c;
LAB_027cbae8:
          if ((*(long *)(lVar25 + 0x28) == 0) ||
             (puVar16 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar16 == (undefined8 *)0x0
             )) goto LAB_027cbb0c;
          (**(code **)*puVar16)();
          if (bVar9) goto LAB_027cbb10;
        }
        else {
          bVar9 = true;
          if ((uVar13 & 1) == 0) goto LAB_027cbae8;
LAB_027cbb0c:
          if (bVar9) goto LAB_027cbb10;
        }
LAB_027cbf80:
        puVar5 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
        if (param_1[1] == 0) goto LAB_027cbf88;
      }
    }
  }
LAB_027cc61c:
  puVar5 = PTR_DAT_04bb2800;
  if ((long)*param_2 < 1) {
    return;
  }
  puVar22 = param_1 + 0x71;
  cVar23 = (char)*puVar22;
  lVar25 = *(long *)PTR_DAT_04bb2800;
  if (*(int *)(lVar25 + 0x26bc) == (int)cVar23) {
    lVar15 = 0x26bc;
LAB_027cc714:
    *(uint *)(lVar25 + lVar15 + 4) = param_3;
  }
  else {
    if (*(int *)(lVar25 + 0x26c8) == (int)cVar23) {
      lVar15 = 0x26c8;
      goto LAB_027cc714;
    }
    iVar12 = (int)cVar23;
    if (*(int *)(lVar25 + 0x26d4) == iVar12) {
      lVar15 = 0x26d4;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 0x26e0) == iVar12) {
      lVar15 = 0x26e0;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 0x26ec) == iVar12) {
      lVar15 = 0x26ec;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 0x26f8) == iVar12) {
      lVar15 = 0x26f8;
      goto LAB_027cc714;
    }
    iVar12 = (int)cVar23;
    if (*(int *)(lVar25 + 0x2704) == iVar12) {
      lVar15 = 0x2704;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 10000) == iVar12) {
      lVar15 = 10000;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 0x271c) == iVar12) {
      lVar15 = 0x271c;
      goto LAB_027cc714;
    }
    if (*(int *)(lVar25 + 0x2728) == iVar12) {
      lVar15 = 0x2728;
      goto LAB_027cc714;
    }
  }
  bVar10 = (byte)param_1[0x4b9];
  if ((bVar10 & 1) == 0) goto LAB_027cc858;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)((long)param_1 + 0xe);
  *(uint *)((long)param_1 + 10) = param_1[4];
  *(short *)(param_1 + 0x72) = (short)param_1[0x4b7];
  *(undefined2 *)((long)param_1 + 0x1ca) = *puVar1;
  param_1[0x73] = param_1[0x4b8];
  lVar25 = *(long *)puVar5;
  cVar23 = (char)*puVar22;
  if (*(int *)(lVar25 + 0x26bc) == (int)cVar23) {
    lVar15 = 0x26bc;
LAB_027cc830:
    *(undefined1 *)(lVar25 + lVar15 + 8) = 1;
  }
  else {
    if (*(int *)(lVar25 + 0x26c8) == (int)cVar23) {
      lVar15 = 0x26c8;
      goto LAB_027cc830;
    }
    iVar12 = (int)cVar23;
    if (*(int *)(lVar25 + 0x26d4) == iVar12) {
      lVar15 = 0x26d4;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 0x26e0) == iVar12) {
      lVar15 = 0x26e0;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 0x26ec) == iVar12) {
      lVar15 = 0x26ec;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 0x26f8) == iVar12) {
      lVar15 = 0x26f8;
      goto LAB_027cc830;
    }
    iVar12 = (int)cVar23;
    if (*(int *)(lVar25 + 0x2704) == iVar12) {
      lVar15 = 0x2704;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 10000) == iVar12) {
      lVar15 = 10000;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 0x271c) == iVar12) {
      lVar15 = 0x271c;
      goto LAB_027cc830;
    }
    if (*(int *)(lVar25 + 0x2728) == iVar12) {
      lVar15 = 0x2728;
      goto LAB_027cc830;
    }
  }
  local_a8._0_4_ = 0;
  FUN_026611d0((long)(char)*puVar22);
  bVar10 = (byte)param_1[0x4b9];
LAB_027cc858:
  *(byte *)(param_1 + 0x4b9) = bVar10 & 0xfe;
  return;
}

