
void FUN_02bb78d0(long param_1,ulong param_2)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined2 *__dest;
  long *plVar27;
  undefined2 *puVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  uint uVar31;
  byte local_4edc [4];
  undefined *local_4ed8;
  long lStack_4ed0;
  undefined **local_4ec8;
  char *pcStack_4ec0;
  undefined8 local_4ea8;
  undefined8 local_4ea0;
  uint local_4e98;
  undefined2 auStack_4e94 [2];
  uint local_4e90;
  undefined2 uStack_4e8c;
  undefined2 uStack_4e8a;
  undefined8 local_4e88;
  undefined4 uStack_4e80;
  byte local_4e7c;
  long alStack_4e68 [1992];
  undefined8 local_1028;
  undefined8 local_1008 [501];
  
  bVar8 = *(byte *)(param_1 + 0x1f8);
  puVar1 = (uint *)(param_1 + 0x1c1b8);
  uVar14 = 0;
  *puVar1 = 0;
  puVar3 = PTR_PTR_04bb2238;
  iVar13 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c1c0)) {
  case 1:
  case 3:
  case 4:
  case 6:
    *(undefined4 *)(param_1 + 0x1c1c4) = 0;
    bVar19 = bVar8;
    if (7 < bVar8) {
      bVar19 = 0xff;
    }
    local_4ea8 = (undefined *)CONCAT71(local_4ea8._1_7_,bVar19);
    uVar16 = FUN_02669430(&local_4ea8);
    uVar14 = 0;
    iVar13 = 0;
    if ((uVar16 & 1) == 0) goto switchD_02bb793c_caseD_2;
    local_4edc[0] = bVar19;
    uVar14 = FUN_02582fe0(local_4edc);
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) goto LAB_02bb8290;
    puVar20 = *(undefined8 **)(lVar25 + 0x10);
    if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
      lVar25 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar25 != 0) {
        lVar25 = lVar25 + 0x70;
LAB_02bb7f58:
        if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar20 == (undefined8 *)0x0)) {
          uVar16 = 0;
        }
        else {
          uVar16 = (**(code **)*puVar20)();
          uVar16 = uVar16 & 0xffffffff;
        }
        FUN_0266b370(&local_4ea8);
        if ((uVar14 != (uint)local_4ea8) && ((uint)local_4ea8 != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = (uint)local_4ea8;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((uVar14 != local_4ea8._4_4_) && (local_4ea8._4_4_ != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = local_4ea8._4_4_;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((uVar14 != (uint)local_4ea0) && ((uint)local_4ea0 != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = (uint)local_4ea0;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((uVar14 != local_4ea0._4_4_) && (local_4ea0._4_4_ != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = local_4ea0._4_4_;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((uVar14 != local_4e98) && (local_4e98 != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = local_4e98;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        uVar31 = CONCAT22(auStack_4e94[1],auStack_4e94[0]);
        if ((uVar14 != uVar31) && (uVar31 != 0xffffffff)) {
          uVar26 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar26) {
            uVar26 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar26 * 4) = uVar31;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((uVar14 != local_4e90) && (local_4e90 != 0xffffffff)) {
          uVar31 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar31) {
            uVar31 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar31 * 4) = local_4e90;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        uVar31 = CONCAT22(uStack_4e8a,uStack_4e8c);
        if ((uVar14 != uVar31) && (uVar31 != 0xffffffff)) {
          uVar14 = *(uint *)(param_1 + 0x1c1c4);
          if (*(uint *)(param_1 + 0x1c1c8) <= uVar14) {
            uVar14 = 0;
          }
          *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar14 * 4) = uVar31;
          *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
          *puVar1 = *puVar1 + 1;
        }
        if ((((uVar16 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar20 != (undefined8 *)0x0))
        {
          (**(code **)*puVar20)();
        }
        if (*(int *)(param_1 + 0x1c1c0) != 4) goto switchD_02bb793c_caseD_5;
      }
    }
    else {
      if (puVar20 == (undefined8 *)0x0) goto LAB_02bb8290;
      if (((long *)puVar20[0x26] != (long *)0x0) &&
         (lVar25 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar25 != 0)) goto LAB_02bb7f58;
    }
    break;
  case 2:
  case 9:
    goto switchD_02bb793c_caseD_2;
  case 5:
  case 0xe:
switchD_02bb793c_caseD_5:
    FUN_02bb8ef0(param_1);
    break;
  case 7:
    lVar25 = 0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      lVar22 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
      lVar25 = 0;
      if (lVar22 != 0) {
        lVar25 = lVar22 + 0x276cb0;
      }
    }
    if ((*(long **)(lVar25 + 0x88e0) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar25 + 0x88e0), puVar20 == (undefined8 *)0x0)) {
      uVar14 = *(uint *)(*(long *)(lVar25 + 0x88c8) + *(long *)(lVar25 + 0x88c0));
    }
    else {
      uVar16 = (**(code **)*puVar20)();
      uVar14 = *(uint *)(*(long *)(lVar25 + 0x88c8) + *(long *)(lVar25 + 0x88c0));
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar25 + 0x88e0) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x88e0) + 8), puVar20 != (undefined8 *)0x0))
      {
        (**(code **)*puVar20)();
      }
    }
    FUN_0265eba0(&local_4ea8);
    local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_4ec0 = "CampTodaySelectMoveOutNpc";
    iVar13 = FUN_0273ea30(&local_4ec8);
    uVar16 = 0;
    uVar31 = 0;
    do {
      puVar4 = (uint *)((long)auStack_4e94 + ((long)((ulong)uVar31 << 0x20) >> 0x1e) + -0x14);
      if (*puVar4 != 0xffffffff) {
        uVar17 = FUN_033fbdb0(puVar4);
        if (((uVar17 & 1) != 0) && (uVar14 != *puVar4)) {
          lVar25 = *(long *)PTR_DAT_04bb46b0;
          if (lVar25 == 0) {
LAB_02bb8074:
            lVar25 = 0;
            plVar21 = plRam00000000000000d0;
            if (plRam00000000000000d0 != (long *)0x0) goto LAB_02bb8080;
LAB_02bb80a0:
            uVar17 = 0;
          }
          else {
            puVar20 = *(undefined8 **)(lVar25 + 0x10);
            if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
              lVar22 = (**(code **)(*(long *)*puVar20 + 0x38))();
              lVar25 = 0;
              if (lVar22 != 0) {
                lVar25 = lVar22 + 0x70;
              }
              plVar21 = *(long **)(lVar25 + 0xd0);
            }
            else {
              if ((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0))
              goto LAB_02bb8074;
              lVar25 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
              plVar21 = *(long **)(lVar25 + 0xd0);
            }
            if (plVar21 == (long *)0x0) goto LAB_02bb80a0;
LAB_02bb8080:
            if ((undefined8 *)*plVar21 == (undefined8 *)0x0) goto LAB_02bb80a0;
            uVar17 = (*(code *)**(undefined8 **)*plVar21)();
            uVar17 = uVar17 & 0xffffffff;
          }
          lVar22 = *(long *)(lVar25 + 0xb8) + *(long *)(lVar25 + 0xb0);
          lVar5 = lVar22 + (ulong)*puVar4 * 0x13230;
          if (9 < *puVar4) {
            lVar5 = lVar22;
          }
          local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          pcStack_4ec0 = "MoveInCompletion";
          iVar15 = FUN_02749340(lVar5 + 0x1267c,&local_4ec8);
          if ((iVar15 == 0) || (*(char *)(lVar5 + 0x1267a) != '\x01')) {
            if (((uVar17 & 1) != 0) &&
               ((*(long *)(lVar25 + 0xd0) != 0 &&
                (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0xd0) + 8),
                puVar20 != (undefined8 *)0x0)))) {
              (**(code **)*puVar20)();
            }
            if (iVar13 - 1U != *puVar4) {
              uVar26 = (uint)uVar16;
              if (9 < uVar26) {
                uVar16 = 0;
              }
              *(uint *)(param_1 + 0x1c1d8 + uVar16 * 4) = *puVar4;
              *puVar1 = *puVar1 + 1;
              uVar16 = (ulong)(uVar26 + 1);
            }
          }
          else if ((uVar17 & 1) != 0) {
            if (*(long *)(lVar25 + 0xd0) != 0) {
              puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0xd0) + 8);
              if (puVar20 != (undefined8 *)0x0) {
                (**(code **)*puVar20)();
              }
            }
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != 10);
    uVar14 = 0;
    iVar13 = 0;
    goto switchD_02bb793c_caseD_2;
  case 8:
  case 0xf:
    bVar19 = bVar8;
    if (7 < bVar8) {
      bVar19 = 0xff;
    }
    local_4ed8 = (undefined *)CONCAT71(local_4ed8._1_7_,bVar19);
    FUN_0265eba0(&local_4ea8);
    if (((uint)local_4ea8 == -1) || (uVar16 = FUN_033fbdb0(&local_4ea8), (uVar16 & 1) == 0)) {
LAB_02bb7a68:
      uVar16 = 0;
    }
    else {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30((ulong)local_4ea8 & 0xffffffff,&local_4ed8,&local_4ec8);
      if (iVar13 == 0) goto LAB_02bb7a68;
      uVar16 = 1;
      *(uint *)(param_1 + 0x1c1d8) = (uint)local_4ea8;
      *puVar1 = *puVar1 + 1;
    }
    lVar25 = param_1 + 0x1c1d8;
    if ((local_4ea8._4_4_ != -1) &&
       (uVar17 = FUN_033fbdb0((long)&local_4ea8 + 4), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(local_4ea8._4_4_,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = local_4ea8._4_4_;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if (((uint)local_4ea0 != -1) && (uVar17 = FUN_033fbdb0(&local_4ea0), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30((ulong)local_4ea0 & 0xffffffff,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = (uint)local_4ea0;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((local_4ea0._4_4_ != -1) &&
       (uVar17 = FUN_033fbdb0((long)&local_4ea0 + 4), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(local_4ea0._4_4_,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = local_4ea0._4_4_;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((local_4e98 != 0xffffffff) && (uVar17 = FUN_033fbdb0(&local_4e98), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(local_4e98,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = local_4e98;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((CONCAT22(auStack_4e94[1],auStack_4e94[0]) != -1) &&
       (uVar17 = FUN_033fbdb0(auStack_4e94), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(CONCAT22(auStack_4e94[1],auStack_4e94[0]),&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = CONCAT22(auStack_4e94[1],auStack_4e94[0]);
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((local_4e90 != 0xffffffff) && (uVar17 = FUN_033fbdb0(&local_4e90), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(local_4e90,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = local_4e90;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((CONCAT22(uStack_4e8a,uStack_4e8c) != -1) &&
       (uVar17 = FUN_033fbdb0(&uStack_4e8c), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(CONCAT22(uStack_4e8a,uStack_4e8c),&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(uint *)(lVar25 + uVar16 * 4) = CONCAT22(uStack_4e8a,uStack_4e8c);
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if (((int)local_4e88 != -1) && (uVar17 = FUN_033fbdb0(&local_4e88), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30((int)local_4e88,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(int *)(lVar25 + uVar16 * 4) = (int)local_4e88;
        uVar16 = (ulong)((int)uVar16 + 1);
        *puVar1 = *puVar1 + 1;
      }
    }
    if ((local_4e88._4_4_ != -1) &&
       (uVar17 = FUN_033fbdb0((long)&local_4e88 + 4), (uVar17 & 1) != 0)) {
      local_4ec8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_4ec0 = "HasAcquaintanceship";
      iVar13 = FUN_02746c30(local_4e88._4_4_,&local_4ed8,&local_4ec8);
      if (iVar13 != 0) {
        *(int *)(lVar25 + uVar16 * 4) = local_4e88._4_4_;
        *puVar1 = *puVar1 + 1;
      }
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
    *(undefined4 *)(param_1 + 0x1c1c4) = 0;
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
LAB_02bb8290:
      iVar13 = 0;
      uVar14 = 0;
      goto switchD_02bb793c_caseD_2;
    }
    puVar20 = *(undefined8 **)(lVar25 + 0x10);
    if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
      lVar25 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar25 != 0) {
        lVar25 = lVar25 + 0x70;
LAB_02bb7f0c:
        if ((*(long **)(lVar25 + 0xe7140) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(lVar25 + 0xe7140), puVar20 == (undefined8 *)0x0)) {
          uVar14 = 1;
        }
        else {
          uVar14 = (**(code **)*puVar20)();
          uVar14 = uVar14 ^ 1;
        }
        FUN_0266b370(&local_4ea8);
        uVar31 = 0;
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        do {
          puVar4 = (uint *)((long)auStack_4e94 + ((long)((ulong)uVar31 << 0x20) >> 0x1e) + -0x14);
          if ((*puVar4 < 8) &&
             (uVar16 = FUN_02818650(*(long *)(lVar25 + 0xe7128) + *(long *)(lVar25 + 0xe7120)),
             (uVar16 & 1) != 0)) {
            if ((*(int *)(param_1 + 0x1c1c0) == 0xc) || (*(int *)(param_1 + 0x1c1c0) == 10)) {
              pcStack_4ec0 = "MakeVillagePlayerFlag";
              local_4ec8 = ppuVar2;
              iVar13 = FUN_0274ce10(puVar4,&local_4ec8);
              if (iVar13 != 0) goto LAB_02bb8210;
            }
            uVar26 = *(uint *)(param_1 + 0x1c1c4);
            if (*(uint *)(param_1 + 0x1c1c8) <= uVar26) {
              uVar26 = 0;
            }
            *(uint *)(*(long *)(param_1 + 0x1c1d0) + (long)(int)uVar26 * 4) = *puVar4;
            *(int *)(param_1 + 0x1c1c4) = *(int *)(param_1 + 0x1c1c4) + 1;
            *puVar1 = *puVar1 + 1;
          }
LAB_02bb8210:
          uVar31 = uVar31 + 1;
        } while (uVar31 != 8);
        if ((uVar14 & 1) == 0) {
          if (*(long *)(lVar25 + 0xe7140) == 0) goto LAB_02bb8290;
          puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0xe7140) + 8);
          if (puVar20 != (undefined8 *)0x0) {
            (**(code **)*puVar20)();
          }
        }
      }
    }
    else {
      if (puVar20 == (undefined8 *)0x0) goto LAB_02bb8290;
      if (((long *)puVar20[0x26] != (long *)0x0) &&
         (lVar25 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar25 != 0)) goto LAB_02bb7f0c;
    }
    break;
  case 0xd:
    local_4e90 = local_4e90 & 0xffffff;
    plVar21 = (long *)(param_1 + 0x1c2a0);
    local_4e98 = 8;
    local_4ea8 = PTR_DAT_04bb6a30 + 0x10;
    local_4ea0 = (undefined8 *)auStack_4e94;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    puVar28 = *(undefined2 **)(puVar3 + 8);
    if (auStack_4e94 != puVar28) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar25) == '\0') goto LAB_02bb864c;
        lVar22 = *(long *)(puVar3 + 8) + lVar25;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_02bb864c;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_02bb864c;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_02bb864c:
      iVar13 = (int)lVar25;
      if ((int)local_4e98 <= (int)lVar25) {
        iVar13 = local_4e98 - 1;
      }
      memcpy(auStack_4e94,puVar28,(long)iVar13);
      *(undefined1 *)((long)auStack_4e94 + (long)iVar13) = 0;
    }
    lVar25 = 0;
    local_4ea8 = PTR_DAT_04bb3768 + 0x10;
    do {
      __dest = (undefined2 *)plVar21[lVar25 * 4 + 1];
      (**(code **)(local_4ea8 + 0x18))(&local_4ea8);
      puVar28 = (undefined2 *)local_4ea0;
      if ((undefined8 *)__dest != local_4ea0) {
        (**(code **)(local_4ea8 + 0x18))(&local_4ea8);
        lVar22 = 0;
        do {
          if (*(char *)((long)local_4ea0 + lVar22) == '\0') goto LAB_02bb8690;
          if (*(char *)((long)local_4ea0 + lVar22 + 1) == '\0') {
            lVar22 = lVar22 + 1;
            goto LAB_02bb8690;
          }
          if (*(char *)((long)local_4ea0 + lVar22 + 2) == '\0') {
            lVar22 = lVar22 + 2;
            goto LAB_02bb8690;
          }
          lVar22 = lVar22 + 3;
        } while (lVar22 != 0x80001);
        lVar22 = 0;
LAB_02bb8690:
        iVar13 = (int)lVar22;
        if ((int)plVar21[lVar25 * 4 + 2] <= (int)lVar22) {
          iVar13 = (int)plVar21[lVar25 * 4 + 2] + -1;
        }
        memcpy(__dest,puVar28,(long)iVar13);
        *(undefined1 *)((long)__dest + (long)iVar13) = 0;
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 500);
    lVar25 = 0x1f2;
    local_4e88 = alStack_4e68;
    local_4ea8 = (undefined *)0x0;
    local_4ea0 = (undefined8 *)0x0;
    local_4e98 = (uint)&local_4e88;
    auStack_4e94[0] = (undefined2)((ulong)&local_4e88 >> 0x20);
    auStack_4e94[1] = (undefined2)((ulong)&local_4e88 >> 0x30);
    plVar23 = local_4e88;
    do {
      lVar25 = lVar25 + -2;
      *plVar23 = (long)(plVar23 + 4);
      plVar23[4] = (long)(plVar23 + 8);
      plVar23 = plVar23 + 8;
    } while (lVar25 != 0);
    local_1028 = 0;
    if (local_1008 != (undefined8 *)0x0) {
      local_4ea8 = (undefined *)0x1f400000000;
      local_4ea0 = local_1008;
    }
    pcStack_4ec0 = (char *)&local_4ea8;
    local_4ec8 = &PTR_LAB_04aa7758;
    local_4e90 = local_4e98;
    uStack_4e8c = auStack_4e94[0];
    uStack_4e8a = auStack_4e94[1];
    FUN_0377bd50(&local_4ec8);
    puVar20 = local_4ea0;
    uVar14 = (uint)local_4ea8;
    if (*(short *)(param_1 + 0x20140) == 0x2000) {
      uVar16 = (ulong)local_4ea8 & 0xffffffff;
      if (1 < (int)(uint)local_4ea8) {
        uVar17 = (ulong)((uint)local_4ea8 >> 1);
        do {
          uVar26 = (uint)uVar17;
          uVar31 = uVar26 * 2;
          uVar18 = puVar20[uVar17 - 1 & 0xffffffff];
          if ((int)uVar31 <= (int)uVar14) {
            uVar24 = uVar17 & 0xffffffff;
            do {
              uVar26 = uVar31;
              if ((int)uVar31 < (int)uVar14) {
                uVar29 = (puVar20 + (int)uVar31)[-1];
                uVar6 = puVar20[(int)uVar31];
                uVar11 = FUN_03466f70(uVar29);
                uVar12 = FUN_03466f70(uVar6);
                if (uVar11 < uVar12) {
                  uVar26 = 1;
                }
                else if (uVar11 == uVar12) {
                  uVar7 = **(undefined4 **)PTR_DAT_04bb3448;
                  uVar11 = FUN_037107a0(uVar29,uVar7);
                  uVar12 = FUN_037107a0(uVar6,uVar7);
                  uVar26 = (uint)(uVar11 < uVar12);
                }
                else {
                  uVar26 = 0;
                }
                uVar26 = uVar26 | uVar31;
              }
              uVar29 = puVar20[(int)(uVar26 - 1)];
              uVar11 = FUN_03466f70(uVar18);
              uVar12 = FUN_03466f70(uVar29);
              if (uVar12 <= uVar11) {
                if (uVar11 == uVar12) {
                  uVar7 = **(undefined4 **)PTR_DAT_04bb3448;
                  uVar11 = FUN_037107a0(uVar18,uVar7);
                  uVar12 = FUN_037107a0(uVar29,uVar7);
                  if (uVar11 < uVar12) goto LAB_02bb8940;
                }
                uVar26 = (uint)uVar24;
                break;
              }
LAB_02bb8940:
              uVar31 = uVar26 * 2;
              puVar20[(int)((uint)uVar24 - 1)] = puVar20[(int)(uVar26 - 1)];
              uVar24 = (ulong)uVar26;
            } while ((int)uVar31 <= (int)uVar14);
          }
          puVar20[(int)(uVar26 - 1)] = uVar18;
          bVar10 = 1 < (long)uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar10);
        uVar17 = uVar16 - 1;
        uVar24 = uVar17 & 0xffffffff;
        uVar18 = puVar20[uVar24];
        puVar20[uVar24] = *puVar20;
        if (2 < uVar14) {
          do {
            uVar24 = uVar17;
            uVar14 = 2;
            uVar31 = 1;
            do {
              if ((int)uVar14 < (int)uVar24) {
                uVar29 = (puVar20 + (int)uVar14)[-1];
                uVar6 = puVar20[(int)uVar14];
                uVar11 = FUN_03466f70(uVar29);
                uVar12 = FUN_03466f70(uVar6);
                if (uVar11 < uVar12) {
                  uVar26 = 1;
                }
                else if (uVar11 == uVar12) {
                  uVar7 = **(undefined4 **)PTR_DAT_04bb3448;
                  uVar11 = FUN_037107a0(uVar29,uVar7);
                  uVar12 = FUN_037107a0(uVar6,uVar7);
                  uVar26 = (uint)(uVar11 < uVar12);
                }
                else {
                  uVar26 = 0;
                }
                uVar26 = uVar26 | uVar14;
              }
              else {
                uVar26 = uVar14;
              }
              uVar29 = puVar20[(int)(uVar26 - 1)];
              uVar11 = FUN_03466f70(uVar18);
              uVar12 = FUN_03466f70(uVar29);
              if (uVar12 <= uVar11) {
                if (uVar11 == uVar12) {
                  uVar7 = **(undefined4 **)PTR_DAT_04bb3448;
                  uVar11 = FUN_037107a0(uVar18,uVar7);
                  uVar12 = FUN_037107a0(uVar29,uVar7);
                  if (uVar11 < uVar12) goto LAB_02bb8be0;
                }
                lVar25 = (long)(int)(uVar31 - 1);
                break;
              }
LAB_02bb8be0:
              lVar25 = (long)(int)(uVar26 - 1);
              uVar14 = uVar26 << 1;
              puVar20[(int)(uVar31 - 1)] = puVar20[lVar25];
              uVar31 = uVar26;
            } while ((long)(int)uVar14 < (long)uVar16);
            puVar20[lVar25] = uVar18;
            uVar16 = uVar24 - 1 & 0xffffffff;
            uVar18 = puVar20[uVar16];
            puVar20[uVar16] = *puVar20;
            uVar17 = uVar24 - 1;
            uVar16 = uVar24;
          } while (2 < uVar24);
        }
        *puVar20 = uVar18;
        goto LAB_02bb8cf8;
      }
    }
    else {
      if (*(short *)(param_1 + 0x20140) == 0x1000) {
        uVar16 = (ulong)local_4ea8 & 0xffffffff;
        if ((int)(uint)local_4ea8 < 2) goto LAB_02bb8cfc;
        uVar17 = (ulong)((uint)local_4ea8 >> 1);
        puVar30 = (undefined8 *)PTR_DAT_04bb3448;
        do {
          uVar26 = (uint)uVar17;
          uVar31 = uVar26 * 2;
          uVar18 = puVar20[uVar17 - 1 & 0xffffffff];
          if ((int)uVar31 <= (int)uVar14) {
            uVar24 = uVar17 & 0xffffffff;
            do {
              uVar26 = uVar31;
              if ((int)uVar31 < (int)uVar14) {
                uVar29 = puVar20[(int)uVar31];
                uVar7 = *(undefined4 *)*puVar30;
                uVar11 = FUN_037107a0((puVar20 + (int)uVar31)[-1],uVar7);
                uVar12 = FUN_037107a0(uVar29,uVar7);
                uVar26 = uVar31 | uVar11 < uVar12;
              }
              uVar29 = puVar20[(int)(uVar26 - 1)];
              uVar7 = *(undefined4 *)*puVar30;
              uVar11 = FUN_037107a0(uVar18,uVar7);
              uVar12 = FUN_037107a0(uVar29,uVar7);
              puVar30 = (undefined8 *)PTR_DAT_04bb3448;
              if (uVar12 <= uVar11) {
                uVar26 = (uint)uVar24;
                break;
              }
              uVar31 = uVar26 * 2;
              puVar20[(int)((uint)uVar24 - 1)] = puVar20[(int)(uVar26 - 1)];
              uVar24 = (ulong)uVar26;
            } while ((int)uVar31 <= (int)uVar14);
          }
          puVar20[(int)(uVar26 - 1)] = uVar18;
          bVar10 = 1 < (long)uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar10);
        uVar17 = uVar16 - 1;
        uVar24 = uVar17 & 0xffffffff;
        uVar18 = puVar20[uVar24];
        puVar20[uVar24] = *puVar20;
        if (2 < uVar14) {
          do {
            uVar24 = uVar17;
            uVar14 = 2;
            uVar31 = 1;
            do {
              uVar26 = uVar14;
              if ((int)uVar14 < (int)uVar24) {
                uVar29 = puVar20[(int)uVar14];
                uVar7 = *(undefined4 *)*puVar30;
                uVar11 = FUN_037107a0((puVar20 + (int)uVar14)[-1],uVar7);
                uVar12 = FUN_037107a0(uVar29,uVar7);
                puVar30 = (undefined8 *)PTR_DAT_04bb3448;
                uVar26 = uVar14 | uVar11 < uVar12;
              }
              uVar29 = puVar20[(int)(uVar26 - 1)];
              uVar7 = *(undefined4 *)*puVar30;
              uVar11 = FUN_037107a0(uVar18,uVar7);
              uVar12 = FUN_037107a0(uVar29,uVar7);
              puVar30 = (undefined8 *)PTR_DAT_04bb3448;
              if (uVar12 <= uVar11) {
                lVar25 = (long)(int)(uVar31 - 1);
                break;
              }
              lVar25 = (long)(int)(uVar26 - 1);
              uVar14 = uVar26 << 1;
              puVar20[(int)(uVar31 - 1)] = puVar20[lVar25];
              uVar31 = uVar26;
            } while ((long)(int)uVar14 < (long)uVar16);
            puVar20[lVar25] = uVar18;
            uVar16 = uVar24 - 1 & 0xffffffff;
            uVar18 = puVar20[uVar16];
            puVar20[uVar16] = *puVar20;
            uVar17 = uVar24 - 1;
            uVar16 = uVar24;
          } while (2 < uVar24);
        }
        *puVar20 = uVar18;
      }
LAB_02bb8cf8:
    }
LAB_02bb8cfc:
    if ((uint)local_4ea8 == 0) {
      uVar14 = 0;
      *puVar1 = 0;
    }
    else {
      uVar14 = 0;
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      plVar23 = plVar21;
      do {
        plVar27 = (long *)local_4ea0[(int)uVar14];
        (**(code **)(*plVar27 + 0x18))(plVar27);
        lStack_4ed0 = plVar27[1];
        plVar27 = plVar23;
        if (499 < uVar14) {
          plVar27 = plVar21;
        }
        local_4ed8 = puVar3;
        (**(code **)(*plVar27 + 0x10))(plVar27,&local_4ed8);
        uVar14 = uVar14 + 1;
        plVar23 = plVar23 + 4;
      } while (uVar14 < (uint)local_4ea8);
      *puVar1 = (uint)local_4ea8;
      uVar14 = (uint)local_4ea8;
      if (0 < (int)(uint)local_4ea8) {
        lVar25 = 0;
        do {
          (*(code *)**(undefined8 **)local_4ea0[lVar25])();
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)(uint)local_4ea8);
        uVar14 = *puVar1;
      }
    }
    if (**(char **)(param_1 + 0x20128) == '\0' || uVar14 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      while( true ) {
        plVar23 = plVar21 + uVar16 * 4;
        if (499 < uVar16) {
          plVar23 = plVar21;
        }
        (**(code **)(*plVar23 + 0x18))(plVar23);
        (**(code **)(*plVar23 + 0x18))(plVar23);
        lVar22 = plVar23[1];
        (**(code **)(*(long *)(param_1 + 0x20120) + 0x18))((long *)(param_1 + 0x20120));
        lVar25 = *(long *)(param_1 + 0x20128);
        if (lVar22 == lVar25) break;
        uVar17 = 0;
        bVar10 = true;
        do {
          lVar22 = plVar23[1] + 2 + uVar17;
          cVar9 = *(char *)(lVar22 + -2);
          if (cVar9 != *(char *)(lVar25 + uVar17)) break;
          if (cVar9 == '\0') {
            if (bVar10) goto LAB_02bb8dc4;
            break;
          }
          cVar9 = *(char *)(lVar22 + -1);
          if (cVar9 != *(char *)(lVar25 + uVar17 + 1)) break;
          if (cVar9 == '\0') goto LAB_02bb8dc4;
          cVar9 = *(char *)(plVar23[1] + 2 + uVar17);
          if (cVar9 != *(char *)(lVar25 + uVar17 + 2)) break;
          if (cVar9 == '\0') goto LAB_02bb8dc4;
          bVar10 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar16 = uVar16 + 1;
        if (*puVar1 <= uVar16) break;
      }
    }
LAB_02bb8dc4:
    uVar14 = (uint)uVar16;
    lVar25 = *(long *)(*(long *)(param_1 + 0x220) + 0x578);
    if (lVar25 == 0) {
      iVar13 = -1;
      uVar31 = 0;
    }
    else {
      iVar13 = *(int *)(lVar25 + 0x2f4) + -1;
      uVar31 = *(uint *)(lVar25 + 0x2e8);
    }
    uVar26 = 0;
    if (uVar31 != 0) {
      uVar26 = ((uVar31 + (uVar14 - iVar13 & ((int)(uVar14 - iVar13) >> 0x1f ^ 0xffffffffU))) - 1) /
               uVar31;
    }
    iVar13 = uVar26 * uVar31;
    goto switchD_02bb793c_caseD_2;
  default:
    iVar13 = 0;
    goto switchD_02bb793c_caseD_2;
  }
  uVar14 = 0;
  iVar13 = 0;
switchD_02bb793c_caseD_2:
  lVar25 = *(long *)(*(long *)(param_1 + 0x220) + 0x578);
  if (lVar25 != 0) {
    local_4e88._0_4_ = 0;
    auStack_4e94[1] = 1;
    local_4e90 = 0;
    uStack_4e8c = 0;
    local_4e88._4_4_ = 0xc;
    uStack_4e80 = 6;
    auStack_4e94[0] = 0;
    local_4ea8 = PTR_DAT_04bc9c78 + 0x10;
    local_4ea0 = (undefined8 *)CONCAT44(iVar13,*puVar1);
    local_4e7c = bVar8;
    if (7 < bVar8) {
      local_4e7c = 0xff;
    }
    local_4e98 = uVar14;
    FUN_03864290(lVar25,&local_4ea8);
    bVar10 = *(int *)(lVar25 + 0x2f8) == 0 || *(int *)(lVar25 + 0x208) == 0;
    if ((param_2 & 1) == 0) {
      if (bVar10) {
        return;
      }
      if (*(long *)(lVar25 + 0x270) == 0) {
        return;
      }
      if (*(long *)(*(long *)(lVar25 + 0x270) + 8) == 0) {
        return;
      }
      if ((*(long *)(lVar25 + 0x480) != 0) && (*(int *)(*(long *)(lVar25 + 0x480) + 0x14) == -1)) {
        return;
      }
      if (*(long *)(lVar25 + 0x2d8) == 0) {
        return;
      }
      if (*(int *)(lVar25 + 0x3d8) < 1) {
        return;
      }
      if (*(int *)(lVar25 + 0x3d4) == 0) {
        return;
      }
      if (1 < *(uint *)(lVar25 + 0x298)) {
        return;
      }
      *(undefined4 *)(lVar25 + 0x2e4) = 1;
      uVar18 = 3;
    }
    else {
      if (bVar10) {
        return;
      }
      if (*(long *)(lVar25 + 0x270) == 0) {
        return;
      }
      if (*(long *)(*(long *)(lVar25 + 0x270) + 8) == 0) {
        return;
      }
      if ((*(long *)(lVar25 + 0x480) != 0) && (*(int *)(*(long *)(lVar25 + 0x480) + 0x14) == -1)) {
        return;
      }
      if (*(long *)(lVar25 + 0x2d8) == 0) {
        return;
      }
      if (*(int *)(lVar25 + 0x3d8) < 1) {
        return;
      }
      if (*(int *)(lVar25 + 0x3d4) == 0) {
        return;
      }
      if (*(int *)(lVar25 + 0x298) == 2) {
        return;
      }
      uVar18 = 2;
    }
    FUN_03ebb160(lVar25 + 0x290,uVar18);
  }
  return;
}

