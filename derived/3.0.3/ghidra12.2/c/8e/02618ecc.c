
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02618ecc(ulong *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  char cVar13;
  byte bVar14;
  undefined *local_6c;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if (*param_1 == 0) {
    return;
  }
  iVar5 = FUN_0252d29c();
  puVar3 = PTR_DAT_04bb46b0;
  if (iVar5 == -1) {
    return;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar8 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,iVar5);
  if (lVar8 == 0) {
    return;
  }
  lVar11 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
  }
  plVar1 = (long *)(lVar11 + 0x2d290);
  if ((*(long **)(lVar11 + 0x2d2b0) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x2d2b0), puVar9 == (undefined8 *)0x0)) {
    uVar6 = (uint)*(ushort *)(*(long *)(lVar11 + 0x2d298) + *plVar1);
  }
  else {
    uVar10 = (**(code **)*puVar9)();
    uVar6 = (uint)*(ushort *)(*(long *)(lVar11 + 0x2d298) + *plVar1);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x2d2b0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x2d2b0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  if (DAT_055588d0 == 0) {
    local_60 = _DAT_05586008;
    uStack_5c = DAT_0558600c;
  }
  else if ((uVar6 < 0x800) &&
          ((*(byte *)(DAT_055588d0 + (ulong)(uVar6 >> 3) + 0xe99e0) >> (ulong)(uVar6 & 7) & 1) != 0)
          ) {
    FUN_02621f00(&local_60,DAT_055588d0,uVar6);
  }
  else {
    FUN_0262eb00(&local_60,DAT_055588d0,uVar6,DAT_055588d0 + 0xe98e0);
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 == 0) goto LAB_0261927c;
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0261927c;
  plVar12 = *(long **)(lVar11 + 0x2d2b0);
  if (*param_1 < 8) {
    if ((plVar12 != (long *)0x0) && ((undefined8 *)*plVar12 != (undefined8 *)0x0)) {
      uVar10 = (*(code *)**(undefined8 **)*plVar12)();
      cVar13 = *(char *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2);
      plVar12 = *(long **)(lVar11 + 0x2d2b0);
      if ((uVar10 & 1) == 0) goto LAB_026190ac;
      if (plVar12 != (long *)0x0) {
        if ((undefined8 *)plVar12[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar12[1])();
          plVar12 = *(long **)(lVar11 + 0x2d2b0);
        }
        goto LAB_026190ac;
      }
      bVar14 = cVar13 + (char)*param_1;
      if (bVar14 < 7) goto LAB_02619270;
      goto LAB_026191c8;
    }
    cVar13 = *(char *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2);
LAB_026190ac:
    bVar14 = cVar13 + (char)*param_1;
    if (6 < bVar14) goto LAB_026190c0;
    if (plVar12 == (long *)0x0) {
LAB_02619270:
      *(byte *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2) = bVar14;
      goto LAB_0261927c;
    }
    if ((undefined8 *)plVar12[2] == (undefined8 *)0x0) {
      uVar6 = 1;
LAB_02619174:
      plVar12 = (long *)plVar12[4];
      if (plVar12 != (long *)0x0) {
        local_58 = (undefined *)*plVar1;
        local_50 = *(char **)(lVar11 + 0x2d298);
        uStack_48 = 4;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
      }
    }
    else {
      uVar6 = (*(code *)**(undefined8 **)plVar12[2])();
      plVar12 = *(long **)(lVar11 + 0x2d2b0);
      uVar6 = uVar6 ^ 1;
      if (plVar12 != (long *)0x0) goto LAB_02619174;
    }
    *(byte *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2) = bVar14;
joined_r0x0261924c:
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0x2d2b0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x2d2b0) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
  }
  else {
LAB_026190c0:
    if (plVar12 == (long *)0x0) {
LAB_026191c8:
      *(undefined2 *)(*(long *)(lVar11 + 0x2d298) + *plVar1) = 0x4c7b;
LAB_026191d4:
      lVar8 = *(long *)(lVar11 + 0x2d2b0);
      if (lVar8 != 0) {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 1;
LAB_02619214:
          plVar12 = *(long **)(lVar8 + 0x20);
          if (plVar12 != (long *)0x0) {
            local_58 = (undefined *)*plVar1;
            local_50 = *(char **)(lVar11 + 0x2d298);
            uStack_48 = 4;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
          }
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar11 + 0x2d2b0);
          uVar6 = uVar6 ^ 1;
          if (lVar8 != 0) goto LAB_02619214;
        }
        *(undefined1 *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2) = 0;
        goto joined_r0x0261924c;
      }
    }
    else {
      if ((undefined8 *)plVar12[2] == (undefined8 *)0x0) {
        uVar10 = 0;
LAB_02619114:
        plVar12 = (long *)plVar12[4];
        if (plVar12 != (long *)0x0) {
          local_58 = (undefined *)*plVar1;
          local_50 = *(char **)(lVar11 + 0x2d298);
          uStack_48 = 4;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
        }
      }
      else {
        uVar10 = (*(code *)**(undefined8 **)plVar12[2])();
        plVar12 = *(long **)(lVar11 + 0x2d2b0);
        uVar10 = uVar10 & 0xffffffff;
        if (plVar12 != (long *)0x0) goto LAB_02619114;
      }
      *(undefined2 *)(*(long *)(lVar11 + 0x2d298) + *plVar1) = 0x4c7b;
      if ((uVar10 & 1) == 0) goto LAB_026191d4;
      if (*(long *)(lVar11 + 0x2d2b0) != 0) {
        puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x2d2b0) + 0x18);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)();
        }
        goto LAB_026191d4;
      }
    }
    *(undefined1 *)(*(long *)(lVar11 + 0x2d298) + *plVar1 + 2) = 0;
  }
LAB_0261927c:
  local_64 = FUN_0252d29c();
  puVar4 = PTR_DAT_04bb2020;
  if (local_64 != -1) {
    if (0 < (long)*param_1) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_50 = "HighPriceTradeOrderBonusOccurCount";
      local_58 = puVar2;
      iVar5 = FUN_0274ce10(&local_64,&local_58);
      if (0 < iVar5) {
        uVar6 = iVar5 - (int)*param_1;
        local_50 = "HighPriceTradeOrderBonusOccurCount";
        local_58 = puVar2;
        FUN_0274d104(&local_64,&local_58,uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
      }
    }
    local_6c = (undefined *)0xfffe;
    FUN_0277d4ac(&local_6c);
    local_58 = puVar4 + 0x10;
    local_50 = "HighPriceTradeOrderBonusItemRecipeID";
    uVar10 = FUN_0274ce10(&local_64,&local_58);
    if (DAT_055588d0 == 0) {
      local_58 = (undefined *)CONCAT44(DAT_0558600c,_DAT_05586008);
    }
    else if ((((uint)uVar10 & 0xffff) < 0x800) &&
            ((*(byte *)(DAT_055588d0 + ((uVar10 & 0xffffffff) >> 3 & 0x1fff) + 0xe99e0) >>
              (ulong)((uint)uVar10 & 7) & 1) != 0)) {
      FUN_02621f00(&local_58);
    }
    else {
      FUN_0262eb00(&local_58,DAT_055588d0,uVar10 & 0xffffffff,DAT_055588d0 + 0xe98e0);
    }
    lVar8 = *(long *)puVar3;
    local_6c = local_58;
    uVar6 = FUN_0277d6c4(&local_6c);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        puVar3 = puVar4 + 0x10;
        local_50 = "HighPriceTradeOrderBonusItemLapsedDays";
        local_58 = puVar3;
        iVar5 = FUN_0274ce10(&local_64,&local_58);
        local_50 = "ReserveTradeBonusTicketNum";
        local_58 = puVar3;
        iVar7 = FUN_0274ce10(&local_64,&local_58);
        if ((*param_1 < 8) && ((iVar7 == 0 && ((long)(*param_1 + (long)iVar5) < 8)))) {
          local_50 = "TodayHighPriceTradeOrderBonusEvent";
          local_58 = puVar4 + 0x10;
          iVar5 = FUN_0274ce10(&local_64,&local_58);
          if (iVar5 == 0) {
            FUN_02618e6c(&local_64,(int)*param_1);
            return;
          }
          local_50 = "TodayHighPriceTradeOrderBonusEvent";
          local_58 = puVar4 + 0x10;
          FUN_0274d104(&local_64,&local_58,0);
        }
        local_50 = "HighPriceTradeOrderBonusItemRecipeID";
        local_58 = puVar3;
        FUN_0274d104(&local_64,&local_58,0x4c7b);
        local_50 = "HighPriceTradeOrderBonusItemLapsedDays";
        local_58 = puVar3;
        FUN_0274d104(&local_64,&local_58,0);
        local_50 = "HighPriceTradeOrderBonusTicketNum";
        local_58 = puVar3;
        FUN_0274d104(&local_64,&local_58,0);
      }
    }
  }
  return;
}

