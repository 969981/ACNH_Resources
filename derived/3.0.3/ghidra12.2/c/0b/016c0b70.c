
void FUN_016c0b70(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  char cVar9;
  uint5 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  void *pvVar25;
  long lVar26;
  undefined8 uVar27;
  uint uVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  byte bVar33;
  undefined1 *puVar34;
  uint uVar35;
  undefined *puVar36;
  char *pcVar37;
  char *local_f60;
  undefined1 uStack_f42;
  undefined1 uStack_f41;
  undefined8 local_f40;
  char *pcStack_f38;
  undefined8 local_f30;
  char *local_f28;
  undefined8 local_f20;
  uint local_f18;
  undefined1 auStack_f14 [7];
  undefined1 local_f0d;
  int local_f0c;
  undefined4 local_f08;
  undefined4 uStack_f04;
  undefined1 local_f00;
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  ulong local_7b0;
  byte local_6c [12];
  
  if ((*(int *)(param_1 + 0xc) == -1) || (lVar29 = *(long *)PTR_DAT_04bb46b0, lVar29 == 0)) {
LAB_016c0c6c:
    bVar12 = false;
  }
  else {
    puVar30 = *(undefined8 **)(lVar29 + 0x10);
    if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
      lVar29 = (**(code **)(*(long *)*puVar30 + 0x38))();
      if (lVar29 == 0) goto LAB_016c0c6c;
      lVar29 = lVar29 + 0x70;
    }
    else if (((puVar30 == (undefined8 *)0x0) || ((long *)puVar30[0x26] == (long *)0x0)) ||
            (lVar29 = (**(code **)(*(long *)puVar30[0x26] + 0x38))(), lVar29 == 0))
    goto LAB_016c0c6c;
    iVar15 = *(int *)(param_1 + 0xc);
    puVar34 = &LAB_002057b0 + lVar29;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar34 = (undefined1 *)(lVar29 + 0x20b9e8);
    }
    if ((*(long **)(puVar34 + (long)iVar15 * 0xc40 + 0x28) == (long *)0x0) ||
       (puVar30 = (undefined8 *)**(long **)(puVar34 + (long)iVar15 * 0xc40 + 0x28),
       puVar30 == (undefined8 *)0x0)) {
      bVar12 = (*(byte *)(*(long *)(puVar34 + (long)iVar15 * 0xc40 + 0x10) +
                         *(long *)(puVar34 + (long)iVar15 * 0xc40 + 8)) & 1) == 0;
    }
    else {
      uVar19 = (**(code **)*puVar30)();
      bVar12 = (*(byte *)(*(long *)(puVar34 + (long)iVar15 * 0xc40 + 0x10) +
                         *(long *)(puVar34 + (long)iVar15 * 0xc40 + 8)) & 1) == 0;
      if ((((uVar19 & 1) != 0) && (*(long *)(puVar34 + (long)iVar15 * 0xc40 + 0x28) != 0)) &&
         (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (long)iVar15 * 0xc40 + 0x28) + 8),
         puVar30 != (undefined8 *)0x0)) {
        (**(code **)*puVar30)();
      }
    }
  }
  iVar15 = FUN_016d1b60();
  if (iVar15 == -1) {
    bVar13 = false;
  }
  else {
    iVar16 = FUN_021d7e50(param_1 + 0x58);
    bVar13 = iVar15 == iVar16;
  }
  puVar36 = PTR_DAT_04bb2020;
  pbVar1 = (byte *)(param_1 + 8);
  if (*(int *)(param_1 + 0x48) == 1) {
    FUN_0252d11c(&uStack_f42);
    puVar2 = puVar36 + 0x10;
    local_f28 = "HotelEditCompletedToday";
    local_f30 = puVar2;
    iVar15 = FUN_0274bce0(&uStack_f42,&local_f30);
    if (iVar15 == 0) {
      local_f28 = "CoordinateHotelRoom";
      local_f30 = puVar2;
      FUN_0279a9f0(&uStack_f42,&local_f30,1);
      local_f28 = "HotelEditCompletedToday";
      local_f30 = puVar2;
      FUN_0274bfe8(&uStack_f42,&local_f30,1);
    }
    FUN_0252d11c(&uStack_f41);
    local_7b8 = "hotel_editend_room";
    local_7c0 = puVar2;
    FUN_025ffac8(&local_f30,&local_7c0,&uStack_f41);
    local_7b0 = local_7b0 & 0xffffffffffffff00;
    local_f30 = PTR_DAT_04bc3310 + 0x10;
    local_7b8 = (char *)CONCAT44(4,(undefined4)local_7b8);
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar15 = 0;
      iVar16 = *(int *)(param_1 + 0x98);
joined_r0x016c0dc4:
      if (iVar16 == 0) goto LAB_016c0e34;
LAB_016c0e04:
      FUN_0252d11c(local_6c);
      local_f40 = puVar36 + 0x10;
      pcStack_f38 = "IsHotelEditTutorial";
      iVar16 = FUN_02753180(local_6c,&local_f40);
      if (iVar16 == 0) goto LAB_016c0e34;
      local_7c0._0_4_ = 2;
    }
    else {
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_0252d11c(local_6c);
        local_f40 = puVar36 + 0x10;
        pcStack_f38 = "IsHotelEditTutorial";
        iVar15 = FUN_02753180(local_6c,&local_f40);
        if (iVar15 != 0) {
          iVar15 = 1;
          iVar16 = *(int *)(param_1 + 0x98);
          goto joined_r0x016c0dc4;
        }
      }
      uVar19 = (ulong)local_f40 >> 0x20;
      local_f40 = (undefined *)((ulong)local_f40 & 0xffffffff00000000);
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
        local_f40 = (undefined *)CONCAT44((int)uVar19,4);
        iVar15 = 3;
        if ((*(byte *)(param_1 + 0x54) >> 4 & 1) != 0) {
          iVar15 = 4;
        }
        iVar16 = *(int *)(param_1 + 0x98);
        goto joined_r0x016c0dc4;
      }
      iVar15 = 2;
      if (*(int *)(param_1 + 0x98) != 0) goto LAB_016c0e04;
LAB_016c0e34:
      local_7c0._0_4_ = (uint)*pbVar1;
    }
    local_7c0._4_4_ = *(undefined4 *)(param_1 + 0xc);
    uVar18 = 1;
    if (iVar15 == 4) {
      uVar18 = 2;
    }
    uVar5 = 0;
    if (1 < iVar15 - 1U) {
      uVar5 = uVar18;
    }
    local_7b8 = (char *)CONCAT44(local_7b8._4_4_,uVar5);
    if (**(char **)(param_1 + 0x60) == '\0') {
      uVar18 = 4;
    }
    else {
      local_f40 = (undefined *)CONCAT44(local_f40._4_4_,3);
      if ((*(byte *)(param_1 + 0x54) >> 3 & 1) == 0) {
        iVar15 = FUN_016d1b60();
        if ((iVar15 == -1) || (iVar16 = FUN_021d7e50(param_1 + 0x58), iVar15 != iVar16)) {
          FUN_021d7e50(param_1 + 0x58);
          lVar29 = FUN_016c91a4();
          if (lVar29 == 0) {
            uVar18 = 0;
          }
          else {
            if ((*(long **)(lVar29 + 0x28) == (long *)0x0) ||
               (puVar30 = (undefined8 *)**(long **)(lVar29 + 0x28), puVar30 == (undefined8 *)0x0)) {
              uVar17 = 1;
            }
            else {
              uVar17 = (**(code **)*puVar30)();
              uVar17 = uVar17 ^ 1;
            }
            bVar33 = *(byte *)(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8) + 0x1635);
            if (bVar33 < 5) {
              local_f40 = (undefined *)CONCAT44(local_f40._4_4_,(uint)bVar33);
              uVar18 = 3;
              if ((bVar33 & 0xfffffffe) != 2) {
                uVar18 = 0;
              }
            }
            else {
              uVar18 = 0;
            }
            if ((((uVar17 & 1) == 0) && (*(long *)(lVar29 + 0x28) != 0)) &&
               (puVar30 = *(undefined8 **)(*(long *)(lVar29 + 0x28) + 8),
               puVar30 != (undefined8 *)0x0)) {
              (**(code **)*puVar30)();
            }
          }
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        uVar18 = 1;
      }
    }
    local_7b8 = (char *)CONCAT44(uVar18,(undefined4)local_7b8);
    local_f40 = (undefined *)CONCAT44(local_f40._4_4_,*(undefined4 *)PTR_DAT_04bb4b48);
    FUN_007d6d7c(&local_f40,pbVar1);
    uVar14 = FUN_016c7db8(&local_f40);
    local_7b0 = CONCAT71(local_7b0._1_7_,uVar14) & 0xffffffffffffff01;
    FUN_025b1d3c(&local_f30,&local_7c0);
    iVar15 = (**(code **)(local_f30 + 0x20))(&local_f30);
    if (((iVar15 == -1) ||
        (local_7c0._0_4_ = (**(code **)(local_f30 + 0x20))(&local_f30), 0xc < (int)(uint)local_7c0))
       && (local_f0c == 0)) {
      local_f0c = 1;
    }
    FUN_02601530(&local_f30);
    local_7b8 = "HotelUnlockVipRoom";
    local_7c0 = puVar36 + 0x10;
    uVar19 = FUN_0273f0a0(&local_7c0);
    if ((uVar19 & 1) != 0) {
      pcStack_f38 = "HotelIsAddForHotelEditSPToday";
      local_f40 = puVar36 + 0x10;
      iVar15 = FUN_0274bce0(&uStack_f42,&local_f40);
      if (iVar15 == 0) {
        if (*(int *)(param_1 + 0x98) == 0) {
LAB_016c1110:
          if (*(int *)(param_1 + 0x98) != 0) {
            if (*(int *)(param_1 + 0x98) != 0) {
              FUN_0252d11c(local_6c);
              local_f30 = puVar36 + 0x10;
              local_f28 = "IsHotelEditTutorial";
              iVar15 = FUN_02753180(local_6c,&local_f30);
              if (iVar15 != 0) goto LAB_016c0f58;
            }
            uVar19 = (ulong)local_f30 >> 0x20;
            local_f30 = (undefined *)((ulong)local_f30 & 0xffffffff00000000);
            if (((*(byte *)(param_1 + 0x54) & 1) == 0) &&
               (local_f30 = (undefined *)CONCAT44((int)uVar19,4),
               (*(byte *)(param_1 + 0x54) >> 4 & 1) != 0)) goto LAB_016c1170;
          }
        }
        else {
          if (*(int *)(param_1 + 0x98) != 0) {
            FUN_0252d11c(local_6c);
            local_f30 = puVar36 + 0x10;
            local_f28 = "IsHotelEditTutorial";
            iVar15 = FUN_02753180(local_6c,&local_f30);
            if (iVar15 != 0) goto LAB_016c1110;
          }
          if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
            local_f30 = (undefined *)CONCAT44((int)((ulong)local_f30 >> 0x20),4);
            goto LAB_016c1110;
          }
LAB_016c1170:
          local_f28 = "HotelIsAddForHotelEditSPToday";
          local_f30 = puVar36 + 0x10;
          FUN_0274bfe8(&uStack_f42,&local_f30,1);
          local_f28 = "HotelUnlockItemFromPoint";
          local_f30 = puVar36 + 0x10;
          puVar20 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)PTR_DAT_04bb4940 + 0x188) + 0xf0))
                              (*(long *)PTR_DAT_04bb4940 + 0x188);
          FUN_0273fd90(&local_f30,*puVar20);
        }
      }
    }
  }
LAB_016c0f58:
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0252d11c(&local_7c0);
    local_f30 = puVar36 + 0x10;
    local_f28 = "IsHotelEditTutorial";
    iVar15 = FUN_02753180(&local_7c0,&local_f30);
    bVar11 = bVar12;
    if (iVar15 == 0) {
      bVar11 = true;
    }
    if (!bVar11) {
      FUN_016c2bf8();
      goto LAB_016c2a90;
    }
  }
  if (*(int *)(param_1 + 0x48) == 2) {
    FUN_016c2bf8();
    iVar15 = FUN_016d1b60();
    if ((iVar15 != -1) && (iVar16 = FUN_021d7e50(param_1 + 0x58), iVar15 == iVar16)) {
      uVar27 = FUN_016d1b60();
      lVar29 = FUN_021c9770(uVar27,1);
      if (lVar29 != 0) {
        FUN_020939a8(lVar29 + 0x10,0,1,0);
        if (*(char *)(lVar29 + 0x6c) == '\0') {
          *(undefined1 *)(lVar29 + 0x6c) = 1;
        }
        *(undefined4 *)(lVar29 + 0x68) = 0;
      }
    }
    goto LAB_016c2a90;
  }
  if (*(int *)(param_1 + 0x48) != 1) goto LAB_016c2a90;
  iVar15 = FUN_0252d29c();
  puVar2 = PTR_DAT_04bb46b0;
  lVar29 = *(long *)PTR_DAT_04bb46b0;
  if (lVar29 != 0) {
    puVar30 = *(undefined8 **)(lVar29 + 0x10);
    if ((*(byte *)(lVar29 + 0x453) & 1) != 0) {
      if (((puVar30 != (undefined8 *)0x0) && ((long *)puVar30[0x26] != (long *)0x0)) &&
         (lVar29 = (**(code **)(*(long *)puVar30[0x26] + 0x38))(), lVar29 != 0)) {
        lVar29 = lVar29 + (long)iVar15 * 0xcb0;
        lVar26 = lVar29 + 0x211c20;
        lVar29 = *(long *)(lVar29 + 0x211c48);
        if (lVar29 != 0) goto LAB_016c0ffc;
LAB_016c122c:
        uVar19 = 0;
        goto LAB_016c12d0;
      }
      goto LAB_016c20c8;
    }
    lVar29 = (**(code **)(*(long *)*puVar30 + 0x38))();
    if (lVar29 == 0) goto LAB_016c20c8;
    lVar29 = lVar29 + (long)iVar15 * 0xcb0;
    lVar26 = lVar29 + 0x211c90;
    lVar29 = *(long *)(lVar29 + 0x211cb8);
    if (lVar29 == 0) goto LAB_016c122c;
LAB_016c0ffc:
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      lVar29 = *(long *)(lVar26 + 0x28);
      uVar19 = uVar19 & 0xffffffff;
      if (lVar29 == 0) goto LAB_016c12d0;
    }
    plVar21 = *(long **)(lVar29 + 0x20);
    if (plVar21 != (long *)0x0) {
      local_f30 = *(undefined **)(lVar26 + 8);
      local_f28 = *(char **)(lVar26 + 0x10);
      local_f20 = (undefined1 *)0x1594;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_f30);
    }
LAB_016c12d0:
    pcVar37 = *(char **)(lVar26 + 0x10) + (long)*(undefined **)(lVar26 + 8);
    bVar33 = pcVar37[0x1590];
    if ((bVar33 & 1) != 0) {
      if ((*(long *)(lVar26 + 0x28) != 0) &&
         (plVar21 = *(long **)(*(long *)(lVar26 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
        local_f20 = (undefined1 *)0x1594;
        local_f30 = *(undefined **)(lVar26 + 8);
        local_f28 = *(char **)(lVar26 + 0x10);
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_f30);
        pcVar37 = (char *)(*(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8));
        bVar33 = pcVar37[0x1590];
      }
      uVar17 = *(uint *)(pcVar37 + 0x158c);
      if ((uVar17 < 8) && (lVar29 = *(long *)puVar2, lVar29 != 0)) {
        puVar30 = *(undefined8 **)(lVar29 + 0x10);
        if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
          lVar29 = (**(code **)(*(long *)*puVar30 + 0x38))();
          if (lVar29 != 0) {
            lVar29 = lVar29 + 0x70;
            goto LAB_016c1390;
          }
        }
        else if (((puVar30 != (undefined8 *)0x0) && ((long *)puVar30[0x26] != (long *)0x0)) &&
                (lVar29 = (**(code **)(*(long *)puVar30[0x26] + 0x38))(), lVar29 != 0)) {
LAB_016c1390:
          local_f18 = local_f18 & 0xffffff;
          uVar22 = (ulong)local_f20 >> 0x20;
          puVar34 = &LAB_002057b0 + lVar29;
          if ((bVar33 & 2) != 0) {
            puVar34 = (undefined1 *)(lVar29 + 0x20b9e8);
          }
          local_f20 = (undefined1 *)CONCAT44((uint)uVar22 & 0xffffff00,8);
          local_f28 = (char *)((long)&local_f20 + 4);
          local_f30 = PTR_DAT_04bb3768 + 0x10;
          if ((*(long **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0) == (long *)0x0) ||
             (puVar30 = (undefined8 *)**(long **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0),
             puVar30 == (undefined8 *)0x0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (**(code **)*puVar30)();
            uVar22 = uVar22 & 0xffffffff;
          }
          FUN_02774cf0(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d8) +
                       *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d0),&local_f30);
          if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0) != 0)) &&
             (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0) + 8),
             puVar30 != (undefined8 *)0x0)) {
            (**(code **)*puVar30)();
          }
          if ((*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) == 0) ||
             (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) + 0x10),
             puVar30 == (undefined8 *)0x0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (**(code **)*puVar30)();
            uVar22 = uVar22 & 0xffffffff;
          }
          if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
             (puVar30 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar30 == (undefined8 *)0x0)) {
            uVar23 = 0;
          }
          else {
            uVar23 = (**(code **)*puVar30)();
            uVar23 = uVar23 & 0xffffffff;
          }
          if ((*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) != 0) &&
             (plVar21 = *(long **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) + 0x20),
             plVar21 != (long *)0x0)) {
            local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 8);
            local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x10);
            local_7b0 = 0x158c;
            (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
          }
          memcpy((void *)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x10) +
                         *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 8)),
                 (void *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40)),0x158c);
          if ((((uVar23 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
             (puVar30 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar30 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar30)();
          }
          if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) != 0)) &&
             (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x28) + 0x18),
             puVar30 != (undefined8 *)0x0)) {
            (**(code **)*puVar30)();
          }
          lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0);
          if (*pbVar1 == 0) {
            if (lVar29 == 0) {
              uVar22 = 0;
            }
            else {
              if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
                uVar22 = 0;
              }
              else {
                uVar22 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
                lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0);
                uVar22 = uVar22 & 0xffffffff;
                if (lVar29 == 0) goto LAB_016c17a8;
              }
              plVar21 = *(long **)(lVar29 + 0x20);
              if (plVar21 != (long *)0x0) {
                local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d0);
                local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d8);
                local_7b0 = 5;
                (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
              }
            }
LAB_016c17a8:
            local_f60 = (char *)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d8) +
                                *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d0));
            (**(code **)(local_f30 + 0x18))(&local_f30);
            lVar29 = 0;
            do {
              if (local_f28[lVar29] == '\0') {
LAB_016c1810:
                if (5 < (int)lVar29) goto LAB_016c1cec;
                break;
              }
              if (local_f28[lVar29 + 1] == '\0') {
                lVar29 = lVar29 + 1;
                goto LAB_016c1810;
              }
              if (local_f28[lVar29 + 2] == '\0') {
                lVar29 = lVar29 + 2;
                goto LAB_016c1810;
              }
              lVar29 = lVar29 + 3;
            } while (lVar29 != 0x80001);
            (**(code **)(local_f30 + 0x18))(&local_f30);
            lVar29 = 0;
            do {
              if (local_f28[lVar29] == '\0') {
LAB_016c1880:
                uVar35 = (uint)lVar29;
                uVar28 = uVar35;
                if (4 < (int)uVar35) {
                  uVar28 = 5;
                }
                if ((int)uVar35 < 1) {
                  uVar23 = (ulong)uVar28;
                  goto LAB_016c1cd4;
                }
                uVar6 = uVar28;
                if ((int)uVar28 < 2) {
                  uVar6 = 1;
                }
                (**(code **)(local_f30 + 0x18))(&local_f30);
                lVar29 = 0;
                goto LAB_016c18bc;
              }
              if (local_f28[lVar29 + 1] == '\0') {
                lVar29 = lVar29 + 1;
                goto LAB_016c1880;
              }
              if (local_f28[lVar29 + 2] == '\0') {
                lVar29 = lVar29 + 2;
                goto LAB_016c1880;
              }
              lVar29 = lVar29 + 3;
            } while (lVar29 != 0x80001);
            uVar23 = 0;
            goto LAB_016c1cd4;
          }
          if (lVar29 == 0) {
            uVar22 = 0;
          }
          else {
            if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
              lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0);
              uVar22 = uVar22 & 0xffffffff;
              if (lVar29 == 0) goto LAB_016c15bc;
            }
            plVar21 = *(long **)(lVar29 + 0x20);
            if (plVar21 != (long *)0x0) {
              local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d0);
              local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d8);
              local_7b0 = 5;
              (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
            }
          }
LAB_016c15bc:
          local_f60 = (char *)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d8) +
                              *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6d0));
          plVar21 = (long *)(param_1 + 0x58);
          (**(code **)(*plVar21 + 0x18))(plVar21);
          lVar29 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x60) + lVar29) == '\0') {
LAB_016c1628:
              if (5 < (int)lVar29) goto LAB_016c1cec;
              break;
            }
            lVar31 = *(long *)(param_1 + 0x60) + lVar29;
            if (*(char *)(lVar31 + 1) == '\0') {
              lVar29 = lVar29 + 1;
              goto LAB_016c1628;
            }
            if (*(char *)(lVar31 + 2) == '\0') {
              lVar29 = lVar29 + 2;
              goto LAB_016c1628;
            }
            lVar29 = lVar29 + 3;
          } while (lVar29 != 0x80001);
          (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
          lVar29 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x60) + lVar29) == '\0') {
LAB_016c169c:
              uVar35 = (uint)lVar29;
              uVar28 = uVar35;
              if (4 < (int)uVar35) {
                uVar28 = 5;
              }
              if ((int)uVar35 < 1) goto LAB_016c1cd0;
              uVar6 = uVar28;
              if ((int)uVar28 < 2) {
                uVar6 = 1;
              }
              (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
              pcVar37 = *(char **)(param_1 + 0x60);
              lVar29 = 0;
              goto LAB_016c16dc;
            }
            lVar31 = *(long *)(param_1 + 0x60) + lVar29;
            if (*(char *)(lVar31 + 1) == '\0') {
              lVar29 = lVar29 + 1;
              goto LAB_016c169c;
            }
            if (*(char *)(lVar31 + 2) == '\0') {
              lVar29 = lVar29 + 2;
              goto LAB_016c169c;
            }
            lVar29 = lVar29 + 3;
          } while (lVar29 != 0x80001);
          uVar28 = 0;
          goto LAB_016c1cd0;
        }
      }
    }
    goto LAB_016c20a8;
  }
  goto LAB_016c20c8;
LAB_016c18bc:
  if ((local_f28[lVar29] == '\0') || (local_f28[lVar29 + 1] == '\0')) goto LAB_016c18e4;
  if ((local_f28[lVar29 + 2] == '\0') || (bVar11 = lVar29 == 0x7fffe, lVar29 = lVar29 + 3, bVar11))
  goto LAB_016c18e4;
  goto LAB_016c18bc;
LAB_016c18e4:
  *local_f60 = *local_f28;
  if (1 < (int)uVar28) {
    (**(code **)(local_f30 + 0x18))(&local_f30);
    lVar29 = 0;
    do {
      if (local_f28[lVar29] == '\0') goto LAB_016c19e4;
      if (local_f28[lVar29 + 1] == '\0') {
        lVar29 = lVar29 + 1;
        goto LAB_016c19e4;
      }
      if (local_f28[lVar29 + 2] == '\0') {
        lVar29 = lVar29 + 2;
        goto LAB_016c19e4;
      }
      lVar29 = lVar29 + 3;
    } while (lVar29 != 0x80001);
    lVar29 = 0;
LAB_016c19e4:
    pcVar37 = PTR_DAT_04bb2120;
    if ((int)lVar29 != 0) {
      pcVar37 = local_f28 + 1;
    }
    local_f60[1] = *pcVar37;
    if (uVar6 != 2) {
      (**(code **)(local_f30 + 0x18))(&local_f30);
      uVar23 = 0;
      do {
        if (local_f28[uVar23] == '\0') goto LAB_016c1aec;
        if (local_f28[uVar23 + 1] == '\0') {
          uVar23 = uVar23 + 1;
          goto LAB_016c1aec;
        }
        if (local_f28[uVar23 + 2] == '\0') {
          uVar23 = uVar23 + 2;
          goto LAB_016c1aec;
        }
        uVar23 = uVar23 + 3;
      } while (uVar23 != 0x80001);
      uVar23 = 0;
LAB_016c1aec:
      pcVar37 = PTR_DAT_04bb2120;
      if ((uVar23 & 0xfffffffe) != 0) {
        pcVar37 = local_f28 + 2;
      }
      local_f60[2] = *pcVar37;
      if (uVar6 != 3) {
        (**(code **)(local_f30 + 0x18))(&local_f30);
        uVar23 = 0;
        do {
          if (local_f28[uVar23] == '\0') goto LAB_016c1c04;
          if (local_f28[uVar23 + 1] == '\0') {
            uVar23 = uVar23 + 1;
            goto LAB_016c1c04;
          }
          if (local_f28[uVar23 + 2] == '\0') {
            uVar23 = uVar23 + 2;
            goto LAB_016c1c04;
          }
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
        uVar23 = 0;
LAB_016c1c04:
        pcVar37 = PTR_DAT_04bb2120;
        if (2 < (uVar23 & 0xffffffff)) {
          pcVar37 = local_f28 + 3;
        }
        local_f60[3] = *pcVar37;
        if (uVar6 != 4) {
          (**(code **)(local_f30 + 0x18))(&local_f30);
          uVar23 = 0;
          do {
            if (local_f28[uVar23] == '\0') goto LAB_016c2bb4;
            if (local_f28[uVar23 + 1] == '\0') {
              uVar23 = uVar23 + 1;
              goto LAB_016c2bb4;
            }
            if (local_f28[uVar23 + 2] == '\0') {
              uVar23 = uVar23 + 2;
              goto LAB_016c2bb4;
            }
            uVar23 = uVar23 + 3;
          } while (uVar23 != 0x80001);
          uVar23 = 0;
LAB_016c2bb4:
          pcVar37 = PTR_DAT_04bb2120;
          if ((uVar23 & 0xfffffffc) != 0) {
            pcVar37 = local_f28 + 4;
          }
          local_f60[4] = *pcVar37;
        }
      }
    }
  }
  puVar36 = PTR_DAT_04bb2020;
  if (4 < (int)uVar35) goto LAB_016c1cec;
  uVar23 = (ulong)uVar28;
LAB_016c1cd4:
  memset(local_f60 + uVar23,0,5 - uVar23);
  goto LAB_016c1cec;
  while (bVar11 = lVar29 != 0x7fffe, lVar29 = lVar29 + 3, bVar11) {
LAB_016c16dc:
    if (((pcVar37[lVar29] == '\0') || (pcVar37[lVar29 + 1] == '\0')) ||
       (pcVar37[lVar29 + 2] == '\0')) break;
  }
  *local_f60 = *pcVar37;
  if (1 < (int)uVar28) {
    (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
    lVar31 = *(long *)(param_1 + 0x60);
    lVar29 = 0;
    do {
      if (*(char *)(lVar31 + lVar29) == '\0') goto LAB_016c1960;
      if (*(char *)(lVar31 + lVar29 + 1) == '\0') {
        lVar29 = lVar29 + 1;
        goto LAB_016c1960;
      }
      if (*(char *)(lVar31 + lVar29 + 2) == '\0') {
        lVar29 = lVar29 + 2;
        goto LAB_016c1960;
      }
      lVar29 = lVar29 + 3;
    } while (lVar29 != 0x80001);
    lVar29 = 0;
LAB_016c1960:
    pcVar37 = PTR_DAT_04bb2120;
    if ((int)lVar29 != 0) {
      pcVar37 = (char *)(lVar31 + 1);
    }
    local_f60[1] = *pcVar37;
    if (uVar6 != 2) {
      (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
      lVar29 = *(long *)(param_1 + 0x60);
      uVar23 = 0;
      do {
        if (*(char *)(lVar29 + uVar23) == '\0') goto LAB_016c1a64;
        if (*(char *)(lVar29 + uVar23 + 1) == '\0') {
          uVar23 = uVar23 + 1;
          goto LAB_016c1a64;
        }
        if (*(char *)(lVar29 + uVar23 + 2) == '\0') {
          uVar23 = uVar23 + 2;
          goto LAB_016c1a64;
        }
        uVar23 = uVar23 + 3;
      } while (uVar23 != 0x80001);
      uVar23 = 0;
LAB_016c1a64:
      pcVar37 = PTR_DAT_04bb2120;
      if ((uVar23 & 0xfffffffe) != 0) {
        pcVar37 = (char *)(lVar29 + 2);
      }
      local_f60[2] = *pcVar37;
      if (uVar6 != 3) {
        (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
        lVar29 = *(long *)(param_1 + 0x60);
        uVar23 = 0;
        do {
          if (*(char *)(lVar29 + uVar23) == '\0') goto LAB_016c1b74;
          if (*(char *)(lVar29 + uVar23 + 1) == '\0') {
            uVar23 = uVar23 + 1;
            goto LAB_016c1b74;
          }
          if (*(char *)(lVar29 + uVar23 + 2) == '\0') {
            uVar23 = uVar23 + 2;
            goto LAB_016c1b74;
          }
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
        uVar23 = 0;
LAB_016c1b74:
        pcVar37 = PTR_DAT_04bb2120;
        if (2 < (uVar23 & 0xffffffff)) {
          pcVar37 = (char *)(lVar29 + 3);
        }
        local_f60[3] = *pcVar37;
        if (uVar6 != 4) {
          (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar21);
          lVar29 = *(long *)(param_1 + 0x60);
          uVar23 = 0;
          do {
            if (*(char *)(lVar29 + uVar23) == '\0') goto LAB_016c1c90;
            if (*(char *)(lVar29 + uVar23 + 1) == '\0') {
              uVar23 = uVar23 + 1;
              goto LAB_016c1c90;
            }
            if (*(char *)(lVar29 + uVar23 + 2) == '\0') {
              uVar23 = uVar23 + 2;
              goto LAB_016c1c90;
            }
            uVar23 = uVar23 + 3;
          } while (uVar23 != 0x80001);
          uVar23 = 0;
LAB_016c1c90:
          pcVar37 = PTR_DAT_04bb2120;
          if ((uVar23 & 0xfffffffc) != 0) {
            pcVar37 = (char *)(lVar29 + 4);
          }
          local_f60[4] = *pcVar37;
        }
      }
    }
  }
  puVar36 = PTR_DAT_04bb2020;
  if ((int)uVar35 < 5) {
LAB_016c1cd0:
    uVar23 = (ulong)uVar28;
    goto LAB_016c1cd4;
  }
LAB_016c1cec:
  if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0) != 0)) &&
     (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x6f0) + 0x18),
     puVar30 != (undefined8 *)0x0)) {
    (**(code **)*puVar30)();
  }
  if ((*(long *)(lVar26 + 0x28) != 0) &&
     (plVar21 = *(long **)(*(long *)(lVar26 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
    local_7c0 = *(undefined **)(lVar26 + 8);
    local_7b8 = *(char **)(lVar26 + 0x10);
    local_7b0 = 0x1594;
    (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
  }
  pvVar25 = (void *)(*(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8));
  memset(pvVar25,0,0x1594);
  *(undefined2 *)((long)pvVar25 + 2) = 0xffff;
  FUN_028f8bb0((long)pvVar25 + 4);
  *(undefined8 *)((long)pvVar25 + 0x1578) = 0;
  *(undefined4 *)((long)pvVar25 + 0x1560) = 0;
  *(undefined1 *)((long)pvVar25 + 0x1564) = 0;
  *(undefined8 *)((long)pvVar25 + 0x1568) = 0;
  *(undefined8 *)((long)pvVar25 + 0x1570) = 0;
  *(undefined1 *)((long)pvVar25 + 0x158a) = 0;
  *(undefined8 *)((long)pvVar25 + 0x157e) = 0;
  *(undefined4 *)((long)pvVar25 + 0x158c) = 0;
  *(undefined4 *)((long)pvVar25 + 0x1586) = 0x101;
  *(undefined1 *)((long)pvVar25 + 0x1590) = 0;
  uVar8 = *(undefined2 *)(param_1 + 0x10);
  lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x60);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar8 = 0xffff;
  }
  if (lVar29 == 0) {
    *(undefined2 *)
     (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x48) +
     *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x40)) = uVar8;
  }
  else {
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      uVar22 = 0;
LAB_016c1e00:
      plVar21 = *(long **)(lVar29 + 0x20);
      if (plVar21 != (long *)0x0) {
        local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x40);
        local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x48);
        local_7b0 = 2;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
      }
    }
    else {
      uVar22 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x60);
      uVar22 = uVar22 & 0xffffffff;
      if (lVar29 != 0) goto LAB_016c1e00;
    }
    *(undefined2 *)
     (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x48) +
     *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x40)) = uVar8;
    if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x60) != 0)) &&
       (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x60) + 0x18),
       puVar30 != (undefined8 *)0x0)) {
      (**(code **)*puVar30)();
    }
  }
  FUN_0252d11c(&local_f40);
  local_6c[0] = (byte)local_f40;
  if (7 < (byte)local_f40) {
    local_6c[0] = 0xff;
  }
  lVar29 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  lVar31 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x878);
  if (lVar31 == 0) {
    uVar22 = 0;
  }
  else {
    if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
      lVar31 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x878);
      uVar22 = uVar22 & 0xffffffff;
      if (lVar31 == 0) goto LAB_016c1f14;
    }
    plVar21 = *(long **)(lVar31 + 0x20);
    if (plVar21 != (long *)0x0) {
      local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x858);
      local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0x860);
      local_7b0 = 0x1c;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
    }
  }
LAB_016c1f14:
  puVar30 = (undefined8 *)
            (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x860) +
            *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x858));
  if ((*(long **)(lVar29 + 0x17f68) == (long *)0x0) ||
     (puVar24 = (undefined8 *)**(long **)(lVar29 + 0x17f68), puVar24 == (undefined8 *)0x0)) {
    puVar24 = (undefined8 *)(*(long *)(lVar29 + 0x17f50) + *(long *)(lVar29 + 0x17f48));
    uVar27 = *puVar24;
    uVar7 = puVar24[1];
    uVar32 = puVar24[2];
    *(undefined4 *)(puVar30 + 3) = *(undefined4 *)(puVar24 + 3);
    *puVar30 = uVar27;
    puVar30[1] = uVar7;
    puVar30[2] = uVar32;
  }
  else {
    uVar23 = (**(code **)*puVar24)();
    puVar24 = (undefined8 *)(*(long *)(lVar29 + 0x17f50) + *(long *)(lVar29 + 0x17f48));
    uVar27 = *puVar24;
    uVar7 = puVar24[1];
    uVar32 = puVar24[2];
    *(undefined4 *)(puVar30 + 3) = *(undefined4 *)(puVar24 + 3);
    puVar30[1] = uVar7;
    puVar30[2] = uVar32;
    *puVar30 = uVar27;
    if ((((uVar23 & 1) != 0) && (*(long *)(lVar29 + 0x17f68) != 0)) &&
       (puVar30 = *(undefined8 **)(*(long *)(lVar29 + 0x17f68) + 8), puVar30 != (undefined8 *)0x0))
    {
      (**(code **)*puVar30)();
    }
  }
  if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x878) != 0)) &&
     (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0x878) + 0x18),
     puVar30 != (undefined8 *)0x0)) {
    (**(code **)*puVar30)();
  }
  lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc30);
  if (lVar29 == 0) {
    *(undefined8 *)
     (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc18) +
     *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc10)) =
         *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  else {
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      uVar22 = 0;
LAB_016c202c:
      plVar21 = *(long **)(lVar29 + 0x20);
      if (plVar21 != (long *)0x0) {
        local_7c0 = *(undefined **)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc10);
        local_7b8 = *(char **)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc18);
        local_7b0 = 8;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_7c0);
      }
    }
    else {
      uVar22 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      lVar29 = *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc30);
      uVar22 = uVar22 & 0xffffffff;
      if (lVar29 != 0) goto LAB_016c202c;
    }
    *(undefined8 *)
     (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc18) +
     *(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc10)) =
         *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((((uVar22 & 1) != 0) && (*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc30) != 0)) &&
       (puVar30 = *(undefined8 **)(*(long *)(puVar34 + (ulong)uVar17 * 0xc40 + 0xc30) + 0x18),
       puVar30 != (undefined8 *)0x0)) {
      (**(code **)*puVar30)();
    }
  }
LAB_016c20a8:
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
     (puVar30 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 0x18), puVar30 != (undefined8 *)0x0)) {
    (**(code **)*puVar30)();
  }
LAB_016c20c8:
  FUN_0252d11c(&local_f40);
  local_f30 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_f28,0,0x754);
  uVar17 = nn::os::GetSystemTick();
  local_7d4 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar25 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar25,0,0x754);
  pvVar25 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
  lVar26 = (**(code **)(*(long *)(param_1 + 0x1d60) + 0x20))(param_1 + 0x1d60);
  for (lVar29 = 0;
      *(uint *)((long)&local_7c0 + lVar29) =
           *(uint *)(lVar26 + lVar29) | *(uint *)((long)pvVar25 + lVar29), lVar29 != 0x750;
      lVar29 = lVar29 + 8) {
    *(uint *)((long)&local_7c0 + lVar29 + 4) =
         *(uint *)(lVar26 + lVar29 + 4) | *(uint *)((long)pvVar25 + lVar29 + 4);
  }
  memcpy(pvVar25,&local_7c0,0x754);
  *(uint *)((long)pvVar25 + 0x750) = *(uint *)((long)pvVar25 + 0x750) & 0xffffff;
  pvVar25 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
  lVar26 = (**(code **)(*(long *)(param_1 + 0xe80) + 0x20))(param_1 + 0xe80);
  for (lVar29 = 0;
      *(uint *)((long)&local_7c0 + lVar29) =
           *(uint *)(lVar26 + lVar29) | *(uint *)((long)pvVar25 + lVar29), lVar29 != 0x750;
      lVar29 = lVar29 + 8) {
    *(uint *)((long)&local_7c0 + lVar29 + 4) =
         *(uint *)(lVar26 + lVar29 + 4) | *(uint *)((long)pvVar25 + lVar29 + 4);
  }
  memcpy(pvVar25,&local_7c0,0x754);
  *(uint *)((long)pvVar25 + 0x750) = *(uint *)((long)pvVar25 + 0x750) & 0xffffff;
  FUN_016c88ec(&local_f40,&local_f30);
  lVar29 = param_1 + 0x58;
  FUN_021d7e50(lVar29);
  lVar26 = FUN_016c91a4();
  if (lVar26 != 0) {
    iVar15 = FUN_016d1b60();
    if ((iVar15 == -1) || (iVar16 = FUN_021d7e50(lVar29), iVar15 != iVar16)) {
      if (*pbVar1 != 0) {
        if ((*(long **)(lVar26 + 0x28) == (long *)0x0) ||
           (puVar30 = (undefined8 *)**(long **)(lVar26 + 0x28), puVar30 == (undefined8 *)0x0)) {
          uVar17 = 1;
        }
        else {
          uVar17 = (**(code **)*puVar30)();
          uVar17 = uVar17 ^ 1;
        }
        bVar33 = *(byte *)(*(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8) + 0x1635);
        uVar28 = 4;
        if ((bVar33 < 5) && (uVar28 = (uint)bVar33, 3 < uVar28)) {
          uVar28 = 4;
        }
        local_f30 = (undefined *)CONCAT44(local_f30._4_4_,uVar28);
        if ((((uVar17 & 1) == 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
           (puVar30 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 8), puVar30 != (undefined8 *)0x0))
        {
          (**(code **)*puVar30)();
        }
        if ((int)local_f30 == 2) {
          lVar31 = *(long *)(lVar26 + 0x28);
          if (lVar31 == 0) {
            uVar19 = 0;
          }
          else {
            if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
              lVar31 = *(long *)(lVar26 + 0x28);
              uVar19 = uVar19 & 0xffffffff;
              if (lVar31 == 0) goto LAB_016c2418;
            }
            plVar21 = *(long **)(lVar31 + 0x20);
            if (plVar21 != (long *)0x0) {
              local_f30 = *(undefined **)(lVar26 + 8);
              local_f28 = *(char **)(lVar26 + 0x10);
              local_f20 = (undefined1 *)0x1638;
              (**(code **)(*plVar21 + 0x20))(plVar21,&local_f30);
            }
          }
LAB_016c2418:
          lVar31 = *(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8);
          uVar18 = 3;
          goto LAB_016c2424;
        }
      }
    }
    else {
      lVar31 = *(long *)(lVar26 + 0x28);
      if (lVar31 == 0) {
        uVar19 = 0;
      }
      else {
        if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
          uVar19 = 0;
        }
        else {
          uVar19 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
          lVar31 = *(long *)(lVar26 + 0x28);
          uVar19 = uVar19 & 0xffffffff;
          if (lVar31 == 0) goto LAB_016c23dc;
        }
        plVar21 = *(long **)(lVar31 + 0x20);
        if (plVar21 != (long *)0x0) {
          local_f30 = *(undefined **)(lVar26 + 8);
          local_f28 = *(char **)(lVar26 + 0x10);
          local_f20 = (undefined1 *)0x1638;
          (**(code **)(*plVar21 + 0x20))(plVar21,&local_f30);
        }
      }
LAB_016c23dc:
      lVar31 = *(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8);
      uVar18 = 2;
LAB_016c2424:
      local_f30 = (undefined *)CONCAT44(local_f30._4_4_,uVar18);
      *(char *)(lVar31 + 0x1635) = (char)uVar18;
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
         (puVar30 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 0x18), puVar30 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar30)();
      }
    }
  }
  uVar27 = FUN_021d7e50(lVar29);
  lVar26 = FUN_021c9770(uVar27,1);
  if ((lVar26 != 0) &&
     (*(undefined4 *)(lVar26 + 0x218) = 0x7fc00000, *(char *)(lVar26 + 0x228) != '\0')) {
    *(undefined1 *)(lVar26 + 0x228) = 0;
  }
  lVar26 = param_1 + 0x78;
  if (((**(char **)(param_1 + 0x80) != '\0') && (lVar31 = FUN_021c9770(0x10,1), lVar31 != 0)) &&
     (*(undefined4 *)(lVar31 + 0x218) = 0x7fc00000, *(char *)(lVar31 + 0x228) != '\0')) {
    *(undefined1 *)(lVar31 + 0x228) = 0;
  }
  FUN_0252d11c(&uStack_f41);
  lVar31 = 0;
  do {
    local_f28 = (&PTR_DAT_04a76c90)[lVar31 * 2];
    local_f30 = puVar36 + 0x10;
    (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(lVar29);
    (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(lVar29);
    pcVar37 = *(char **)(param_1 + 0x60);
    (**(code **)(local_f30 + 0x18))(&local_f30);
    if (pcVar37 == local_f28) {
LAB_016c25bc:
      local_f30 = puVar36 + 0x10;
      local_f28 = (&PTR_s_UnlockSanrioCollabo_04a76c98)[lVar31 * 2];
      FUN_0274bfe8(&uStack_f41,&local_f30,1);
      break;
    }
    uVar19 = 0;
    bVar11 = true;
    lVar3 = *(long *)(param_1 + 0x60) + 1;
    do {
      lVar4 = lVar3 + uVar19;
      cVar9 = *(char *)(lVar4 + -1);
      if (cVar9 != local_f28[uVar19]) break;
      if (cVar9 == '\0') {
        if (bVar11) goto LAB_016c25bc;
        break;
      }
      cVar9 = *(char *)(lVar3 + uVar19);
      if (cVar9 != local_f28[uVar19 + 1]) break;
      if (cVar9 == '\0') goto LAB_016c25bc;
      cVar9 = *(char *)(lVar4 + 1);
      if (cVar9 != local_f28[uVar19 + 2]) break;
      if (cVar9 == '\0') goto LAB_016c25bc;
      bVar11 = uVar19 < 0x7fffe;
      uVar19 = uVar19 + 3;
    } while (uVar19 != 0x80001);
    lVar31 = lVar31 + 1;
  } while (lVar31 != 10);
  if (**(char **)(param_1 + 0x80) != '\0') {
    lVar31 = 0;
    do {
      local_f28 = (&PTR_DAT_04a76c90)[lVar31 * 2];
      local_f30 = puVar36 + 0x10;
      (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(lVar26);
      (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(lVar26);
      pcVar37 = *(char **)(param_1 + 0x80);
      (**(code **)(local_f30 + 0x18))(&local_f30);
      if (pcVar37 == local_f28) {
LAB_016c26cc:
        local_f30 = puVar36 + 0x10;
        local_f28 = (&PTR_s_UnlockSanrioCollabo_04a76c98)[lVar31 * 2];
        FUN_0274bfe8(&uStack_f41,&local_f30,1);
        break;
      }
      uVar19 = 0;
      bVar11 = true;
      lVar3 = *(long *)(param_1 + 0x80) + 1;
      do {
        lVar4 = lVar3 + uVar19;
        cVar9 = *(char *)(lVar4 + -1);
        if (cVar9 != local_f28[uVar19]) break;
        if (cVar9 == '\0') {
          if (bVar11) goto LAB_016c26cc;
          break;
        }
        cVar9 = *(char *)(lVar3 + uVar19);
        if (cVar9 != local_f28[uVar19 + 1]) break;
        if (cVar9 == '\0') goto LAB_016c26cc;
        cVar9 = *(char *)(lVar4 + 1);
        if (cVar9 != local_f28[uVar19 + 2]) break;
        if (cVar9 == '\0') goto LAB_016c26cc;
        bVar11 = uVar19 < 0x7fffe;
        uVar19 = uVar19 + 3;
      } while (uVar19 != 0x80001);
      lVar31 = lVar31 + 1;
    } while (lVar31 != 10);
  }
  if (*pbVar1 == 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar10 = (uint5)((ulong)local_f30 >> 0x18);
      local_f30 = (undefined *)((ulong)uVar10 << 0x18);
      if (*(char *)(param_1 + 0x12) != '\0') {
        local_f30._0_3_ = CONCAT12(1,*(undefined2 *)(param_1 + 0x10));
        local_f30 = (undefined *)CONCAT53(uVar10,(undefined3)local_f30);
      }
      local_f0d = 0;
      plVar21 = (long *)(param_1 + 0x18);
      local_f18 = 8;
      local_f28 = PTR_DAT_04bb6a30 + 0x10;
      local_f20 = auStack_f14;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puVar34 = *(undefined1 **)(param_1 + 0x20);
      if (auStack_f14 != puVar34) {
        (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(plVar21);
        lVar29 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x20) + lVar29) == '\0') goto LAB_016c29c8;
          lVar26 = *(long *)(param_1 + 0x20) + lVar29;
          if (*(char *)(lVar26 + 1) == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_016c29c8;
          }
          if (*(char *)(lVar26 + 2) == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_016c29c8;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        lVar29 = 0;
LAB_016c29c8:
        iVar15 = (int)lVar29;
        if ((int)local_f18 <= (int)lVar29) {
          iVar15 = local_f18 - 1;
        }
        memcpy(auStack_f14,puVar34,(long)iVar15);
        auStack_f14[iVar15] = 0;
      }
      local_f08 = *(undefined4 *)(param_1 + 0x38);
      uStack_f04 = *(undefined4 *)(param_1 + 0x3c);
      local_f28 = PTR_DAT_04bb3768 + 0x10;
      local_f00 = *(undefined1 *)(param_1 + 0x40);
    }
    else {
      FUN_016ce250(&local_f30,1);
    }
    local_f40 = (undefined *)((ulong)local_f40 & 0xffffffff00000000);
    local_7b8 = "PE_HotelRoomCrd";
    if (!bVar12) {
      local_7b8 = "PE_HotelRoomRenew";
    }
    local_7c0 = puVar36 + 0x10;
    uVar19 = FUN_038d30c0(&local_f40,&local_f28,10);
    if ((uVar19 & 1) == 0) {
      uVar19 = 9999;
      local_f40 = (undefined *)CONCAT44(local_f40._4_4_,9999);
    }
    else {
      uVar19 = (ulong)local_f40 & 0xffffffff;
    }
    FUN_01b67fb0(&local_7c0,uVar19,*(ushort *)(param_1 + 0xc) + 1,
                 local_f30._2_1_ == '\0' || (short)local_f30 != 1,&uStack_f41);
    goto LAB_016c2a90;
  }
  if (*(int *)(param_1 + 0x98) == 0) goto LAB_016c2a90;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0252d11c(&local_7c0);
    local_f30 = puVar36 + 0x10;
    local_f28 = "IsHotelEditTutorial";
    iVar15 = FUN_02753180(&local_7c0,&local_f30);
    if (iVar15 != 0) goto LAB_016c2a90;
  }
  uVar19 = (ulong)local_f30 >> 0x20;
  local_f30 = (undefined *)((ulong)local_f30 & 0xffffffff00000000);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    local_f30 = (undefined *)CONCAT44((int)uVar19,4);
    goto LAB_016c2a90;
  }
  if (bVar13) {
    FUN_016d20b0();
    local_f30 = puVar36 + 0x10;
    local_f28 = "HotelVIPInvitePattern";
    FUN_0274bfe8(&uStack_f41,&local_f30,2);
    local_f28 = "TodayWanderingNpcInvitePattern";
    uVar27 = 2;
LAB_016c2924:
    local_f30 = puVar36 + 0x10;
    FUN_0274bfe8(&uStack_f41,&local_f30,uVar27);
  }
  else {
    local_7c0._0_4_ = (uint)local_7c0 & 0xffffff00;
    local_7c0 = (undefined *)CONCAT44(0xffffffff,(uint)local_7c0);
    FUN_016d0eb0(&local_7c0,lVar29,0);
    if (local_7c0._4_4_ != -1) {
      if ((char)local_7c0 != '\0') {
        local_f40 = (undefined *)CONCAT53(local_f40._3_5_,0x80023);
        FUN_020fd3a0(&local_f40,lVar29);
        FUN_016c98bc(&local_f40,(int)uVar27,0,0);
        if (**(char **)(param_1 + 0x80) != '\0') {
          local_f30 = (undefined *)CONCAT53(local_f30._3_5_,0x80023);
          FUN_020fd3a0(&local_f30,lVar26);
          FUN_016c98bc(&local_f30,0x10,0,0);
        }
        local_f28 = "HotelVIPInvitePattern";
        uVar27 = 1;
        goto LAB_016c2924;
      }
      FUN_016c976c(&local_7c0);
    }
  }
  iVar15 = FUN_021d5df0(lVar29);
  pcVar37 = "PE_HotelStayVIPRoomSNPC";
  if (iVar15 != 1) {
    pcVar37 = "PE_HotelStayVIPRoomNNPC";
  }
  local_f30 = puVar36 + 0x10;
  local_f28 = pcVar37;
  uVar19 = FUN_01b61690(&local_f40,local_6c,lVar29);
  bVar33 = local_6c[0];
  if ((uVar19 & 1) != 0) {
    uVar19 = (ulong)local_f40 & 0xffff;
    uVar27 = *(undefined8 *)PTR_DAT_04bb49a0;
    uVar18 = FUN_006bd550(pcVar37,0);
    local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,uVar18);
    uVar27 = FUN_01b5b4b0(uVar27,&local_7c0);
    FUN_01b60120(&local_f30,uVar19,bVar33,uVar27,&uStack_f41,0);
  }
LAB_016c2a90:
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  puVar36 = PTR_DAT_04bb37e0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  uVar18 = *(undefined4 *)puVar36;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar36 + 4);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar18;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar29 = 0;
    do {
      puVar30 = *(undefined8 **)(*(long *)(param_1 + 0xa8) + lVar29 * 8);
      if (*(char *)((long)puVar30 + 2) != '\0') {
        *(undefined1 *)((long)puVar30 + 2) = 0;
      }
      lVar29 = lVar29 + 1;
      *puVar30 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 **)(param_1 + 0xb0) = puVar30;
    } while (lVar29 < *(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  pvVar25 = (void *)(**(code **)(*(long *)(param_1 + 0x1d60) + 0x18))(param_1 + 0x1d60);
  memset(pvVar25,0,0x754);
  pvVar25 = (void *)(**(code **)(*(long *)(param_1 + 0xe80) + 0x18))(param_1 + 0xe80);
  memset(pvVar25,0,0x754);
  pvVar25 = (void *)(**(code **)(*(long *)(param_1 + 0x15f0) + 0x18))(param_1 + 0x15f0);
  memset(pvVar25,0,0x754);
  **(undefined1 **)(param_1 + 0x60) = 0;
  **(undefined1 **)(param_1 + 0x80) = 0;
  return;
}

