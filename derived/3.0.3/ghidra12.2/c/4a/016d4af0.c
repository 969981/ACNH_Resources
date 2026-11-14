
undefined8 FUN_016d4af0(undefined8 *param_1,char *param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char cVar17;
  long lVar18;
  int iVar19;
  undefined *local_88;
  char *pcStack_80;
  undefined8 local_78;
  char *pcStack_70;
  byte local_68 [4];
  byte local_64 [4];
  
  if ((*(int *)(param_2 + 4) == -1) || (lVar14 = *(long *)PTR_DAT_04bb46b0, lVar14 == 0)) {
    return 0;
  }
  puVar15 = *(undefined8 **)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
    lVar14 = (**(code **)(*(long *)*puVar15 + 0x38))();
    if (lVar14 == 0) {
      return 0;
    }
    lVar14 = lVar14 + 0x70;
  }
  else {
    if (puVar15 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar15[0x26] == (long *)0x0) {
      return 0;
    }
    lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
    if (lVar14 == 0) {
      return 0;
    }
  }
  *param_1 = *(undefined8 *)param_2;
  if (*(long **)(param_3 + 0x28) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined8 *)**(long **)(param_3 + 0x28);
    uVar8 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar15)();
    }
  }
  *(byte *)((long)param_1 + 9) = *(byte *)(*(long *)(param_3 + 0x10) + *(long *)(param_3 + 8)) & 1;
  plVar16 = *(long **)(param_3 + 0x28);
  if ((uVar8 & 1) == 0) {
LAB_016d4bf0:
    if (plVar16 == (long *)0x0) goto LAB_016d4c3c;
LAB_016d4bf4:
    if ((undefined8 *)*plVar16 == (undefined8 *)0x0) goto LAB_016d4c3c;
    uVar8 = (*(code *)**(undefined8 **)*plVar16)();
    *(byte *)((long)param_1 + 10) =
         *(byte *)(*(long *)(param_3 + 0x10) + *(long *)(param_3 + 8)) >> 1 & 1;
    if ((((uVar8 & 1) != 0) && (*(long *)(param_3 + 0x28) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(param_3 + 0x28) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
  }
  else {
    if (plVar16 != (long *)0x0) {
      if ((undefined8 *)plVar16[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar16[1])();
        plVar16 = *(long **)(param_3 + 0x28);
        goto LAB_016d4bf0;
      }
      goto LAB_016d4bf4;
    }
LAB_016d4c3c:
    *(byte *)((long)param_1 + 10) =
         *(byte *)(*(long *)(param_3 + 0x10) + *(long *)(param_3 + 8)) >> 1 & 1;
  }
  if ((*(long **)(param_3 + 0xc30) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(param_3 + 0xc30), puVar15 == (undefined8 *)0x0)) {
    param_1[0xb] = *(undefined8 *)(*(long *)(param_3 + 0xc18) + *(long *)(param_3 + 0xc10));
  }
  else {
    uVar8 = (**(code **)*puVar15)();
    param_1[0xb] = *(undefined8 *)(*(long *)(param_3 + 0xc18) + *(long *)(param_3 + 0xc10));
    if ((((uVar8 & 1) != 0) && (*(long *)(param_3 + 0xc30) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(param_3 + 0xc30) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
  }
  if (*param_2 == '\0') {
    if (*(int *)(param_2 + 4) == -1) goto LAB_016d4d6c;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "HotelUnlockNormalRoomNumber";
    iVar5 = FUN_0273ea30(&local_78);
    bVar4 = *(int *)(param_2 + 4) < iVar5;
LAB_016d4d70:
    *(bool *)(param_1 + 1) = bVar4;
  }
  else {
    iVar5 = FUN_0252d29c();
    if (*(int *)(param_2 + 4) == iVar5) {
      FUN_0252d11c(local_64);
      if (local_64[0] < 8) {
        local_68[0] = local_64[0];
        uVar8 = FUN_02669430(local_68);
        puVar3 = PTR_DAT_04bb2020;
        if ((uVar8 & 1) != 0) {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "HotelUnlockVipRoom";
          local_78 = puVar1;
          iVar5 = FUN_0273ea30(&local_78);
          if (iVar5 != 0) {
            pcStack_70 = "SeqHotelEditTutorialDone";
            local_78 = puVar1;
            uVar9 = FUN_0274bce0(local_64,&local_78);
            if ((int)uVar9 == 0) {
              local_88 = puVar3 + 0x10;
              pcStack_80 = "SeqHouseEditTutorialDone";
              iVar5 = FUN_02757a80(uVar9,&local_88);
              bVar4 = iVar5 != 0;
            }
            else {
              bVar4 = true;
            }
            goto LAB_016d4d70;
          }
        }
      }
LAB_016d4d6c:
      bVar4 = false;
      goto LAB_016d4d70;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  if ((*(long **)(param_3 + 0x878) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(param_3 + 0x878), puVar15 == (undefined8 *)0x0)) {
    uVar8 = 0;
LAB_016d4e00:
    iVar5 = *(int *)(*(long *)(param_3 + 0x860) + *(long *)(param_3 + 0x858));
  }
  else {
    uVar8 = (**(code **)*puVar15)();
    uVar8 = uVar8 & 0xffffffff;
    if ((*(long **)(param_3 + 0x878) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(param_3 + 0x878), puVar15 == (undefined8 *)0x0))
    goto LAB_016d4e00;
    uVar10 = (**(code **)*puVar15)();
    iVar5 = *(int *)(*(long *)(param_3 + 0x860) + *(long *)(param_3 + 0x858));
    if ((((uVar10 & 1) != 0) && (*(long *)(param_3 + 0x878) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(param_3 + 0x878) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
  }
  if (iVar5 != 0) {
    uVar6 = FUN_016d50fc(*(long *)(param_3 + 0x860) + *(long *)(param_3 + 0x858));
    *(undefined4 *)((long)param_1 + 0xc) = uVar6;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(param_3 + 0x878) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(param_3 + 0x878) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  iVar19 = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  local_78 = (undefined *)CONCAT17((char)((ulong)local_78 >> 0x38),0x1010000);
  do {
    lVar18 = lVar14 + 0x211c20 + (long)iVar19 * 0xcb0;
    if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar15 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar15)();
      uVar8 = uVar8 & 0xffffffff;
    }
    lVar11 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    bVar2 = *(byte *)(lVar11 + 0x1590);
    if ((bVar2 & 1) != 0) {
      uVar7 = *(uint *)(lVar11 + 0x158c);
      if ((bVar2 >> 1 & 1) == 0) {
        if (7 < uVar7) {
          uVar7 = 0xffffffff;
        }
        uVar13 = uVar7;
LAB_016d4efc:
        cVar17 = '\0';
        uVar7 = uVar13;
      }
      else {
        uVar13 = 0xffffffff;
        if (7 < uVar7) goto LAB_016d4efc;
        cVar17 = '\x01';
      }
      if (uVar7 == *(uint *)(param_2 + 4) && cVar17 == *param_2) {
        if ((*(long **)(lVar18 + 0xc68) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar18 + 0xc68), puVar15 == (undefined8 *)0x0)) {
          local_88 = *(undefined **)(*(long *)(lVar18 + 0xc50) + *(long *)(lVar18 + 0xc48));
        }
        else {
          uVar10 = (**(code **)*puVar15)();
          local_88 = *(undefined **)(*(long *)(lVar18 + 0xc50) + *(long *)(lVar18 + 0xc48));
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar18 + 0xc68) != 0)) &&
             (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0xc68) + 8),
             puVar15 != (undefined8 *)0x0)) {
            (**(code **)*puVar15)();
          }
        }
        if (*(int *)(param_1 + 2) != -1) {
          lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          if ((lVar12 < lVar11) ||
             (lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88), lVar12 == lVar11))
          goto LAB_016d4fc4;
        }
        *(int *)(param_1 + 2) = iVar5;
        local_78 = local_88;
      }
    }
LAB_016d4fc4:
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
    iVar5 = iVar5 + 1;
    iVar19 = iVar19 + 1;
  } while (iVar5 != 8);
  if ((*(long **)(param_3 + 0x6f0) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(param_3 + 0x6f0), puVar15 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar15)();
    uVar7 = uVar7 ^ 1;
  }
  FUN_02774cf0(*(long *)(param_3 + 0x6d8) + *(long *)(param_3 + 0x6d0),param_1 + 3);
  plVar16 = *(long **)(param_3 + 0x6f0);
  if ((uVar7 & 1) == 0) {
    if (plVar16 == (long *)0x0) goto LAB_016d50a0;
    if ((undefined8 *)plVar16[1] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar16[1])();
      plVar16 = *(long **)(param_3 + 0x6f0);
      goto LAB_016d504c;
    }
  }
  else {
LAB_016d504c:
    if (plVar16 == (long *)0x0) goto LAB_016d50a0;
  }
  if ((undefined8 *)*plVar16 != (undefined8 *)0x0) {
    uVar8 = (*(code *)**(undefined8 **)*plVar16)();
    FUN_02775100(*(long *)(param_3 + 0x6d8) + *(long *)(param_3 + 0x6d0),param_1 + 7);
    if ((uVar8 & 1) == 0) {
      return 1;
    }
    if (*(long *)(param_3 + 0x6f0) == 0) {
      return 1;
    }
    puVar15 = *(undefined8 **)(*(long *)(param_3 + 0x6f0) + 8);
    if (puVar15 == (undefined8 *)0x0) {
      return 1;
    }
    (**(code **)*puVar15)();
    return 1;
  }
LAB_016d50a0:
  FUN_02775100(*(long *)(param_3 + 0x6d8) + *(long *)(param_3 + 0x6d0),param_1 + 7);
  return 1;
}

