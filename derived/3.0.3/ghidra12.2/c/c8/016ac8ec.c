
void FUN_016ac8ec(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  if (*param_1 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar8 == 0) {
      return;
    }
    lVar8 = lVar8 + 0x70;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar11[0x26] == (long *)0x0) {
      return;
    }
    lVar8 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
    if (lVar8 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar8 + 0xe75f0);
  local_78 = (undefined *)0x700000000;
  uVar9 = FUN_016cff80(&local_78);
  if ((uVar9 & 1) == 0) {
    local_78 = (undefined *)0x600000000;
    uVar9 = FUN_016cff80(&local_78);
    if ((uVar9 & 1) == 0) {
      local_78 = (undefined *)0x500000000;
      uVar9 = FUN_016cff80(&local_78);
      if ((uVar9 & 1) == 0) {
        local_78 = (undefined *)0x400000000;
        uVar9 = FUN_016cff80(&local_78);
        if ((uVar9 & 1) == 0) {
          local_78 = (undefined *)0x300000000;
          uVar9 = FUN_016cff80(&local_78);
          if ((uVar9 & 1) == 0) {
            local_78 = (undefined *)0x200000000;
            uVar9 = FUN_016cff80(&local_78);
            if ((uVar9 & 1) == 0) {
              local_78 = (undefined *)0x100000000;
              uVar9 = FUN_016cff80(&local_78);
              if ((uVar9 & 1) == 0) {
                local_78 = (undefined *)0x0;
                uVar9 = FUN_016cff80(&local_78);
                if ((uVar9 & 1) == 0) {
                  iVar7 = -1;
                }
                else {
                  iVar7 = 1;
                }
              }
              else {
                iVar7 = 2;
              }
            }
            else {
              iVar7 = 3;
            }
          }
          else {
            iVar7 = 4;
          }
        }
        else {
          iVar7 = 5;
        }
      }
      else {
        iVar7 = 6;
      }
    }
    else {
      iVar7 = 7;
    }
  }
  else {
    iVar7 = 8;
  }
  if ((*(long **)(lVar8 + 0xe7610) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar8 + 0xe7610), puVar11 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar11)();
    uVar9 = uVar9 & 0xffffffff;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "HotelUnlockItemFromPoint";
  iVar5 = FUN_0273ec70(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78);
  plVar12 = *(long **)(lVar8 + 0xe7610);
  if ((uVar9 & 1) == 0) {
LAB_016acac8:
    if (plVar12 == (long *)0x0) goto LAB_016acae8;
LAB_016acacc:
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) goto LAB_016acae8;
    uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    if (plVar12 != (long *)0x0) {
      if ((undefined8 *)plVar12[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar12[1])();
        plVar12 = *(long **)(lVar8 + 0xe7610);
        goto LAB_016acac8;
      }
      goto LAB_016acacc;
    }
LAB_016acae8:
    uVar9 = 0;
  }
  local_78 = puVar4 + 0x10;
  local_70 = "UnlockHotelItemFromLevel";
  iVar6 = FUN_0273ec70(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78);
  plVar12 = *(long **)(lVar8 + 0xe7610);
  if ((((uVar9 & 1) != 0) && (plVar12 != (long *)0x0)) &&
     ((undefined8 *)plVar12[1] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)plVar12[1])();
    plVar12 = *(long **)(lVar8 + 0xe7610);
  }
  iVar3 = iVar6;
  if (iVar6 == 0 && 3 < iVar7) {
    iVar3 = 1;
  }
  iVar2 = 2;
  if (iVar6 != 1 || iVar7 < 8) {
    iVar2 = iVar3;
  }
  if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_78 = puVar4 + 0x10;
  local_70 = "HotelIsCompletedVipEditTutorialAnyone";
  iVar7 = FUN_0273ec70(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7610) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  iVar3 = 3;
  if ((iVar7 == 0 || iVar5 < 400) || iVar6 != 2) {
    iVar3 = iVar2;
  }
  if (iVar3 == iVar6) {
    return;
  }
  if ((*(long **)(lVar8 + 0xe7610) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar8 + 0xe7610), puVar11 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar11)();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_78 = puVar4 + 0x10;
  local_70 = "HotelShopUnlockItemFromOnlyMode";
  iVar7 = FUN_0273ec70(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78);
  if (iVar7 == 0) {
    if ((uVar9 & 1) == 0) goto LAB_016accd8;
    if (*(long *)(lVar8 + 0xe7610) != 0) {
      puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 8);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)();
      }
      goto LAB_016accd8;
    }
LAB_016acd04:
    uVar9 = 0;
  }
  else {
    if ((*(long **)(lVar8 + 0xe7610) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar8 + 0xe7610), puVar11 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar11)();
      uVar10 = uVar10 & 0xffffffff;
    }
    local_88 = puVar4 + 0x10;
    pcStack_80 = "HotelSideTripPlayerTodayAnyone";
    iVar7 = FUN_0273ec70(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_88);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0xe7610) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7610) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    if (iVar7 == 0) {
      return;
    }
LAB_016accd8:
    lVar13 = *(long *)(lVar8 + 0xe7610);
    if (lVar13 == 0) goto LAB_016acd04;
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
LAB_016acd10:
      plVar12 = *(long **)(lVar13 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_78 = (undefined *)*plVar1;
        local_70 = *(char **)(lVar8 + 0xe75f8);
        uStack_68 = 0x800;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
      }
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar8 + 0xe7610);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 != 0) goto LAB_016acd10;
    }
  }
  local_78 = puVar4 + 0x10;
  local_70 = "UnlockHotelItemFromLevel";
  FUN_0273f520(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78,iVar3);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7610) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  if (iVar3 == 3) {
    return;
  }
  lVar13 = *(long *)(lVar8 + 0xe7610);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar8 + 0xe7610);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 == 0) goto LAB_016acde4;
    }
    plVar12 = *(long **)(lVar13 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = (undefined *)*plVar1;
      local_70 = *(char **)(lVar8 + 0xe75f8);
      uStack_68 = 0x800;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
LAB_016acde4:
  local_78 = puVar4 + 0x10;
  local_70 = "HotelShopUnlockItemFromOnlyMode";
  FUN_0273f520(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78,1);
  lVar13 = *(long *)(lVar8 + 0xe7610);
  if ((uVar9 & 1) == 0) {
LAB_016ace24:
    if (lVar13 != 0) goto LAB_016ace28;
LAB_016ace4c:
    uVar9 = 0;
  }
  else {
    if (lVar13 == 0) goto LAB_016ace4c;
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      lVar13 = *(long *)(lVar8 + 0xe7610);
      goto LAB_016ace24;
    }
LAB_016ace28:
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar8 + 0xe7610);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 == 0) goto LAB_016ace84;
    }
    plVar12 = *(long **)(lVar13 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = (undefined *)*plVar1;
      local_70 = *(char **)(lVar8 + 0xe75f8);
      uStack_68 = 0x800;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
LAB_016ace84:
  local_78 = puVar4 + 0x10;
  local_70 = "HotelShopUnlockNewItemFromNeedLot";
  FUN_0273f520(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78,1);
  lVar13 = *(long *)(lVar8 + 0xe7610);
  if ((uVar9 & 1) == 0) {
LAB_016acecc:
    if (lVar13 == 0) {
LAB_016acef4:
      uVar9 = 0;
      goto LAB_016acf2c;
    }
  }
  else {
    if (lVar13 == 0) goto LAB_016acef4;
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      lVar13 = *(long *)(lVar8 + 0xe7610);
      goto LAB_016acecc;
    }
  }
  if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    lVar13 = *(long *)(lVar8 + 0xe7610);
    uVar9 = uVar9 & 0xffffffff;
    if (lVar13 == 0) goto LAB_016acf2c;
  }
  plVar12 = *(long **)(lVar13 + 0x20);
  if (plVar12 != (long *)0x0) {
    local_78 = (undefined *)*plVar1;
    local_70 = *(char **)(lVar8 + 0xe75f8);
    uStack_68 = 0x800;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
LAB_016acf2c:
  local_78 = puVar4 + 0x10;
  local_70 = "HotelSideTripPlayerTodayAnyone";
  FUN_0273f520(*(long *)(lVar8 + 0xe75f8) + *plVar1,&local_78,0);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7610) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xe7610) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  return;
}

